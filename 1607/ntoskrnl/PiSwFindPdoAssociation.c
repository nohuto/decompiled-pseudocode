/*
 * XREFs of PiSwFindPdoAssociation @ 0x1403F0518
 * Callers:
 *     PiSwGetChildPdo @ 0x1403F03EC (PiSwGetChildPdo.c)
 *     PiSwRemovePdoAssociation @ 0x140483CA0 (PiSwRemovePdoAssociation.c)
 *     PiSwProcessParentRemoveIrp @ 0x140484AEC (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PiSwFindPdoAssociation(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *result; // rax
  __int64 v5; // rcx

  v3 = (_QWORD *)(a1 + 128);
  for ( result = *(_QWORD **)(a1 + 128); result != v3; result = (_QWORD *)*result )
  {
    if ( a3 )
      v5 = result[2];
    else
      v5 = result[3];
    if ( v5 == a2 )
      return result;
  }
  return 0LL;
}
