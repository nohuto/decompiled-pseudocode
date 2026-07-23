/*
 * XREFs of MmGetDumpRange @ 0x1401E79D4
 * Callers:
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 * Callees:
 *     MiAddNonSecuredPagesToDump @ 0x1401E729C (MiAddNonSecuredPagesToDump.c)
 *     MiAddPhysicalPagesToCrashDump @ 0x1401E7350 (MiAddPhysicalPagesToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x1401E7880 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1401E7CFC (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveFreePoolMemoryFromDump @ 0x1401EC6A4 (MiRemoveFreePoolMemoryFromDump.c)
 */

char __fastcall MmGetDumpRange(__int64 a1, int a2, char a3)
{
  __int64 v3; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rbp
  signed __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned int i; // esi
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // ebp
  unsigned int *Buffer; // r11
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  __int64 v17; // rax
  int v18; // r10d
  unsigned int *v19; // r11
  unsigned int v20; // r14d
  __int64 j; // rax
  __int64 v22; // rcx
  char *v23; // rcx
  unsigned int SizeOfBitMap; // ecx
  __int64 v25; // rsi
  __int64 k; // rsi
  ULONG_PTR v27; // rsi

  v3 = 0LL;
  if ( a2 )
  {
    v9 = MmPhysicalMemoryBlock;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      v11 = v9[2 * i + 3];
      v12 = v9[2 * i + 2];
      if ( (MiFlags & 0x20000) != 0 )
        MiAddNonSecuredPagesToDump((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))a1, v12, v11);
      else
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))a1)(a1, v12, v11, 2LL);
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
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))a1)(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v6++ + 8) + 184LL) + 40LL) >> 12,
          1LL,
          2LL);
        --v7;
      }
      while ( v7 );
    }
    MmAddRangeToCrashDump(
      (__int64 (__fastcall **)(_QWORD, __int64, __int64))a1,
      0xFFFF800000000000uLL,
      0x800000000000LL);
    if ( (a3 & 1) != 0 && (KiBugCheckActive & 3) != 0 )
      MmAddRangeToCrashDump((__int64 (__fastcall **)(_QWORD, __int64, __int64))a1, 0LL, 0x7FFFFFFF0000LL);
    v8 = __readcr3();
    (*(void (__fastcall **)(__int64, signed __int64, __int64, __int64))a1)(a1, v8 / 4096, 1LL, 2LL);
    if ( (a3 & 2) != 0 )
    {
      MiAddPhysicalPagesToCrashDump((void (__fastcall **)(_QWORD, __int64, __int64))a1);
      MmRemoveSystemCacheFromDump(a1);
    }
    MiRemoveFreePoolMemoryFromDump(a1);
  }
  v13 = 0;
  while ( 2 )
  {
    Buffer = qword_140327018->Buffer;
    v15 = v13 < qword_140327018->SizeOfBitMap ? v13 : 0;
    v16 = qword_140327018->SizeOfBitMap - 1;
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      v17 = 1LL;
      v18 = 32;
    }
    else
    {
      v17 = 0LL;
      v18 = 0;
    }
    v19 = &Buffer[-v17];
    while ( 1 )
    {
      v20 = v18 + v16;
      LOBYTE(j) = v16 - v15 + 1;
      if ( v16 - v15 == -1 )
        goto LABEL_22;
      v23 = (char *)&v19[2 * ((unsigned __int64)(v18 + v15) >> 6)];
      for ( j = ((1LL << ((v18 + v15) & 0x3F)) - 1) | ~*(_QWORD *)v23; j == -1; j = ~*(_QWORD *)v23 )
      {
        v23 += 8;
        if ( v23 > (char *)&v19[2 * ((unsigned __int64)v20 >> 6)] )
          goto LABEL_22;
      }
      _BitScanForward64((unsigned __int64 *)&j, ~j);
      v22 = (unsigned int)j + ((unsigned int)((v23 - (char *)v19) >> 3) << 6);
      if ( (unsigned int)v22 > v20 )
      {
LABEL_22:
        v22 = 0xFFFFFFFFLL;
        goto LABEL_29;
      }
      if ( (_DWORD)v22 != -1 )
        break;
LABEL_29:
      if ( !v15 )
        goto LABEL_34;
      SizeOfBitMap = v13 + 1;
      v15 = 0;
      if ( v13 + 1 > qword_140327018->SizeOfBitMap )
        SizeOfBitMap = qword_140327018->SizeOfBitMap;
      v16 = SizeOfBitMap - 1;
    }
    v22 = (unsigned int)(v22 - v18);
LABEL_34:
    if ( (unsigned int)v22 >= v13 && (_DWORD)v22 != -1 )
    {
      v13 = v22 + 1;
      v25 = *(_QWORD *)(qword_140327038 + 8 * v22);
      if ( (*(_DWORD *)(v25 + 4) & 4) != 0 )
      {
        for ( k = *(_QWORD *)(v25 + 3664); k != 0xFFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x58000000000LL) & 0xFFFFFFFFFLL )
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 8))(a1, k, 1LL, 2LL);
      }
      continue;
    }
    break;
  }
  if ( byte_140327184 == 1 )
  {
    LOBYTE(j) = 0;
    if ( 48 * BugCheckParameter3 - 0x58000000000LL >= 0xFFFFFA8000000000uLL )
    {
      v27 = 48 * BugCheckParameter3 / 0x30 + 1;
      do
      {
        LOBYTE(j) = *(_BYTE *)(v3 - 0x57FFFFFFFDDLL);
        if ( (j & 0x40) != 0 )
          LOBYTE(j) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 8))(a1, v3 / 48, 1LL, 2LL);
        v3 += 48LL;
        --v27;
      }
      while ( v27 );
    }
  }
  return j;
}
