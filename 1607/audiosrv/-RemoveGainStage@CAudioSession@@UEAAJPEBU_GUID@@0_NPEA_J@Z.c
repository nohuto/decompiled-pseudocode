/*
 * XREFs of ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x18005EC70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800279B0 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?GetNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEBAPEAVCNode@12@AEBU_GUID@@AEAI1AEAPEAV312@@Z @ 0x18002C49C (-GetNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEA.c)
 *     ?Lookup@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBA_NAEBU_GUID@@AEAPEAVCGainStage@@@Z @ 0x18002C648 (-Lookup@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAV.c)
 *     WPP_SF__guid_ @ 0x180059BDC (WPP_SF__guid_.c)
 *     ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x18005EE84 (-RemoveGainStageReference@CGainStage@@QEAAKXZ.c)
 *     ?RemoveNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x18005EEE8 (-RemoveNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@.c)
 *     WPP_SF_S_guid_ @ 0x18005FA18 (WPP_SF_S_guid_.c)
 */

__int64 __fastcall CAudioSession::RemoveGainStage(
        CAudioSession *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        char a4,
        CGainStage *a5)
{
  CGainStage *v5; // rdi
  unsigned int v6; // esi
  int v10; // r8d
  char *v11; // r14
  CGainStage *v12; // rbx
  __int64 Node; // rax
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  LPCRITICAL_SECTION v16; // [rsp+38h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-28h]
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v16, (struct _RTL_CRITICAL_SECTION *)((char *)this + 472));
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 106, v10, *((_QWORD *)this + 104), (__int64)a2);
  }
  v11 = (char *)this + 512;
  if ( ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::Lookup(
         (__int64)this + 512,
         a2,
         &a5) )
  {
    v12 = a5;
    if ( !CGainStage::RemoveGainStageReference(a5) || a4 )
    {
      v15 = 0LL;
      Node = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNode(
               (__int64)v11,
               a2,
               &v18,
               (unsigned int *)&a5,
               &v15);
      if ( Node )
      {
        ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveNode(
          v11,
          Node,
          v15);
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x6Bu,
            (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
            (__int64)v12 + 16);
        }
        if ( v5 )
          *(_QWORD *)v5 = *((_QWORD *)v12 + 5);
        CRefCountedObject::Release(v12);
      }
    }
    else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x6Cu,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        (__int64)v12 + 16);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x6Du,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        (__int64)a2);
    }
    v6 = -2147024894;
    AudSrvTraceLoggingErrorHelper("CAudioSession::RemoveGainStage", 4563, -2147024894);
  }
  if ( v17 )
    ATL::CCritSecLock::Unlock(&v16);
  return v6;
}
