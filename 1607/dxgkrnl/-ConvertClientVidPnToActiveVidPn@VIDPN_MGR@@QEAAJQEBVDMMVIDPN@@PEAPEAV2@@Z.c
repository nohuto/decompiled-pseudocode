/*
 * XREFs of ?ConvertClientVidPnToActiveVidPn@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAPEAV2@@Z @ 0x1C00842D4
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C000C5E0 (-Remove@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C007E0AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::ConvertClientVidPnToActiveVidPn(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        struct DMMVIDPN **a3)
{
  unsigned int v3; // ebx
  DMMVIDPN *v6; // rax
  unsigned __int8 v7; // r8
  DMMVIDPN *v8; // rax
  __int64 v9; // rcx
  int *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  int *v14; // rsi
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  VIDPN_MGR *v21; // [rsp+40h] [rbp+8h] BYREF

  v21 = this;
  v3 = 0;
  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a3 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v18);
  }
  *a3 = 0LL;
  v21 = 0LL;
  v6 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v6 )
    v8 = DMMVIDPN::DMMVIDPN(v6, a2, v7);
  else
    v8 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)&v21, (__int64)v8);
  v10 = (int *)v21;
  if ( v21 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v21 + 9))((__int64)v21 + 72) )
    {
      v12 = v10 + 30;
      if ( (_QWORD *)*v12 != v12 )
      {
        v13 = *v12 - 8LL;
        if ( v13 )
        {
          do
          {
            v14 = *(int **)(v13 + 8);
            if ( v14 == v10 + 30 )
              v15 = 0LL;
            else
              v15 = (__int64)(v14 - 2);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 96) + 96LL) + 104LL) == 2 )
              Set<DMMVIDPNPRESENTPATH>::Remove((__int64)(v10 + 24), v13);
            v13 = v15;
          }
          while ( v15 );
        }
      }
      v21 = 0LL;
      *a3 = (struct DMMVIDPN *)v10;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v11);
      v20[3] = v10;
      v20[4] = a2;
      v20[5] = v10[20];
      WdLogEvent5_WdDmmEvent(v20);
      v3 = v10[20];
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v19 + 24) = a2;
    WdLogEvent5_WdLowResource(v19);
    v3 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v21, 0LL);
  return v3;
}
