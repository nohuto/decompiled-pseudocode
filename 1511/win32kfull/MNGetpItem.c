/*
 * XREFs of MNGetpItem @ 0x1C02164F0
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     xxxMNSetGapState @ 0x1C023B8E4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023BD30 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNGetpItem(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( a2 != -1 && a2 < *(_DWORD *)(v3 + 52) )
      return *(_QWORD *)(v3 + 80) + 152LL * a2;
  }
  return result;
}
