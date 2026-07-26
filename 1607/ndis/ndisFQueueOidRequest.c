/*
 * XREFs of ndisFQueueOidRequest @ 0x1C0045470
 * Callers:
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0048090 (ndisQueueRestoreRequestsOnTop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisFQueueOidRequest(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  unsigned int v3; // r9d
  _QWORD *v4; // rax
  _QWORD *i; // rcx
  _QWORD *v6; // rcx

  v2 = (_QWORD *)(a2 + 72);
  v3 = -1073741823;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 124LL) & 0x100) == 0 )
  {
    v4 = (_QWORD *)(a1 + 168);
    for ( i = *(_QWORD **)(a1 + 168); i != v4; i = (_QWORD *)*i )
    {
      if ( i == v2 )
        return v3;
    }
    v6 = (_QWORD *)v4[1];
    v3 = 0;
    if ( (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(a2 + 80) = v6;
    *v6 = v2;
    v4[1] = v2;
  }
  return v3;
}
