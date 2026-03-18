/*
 * XREFs of ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C002C28C
 * Callers:
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0174308 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017A518 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017AEF0 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017C8F8 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C0007B0C (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEAAPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@XZ @ 0x1C002BD24 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEA.c)
 *     ?InsertTail@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x1C002C744 (-InsertTail@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAEQEAV-$Aut.c)
 */

char __fastcall Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(_QWORD *a1, __int64 a2)
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
  __int64 *v12; // rax

  v2 = a1 + 3;
  if ( (_QWORD *)*v2 == v2 || (v4 = *v2 - 8LL) == 0 )
  {
LABEL_8:
    if ( (unsigned __int8)DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::InsertTail(a1 + 1) != 1 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = a1[7];
    if ( v11 )
    {
      if ( a1[5] > v11 )
      {
        v12 = DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::RemoveHead((__int64)(a1 + 1));
        NonReferenceCounted::Release((NonReferenceCounted *)(v12 + 3));
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
