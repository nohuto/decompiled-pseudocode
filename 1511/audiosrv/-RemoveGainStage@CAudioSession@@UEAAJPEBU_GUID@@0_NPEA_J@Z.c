/*
 * XREFs of ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x180076590
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x180005840 (-RemoveGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?GetNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEBAPEAVCNode@12@AEBU_GUID@@AEAI1AEAPEAV312@@Z @ 0x1800127A4 (-GetNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEA.c)
 *     ?Lookup@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBA_NAEBU_GUID@@AEAPEAVCGainStage@@@Z @ 0x180012990 (-Lookup@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAV.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     WPP_SF__guid_ @ 0x180070DE4 (WPP_SF__guid_.c)
 *     ?RemoveNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x1800767CC (-RemoveNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@.c)
 *     WPP_SF_S_guid_ @ 0x1800773CC (WPP_SF_S_guid_.c)
 */

__int64 __fastcall CAudioSession::RemoveGainStage(
        CAudioSession *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        char a4,
        CGainStage *a5)
{
  CGainStage *v5; // rdi
  int v6; // esi
  struct _RTL_CRITICAL_SECTION *v10; // r14
  int v11; // r8d
  char *v12; // r15
  CGainStage *v13; // rbx
  __int64 Node; // rax
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 472);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 145, v11, *((_QWORD *)this + 104), (__int64)a2);
  }
  v12 = (char *)this + 512;
  if ( !ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::Lookup(
          (__int64)this + 512,
          a2,
          &a5) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x94u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (__int64)a2);
    }
    v6 = -2147024894;
    goto LABEL_27;
  }
  v13 = a5;
  if ( (unsigned int)CGainStage::RemoveGainStageReference(a5) && !a4 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x93u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (__int64)v13 + 16);
    }
    goto LABEL_27;
  }
  v16 = 0LL;
  Node = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNode(
           (__int64)v12,
           a2,
           &v17,
           (unsigned int *)&a5,
           &v16);
  if ( !Node )
  {
LABEL_27:
    LeaveCriticalSection(v10);
    if ( v6 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x95u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        v6);
    }
    return (unsigned int)v6;
  }
  ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveNode(
    v12,
    Node,
    v16);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x92u,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      (__int64)v13 + 16);
  }
  if ( v5 )
    *(_QWORD *)v5 = *((_QWORD *)v13 + 5);
  CRefCountedObject::Release(v13);
  LeaveCriticalSection(v10);
  return (unsigned int)v6;
}
