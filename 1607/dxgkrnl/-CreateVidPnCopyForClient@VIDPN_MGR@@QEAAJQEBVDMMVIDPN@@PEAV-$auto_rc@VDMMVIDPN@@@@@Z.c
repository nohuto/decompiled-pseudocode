/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084F6C
 * Callers:
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084EB8 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01A61E0 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01AD420 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C00020B4 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000CA78 (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C007E0AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  DMMVIDPN *v11; // rax
  unsigned __int8 v12; // r8
  DMMVIDPN *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = a2;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v21);
  }
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(v10 + 16);
  if ( !a2 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v23);
  }
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v27 = 0LL;
  v11 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v13 = DMMVIDPN::DMMVIDPN(v11, a2, v12);
  else
    v13 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v27, (__int64)v13);
  v15 = v27;
  if ( v27 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v27 + 72))(v27 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 8LL) != CurrentThread )
      {
        v20 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v20);
      }
      if ( Set<DMMVIDPN>::Add(a1 + 104, v27) != 1 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v26);
      }
      auto_rc<DMMVIDPN>::operator=(a3, &v27);
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
      v25[3] = v15;
      v25[4] = a2;
      v25[5] = *(int *)(v15 + 80);
      WdLogEvent5_WdDmmEvent(v25);
      v7 = *(_DWORD *)(v15 + 80);
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v24 + 24) = a2;
    WdLogEvent5_WdLowResource(v24);
    v7 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v27, 0LL);
  return v7;
}
