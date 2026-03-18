/*
 * XREFs of ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C003386C
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01A1748 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000C948 (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEAAPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@XZ @ 0x1C00343A0 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEA.c)
 */

char __fastcall Queue<DMMVIDPN>::Enqueue(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax

  v2 = a1 + 3;
  if ( (_QWORD *)*v2 == v2 || (v4 = *v2 - 8LL) == 0 )
  {
LABEL_8:
    if ( DoublyLinkedList<DMMVIDPN>::InsertTail((__int64)(a1 + 1), a2) != 1 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = a1[7];
    if ( v8 )
    {
      if ( a1[5] > v8 )
      {
        v9 = DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::RemoveHead(a1 + 1);
        ReferenceCounted::Release((ReferenceCounted *)(v9 + 24));
      }
    }
    return 1;
  }
  else
  {
    while ( v4 != a2 )
    {
      v5 = *(_QWORD **)(v4 + 8);
      if ( v5 == a1 + 3 )
        v4 = 0LL;
      else
        v4 = (__int64)(v5 - 1);
      if ( !v4 )
        goto LABEL_8;
    }
    return 0;
  }
}
