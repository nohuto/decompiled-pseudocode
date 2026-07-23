/*
 * XREFs of IopLiveDumpMarkImportantDumpData @ 0x1403DB154
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403DABEC (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MmAddRangeToCrashDump @ 0x1401E7880 (MmAddRangeToCrashDump.c)
 *     ExAddPrivateDataToCrashDump @ 0x14022CA4C (ExAddPrivateDataToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x1403DEC90 (MmAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkImportantDumpData(
        __int64 (__fastcall *a1)(_QWORD, __int64, __int64),
        __int64 (__fastcall *a2)(_QWORD, __int64, __int64))
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 *i; // rdi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 (__fastcall *v11[7])(_QWORD, __int64, __int64); // [rsp+20h] [rbp-38h] BYREF

  memset(&v11[1], 0, 0x28uLL);
  v11[1] = 0LL;
  LODWORD(v11[5]) |= 1u;
  v11[2] = a1;
  v4 = 0;
  v11[0] = (__int64 (__fastcall *)(_QWORD, __int64, __int64))IoSetDumpRange;
  v11[4] = a2;
  v5 = ExAddPrivateDataToCrashDump(v11);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741789 )
      return 0LL;
    v4 = v5;
  }
  for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
  {
    v8 = MmAddRangeToCrashDump(v11, (unsigned __int64)(i - 94), 2000LL);
    if ( v8 < 0 )
    {
      if ( v8 == -1073741789 )
        return 0LL;
      v4 = v8;
    }
  }
  v9 = MmAddPrivateDataToCrashDump(v11, 16LL);
  if ( v9 < 0 )
  {
    if ( v9 == -1073741789 )
      return 0LL;
    v4 = v9;
  }
  v10 = MmAddPrivateDataToCrashDump(v11, 1LL);
  if ( v10 < 0 )
  {
    if ( v10 == -1073741789 )
      return 0LL;
    return (unsigned int)v10;
  }
  return v4;
}
