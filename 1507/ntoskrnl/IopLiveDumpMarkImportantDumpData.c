/*
 * XREFs of IopLiveDumpMarkImportantDumpData @ 0x1403FF52C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403FEF9C (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     MmAddRangeToCrashDump @ 0x140218688 (MmAddRangeToCrashDump.c)
 *     ExAddPrivateDataToCrashDump @ 0x140262078 (ExAddPrivateDataToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x14040308C (MmAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkImportantDumpData(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 *i; // rdi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(&v11[1], 0, 0x20uLL);
  v11[1] = 0LL;
  LODWORD(v11[4]) |= 1u;
  v11[2] = a1;
  v4 = 0;
  v11[0] = IoSetDumpRange;
  v11[3] = a2;
  v5 = ExAddPrivateDataToCrashDump((unsigned __int64)v11);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741789 )
      return 0LL;
    v4 = v5;
  }
  for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
  {
    v8 = MmAddRangeToCrashDump((unsigned __int64)v11, (unsigned __int64)(i - 94), 1968LL);
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
