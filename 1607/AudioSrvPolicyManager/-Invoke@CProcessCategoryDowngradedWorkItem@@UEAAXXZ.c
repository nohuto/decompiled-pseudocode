/*
 * XREFs of ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x180020EF0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18000CB5C (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18000F1CC (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180014254 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessCategoryDowngradedWorkItem::Invoke(CProcessCategoryDowngradedWorkItem *this)
{
  __int64 v1; // rax
  CApplication *v3; // rdi
  _DWORD *v4; // rax
  const GUID *v5; // r8
  volatile signed __int32 *v6; // rbx
  const GUID *v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  UINT32 v9; // [rsp+28h] [rbp-29h]
  int v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  const char *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  int *v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]

  v1 = *((_QWORD *)this + 1);
  v10 = 0;
  v3 = *(CApplication **)(v1 + 224);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
      *(_DWORD *)(v1 + 168));
  }
  v4 = (_DWORD *)(*((_QWORD *)this + 1) + 452LL);
  if ( *v4 == 3 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 4;
  }
  CProcess::DeleteInactivityTimer(*((CProcess **)this + 1));
  if ( v3 )
  {
    CApplication::RemoveAudioPlaybackRestriction(v3);
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, v3, 209);
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 32LL))(v6);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
  }
  v7 = (const GUID *)(unsigned int)v10;
  if ( v10 < 0 )
  {
    v8 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v10);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = "__FUNC__";
      v16 = &v11;
      v19 = &v10;
      v14 = 9;
      v11 = 674;
      v17 = 4;
      v20 = 4;
      TlgWrite(v8, &unk_18002D869, v5, v7, v9, &pData);
    }
  }
}
