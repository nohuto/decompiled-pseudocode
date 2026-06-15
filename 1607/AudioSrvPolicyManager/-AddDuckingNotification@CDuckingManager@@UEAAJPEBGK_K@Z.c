/*
 * XREFs of ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180006B80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_Sdx @ 0x1800054D8 (WPP_SF_Sdx.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180006924 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000934C (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000A428 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::AddDuckingNotification(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // rdx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rdi
  _UNKNOWN **v12; // rcx
  int v13; // ebx
  _QWORD *v14; // rdx
  ATL::CAtlException *v16; // rbx
  UINT32 cData; // [rsp+20h] [rbp-108h]
  int v18; // [rsp+30h] [rbp-F8h] BYREF
  int v19; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-E8h] BYREF
  int v21; // [rsp+48h] [rbp-E0h]
  __int64 v22; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-D0h]
  __int64 v24; // [rsp+60h] [rbp-C8h] BYREF
  int v25; // [rsp+68h] [rbp-C0h]
  _BYTE v26[8]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+78h] [rbp-B0h]
  __int64 v28; // [rsp+80h] [rbp-A8h]
  ATL::CAtlException *v29; // [rsp+88h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-98h] BYREF
  const char *v31; // [rsp+B0h] [rbp-78h]
  int v32; // [rsp+B8h] [rbp-70h]
  int v33; // [rsp+BCh] [rbp-6Ch]
  int *v34; // [rsp+C0h] [rbp-68h]
  int v35; // [rsp+C8h] [rbp-60h]
  int v36; // [rsp+CCh] [rbp-5Ch]
  int *v37; // [rsp+D0h] [rbp-58h]
  int v38; // [rsp+D8h] [rbp-50h]
  int v39; // [rsp+DCh] [rbp-4Ch]

  v28 = -2LL;
  v22 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v11 = 0LL;
  v23 = 0LL;
  v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    cData = a3;
    WPP_SF_Sdx(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, (__int64)v9, a2);
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 72) == 1 )
  {
    v13 = -2147467260;
    v18 = -2147467260;
    goto LABEL_16;
  }
  v13 = CDuckingNotification::Init((CDuckingNotification *)&v20, a3, a2, a4);
  v18 = v13;
  if ( v13 < 0 )
  {
    v11 = v23;
LABEL_15:
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_16:
    if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x8000000) != 0 && *((_BYTE *)v12 + 25) >= 2u )
    {
      WPP_SF_D((TRACEHANDLE)v12[2], 0x1Fu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v13);
      v13 = v18;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v31 = "__FUNC__";
      v32 = 9;
      v33 = 0;
      v19 = 610;
      v34 = &v19;
      v35 = 4;
      v36 = 0;
      v37 = &v18;
      v38 = 4;
      v39 = 0;
      TlgWrite((TraceLoggingHProvider)v12, &unk_18002D869, v9, v10, cData, &pData);
      v13 = v18;
    }
    goto LABEL_22;
  }
  v18 = 0;
  try
  {
    v24 = v20;
    v25 = v21;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v26,
      &v22);
    v11 = v23;
    v27 = v23;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v13 = CLockedList<CDuckingNotification,1,0>::AddInterface((char *)this + 80, &v24);
    v18 = v13;
  }
  catch ( ATL::CAtlException *v29 )
  {
    v16 = v29;
    if ( *(_DWORD *)v29 == -1073741571 )
      _resetstkoflw();
    v18 = *(_DWORD *)v16;
    v11 = v23;
    v13 = v18;
  }
  if ( v13 < 0 )
    goto LABEL_15;
LABEL_22:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v14 = (_QWORD *)(v22 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 8LL))(*v14);
  return (unsigned int)v13;
}
