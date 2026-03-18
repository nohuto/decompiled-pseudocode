/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000626C
 * Callers:
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00BEF10 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0004FDC (--4-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C0005898 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::CreateNewCofuncModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET **a2)
{
  unsigned int v2; // edi
  char *v5; // rsi
  DMMVIDPNTARGETMODESET *v6; // rax
  DMMVIDPNTARGETMODESET *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDPNTARGETMODESET *v21; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v15);
  }
  v5 = (char *)this + 112;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    v16 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v16 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v16 + 32) = *(_QWORD *)v5;
    WdLogEvent5_WdError(v16);
    return 3223192400LL;
  }
  else
  {
    v20 = 0LL;
    v6 = (DMMVIDPNTARGETMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v6 )
      v7 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v6, this);
    else
      v7 = 0LL;
    v21 = v7;
    auto_rc<DMMVIDPNTARGETMODESET>::operator=(&v20, (__int64 *)&v21);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v21, 0LL);
    v12 = v20;
    if ( v20 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v20 + 24))(v20 + 24) )
      {
        auto_rc<DMMVIDPNTARGETMODESET>::operator=((__int64 *)this + 14, &v20);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 96LL));
        v13 = *(_QWORD *)v5;
        *a2 = *(struct DMMVIDPNTARGETMODESET **)v5;
        if ( *(_DWORD *)(v13 + 96) != 2 )
        {
          v19 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v19);
        }
      }
      else
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v18[3] = v12;
        v18[4] = *((unsigned int *)this + 6);
        v18[5] = *(int *)(v12 + 40);
        WdLogEvent5_WdDmmEvent(v18);
        v2 = *(_DWORD *)(v12 + 40);
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v17 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v17);
      v2 = -1073741801;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v20, 0LL);
    return v2;
  }
}
