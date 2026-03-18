/*
 * XREFs of IopGetMaxValidMemorySize @ 0x1401F49E4
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401F2E8C (IoFillTriageDumpBuffer.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401F4458 (IopAddRunTimeTriageDataBlocks.c)
 *     IopUpdateMinidumpContext @ 0x1401F4F1C (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckTriageThread @ 0x1401F9B7C (IopAddBugcheckTriageThread.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
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
