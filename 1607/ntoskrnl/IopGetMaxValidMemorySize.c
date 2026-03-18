/*
 * XREFs of IopGetMaxValidMemorySize @ 0x1401C74E4
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401C5868 (IoFillTriageDumpBuffer.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401C6F5C (IopAddRunTimeTriageDataBlocks.c)
 *     IopUpdateMinidumpContext @ 0x1401C7AD0 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckTriageThread @ 0x1401CC88C (IopAddBugcheckTriageThread.c)
 * Callees:
 *     MiIsAddressValid @ 0x140037540 (MiIsAddressValid.c)
 */

__int64 __fastcall IopGetMaxValidMemorySize(__int64 a1, unsigned int a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi

  v2 = 4096 - (a1 & 0xFFF);
  v3 = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !a2 )
    return a2;
  do
  {
    if ( !MiIsAddressValid(v4) )
      break;
    v3 += v2;
    v4 += 4096LL;
    if ( !v4 )
      break;
    v2 = 4096;
  }
  while ( v3 < a2 );
  if ( v3 >= a2 )
    return a2;
  return v3;
}
