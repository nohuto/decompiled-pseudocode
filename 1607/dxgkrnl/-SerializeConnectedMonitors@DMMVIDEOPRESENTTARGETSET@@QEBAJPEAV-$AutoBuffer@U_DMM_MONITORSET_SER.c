/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01AA90C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C019F7F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001D6A4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0033A98 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00342DC (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0034CEC (--1-$Queue@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     MonitorSerializeMonitor @ 0x1C01B0A78 (MonitorSerializeMonitor.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int8 v36; // dl
  _BYTE *v37; // r15
  unsigned __int8 v38; // di
  char *v39; // rsi
  __int64 v40; // rbx
  _QWORD *v41; // rbx
  __int64 v42; // rax
  _QWORD v43[2]; // [rsp+20h] [rbp-40h] BYREF
  int v44; // [rsp+30h] [rbp-30h]
  _QWORD v45[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-18h]
  int v47; // [rsp+50h] [rbp-10h]
  __int64 v48; // [rsp+58h] [rbp-8h]
  unsigned __int64 v49; // [rsp+A8h] [rbp+48h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, __int64); // [rsp+B0h] [rbp+50h] BYREF

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v44 = 0;
    v43[0] = &Queue<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::`vftable';
    v7 = (_QWORD *)(a1 + 24);
    v46 = 0LL;
    v43[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::`vftable';
    v45[1] = v45;
    v8 = v45;
    v45[0] = v45;
    v47 = 2;
    v48 = 0LL;
    if ( (_QWORD *)*v7 != v7 )
    {
      v9 = *v7 - 8LL;
      if ( v9 )
      {
        do
        {
          if ( *(_QWORD *)(v9 + 96) )
          {
            v10 = operator new(0x38uLL, 0x4E506456u, PagedPool);
            v12 = (__int64)v10;
            if ( v10 )
            {
              v10[1] = 0LL;
              v10[2] = 0LL;
              *v10 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
              v10[3] = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
              v10[4] = 0LL;
              v10[5] = 0LL;
              *((_DWORD *)v10 + 12) = 3;
            }
            else
            {
              v12 = 0LL;
            }
            v50 = (__int64 (__fastcall ***)(_QWORD, __int64))v12;
            if ( !v12 )
            {
              v32 = WdLogNewEntry5_WdLowResource(v11);
              *(_QWORD *)(v32 + 24) = 56LL;
              *(_QWORD *)(v32 + 32) = v9;
              WdLogEvent5_WdLowResource(v32);
              LODWORD(v17) = -1073741801;
              goto LABEL_37;
            }
            v13 = *(_QWORD *)(v9 + 96);
            if ( !v13 )
            {
              v14 = WdLogNewEntry5_WdAssertion(v11);
              WdLogEvent5_WdAssertion(v14);
            }
            v49 = 0LL;
            v15 = MonitorSerializeMonitor(v13, &v49, 0LL);
            v16 = 0x80000000LL;
            v17 = v15;
            if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741789 )
            {
LABEL_31:
              v27 = (_QWORD *)WdLogNewEntry5_WdError(v16);
              v27[3] = *(_QWORD *)(v9 + 96);
              v28 = *(unsigned int *)(v9 + 24);
              v27[4] = v28;
              v29 = *(_QWORD *)(a1 + 88);
              if ( !*(_QWORD *)(v29 + 8) )
              {
                v30 = WdLogNewEntry5_WdAssertion(v28);
                WdLogEvent5_WdAssertion(v30);
              }
              v27[5] = *(_QWORD *)(*(_QWORD *)(v29 + 8) + 16LL);
              v31 = (__int64)v27;
              v27[6] = v17;
LABEL_34:
              WdLogEvent5_WdError(v31);
LABEL_37:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v50);
              goto LABEL_53;
            }
            if ( v15 != -1073741789 )
            {
              v18 = WdLogNewEntry5_WdAssertion(0x80000000LL);
              WdLogEvent5_WdAssertion(v18);
            }
            v19 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v12, v49);
            v17 = v19;
            if ( v19 < 0 )
            {
              v31 = WdLogNewEntry5_WdError(v20);
              *(_QWORD *)(v31 + 24) = v17;
              goto LABEL_34;
            }
            v21 = MonitorSerializeMonitor(v13, &v49, *(_QWORD *)(v12 + 32));
            v17 = v21;
            if ( v21 < 0 )
              goto LABEL_31;
            v50 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v43, v12);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v50);
          }
          v22 = *(_QWORD *)(v9 + 8);
          if ( v22 == a1 + 24 )
            v9 = 0LL;
          else
            v9 = v22 - 8;
        }
        while ( v9 );
        v23 = v46;
        v8 = (_QWORD *)v45[0];
        if ( v46 > 1 )
          goto LABEL_27;
      }
    }
    v23 = 1LL;
LABEL_27:
    v24 = 4 * v23 + 4;
    if ( v8 != v45 )
    {
      v25 = v8 - 1;
      while ( v25 )
      {
        v24 += v25[5];
        v26 = (_QWORD *)v25[1];
        if ( v26 == v45 )
          v25 = 0LL;
        else
          v25 = v26 - 1;
      }
    }
    v33 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v24);
    v17 = v33;
    if ( v33 >= 0 )
    {
      v36 = 1;
      v37 = *(_BYTE **)(a2 + 32);
      v38 = 0;
      *v37 = v46;
      if ( (unsigned __int8)v46 > 1u )
        v36 = v46;
      v39 = (char *)(*(_QWORD *)(a2 + 32) + 8LL + 4LL * (v36 - 1));
      if ( (_QWORD *)v45[0] != v45 )
      {
        v40 = v45[0] - 8LL;
        if ( v45[0] != 8LL )
        {
          do
          {
            *(_DWORD *)&v37[4 * v38 + 4] = (_DWORD)v39 - (_DWORD)v37;
            memmove(v39, *(const void **)(v40 + 32), *(_QWORD *)(v40 + 40));
            v39 += *(_QWORD *)(v40 + 40);
            v41 = *(_QWORD **)(v40 + 8);
            if ( v41 == v45 )
              v40 = 0LL;
            else
              v40 = (__int64)(v41 - 1);
            ++v38;
          }
          while ( v40 );
        }
      }
      if ( v38 != **(_BYTE **)(a2 + 32) )
      {
        v42 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v42);
      }
      LODWORD(v17) = 0;
    }
    else
    {
      v35 = WdLogNewEntry5_WdError(v34);
      *(_QWORD *)(v35 + 24) = v17;
      WdLogEvent5_WdError(v35);
    }
LABEL_53:
    Queue<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>(v43);
    return (unsigned int)v17;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
