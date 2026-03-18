/*
 * XREFs of ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0174308
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01716C4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0017A20 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C002B18C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C002BD68 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C002C28C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // r8
  __int64 v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall ***v16)(_QWORD, __int64); // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int8 *v32; // r8
  __int64 v33; // rcx
  unsigned __int8 v34; // di
  unsigned __int8 *v35; // rsi
  __int64 v36; // rbx
  _QWORD *v37; // rbx
  __int64 v38; // rax
  _QWORD v39[2]; // [rsp+20h] [rbp-40h] BYREF
  int v40; // [rsp+30h] [rbp-30h]
  _QWORD v41[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v42; // [rsp+48h] [rbp-18h]
  int v43; // [rsp+50h] [rbp-10h]
  __int64 v44; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v45)(_QWORD, __int64); // [rsp+88h] [rbp+28h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v40 = 0;
    v42 = 0LL;
    v9 = (_QWORD *)(a1 + 24);
    v44 = 0LL;
    v10 = v41;
    v39[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v39[1] = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
    v41[1] = v41;
    v41[0] = v41;
    v43 = 2;
    if ( (_QWORD *)*v9 == v9 || (v11 = *v9 - 8LL) == 0 )
    {
LABEL_17:
      v21 = 1LL;
      if ( *(_QWORD *)(a1 + 40) > 1uLL )
        v21 = *(_QWORD *)(a1 + 40);
      v22 = 28 * (v21 - 1) + 8;
      if ( v10 != v41 )
      {
        v23 = v10 - 1;
        while ( v23 )
        {
          v22 += v23[5];
          v26 = (_QWORD *)v23[1];
          if ( v26 == v41 )
            v23 = 0LL;
          else
            v23 = v26 - 1;
        }
      }
      v27 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v22, (__int64)v10, a4);
      v19 = v27;
      if ( v27 >= 0 )
      {
        v31 = 1LL;
        **(_BYTE **)(a2 + 32) = v42;
        v32 = *(unsigned __int8 **)(a2 + 32);
        v33 = *v32;
        if ( (unsigned __int8)v33 > 1u )
          v31 = *v32;
        v34 = 0;
        v35 = &v32[4 * (unsigned __int8)v31 + 4];
        if ( (_QWORD *)v41[0] != v41 )
        {
          v36 = v41[0] - 8LL;
          if ( v41[0] != 8LL )
          {
            do
            {
              *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v34 + 4) = (_DWORD)v35 - *(_DWORD *)(a2 + 32);
              memmove(v35, *(const void **)(v36 + 32), *(_QWORD *)(v36 + 40));
              v35 += *(_QWORD *)(v36 + 40);
              v37 = *(_QWORD **)(v36 + 8);
              if ( v37 == v41 )
                v36 = 0LL;
              else
                v36 = (__int64)(v37 - 1);
              ++v34;
            }
            while ( v36 );
          }
        }
        if ( v34 != **(_BYTE **)(a2 + 32) )
        {
          v38 = WdLogNewEntry5_WdAssertion(v33, v31, v32, v29);
          WdLogEvent5_WdAssertion(v38);
        }
        LODWORD(v19) = 0;
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v30 + 24) = v19;
        WdLogEvent5_WdError(v30);
      }
    }
    else
    {
      while ( 1 )
      {
        v12 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new[](0x38uLL, 0x4E506456u, PagedPool);
        v16 = v12;
        if ( v12 )
        {
          v12[1] = 0LL;
          v12[2] = 0LL;
          v12[4] = 0LL;
          v12[5] = 0LL;
          *v12 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
          v12[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          *((_DWORD *)v12 + 12) = 3;
        }
        else
        {
          v16 = 0LL;
        }
        v45 = v16;
        if ( !v16 )
          break;
        v17 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v11, (__int64)v16, v14, v15);
        v19 = v17;
        if ( v17 < 0 )
        {
          v24 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v24 + 24) = v11;
          *(_QWORD *)(v24 + 32) = v19;
          WdLogEvent5_WdError(v24);
          goto LABEL_23;
        }
        v45 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v39, (__int64)v16);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v45);
        v20 = *(_QWORD *)(v11 + 8);
        if ( v20 == a1 + 24 )
          v11 = 0LL;
        else
          v11 = v20 - 8;
        if ( !v11 )
        {
          v10 = (_QWORD *)v41[0];
          goto LABEL_17;
        }
      }
      v25 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v25 + 24) = 56LL;
      *(_QWORD *)(v25 + 32) = v11;
      WdLogEvent5_WdLowResource(v25);
      LODWORD(v19) = -1073741801;
LABEL_23:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v45);
    }
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v39);
    return (unsigned int)v19;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
