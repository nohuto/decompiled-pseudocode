/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800144B0
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001D2F0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001D8A0 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18000A56C (WPP_SF_Sd.c)
 *     WPP_SF_Sg @ 0x1800107B4 (WPP_SF_Sg.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::UpdateEndpointVolume(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        int a3,
        float a4,
        int a5,
        unsigned int a6)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v15; // [rsp+40h] [rbp-28h]
  CApplicationManager *v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, CApplicationManager **))(*(_QWORD *)g_pVolumeProvider + 48LL))(
         g_pVolumeProvider,
         a2,
         &v16);
  if ( v9 < 0 )
    goto LABEL_17;
  if ( a5 )
  {
    v11 = a6;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v13 = a6;
      WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Cu, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, a2, v13);
    }
    v9 = (*(__int64 (__fastcall **)(CApplicationManager *, _QWORD, __int64 *))(*(_QWORD *)v16 + 184LL))(
           v16,
           v11,
           &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE);
    if ( v9 < 0 )
      goto LABEL_17;
  }
  if ( a3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v10, a2, a4);
    }
    v9 = (*(__int64 (__fastcall **)(CApplicationManager *, __int64, __int64 *))(*(_QWORD *)v16 + 104LL))(
           v16,
           v8,
           &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE);
  }
  if ( v9 < 0 )
  {
LABEL_17:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Eu, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v9);
    }
    AudPolicyLogError("CApplicationManager::UpdateEndpointVolume", 2947, v9);
  }
  if ( v16 )
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
