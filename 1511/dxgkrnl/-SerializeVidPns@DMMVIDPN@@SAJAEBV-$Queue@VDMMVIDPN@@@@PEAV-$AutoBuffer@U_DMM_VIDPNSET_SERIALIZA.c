/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0180638
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
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01802D0 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (__fastcall ***v15)(_QWORD, __int64); // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int8 v29; // dl
  unsigned __int8 *v30; // r8
  __int64 v31; // rcx
  unsigned __int8 v32; // di
  unsigned __int8 *v33; // rsi
  __int64 v34; // rbx
  _QWORD *v35; // rbx
  __int64 v36; // rax
  _QWORD v37[2]; // [rsp+20h] [rbp-40h] BYREF
  int v38; // [rsp+30h] [rbp-30h]
  _QWORD v39[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-18h]
  int v41; // [rsp+50h] [rbp-10h]
  __int64 v42; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v43)(_QWORD, __int64); // [rsp+88h] [rbp+28h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  v38 = 0;
  v40 = 0LL;
  v7 = (_QWORD *)(a1 + 24);
  v42 = 0LL;
  v37[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v37[1] = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  v39[1] = v39;
  v8 = v39;
  v39[0] = v39;
  v41 = 2;
  if ( (_QWORD *)*v7 == v7 )
    goto LABEL_17;
  v9 = *v7 - 8LL;
  if ( !v9 )
    goto LABEL_17;
  do
  {
    v10 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new[](0x38uLL, 0x4E506456u, PagedPool);
    v15 = v10;
    if ( v10 )
    {
      v10[1] = 0LL;
      v10[2] = 0LL;
      v10[4] = 0LL;
      v10[5] = 0LL;
      *v10 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
      v10[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      *((_DWORD *)v10 + 12) = 3;
    }
    else
    {
      v15 = 0LL;
    }
    v43 = v15;
    if ( !v15 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v25 + 24) = 56LL;
      *(_QWORD *)(v25 + 32) = v9;
      WdLogEvent5_WdLowResource(v25);
      LODWORD(v18) = -1073741801;
      goto LABEL_24;
    }
    v16 = DMMVIDPN::Serialize(v9, (__int64)v15);
    v18 = v16;
    if ( v16 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v24 + 24) = v9;
      *(_QWORD *)(v24 + 32) = v18;
      WdLogEvent5_WdError(v24);
LABEL_24:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v43);
      goto LABEL_40;
    }
    v43 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v37, (__int64)v15);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v43);
    v19 = *(_QWORD *)(v9 + 8);
    if ( v19 == a1 + 24 )
      v9 = 0LL;
    else
      v9 = v19 - 8;
  }
  while ( v9 );
  v20 = v40;
  v8 = (_QWORD *)v39[0];
  if ( v40 > 1 )
    goto LABEL_18;
LABEL_17:
  v20 = 1LL;
LABEL_18:
  v21 = 4 * v20 + 4;
  if ( v8 != v39 )
  {
    v22 = v8 - 1;
    while ( v22 )
    {
      v21 += v22[5];
      v23 = (_QWORD *)v22[1];
      if ( v23 == v39 )
        v22 = 0LL;
      else
        v22 = v23 - 1;
    }
  }
  v26 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v21);
  v18 = v26;
  if ( v26 >= 0 )
  {
    v29 = 1;
    **(_BYTE **)(a2 + 32) = v40;
    v30 = *(unsigned __int8 **)(a2 + 32);
    v31 = *v30;
    if ( (unsigned __int8)v31 > 1u )
      v29 = *v30;
    v32 = 0;
    v33 = &v30[4 * v29 + 4];
    if ( (_QWORD *)v39[0] != v39 )
    {
      v34 = v39[0] - 8LL;
      if ( v39[0] != 8LL )
      {
        do
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v32 + 4) = (_DWORD)v33 - *(_DWORD *)(a2 + 32);
          memmove(v33, *(const void **)(v34 + 32), *(_QWORD *)(v34 + 40));
          v33 += *(_QWORD *)(v34 + 40);
          v35 = *(_QWORD **)(v34 + 8);
          if ( v35 == v39 )
            v34 = 0LL;
          else
            v34 = (__int64)(v35 - 1);
          ++v32;
        }
        while ( v34 );
      }
    }
    if ( v32 != **(_BYTE **)(a2 + 32) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v36);
    }
    LODWORD(v18) = 0;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v28 + 24) = v18;
    WdLogEvent5_WdError(v28);
  }
LABEL_40:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v37);
  return (unsigned int)v18;
}
