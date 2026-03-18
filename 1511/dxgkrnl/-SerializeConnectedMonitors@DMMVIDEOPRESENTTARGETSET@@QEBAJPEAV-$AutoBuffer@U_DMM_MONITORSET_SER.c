/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0181544
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C0175F44 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0019540 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C002AE48 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002B9A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C002BFAC (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     MonitorSerializeMonitor @ 0x1C01870E0 (MonitorSerializeMonitor.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int8 v39; // dl
  _BYTE *v40; // r15
  unsigned __int8 v41; // di
  char *v42; // rsi
  __int64 v43; // rbx
  _QWORD *v44; // rbx
  __int64 v45; // rax
  _QWORD v46[2]; // [rsp+20h] [rbp-40h] BYREF
  int v47; // [rsp+30h] [rbp-30h]
  _QWORD v48[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-18h]
  int v50; // [rsp+50h] [rbp-10h]
  __int64 v51; // [rsp+58h] [rbp-8h]
  unsigned __int64 v52; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v53)(_QWORD, __int64); // [rsp+B0h] [rbp+50h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v47 = 0;
    v46[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v7 = (_QWORD *)(a1 + 24);
    v49 = 0LL;
    v46[1] = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
    v48[1] = v48;
    v8 = v48;
    v48[0] = v48;
    v50 = 2;
    v51 = 0LL;
    if ( (_QWORD *)*v7 != v7 )
    {
      v9 = *v7 - 8LL;
      if ( v9 )
      {
        do
        {
          if ( *(_QWORD *)(v9 + 96) )
          {
            v10 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
            v15 = (__int64)v10;
            if ( v10 )
            {
              v10[1] = 0LL;
              v10[2] = 0LL;
              *v10 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
              v10[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
              v10[4] = 0LL;
              v10[5] = 0LL;
              *((_DWORD *)v10 + 12) = 3;
            }
            else
            {
              v15 = 0LL;
            }
            v53 = (__int64 (__fastcall ***)(_QWORD, __int64))v15;
            if ( !v15 )
            {
              v35 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
              *(_QWORD *)(v35 + 24) = 56LL;
              *(_QWORD *)(v35 + 32) = v9;
              WdLogEvent5_WdLowResource(v35);
              LODWORD(v20) = -1073741801;
              goto LABEL_37;
            }
            v16 = *(_QWORD *)(v9 + 96);
            if ( !v16 )
            {
              v17 = WdLogNewEntry5_WdAssertion(v12);
              WdLogEvent5_WdAssertion(v17);
            }
            v52 = 0LL;
            v18 = MonitorSerializeMonitor(v16, &v52, 0LL);
            v19 = 0x80000000LL;
            v20 = v18;
            if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741789 )
            {
LABEL_31:
              v30 = (_QWORD *)WdLogNewEntry5_WdError(v19);
              v30[3] = *(_QWORD *)(v9 + 96);
              v31 = *(unsigned int *)(v9 + 24);
              v30[4] = v31;
              v32 = *(_QWORD *)(a1 + 88);
              if ( !*(_QWORD *)(v32 + 8) )
              {
                v33 = WdLogNewEntry5_WdAssertion(v31);
                WdLogEvent5_WdAssertion(v33);
              }
              v30[5] = *(_QWORD *)(*(_QWORD *)(v32 + 8) + 16LL);
              v34 = (__int64)v30;
              v30[6] = v20;
LABEL_34:
              WdLogEvent5_WdError(v34);
LABEL_37:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v53);
              goto LABEL_53;
            }
            if ( v18 != -1073741789 )
            {
              v21 = WdLogNewEntry5_WdAssertion(0x80000000LL);
              WdLogEvent5_WdAssertion(v21);
            }
            v22 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v15, v52);
            v20 = v22;
            if ( v22 < 0 )
            {
              v34 = WdLogNewEntry5_WdError(v23);
              *(_QWORD *)(v34 + 24) = v20;
              goto LABEL_34;
            }
            v24 = MonitorSerializeMonitor(v16, &v52, *(_QWORD *)(v15 + 32));
            v20 = v24;
            if ( v24 < 0 )
              goto LABEL_31;
            v53 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v46, v15);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v53);
          }
          v25 = *(_QWORD *)(v9 + 8);
          if ( v25 == a1 + 24 )
            v9 = 0LL;
          else
            v9 = v25 - 8;
        }
        while ( v9 );
        v26 = v49;
        v8 = (_QWORD *)v48[0];
        if ( v49 > 1 )
          goto LABEL_27;
      }
    }
    v26 = 1LL;
LABEL_27:
    v27 = 4 * v26 + 4;
    if ( v8 != v48 )
    {
      v28 = v8 - 1;
      while ( v28 )
      {
        v27 += v28[5];
        v29 = (_QWORD *)v28[1];
        if ( v29 == v48 )
          v28 = 0LL;
        else
          v28 = v29 - 1;
      }
    }
    v36 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v27);
    v20 = v36;
    if ( v36 >= 0 )
    {
      v39 = 1;
      v40 = *(_BYTE **)(a2 + 32);
      v41 = 0;
      *v40 = v49;
      if ( (unsigned __int8)v49 > 1u )
        v39 = v49;
      v42 = (char *)(*(_QWORD *)(a2 + 32) + 8LL + 4LL * (v39 - 1));
      if ( (_QWORD *)v48[0] != v48 )
      {
        v43 = v48[0] - 8LL;
        if ( v48[0] != 8LL )
        {
          do
          {
            *(_DWORD *)&v40[4 * v41 + 4] = (_DWORD)v42 - (_DWORD)v40;
            memmove(v42, *(const void **)(v43 + 32), *(_QWORD *)(v43 + 40));
            v42 += *(_QWORD *)(v43 + 40);
            v44 = *(_QWORD **)(v43 + 8);
            if ( v44 == v48 )
              v43 = 0LL;
            else
              v43 = (__int64)(v44 - 1);
            ++v41;
          }
          while ( v43 );
        }
      }
      if ( v41 != **(_BYTE **)(a2 + 32) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v37);
        WdLogEvent5_WdAssertion(v45);
      }
      LODWORD(v20) = 0;
    }
    else
    {
      v38 = WdLogNewEntry5_WdError(v37);
      *(_QWORD *)(v38 + 24) = v20;
      WdLogEvent5_WdError(v38);
    }
LABEL_53:
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v46);
    return (unsigned int)v20;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
