/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01A99FC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C019F7F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001D6A4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0033A98 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00342DC (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C00343E4 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01A9694 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
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
  unsigned __int64 v37; // [rsp+48h] [rbp-18h]
  int v38; // [rsp+50h] [rbp-10h]
  __int64 v39; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v40)(_QWORD, __int64); // [rsp+88h] [rbp+28h] BYREF

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
  v35 = 0;
  v37 = 0LL;
  v7 = (_QWORD *)(a1 + 24);
  v39 = 0LL;
  v34[0] = &Queue<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::`vftable';
  v34[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::`vftable';
  v36[1] = v36;
  v8 = v36;
  v36[0] = v36;
  v38 = 2;
  if ( (_QWORD *)*v7 == v7 )
    goto LABEL_17;
  v9 = *v7 - 8LL;
  if ( !v9 )
    goto LABEL_17;
  do
  {
    v10 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x38uLL, 0x4E506456u, PagedPool);
    v12 = v10;
    if ( v10 )
    {
      v10[1] = 0LL;
      v10[2] = 0LL;
      v10[4] = 0LL;
      v10[5] = 0LL;
      *v10 = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>::`vftable'{for `SetElement'};
      v10[3] = (__int64 (__fastcall **)(_QWORD, __int64))&DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      *((_DWORD *)v10 + 12) = 3;
    }
    else
    {
      v12 = 0LL;
    }
    v40 = v12;
    if ( !v12 )
    {
      v22 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v22 + 24) = 56LL;
      *(_QWORD *)(v22 + 32) = v9;
      WdLogEvent5_WdLowResource(v22);
      LODWORD(v15) = -1073741801;
      goto LABEL_24;
    }
    v13 = DMMVIDPN::Serialize(v9, (__int64)v12);
    v15 = v13;
    if ( v13 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v21 + 24) = v9;
      *(_QWORD *)(v21 + 32) = v15;
      WdLogEvent5_WdError(v21);
LABEL_24:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v40);
      goto LABEL_40;
    }
    v40 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v34, (__int64)v12);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v40);
    v16 = *(_QWORD *)(v9 + 8);
    if ( v16 == a1 + 24 )
      v9 = 0LL;
    else
      v9 = v16 - 8;
  }
  while ( v9 );
  v17 = v37;
  v8 = (_QWORD *)v36[0];
  if ( v37 > 1 )
    goto LABEL_18;
LABEL_17:
  v17 = 1LL;
LABEL_18:
  v18 = 4 * v17 + 4;
  if ( v8 != v36 )
  {
    v19 = v8 - 1;
    while ( v19 )
    {
      v18 += v19[5];
      v20 = (_QWORD *)v19[1];
      if ( v20 == v36 )
        v19 = 0LL;
      else
        v19 = v20 - 1;
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
LABEL_40:
  Queue<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>(v34);
  return (unsigned int)v15;
}
