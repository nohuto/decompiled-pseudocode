/*
 * XREFs of ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001B5E4
 * Callers:
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18001419C (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_dSgd @ 0x1800183E8 (WPP_SF_dSgd.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18001CBA8 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     ?InitHashTable@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NI_N@Z @ 0x18001CC6C (-InitHashTable@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x18001CEDC (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
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
  signed int v12; // ebx
  int *v13; // r13
  int *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  char *v18; // rdi
  __int64 Node; // rax
  __int64 v20; // r8
  HANDLE ProcessHeap; // rax
  char *v22; // rax
  char *v23; // rsi
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned int v28; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-4Dh] BYREF
  unsigned int v30; // [rsp+50h] [rbp-49h] BYREF
  struct TSSession *v31; // [rsp+58h] [rbp-41h] BYREF
  char v32; // [rsp+60h] [rbp-39h] BYREF
  char v33; // [rsp+64h] [rbp-35h] BYREF
  __int64 v34; // [rsp+68h] [rbp-31h]
  char v35[8]; // [rsp+70h] [rbp-29h] BYREF
  char v36[8]; // [rsp+78h] [rbp-21h] BYREF
  char *v37; // [rsp+80h] [rbp-19h]
  char v38[32]; // [rsp+88h] [rbp-11h] BYREF

  v34 = -2LL;
  v12 = 0;
  v31 = 0LL;
  v13 = a5;
  *a5 = 0;
  v14 = a6;
  *a6 = 0;
  *a8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dSgd(*((_QWORD *)WPP_GLOBAL_Control + 2), v15, v16, SessionId, a2, a3, a4);
  }
  v17 = TsSessionFromSessionId(SessionId, 1, 0LL, &v31);
  if ( v17 )
  {
    v12 = (unsigned __int16)v17 | 0x80070000;
    if ( v17 <= 0 )
      v12 = v17;
  }
  else
  {
    v18 = (char *)v31 + 240;
    if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
           (int)v31 + 240,
           (_DWORD)a2,
           (unsigned int)&v33,
           (unsigned int)&v32,
           (__int64)v35) )
    {
      Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
               (_DWORD)v18,
               (_DWORD)a2,
               (unsigned int)&v28,
               (unsigned int)&a5,
               (__int64)v36);
      if ( !Node )
      {
        if ( !*(_QWORD *)v18 )
        {
          LOBYTE(v20) = 1;
          if ( !(unsigned __int8)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::InitHashTable(
                                   v18,
                                   *((unsigned int *)v18 + 4),
                                   v20) )
            ATL::AtlThrowImpl(-2147024882);
        }
        Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::NewNode(
                 v18,
                 a2,
                 v28,
                 (unsigned int)a5);
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Node + 8) + 8LL));
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v22 = (char *)HeapAlloc(ProcessHeap, 0, 0x40uLL);
      v23 = v22;
      v37 = v22;
      if ( v22 )
      {
        *((_DWORD *)v22 + 2) = 1;
        *(_QWORD *)v22 = &CEndpointVolumeState::`vftable';
        *((float *)v22 + 4) = a3;
        *((_DWORD *)v22 + 5) = a4;
        *((_DWORD *)v22 + 6) = 0;
        *((_DWORD *)v22 + 7) = 0;
        v24 = v22 + 32;
        *((_QWORD *)v22 + 4) = 0LL;
        *((_DWORD *)v22 + 10) = 0;
        *((_QWORD *)v22 + 6) = &CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::`vftable';
        *((_QWORD *)v22 + 7) = v22;
        if ( (*(int (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, char *))(*(_QWORD *)g_pVolumeProvider
                                                                                               + 48LL))(
               g_pVolumeProvider,
               a2,
               v22 + 32) >= 0
          && (*(int (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v24 + 240LL))(*v24, v23 + 48) >= 0 )
        {
          *((_DWORD *)v23 + 10) = 1;
        }
        v14 = a6;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v23 )
      {
        v25 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
                (_DWORD)v18,
                (_DWORD)a2,
                (unsigned int)&v30,
                (unsigned int)&v29,
                (__int64)v38);
        if ( !v25 )
        {
          if ( !*(_QWORD *)v18 )
          {
            LOBYTE(v26) = 1;
            if ( !(unsigned __int8)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::InitHashTable(
                                     v18,
                                     *((unsigned int *)v18 + 4),
                                     v26) )
              ATL::AtlThrowImpl(-2147024882);
          }
          v25 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::NewNode(
                  v18,
                  a2,
                  v30,
                  v29);
        }
        *(_QWORD *)(v25 + 8) = v23;
        *v13 = 1;
        *v14 = 1;
        *a7 = 1.0;
        *a8 = 1;
        *a9 = 0;
      }
      else
      {
        v12 = -2147024882;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, v12);
    }
    AudPolicyLogError("TsSessionIdAddEndpointVolumeReference", 2273, v12);
  }
  return 0LL;
}
