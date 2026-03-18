/*
 * XREFs of IopGetMaxValidMemorySize @ 0x1401B96FC
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401B7B00 (IoFillTriageDumpBuffer.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401B9170 (IopAddRunTimeTriageDataBlocks.c)
 *     IopUpdateMinidumpContext @ 0x1401B9CA4 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckTriageThread @ 0x1401BE314 (IopAddBugcheckTriageThread.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 */

__int64 __fastcall IopGetMaxValidMemorySize(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r10
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  __int64 v5; // r10
  int v6; // r11d

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = a2;
  if ( !a2 )
    return v3;
  do
  {
    if ( !MiIsAddressValid(v2) )
      break;
    v4 += v6;
    v2 = v5 + 4096;
    if ( !v2 )
      break;
  }
  while ( v4 < v3 );
  if ( v4 >= v3 )
    return v3;
  return v4;
}
