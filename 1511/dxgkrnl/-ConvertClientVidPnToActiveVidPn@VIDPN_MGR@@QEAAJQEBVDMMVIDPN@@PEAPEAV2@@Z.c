/*
 * XREFs of ?ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z @ 0x1C008F228
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C00086A8 (-Remove@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::ConvertClientVidPnToActiveVidPn(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        struct DMMVIDPN **a3)
{
  unsigned int v3; // ebx
  DMMVIDPN *v6; // rax
  DMMVIDPN *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int *v12; // rdi
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  int *v15; // rsi
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  VIDPN_MGR *v22; // [rsp+40h] [rbp+8h] BYREF

  v22 = this;
  v3 = 0;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v19);
  }
  *a3 = 0LL;
  v22 = 0LL;
  v6 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v6 )
    v7 = DMMVIDPN::DMMVIDPN(v6, a2);
  else
    v7 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&v22, (__int64)v7);
  v12 = (int *)v22;
  if ( v22 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v22 + 9))((__int64)v22 + 72) )
    {
      v13 = v12 + 30;
      if ( (_QWORD *)*v13 != v13 )
      {
        v14 = *v13 - 8LL;
        if ( v14 )
        {
          do
          {
            v15 = *(int **)(v14 + 8);
            if ( v15 == v12 + 30 )
              v16 = 0LL;
            else
              v16 = (__int64)(v15 - 2);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 96) + 96LL) + 104LL) == 2 )
              Set<DMMVIDPNPRESENTPATH>::Remove((__int64)(v12 + 24), v14);
            v14 = v16;
          }
          while ( v16 );
        }
      }
      v22 = 0LL;
      *a3 = (struct DMMVIDPN *)v12;
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v21[3] = v12;
      v21[4] = a2;
      v21[5] = v12[20];
      WdLogEvent5_WdDmmEvent(v21);
      v3 = v12[20];
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    *(_QWORD *)(v20 + 24) = a2;
    WdLogEvent5_WdLowResource(v20);
    v3 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v22, 0LL);
  return v3;
}
