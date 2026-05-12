/*
 * XREFs of StorRemoveEventQueueInternal @ 0x1C0026610
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000ED80 (RaUnitRemoveFromPendingList.c)
 * Callees:
 *     <none>
 */

char __fastcall StorRemoveEventQueueInternal(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  BOOL v4; // r9d
  _QWORD *v5; // rdx
  __int64 v6; // rcx

  LOBYTE(v2) = *((_BYTE *)a2 - 32);
  if ( (v2 & 2) != 0 )
  {
    *((_BYTE *)a2 - 32) = v2 & 0xFD;
    v3 = *a2;
    v2 = a2[1];
    v4 = *a1 == (_QWORD)a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || *(_QWORD **)v2 != a2 )
      __fastfail(3u);
    *(_QWORD *)v2 = v3;
    *(_QWORD *)(v3 + 8) = v2;
    if ( a1[2] )
    {
      v5 = a2 + 2;
      if ( (_QWORD *)a1[4] == v5 )
        a1[4] = *v5;
      v6 = *v5;
      v2 = v5[1];
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || *(_QWORD **)v2 != v5 )
        __fastfail(3u);
      *(_QWORD *)v2 = v6;
      *(_QWORD *)(v6 + 8) = v2;
    }
    else if ( v4 )
    {
      v2 = *a1;
      if ( (__int64 *)*a1 == a1 )
      {
        *((_DWORD *)a1 + 12) = -1;
      }
      else
      {
        LODWORD(v2) = *(_DWORD *)(v2 + 32);
        *((_DWORD *)a1 + 12) = v2;
      }
    }
  }
  return v2;
}
