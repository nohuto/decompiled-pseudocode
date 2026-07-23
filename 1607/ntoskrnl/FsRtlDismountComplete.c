/*
 * XREFs of FsRtlDismountComplete @ 0x14052A9BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FsRtlDismountComplete(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  if ( a2 >= 0 )
  {
    result = 0xFFFFF780000002DCuLL;
    _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
  }
  return result;
}
