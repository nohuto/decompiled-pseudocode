/*
 * XREFs of ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18001DA00
 * Callers:
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x180015B68 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dS @ 0x1800112C4 (WPP_SF_dS.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveKey@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NPEBG@Z @ 0x18001EAEC (-RemoveKey@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18001F114 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     ?InitHashTable@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NI_N@Z @ 0x18001F1DC (-InitHashTable@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x18001F46C (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TsSessionIdReleaseEndpointVolumeReference(
        int SessionId,
        const unsigned __int16 *a2,
        int *a3,
        int *a4,
        float *a5,
        int *a6,
        int *a7)
{
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  char *v14; // rbx
  __int64 Node; // rax
  __int64 v16; // r8
  volatile signed __int32 *v17; // rsi
  BOOL v18; // r14d
  BOOL v19; // r15d
  int *v20; // rax
  const GUID *v21; // r8
  const GUID *v22; // r9
  const struct _TlgProvider_t *v23; // rcx
  UINT32 cData; // [rsp+20h] [rbp-B1h]
  unsigned int v26; // [rsp+30h] [rbp-A1h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-9Dh] BYREF
  unsigned int v28; // [rsp+38h] [rbp-99h] BYREF
  int v29; // [rsp+3Ch] [rbp-95h] BYREF
  char v30; // [rsp+40h] [rbp-91h] BYREF
  struct TSSession *v31; // [rsp+48h] [rbp-89h] BYREF
  char v32; // [rsp+50h] [rbp-81h] BYREF
  int *v33; // [rsp+58h] [rbp-79h]
  _BYTE v34[8]; // [rsp+60h] [rbp-71h] BYREF
  UINT32 v35; // [rsp+68h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-61h] BYREF
  const char *v37; // [rsp+90h] [rbp-41h]
  __int64 v38; // [rsp+98h] [rbp-39h]
  int *v39; // [rsp+A0h] [rbp-31h]
  __int64 v40; // [rsp+A8h] [rbp-29h]
  int *v41; // [rsp+B0h] [rbp-21h]
  __int64 v42; // [rsp+B8h] [rbp-19h]

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24);
  *a3 = 0;
  *a4 = 0;
  *a6 = 0;
  v33 = a6;
  v26 = 0;
  v31 = 0LL;
  EnterCriticalSection(v9);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids,
      SessionId,
      a2);
  }
  v12 = TsSessionFromSessionId((unsigned int)SessionId, 1, 0LL, &v31);
  if ( v12 )
  {
    v13 = (unsigned __int16)v12 | 0x80070000;
    if ( v12 <= 0 )
      v13 = v12;
    v26 = v13;
  }
  else
  {
    v14 = (char *)v31 + 240;
    if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
           (int)v31 + 240,
           (_DWORD)a2,
           (unsigned int)&v30,
           (unsigned int)&v32,
           (__int64)v34) )
    {
      Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
               (_DWORD)v14,
               (_DWORD)a2,
               (unsigned int)&v28,
               (unsigned int)&v27,
               (__int64)&v35);
      if ( !Node )
      {
        if ( !*(_QWORD *)v14 )
        {
          LOBYTE(v16) = 1;
          if ( !(unsigned __int8)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::InitHashTable(
                                   v14,
                                   *((unsigned int *)v14 + 4),
                                   v16) )
            ATL::AtlThrowImpl(-2147024882);
        }
        Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::NewNode(
                 v14,
                 a2,
                 v28,
                 v27);
      }
      v17 = *(volatile signed __int32 **)(Node + 8);
      *a5 = *((float *)v17 + 4);
      *a7 = *((_DWORD *)v17 + 5);
      v18 = _InterlockedCompareExchange(v17 + 6, 1234, 1234) == 0;
      v19 = _InterlockedCompareExchange(v17 + 7, 1234, 1234) == 0;
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 8LL))(v17, 1LL);
        v20 = v33;
        *a4 = v18;
        *v20 = v19;
        *a3 = 1;
        ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::RemoveKey(
          v14,
          a2);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v22 = (const GUID *)v26;
  if ( (v26 & 0x80000000) != 0 )
  {
    v23 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, v26);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v38 = 9LL;
      v37 = "__FUNC__";
      v39 = &v29;
      v41 = (int *)&v26;
      v29 = 2266;
      v40 = 4LL;
      v42 = 4LL;
      TlgWrite(v23, &unk_18002D869, v21, v22, cData, &pData);
    }
  }
  return 0LL;
}
