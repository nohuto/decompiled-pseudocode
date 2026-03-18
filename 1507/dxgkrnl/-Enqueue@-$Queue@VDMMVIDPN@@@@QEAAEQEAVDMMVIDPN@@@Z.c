/*
 * XREFs of ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C002B9DC
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C017375C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0009688 (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEAAPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@XZ @ 0x1C002BD24 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEA.c)
 */

char __fastcall Queue<DMMVIDPN>::Enqueue(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax

  v2 = a1 + 3;
  if ( (_QWORD *)*v2 == v2 || (v4 = *v2 - 8LL) == 0 )
  {
LABEL_8:
    if ( DoublyLinkedList<DMMVIDPN>::InsertTail((__int64)(a1 + 1), a2) != 1 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = a1[7];
    if ( v11 )
    {
      if ( a1[5] > v11 )
      {
        v12 = DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::RemoveHead(a1 + 1);
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 24));
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
