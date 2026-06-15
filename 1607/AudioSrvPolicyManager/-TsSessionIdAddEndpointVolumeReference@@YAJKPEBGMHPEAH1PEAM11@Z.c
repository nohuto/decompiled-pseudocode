/*
 * XREFs of ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001D630
 * Callers:
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x1800158F0 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dSgd @ 0x18001A310 (WPP_SF_dSgd.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18001F114 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     ?InitHashTable@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NI_N@Z @ 0x18001F1DC (-InitHashTable@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x18001F46C (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TsSessionIdAddEndpointVolumeReference(
        DWORD SessionId,
        const unsigned __int16 *a2,
        float a3,
        int a4,
        int *a5,
        int *a6,
        float *a7,
        int *a8,
        int *a9)
{
  int *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ecx
  char *v17; // rbx
  __int64 Node; // rax
  __int64 v19; // r8
  HANDLE ProcessHeap; // rax
  char *v21; // rax
  char *v22; // rdi
  _QWORD *v23; // r14
  __int64 v24; // rax
  __int64 v25; // r8
  const GUID *v26; // r8
  const GUID *v27; // r9
  const struct _TlgProvider_t *v28; // rcx
  UINT32 cData; // [rsp+28h] [rbp-E0h]
  unsigned int v31; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v33; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+5Ch] [rbp-ACh] BYREF
  struct TSSession *v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  int *v39; // [rsp+70h] [rbp-98h]
  float *v40; // [rsp+78h] [rbp-90h]
  int *v41; // [rsp+80h] [rbp-88h]
  __int64 v42; // [rsp+88h] [rbp-80h]
  char v43[8]; // [rsp+90h] [rbp-78h] BYREF
  char v44[8]; // [rsp+98h] [rbp-70h] BYREF
  char *v45; // [rsp+A0h] [rbp-68h]
  UINT32 v46[4]; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  const char *v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  int *v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-18h]
  int *v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]

  v42 = -2LL;
  v40 = a7;
  v12 = a8;
  v39 = a8;
  v41 = a9;
  v31 = 0;
  v37 = 0LL;
  *a5 = 0;
  *a6 = 0;
  *a8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    cData = (unsigned int)a2;
    WPP_SF_dSgd(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, SessionId);
  }
  v15 = TsSessionFromSessionId(SessionId, 1, 0LL, &v37);
  if ( v15 )
  {
    v16 = (unsigned __int16)v15 | 0x80070000;
    if ( v15 <= 0 )
      v16 = v15;
    v31 = v16;
  }
  else
  {
    v17 = (char *)v37 + 240;
    if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
           (int)v37 + 240,
           (_DWORD)a2,
           (unsigned int)&v38 + 4,
           (unsigned int)&v38,
           (__int64)v43) )
    {
      Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
               (_DWORD)v17,
               (_DWORD)a2,
               (unsigned int)&v33,
               (unsigned int)&v32,
               (__int64)v44);
      if ( !Node )
      {
        if ( !*(_QWORD *)v17 )
        {
          LOBYTE(v19) = 1;
          if ( !(unsigned __int8)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::InitHashTable(
                                   v17,
                                   *((unsigned int *)v17 + 4),
                                   v19) )
            ATL::AtlThrowImpl(-2147024882);
        }
        Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::NewNode(
                 v17,
                 a2,
                 v33,
                 v32);
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Node + 8) + 8LL));
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v21 = (char *)HeapAlloc(ProcessHeap, 0, 0x40uLL);
      v22 = v21;
      v45 = v21;
      if ( v21 )
      {
        *((_DWORD *)v21 + 2) = 1;
        *(_QWORD *)v21 = &CEndpointVolumeState::`vftable';
        *((float *)v21 + 4) = a3;
        *((_DWORD *)v21 + 5) = a4;
        *((_DWORD *)v21 + 6) = 0;
        *((_DWORD *)v21 + 7) = 0;
        v23 = v21 + 32;
        *((_QWORD *)v21 + 4) = 0LL;
        *((_DWORD *)v21 + 10) = 0;
        *((_QWORD *)v21 + 6) = &CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::`vftable';
        *((_QWORD *)v21 + 7) = v21;
        if ( (*(int (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, char *))(*(_QWORD *)g_pVolumeProvider
                                                                                               + 48LL))(
               g_pVolumeProvider,
               a2,
               v21 + 32) >= 0
          && (*(int (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v23 + 240LL))(*v23, v22 + 48) >= 0 )
        {
          *((_DWORD *)v22 + 10) = 1;
        }
        v12 = v39;
      }
      else
      {
        v22 = 0LL;
      }
      if ( v22 )
      {
        v24 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
                (_DWORD)v17,
                (_DWORD)a2,
                (unsigned int)&v35,
                (unsigned int)&v34,
                (__int64)v46);
        if ( !v24 )
        {
          if ( !*(_QWORD *)v17 )
          {
            LOBYTE(v25) = 1;
            if ( !(unsigned __int8)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::InitHashTable(
                                     v17,
                                     *((unsigned int *)v17 + 4),
                                     v25) )
              ATL::AtlThrowImpl(-2147024882);
          }
          v24 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::NewNode(
                  v17,
                  a2,
                  v35,
                  v34);
        }
        *(_QWORD *)(v24 + 8) = v22;
        *a5 = 1;
        *a6 = 1;
        *v40 = 1.0;
        *v12 = 1;
        *v41 = 0;
      }
      else
      {
        v31 = -2147024882;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v27 = (const GUID *)v31;
  if ( (v31 & 0x80000000) != 0 )
  {
    v28 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, v31);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v48 = "__FUNC__";
      v49 = 9LL;
      v36 = 2205;
      v50 = &v36;
      v51 = 4LL;
      v52 = (int *)&v31;
      v53 = 4LL;
      TlgWrite(v28, &unk_18002D869, v26, v27, cData, &pData);
    }
  }
  return 0LL;
}
