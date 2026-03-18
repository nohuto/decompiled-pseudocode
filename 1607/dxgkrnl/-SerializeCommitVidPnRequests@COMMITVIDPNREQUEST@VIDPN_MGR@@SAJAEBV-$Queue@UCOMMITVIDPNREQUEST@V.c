/*
 * XREFs of ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01A2330
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C019F7F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001D6A4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C00328A0 (--1-$Queue@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0033A98 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C0033C60 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00342DC (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // r8
  __int64 v9; // rsi
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int8 v26; // dl
  unsigned __int8 *v27; // r8
  __int64 v28; // rcx
  unsigned __int8 v29; // di
  unsigned __int8 *v30; // rsi
  __int64 v31; // rbx
  _QWORD *v32; // rbx
  __int64 v33; // rax
  _QWORD v34[2]; // [rsp+20h] [rbp-40h] BYREF
  int v35; // [rsp+30h] [rbp-30h]
  _QWORD v36[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h]
  int v38; // [rsp+50h] [rbp-10h]
  __int64 v39; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v40)(_QWORD, __int64); // [rsp+88h] [rbp+28h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v35 = 0;
    v37 = 0LL;
    v7 = (_QWORD *)(a1 + 24);
    v39 = 0LL;
    v8 = v36;
    v34[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v34[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v36[1] = v36;
    v36[0] = v36;
    v38 = 2;
    if ( (_QWORD *)*v7 == v7 || (v9 = *v7 - 8LL) == 0 )
    {
LABEL_17:
      v17 = 1LL;
      if ( *(_QWORD *)(a1 + 40) > 1uLL )
        v17 = *(_QWORD *)(a1 + 40);
      v18 = 28 * (v17 - 1) + 8;
      if ( v8 != v36 )
      {
        v19 = v8 - 1;
        while ( v19 )
        {
          v18 += v19[5];
          v22 = (_QWORD *)v19[1];
          if ( v22 == v36 )
            v19 = 0LL;
          else
            v19 = v22 - 1;
        }
      }
      v23 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v18);
      v15 = v23;
      if ( v23 >= 0 )
      {
        v26 = 1;
        **(_BYTE **)(a2 + 32) = v37;
        v27 = *(unsigned __int8 **)(a2 + 32);
        v28 = *v27;
        if ( (unsigned __int8)v28 > 1u )
          v26 = *v27;
        v29 = 0;
        v30 = &v27[4 * v26 + 4];
        if ( (_QWORD *)v36[0] != v36 )
        {
          v31 = v36[0] - 8LL;
          if ( v36[0] != 8LL )
          {
            do
            {
              *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v29 + 4) = (_DWORD)v30 - *(_DWORD *)(a2 + 32);
              memmove(v30, *(const void **)(v31 + 32), *(_QWORD *)(v31 + 40));
              v30 += *(_QWORD *)(v31 + 40);
              v32 = *(_QWORD **)(v31 + 8);
              if ( v32 == v36 )
                v31 = 0LL;
              else
                v31 = (__int64)(v32 - 1);
              ++v29;
            }
            while ( v31 );
          }
        }
        if ( v29 != **(_BYTE **)(a2 + 32) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v33);
        }
        LODWORD(v15) = 0;
      }
      else
      {
        v25 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v25 + 24) = v15;
        WdLogEvent5_WdError(v25);
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x38uLL, 0x4E506456u, PagedPool);
        v12 = v10;
        if ( v10 )
        {
          v10[1] = 0LL;
          v10[2] = 0LL;
          v10[4] = 0LL;
          v10[5] = 0LL;
          *v10 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>::`vftable'{for `SetElement'};
          v10[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          *((_DWORD *)v10 + 12) = 3;
        }
        else
        {
          v12 = 0LL;
        }
        v40 = v12;
        if ( !v12 )
          break;
        v13 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v9, (__int64)v12);
        v15 = v13;
        if ( v13 < 0 )
        {
          v20 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v20 + 24) = v9;
          *(_QWORD *)(v20 + 32) = v15;
          WdLogEvent5_WdError(v20);
          goto LABEL_23;
        }
        v40 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v34, (__int64)v12);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v40);
        v16 = *(_QWORD *)(v9 + 8);
        if ( v16 == a1 + 24 )
          v9 = 0LL;
        else
          v9 = v16 - 8;
        if ( !v9 )
        {
          v8 = (_QWORD *)v36[0];
          goto LABEL_17;
        }
      }
      v21 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v21 + 24) = 56LL;
      *(_QWORD *)(v21 + 32) = v9;
      WdLogEvent5_WdLowResource(v21);
      LODWORD(v15) = -1073741801;
LABEL_23:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v40);
    }
    Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>(v34);
    return (unsigned int)v15;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
