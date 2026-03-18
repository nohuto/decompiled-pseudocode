/*
 * XREFs of ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C002B78C
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0177D78 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000BAD4 (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEAAPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@XZ @ 0x1C002C29C (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEA.c)
 */

char __fastcall Queue<DMMVIDPN>::Enqueue(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax

  v3 = a1 + 3;
  if ( (_QWORD *)*v3 == v3 || (v5 = *v3 - 8LL) == 0 )
  {
LABEL_8:
    if ( DoublyLinkedList<DMMVIDPN>::InsertTail((__int64)(a1 + 1), a2, a3) != 1 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = a1[7];
    if ( v9 )
    {
      if ( a1[5] > v9 )
      {
        v10 = DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::RemoveHead(a1 + 1);
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 24));
      }
    }
    return 1;
  }
  else
  {
    while ( v5 != a2 )
    {
      v6 = *(_QWORD **)(v5 + 8);
      if ( v6 == a1 + 3 )
        v5 = 0LL;
      else
        v5 = (__int64)(v6 - 1);
      if ( !v5 )
        goto LABEL_8;
    }
    return 0;
  }
}
