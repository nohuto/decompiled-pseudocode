/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017AEF0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01716C4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0017A20 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C002B18C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C002C28C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     MonitorSerializeMonitor @ 0x1C0182A30 (MonitorSerializeMonitor.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  _BYTE *v49; // r15
  unsigned __int8 v50; // di
  __int64 v51; // r8
  char *v52; // rsi
  __int64 v53; // rbx
  _QWORD *v54; // rbx
  __int64 v55; // rax
  _QWORD v56[2]; // [rsp+20h] [rbp-40h] BYREF
  int v57; // [rsp+30h] [rbp-30h]
  _QWORD v58[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-18h]
  int v60; // [rsp+50h] [rbp-10h]
  __int64 v61; // [rsp+58h] [rbp-8h]
  unsigned __int64 v62; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v63)(_QWORD, __int64); // [rsp+B0h] [rbp+50h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v57 = 0;
    v56[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v9 = (_QWORD *)(a1 + 24);
    v59 = 0LL;
    v56[1] = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
    v58[1] = v58;
    v10 = v58;
    v58[0] = v58;
    v60 = 2;
    v61 = 0LL;
    if ( (_QWORD *)*v9 != v9 )
    {
      v11 = *v9 - 8LL;
      if ( v11 )
      {
        do
        {
          if ( *(_QWORD *)(v11 + 96) )
          {
            v12 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
            v17 = (__int64)v12;
            if ( v12 )
            {
              v12[1] = 0LL;
              v12[2] = 0LL;
              *v12 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
              v12[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
              v12[4] = 0LL;
              v12[5] = 0LL;
              *((_DWORD *)v12 + 12) = 3;
            }
            else
            {
              v17 = 0LL;
            }
            v63 = (__int64 (__fastcall ***)(_QWORD, __int64))v17;
            if ( !v17 )
            {
              v43 = WdLogNewEntry5_WdLowResource(v14);
              *(_QWORD *)(v43 + 24) = 56LL;
              *(_QWORD *)(v43 + 32) = v11;
              WdLogEvent5_WdLowResource(v43);
              LODWORD(v25) = -1073741801;
              goto LABEL_37;
            }
            v18 = *(_QWORD *)(v11 + 96);
            if ( !v18 )
            {
              v19 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
              WdLogEvent5_WdAssertion(v19);
            }
            v62 = 0LL;
            v20 = MonitorSerializeMonitor(v18, &v62, 0LL);
            v24 = 0x80000000LL;
            v25 = v20;
            if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741789 )
            {
LABEL_31:
              v36 = (_QWORD *)WdLogNewEntry5_WdError(v24);
              v36[3] = *(_QWORD *)(v11 + 96);
              v39 = *(unsigned int *)(v11 + 24);
              v36[4] = v39;
              v40 = *(_QWORD *)(a1 + 88);
              if ( !*(_QWORD *)(v40 + 8) )
              {
                v41 = WdLogNewEntry5_WdAssertion(v39, v35, v37, v38);
                WdLogEvent5_WdAssertion(v41);
              }
              v36[5] = *(_QWORD *)(*(_QWORD *)(v40 + 8) + 16LL);
              v42 = (__int64)v36;
              v36[6] = v25;
LABEL_34:
              WdLogEvent5_WdError(v42);
LABEL_37:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v63);
              goto LABEL_53;
            }
            if ( v20 != -1073741789 )
            {
              v26 = WdLogNewEntry5_WdAssertion(0x80000000LL, v21, v22, v23);
              WdLogEvent5_WdAssertion(v26);
            }
            v27 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v17, v62, v22, v23);
            v25 = v27;
            if ( v27 < 0 )
            {
              v42 = WdLogNewEntry5_WdError(v28);
              *(_QWORD *)(v42 + 24) = v25;
              goto LABEL_34;
            }
            v29 = MonitorSerializeMonitor(v18, &v62, *(_QWORD *)(v17 + 32));
            v25 = v29;
            if ( v29 < 0 )
              goto LABEL_31;
            v63 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v56, v17);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v63);
          }
          v30 = *(_QWORD *)(v11 + 8);
          if ( v30 == a1 + 24 )
            v11 = 0LL;
          else
            v11 = v30 - 8;
        }
        while ( v11 );
        v31 = v59;
        v10 = (_QWORD *)v58[0];
        if ( v59 > 1 )
          goto LABEL_27;
      }
    }
    v31 = 1LL;
LABEL_27:
    v32 = 4 * v31 + 4;
    if ( v10 != v58 )
    {
      v33 = v10 - 1;
      while ( v33 )
      {
        v32 += v33[5];
        v34 = (_QWORD *)v33[1];
        if ( v34 == v58 )
          v33 = 0LL;
        else
          v33 = v34 - 1;
      }
    }
    v44 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v32, a3, a4);
    v25 = v44;
    if ( v44 >= 0 )
    {
      v48 = 1LL;
      v49 = *(_BYTE **)(a2 + 32);
      v50 = 0;
      *v49 = v59;
      if ( (unsigned __int8)v59 > 1u )
        v48 = (unsigned __int8)v59;
      v51 = *(_QWORD *)(a2 + 32) + 8LL;
      v52 = (char *)(v51 + 4LL * ((unsigned __int8)v48 - 1));
      if ( (_QWORD *)v58[0] != v58 )
      {
        v53 = v58[0] - 8LL;
        if ( v58[0] != 8LL )
        {
          do
          {
            *(_DWORD *)&v49[4 * v50 + 4] = (_DWORD)v52 - (_DWORD)v49;
            memmove(v52, *(const void **)(v53 + 32), *(_QWORD *)(v53 + 40));
            v52 += *(_QWORD *)(v53 + 40);
            v54 = *(_QWORD **)(v53 + 8);
            if ( v54 == v58 )
              v53 = 0LL;
            else
              v53 = (__int64)(v54 - 1);
            ++v50;
          }
          while ( v53 );
        }
      }
      if ( v50 != **(_BYTE **)(a2 + 32) )
      {
        v55 = WdLogNewEntry5_WdAssertion(v45, v48, v51, v46);
        WdLogEvent5_WdAssertion(v55);
      }
      LODWORD(v25) = 0;
    }
    else
    {
      v47 = WdLogNewEntry5_WdError(v45);
      *(_QWORD *)(v47 + 24) = v25;
      WdLogEvent5_WdError(v47);
    }
LABEL_53:
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v56);
    return (unsigned int)v25;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
