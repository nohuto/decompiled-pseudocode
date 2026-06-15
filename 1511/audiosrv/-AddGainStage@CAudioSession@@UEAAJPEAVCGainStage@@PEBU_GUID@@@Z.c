/*
 * XREFs of ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x180025F70
 * Callers:
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180028410 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?SetAt@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAPEAU__POSITION@@AEBU_GUID@@AEBQEAVCGainStage@@@Z @ 0x180012908 (-SetAt@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAVC.c)
 *     ?Lookup@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEBA_NAEBU_GUID@@AEAPEAVCGainStage@@@Z @ 0x180012990 (-Lookup@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PEAV.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x180071A2C (-AddGainStageReference@CGainStage@@QEAAKXZ.c)
 *     WPP_SF_S_guid_ @ 0x1800773CC (WPP_SF_S_guid_.c)
 */

__int64 __fastcall CAudioSession::AddGainStage(CAudioSession *this, struct CGainStage *a2, const struct _GUID *a3)
{
  struct CGainStage *v3; // rdi
  CAudioSession *v4; // rsi
  int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // r13
  int v7; // r8d
  int v8; // r8d
  __int64 result; // rax
  CGainStage *v10; // rsi
  float v11; // xmm1_4
  CGainStage *v12[2]; // [rsp+30h] [rbp-58h] BYREF
  ATL::CAtlException *v13; // [rsp+40h] [rbp-48h] BYREF
  struct CGainStage *v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A8h] [rbp+20h]

  v15 = a2;
  v12[1] = (CGainStage *)-2LL;
  v3 = a2;
  v4 = this;
  v5 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 472);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 142, v7, *((_QWORD *)v4 + 104), (__int64)v3 + 16);
  }
  if ( ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::Lookup(
         (__int64)v4 + 512,
         (_DWORD *)v3 + 4,
         v12) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 143, v8, *((_QWORD *)v4 + 104), (__int64)v3 + 16);
    }
    v10 = v12[0];
    CGainStage::AddGainStageReference(v12[0]);
    if ( !(*(unsigned __int8 (__fastcall **)(CGainStage *))(*(_QWORD *)v10 + 24LL))(v10) )
    {
      v11 = *((float *)v3 + 12);
      if ( *((float *)v10 + 12) > v11 && !*((_BYTE *)v10 + 32) )
        *((float *)v10 + 12) = v11;
    }
    v5 = 0;
    LeaveCriticalSection(v6);
    goto LABEL_21;
  }
  try
  {
    ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::SetAt(
      (__int64)v4 + 512,
      (_DWORD *)v3 + 4,
      &v15);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v16 = *(_DWORD *)v13;
    v5 = v16;
    if ( !v16 )
    {
      v4 = this;
      v3 = v15;
      goto LABEL_7;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
LABEL_21:
    if ( v5 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        144LL,
        &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (unsigned int)v5);
    }
LABEL_8:
    result = (unsigned int)v5;
  }
LABEL_7:
  _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 472));
  goto LABEL_8;
}
