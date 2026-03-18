/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0009BEC
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00BF7C0 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0004FDC (--4-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C00053E8 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::CreateNewCofuncModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET **a2)
{
  unsigned int v2; // edi
  char *v5; // rsi
  DMMVIDPNSOURCEMODESET *v6; // rax
  DMMVIDPNSOURCEMODESET *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODESET *v22; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v16);
  }
  v5 = (char *)this + 120;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 15) )
  {
    v17 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v17 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v17 + 32) = *(_QWORD *)v5;
    WdLogEvent5_WdError(v17);
    return 3223192400LL;
  }
  else
  {
    v21 = 0LL;
    v6 = (DMMVIDPNSOURCEMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v6 )
      v7 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v6, this);
    else
      v7 = 0LL;
    v22 = v7;
    auto_rc<DMMVIDPNTARGETMODESET>::operator=(&v21, (__int64 *)&v22);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v22, 0LL);
    v12 = v21;
    if ( v21 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v21 + 24))(v21 + 24) )
      {
        auto_rc<DMMVIDPNTARGETMODESET>::operator=((__int64 *)this + 15, &v21);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 96LL));
        v14 = *(_QWORD *)v5;
        *a2 = *(struct DMMVIDPNSOURCEMODESET **)v5;
        if ( *(_DWORD *)(v14 + 96) != 2 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v20);
        }
      }
      else
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v19[3] = v12;
        v19[4] = *((unsigned int *)this + 6);
        v19[5] = *(int *)(v12 + 40);
        WdLogEvent5_WdDmmEvent(v19);
        v2 = *(_DWORD *)(v12 + 40);
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v18 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v18);
      v2 = -1073741801;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v21, 0LL);
    return v2;
  }
}
