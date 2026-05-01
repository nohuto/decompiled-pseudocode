/*
 * XREFs of ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000A838
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180009FE0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?FindOrCreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000AB64 (-FindOrCreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     _TlgCreateSid @ 0x1800151E4 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        void *a7,
        bool a8)
{
  struct EnforcerApplicationState *ApplicationState; // rax
  unsigned __int64 v12; // rcx
  struct EnforcerApplicationState *v13; // r14
  int v14; // eax
  int v15; // esi
  TraceLoggingHProvider v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  TraceLoggingHProvider v19; // rcx
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  int v22; // esi
  TraceLoggingHProvider v23; // rcx
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  __int64 cData; // r11
  TraceLoggingHProvider v27; // rcx
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  unsigned int hProvider; // [rsp+30h] [rbp-D0h] BYREF
  int hProvider_4; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-BCh] BYREF
  int v35; // [rsp+48h] [rbp-B8h]
  unsigned int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-ACh] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+5Ch] [rbp-A4h] BYREF
  void *v41; // [rsp+60h] [rbp-A0h]
  ModernResourceEnforcer *v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+74h] [rbp-8Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *p_hProvider; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  int *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v61; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  int *v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v65; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int *v66; // [rsp+1C0h] [rbp+C0h]
  __int64 v67; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int *v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+1F8h] [rbp+F8h]
  unsigned int *v72; // [rsp+200h] [rbp+100h]
  __int64 v73; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v74; // [rsp+210h] [rbp+110h]
  __int64 v75; // [rsp+218h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR v76; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v78; // [rsp+260h] [rbp+160h]
  int v79; // [rsp+268h] [rbp+168h]
  int v80; // [rsp+26Ch] [rbp+16Ch]
  unsigned __int64 *v81; // [rsp+270h] [rbp+170h]
  int v82; // [rsp+278h] [rbp+178h]
  int v83; // [rsp+27Ch] [rbp+17Ch]

  hProvider_4 = -1;
  v41 = a7;
  v42 = this;
  v32 = a6;
  ApplicationState = ModernResourceEnforcer::FindOrCreateApplicationState(this, a2, a3, a4, a5, a6);
  v13 = ApplicationState;
  if ( ApplicationState )
  {
    if ( a8 )
    {
      memset_0(&v43, 0, 0x30uLL);
      v43 |= 1u;
      v14 = (*((__int64 (__fastcall **)(void *, _QWORD, unsigned __int64, int *))v42 + 15))(v41, a5, v32, &v43);
      v15 = v35;
      v12 = (unsigned int)v14;
      hProvider = v14;
      if ( v14 >= 0 )
        v15 = v44;
      v35 = v15;
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v14, 1uLL) )
      {
        v47 = 4LL;
        p_hProvider = &hProvider;
        TlgCreateWsz(&pDesc, a2);
        v36 = a5;
        v49 = &v36;
        v51 = &v32;
        v53 = &v37;
        v50 = 4LL;
        v52 = 8LL;
        v37 = v15;
        v54 = 4LL;
        TlgWrite(v16, &unk_18003F63F, v17, v18, 7u, &pData);
        v12 = hProvider;
      }
      if ( (v12 & 0x80000000) != 0LL )
        goto LABEL_14;
      if ( v15 == -1 )
        goto LABEL_13;
      v22 = -1;
      hProvider_4 = -1;
    }
    else
    {
      if ( *(char *)ApplicationState >= 0 )
      {
LABEL_13:
        *(_BYTE *)v13 = a8 | *(_BYTE *)v13 & 0xFE;
        goto LABEL_14;
      }
      if ( *((_WORD *)ApplicationState + 1) == 0xFFFF )
      {
        hProvider_4 = -1;
        goto LABEL_13;
      }
      v22 = *((unsigned __int16 *)ApplicationState + 1);
      hProvider_4 = v22;
    }
    memset_0(&v43, 0, 0x30uLL);
    v43 |= 1u;
    v44 = v22;
    hProvider = (*((__int64 (__fastcall **)(void *, _QWORD, unsigned __int64, int *))v42 + 14))(v41, a5, v32, &v43);
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v12, 1uLL) )
    {
      v57 = 4LL;
      v56 = &hProvider;
      TlgCreateWsz(&v58, a2);
      v38 = a5;
      v59 = &v38;
      v61 = &v32;
      v63 = &v39;
      v60 = 4LL;
      v62 = 8LL;
      v39 = v22;
      v64 = 4LL;
      TlgWrite(v23, &unk_18003F47F, v24, v25, 7u, &v55);
    }
    goto LABEL_13;
  }
  if ( (unsigned int)dword_18004D030 <= 4 )
    return;
  if ( TlgKeywordOn((TraceLoggingHProvider)v12, 1uLL) )
  {
    v67 = 4LL;
    v66 = &hProvider;
    TlgCreateWsz(&v68, a2);
    TlgCreateSid(&v69, (const SID *)a3);
    v33 = a4;
    v70 = &v33;
    v72 = &v34;
    v74 = &v32;
    v71 = 4LL;
    v34 = a5;
    v73 = 4LL;
    v75 = cData;
    TlgWrite(v27, &unk_18003F4E3, v28, v29, cData, &v65);
  }
LABEL_14:
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v12, 1uLL) )
    {
      TlgCreateWsz(&v77, a2);
      v80 = 0;
      v83 = 0;
      v78 = &v40;
      v81 = &v32;
      v40 = a5;
      v79 = 4;
      v82 = 8;
      TlgWrite(v19, &unk_18003F6A9, v20, v21, 5u, &v76);
    }
  }
}
