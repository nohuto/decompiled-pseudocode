/*
 * XREFs of MmGetDumpRange @ 0x140218834
 * Callers:
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 * Callees:
 *     MiAddPhysicalPagesToCrashDump @ 0x140217FB0 (MiAddPhysicalPagesToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140218688 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140218A3C (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveFreePoolMemoryFromDump @ 0x140220648 (MiRemoveFreePoolMemoryFromDump.c)
 */

char __fastcall MmGetDumpRange(unsigned __int64 a1, int a2, char a3)
{
  __int64 v3; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rbp
  signed __int64 v8; // rax
  _QWORD *v9; // rax
  unsigned int i; // esi
  __int64 j; // rsi
  ULONG_PTR v12; // rcx
  unsigned __int64 v13; // rsi

  v3 = 0LL;
  if ( a2 )
  {
    v9 = MmPhysicalMemoryBlock;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, __int64))a1)(a1, v9[2 * i + 2], v9[2 * i + 3], 2LL);
      v9 = MmPhysicalMemoryBlock;
    }
  }
  else
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v6 = KiProcessorBlock;
      v7 = (unsigned int)KeNumberProcessors_0;
      do
      {
        (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))a1)(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v6++ + 8) + 184LL) + 40LL) >> 12,
          1LL,
          2LL);
        --v7;
      }
      while ( v7 );
    }
    MmAddRangeToCrashDump(a1, 0xFFFF800000000000uLL, 0x800000000000LL);
    if ( (a3 & 1) != 0 && (KiBugCheckActive & 3) != 0 )
      MmAddRangeToCrashDump(a1, 0LL, MmUserProbeAddress);
    v8 = __readcr3();
    (*(void (__fastcall **)(unsigned __int64, signed __int64, __int64, __int64))a1)(a1, v8 / 4096, 1LL, 2LL);
    if ( (a3 & 2) != 0 )
    {
      MiAddPhysicalPagesToCrashDump((void (__fastcall **)(_QWORD, __int64, __int64))a1);
      MmRemoveSystemCacheFromDump(a1);
    }
    LOBYTE(v9) = MiRemoveFreePoolMemoryFromDump(a1);
  }
  for ( j = qword_140354A50; j != 0xFFFFFFFFFLL; j = *(_QWORD *)(48 * j - 0x58000000000LL) & 0xFFFFFFFFFLL )
  {
    (*(void (__fastcall **)(unsigned __int64, __int64, __int64, __int64))(a1 + 8))(a1, j, 1LL, 2LL);
    LOBYTE(v9) = 6 * j;
  }
  if ( byte_14034F218 == 1 )
  {
    LOBYTE(v9) = 0;
    v12 = 48 * BugCheckParameter3 - 0x58000000000LL;
    if ( v12 >= 0xFFFFFA8000000000uLL )
    {
      v13 = (v12 + 0x58000000030LL) / 0x30;
      do
      {
        LOBYTE(v9) = *(_BYTE *)(v3 - 0x57FFFFFFFDDLL);
        if ( ((unsigned __int8)v9 & 0x40) != 0 )
          LOBYTE(v9) = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, __int64))(a1 + 8))(
                         a1,
                         v3 / 48,
                         1LL,
                         2LL);
        v3 += 48LL;
        --v13;
      }
      while ( v13 );
    }
  }
  return (char)v9;
}
