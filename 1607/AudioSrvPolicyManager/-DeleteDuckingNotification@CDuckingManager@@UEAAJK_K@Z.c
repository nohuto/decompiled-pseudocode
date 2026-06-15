/*
 * XREFs of ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180006E00
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_dx @ 0x180005714 (WPP_SF_dx.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180006924 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800091AC (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000A428 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::DeleteDuckingNotification(struct _RTL_CRITICAL_SECTION *this, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // esi
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rbx
  const struct _TlgProvider_t *v12; // rcx
  _QWORD *v13; // rdx
  ATL::CAtlException *v15; // rbx
  UINT32 cData; // [rsp+20h] [rbp-E8h]
  int v17; // [rsp+30h] [rbp-D8h] BYREF
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+48h] [rbp-C0h]
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h]
  int v24; // [rsp+68h] [rbp-A0h]
  _BYTE v25[8]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  ATL::CAtlException *v28; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-78h] BYREF
  const char *v30; // [rsp+B0h] [rbp-58h]
  int v31; // [rsp+B8h] [rbp-50h]
  int v32; // [rsp+BCh] [rbp-4Ch]
  int *v33; // [rsp+C0h] [rbp-48h]
  int v34; // [rsp+C8h] [rbp-40h]
  int v35; // [rsp+CCh] [rbp-3Ch]
  int *v36; // [rsp+D0h] [rbp-38h]
  int v37; // [rsp+D8h] [rbp-30h]
  int v38; // [rsp+DCh] [rbp-2Ch]

  v27 = -2LL;
  v21 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v22 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    cData = a3;
    WPP_SF_dx(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a2);
  }
  v8 = CDuckingNotification::Init((CDuckingNotification *)&v19, a2, 0LL, a3);
  v17 = v8;
  if ( v8 < 0 )
  {
    v11 = v22;
LABEL_13:
    v12 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v8);
      v8 = v17;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v30 = "__FUNC__";
      v31 = 9;
      v32 = 0;
      v18 = 644;
      v33 = &v18;
      v34 = 4;
      v35 = 0;
      v36 = &v17;
      v37 = 4;
      v38 = 0;
      TlgWrite(v12, &unk_18002D869, v9, v10, cData, &pData);
      v8 = v17;
    }
    goto LABEL_19;
  }
  v17 = 0;
  try
  {
    v23 = v19;
    v24 = v20;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v25,
      &v21);
    v11 = v22;
    v26 = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v8 = CLockedList<CDuckingNotification,1,0>::RemoveInterface(this + 2);
    v17 = v8;
  }
  catch ( ATL::CAtlException *v28 )
  {
    v15 = v28;
    if ( *(_DWORD *)v28 == -1073741571 )
      _resetstkoflw();
    v17 = *(_DWORD *)v15;
    v11 = v22;
    v8 = v17;
  }
  if ( v8 < 0 )
    goto LABEL_13;
LABEL_19:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v13 = (_QWORD *)(v21 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 8LL))(*v13);
  return (unsigned int)v8;
}
