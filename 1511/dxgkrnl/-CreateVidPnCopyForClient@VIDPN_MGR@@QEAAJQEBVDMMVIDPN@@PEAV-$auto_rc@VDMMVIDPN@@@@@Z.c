/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FEA8
 * Callers:
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FDF4 (-CreateClientVidPnFromActive@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C017CC40 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0183CC0 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000BD20 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000C2EC (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  DMMVIDPN *v11; // rax
  DMMVIDPN *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = a2;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v22);
  }
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(v10 + 16);
  if ( !a2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !a3 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v24);
  }
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v28 = 0LL;
  v11 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v12 = DMMVIDPN::DMMVIDPN(v11, a2);
  else
    v12 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v28, (__int64)v12);
  v17 = v28;
  if ( v28 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v28 + 72))(v28 + 72) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( **(struct _KTHREAD ***)(a1 + 40) != CurrentThread )
      {
        v21 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v21);
      }
      if ( Set<DMMVIDPN>::Add(a1 + 104, v28) != 1 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v27);
      }
      auto_rc<DMMVIDPN>::operator=(a3, &v28);
    }
    else
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v26[3] = v17;
      v26[4] = a2;
      v26[5] = *(int *)(v17 + 80);
      WdLogEvent5_WdDmmEvent(v26);
      v7 = *(_DWORD *)(v17 + 80);
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v25 + 24) = a2;
    WdLogEvent5_WdLowResource(v25);
    v7 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v28, 0LL);
  return v7;
}
