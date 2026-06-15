/*
 * XREFs of ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x1800A0128
 * Callers:
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x1800A1F58 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18002F500 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_dS @ 0x18007C3B8 (WPP_SF_dS.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAAAEAPEAVCEndpointVolumeState@@PEBG@Z @ 0x18009EE3C (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeS.c)
 *     ?RemoveKey@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NPEBG@Z @ 0x18009FA14 (-RemoveKey@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 */

__int64 __fastcall TsSessionIdReleaseEndpointVolumeReference(
        DWORD a1,
        char *a2,
        int *a3,
        int *a4,
        float *a5,
        int *a6,
        int *a7)
{
  int *v7; // rbp
  signed int v8; // ebx
  CRefCountedObject *v10; // rcx
  int v14; // eax
  __int64 *v15; // rsi
  unsigned __int16 *v16; // rax
  __int64 v17; // rdx
  BOOL v18; // r12d
  BOOL v19; // r13d
  unsigned __int16 *v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+90h] [rbp+18h] BYREF
  struct TSSession *v23; // [rsp+98h] [rbp+20h] BYREF

  v7 = a6;
  v8 = 0;
  v23 = 0LL;
  v10 = g_ApplicationManager;
  *a3 = 0;
  *v7 = 0;
  *a4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 24));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
  {
    WPP_SF_dS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x27u,
      (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      a1,
      a2);
  }
  v14 = TsSessionFromSessionId(a1, 1, 0LL, &v23);
  if ( v14 )
  {
    if ( v14 > 0 )
      v8 = (unsigned __int16)v14 | 0x80070000;
    else
      v8 = v14;
  }
  else
  {
    v15 = (__int64 *)((char *)v23 + 240);
    if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
           (__int64 *)v23 + 30,
           a2,
           &v22,
           (unsigned int *)&a6,
           &v21) )
    {
      v16 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::operator[](
              v15,
              a2);
      v17 = *(_QWORD *)v16;
      *a5 = *(float *)(*(_QWORD *)v16 + 16LL);
      *a7 = *(_DWORD *)(v17 + 20);
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 24), 1234, 1234) == 0;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 28), 1234, 1234) == 0;
      if ( !(unsigned int)CRefCountedObject::Release((CRefCountedObject *)v17) )
      {
        *a4 = v18;
        *v7 = v19;
        *a3 = 1;
        ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::RemoveKey(
          v15,
          a2);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v8 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x28u,
      (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      v8);
  }
  return 0LL;
}
