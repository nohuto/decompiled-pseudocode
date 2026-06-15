/*
 * XREFs of ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x180013590
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAt@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAPEAU__POSITION@@AEBU_GUID@@AEBQEAVCGainStage@@@Z @ 0x18002C5C0 (-SetAt@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAVC.c)
 *     ?Lookup@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBA_NAEBU_GUID@@AEAPEAVCGainStage@@@Z @ 0x18002C648 (-Lookup@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAV.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x18005A558 (-AddGainStageReference@CGainStage@@QEAAKXZ.c)
 *     WPP_SF_S_guid_ @ 0x18005FA18 (WPP_SF_S_guid_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::AddGainStage(CAudioSession *this, struct CGainStage *a2, const struct _GUID *a3)
{
  struct CGainStage *v3; // rdi
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // r8d
  __int64 result; // rax
  bool v9; // sf
  CGainStage *v10; // rbx
  float v11; // xmm1_4
  ATL::CAtlException *v12; // [rsp+38h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+80h] [rbp+8h]
  struct CGainStage *v16; // [rsp+88h] [rbp+10h] BYREF
  CGainStage *v17; // [rsp+98h] [rbp+20h] BYREF

  v16 = a2;
  v3 = a2;
  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 472);
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 104, v6, *((_QWORD *)this + 104), (__int64)v3 + 16);
  }
  if ( (unsigned __int8)ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::Lookup(
                          (char *)this + 512,
                          (char *)v3 + 16,
                          &v17) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 105, v7, *((_QWORD *)this + 104), (__int64)v3 + 16);
    }
    v10 = v17;
    CGainStage::AddGainStageReference(v17);
    if ( !(*(unsigned __int8 (__fastcall **)(CGainStage *))(*(_QWORD *)v10 + 24LL))(v10) )
    {
      v11 = *((float *)v3 + 12);
      if ( *((float *)v10 + 12) > v11 && !*((_BYTE *)v10 + 32) )
        *((float *)v10 + 12) = v11;
    }
    v5 = 0;
    v9 = 0;
    goto LABEL_22;
  }
  try
  {
    ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::SetAt(
      (char *)this + 512,
      (char *)v3 + 16,
      &v16);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v15 = *(_DWORD *)v12;
    v5 = *(_DWORD *)v12;
    v9 = v15 < 0;
    if ( !v15 )
    {
      v3 = v16;
      goto LABEL_7;
    }
LABEL_22:
    if ( v9 )
      AudSrvTraceLoggingErrorHelper("CAudioSession::AddGainStage", 0x118Bu, v5);
LABEL_8:
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
    result = v5;
  }
LABEL_7:
  _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  goto LABEL_8;
}
