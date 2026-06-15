/*
 * XREFs of ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18001B910
 * Callers:
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18001436C (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dS @ 0x1800108DC (WPP_SF_dS.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveKey@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NPEBG@Z @ 0x18001C6E4 (-RemoveKey@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18001CBA8 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     ?InitHashTable@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NI_N@Z @ 0x18001CC6C (-InitHashTable@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x18001CEDC (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TsSessionIdReleaseEndpointVolumeReference(
        DWORD SessionId,
        const unsigned __int16 *a2,
        int *a3,
        int *a4,
        float *a5,
        int *a6,
        int *a7)
{
  int *v7; // r12
  signed int v8; // ebx
  CApplicationManager *v10; // rcx
  int v14; // eax
  char *v15; // rdi
  __int64 Node; // rax
  __int64 v17; // r8
  volatile signed __int32 *v18; // r14
  BOOL v19; // r13d
  char v21; // [rsp+30h] [rbp-58h] BYREF
  char v22; // [rsp+34h] [rbp-54h] BYREF
  struct TSSession *v23; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v25[64]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp+18h] BYREF
  BOOL v27; // [rsp+A8h] [rbp+20h]

  v7 = a6;
  v8 = 0;
  v23 = 0LL;
  v10 = g_ApplicationManager;
  *a3 = 0;
  *v7 = 0;
  *a4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 24));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x27u,
      &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids,
      SessionId,
      a2);
  }
  v14 = TsSessionFromSessionId(SessionId, 1, 0LL, &v23);
  if ( v14 )
  {
    v8 = (unsigned __int16)v14 | 0x80070000;
    if ( v14 <= 0 )
      v8 = v14;
  }
  else
  {
    v15 = (char *)v23 + 240;
    if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
           (int)v23 + 240,
           (_DWORD)a2,
           (unsigned int)&v22,
           (unsigned int)&v21,
           (__int64)v24) )
    {
      Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
               (_DWORD)v15,
               (_DWORD)a2,
               (unsigned int)&v26,
               (unsigned int)&a6,
               (__int64)v25);
      if ( !Node )
      {
        if ( !*(_QWORD *)v15 )
        {
          LOBYTE(v17) = 1;
          if ( !(unsigned __int8)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::InitHashTable(
                                   v15,
                                   *((unsigned int *)v15 + 4),
                                   v17) )
            ATL::AtlThrowImpl(-2147024882);
        }
        Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::NewNode(
                 v15,
                 a2,
                 v26,
                 (unsigned int)a6);
      }
      v18 = *(volatile signed __int32 **)(Node + 8);
      *a5 = *((float *)v18 + 4);
      *a7 = *((_DWORD *)v18 + 5);
      v19 = _InterlockedCompareExchange(v18 + 6, 1234, 1234) == 0;
      v27 = _InterlockedCompareExchange(v18 + 7, 1234, 1234) == 0;
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 8LL))(v18, 1LL);
        *v7 = v27;
        *a4 = v19;
        *a3 = 1;
        ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::RemoveKey(
          v15,
          a2);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, v8);
    }
    AudPolicyLogError("TsSessionIdReleaseEndpointVolumeReference", 2334, v8);
  }
  return 0LL;
}
