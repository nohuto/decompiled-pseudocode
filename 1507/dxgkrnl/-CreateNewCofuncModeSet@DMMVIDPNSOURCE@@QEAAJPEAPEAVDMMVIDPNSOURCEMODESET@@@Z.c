/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0006DFC
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00AD130 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C0007238 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C00077E8 (--4-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::CreateNewCofuncModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET **a2)
{
  unsigned int v2; // edi
  char *v5; // rsi
  DMMVIDPNSOURCEMODESET *v6; // rax
  DMMVIDPNSOURCEMODESET *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODESET *v18; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v12);
  }
  v5 = (char *)this + 120;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 15) )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)v5;
    WdLogEvent5_WdError(v13);
    return 3223192400LL;
  }
  else
  {
    v17 = 0LL;
    v6 = (DMMVIDPNSOURCEMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v6 )
      v7 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v6, this);
    else
      v7 = 0LL;
    v18 = v7;
    auto_rc<DMMVIDPNSOURCEMODESET>::operator=(&v17, &v18);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v18, 0LL);
    v9 = v17;
    if ( v17 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v17 + 24))(v17 + 24) )
      {
        auto_rc<DMMVIDPNSOURCEMODESET>::operator=((char *)this + 120, &v17);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 96LL));
        v10 = *(_QWORD *)v5;
        *a2 = *(struct DMMVIDPNSOURCEMODESET **)v5;
        if ( *(_DWORD *)(v10 + 96) != 2 )
        {
          v16 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v16);
        }
      }
      else
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v15[3] = v9;
        v15[4] = *((unsigned int *)this + 6);
        v15[5] = *(int *)(v9 + 40);
        WdLogEvent5_WdDmmEvent(v15);
        v2 = *(_DWORD *)(v9 + 40);
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v14 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v14);
      v2 = -1073741801;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v17, 0LL);
    return v2;
  }
}
