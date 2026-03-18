/*
 * XREFs of ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F0AB4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopFirstPendingDelegateCapture(struct tagTHREADINPUTPOINTERLIST *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  if ( *(struct tagTHREADINPUTPOINTERLIST **)a1 == a1 )
    return 0LL;
  v1 = *((_QWORD *)a1 + 1);
  if ( (struct tagTHREADINPUTPOINTERLIST *)v1 == a1 )
    return 0LL;
  do
  {
    v2 = v1;
    if ( (*(_DWORD *)(v1 + 48) & 4) != 0 )
      break;
    v1 = *(_QWORD *)(v1 + 8);
  }
  while ( (struct tagTHREADINPUTPOINTERLIST *)v1 != a1 );
  if ( (struct tagTHREADINPUTPOINTERLIST *)v1 == a1 )
    return 0LL;
  *(_DWORD *)(v2 + 48) &= ~4u;
  return *(_QWORD *)(v2 + 24);
}
