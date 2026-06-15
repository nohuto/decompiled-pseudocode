/*
 * XREFs of ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18001419C
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001D2F0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_dS @ 0x1800108DC (WPP_SF_dS.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001B5E4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ApplyEndpointVolumeOverride(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        DWORD a3,
        int *a4,
        int *a5,
        float *a6,
        int *a7,
        int *a8)
{
  int *v11; // r14
  int *v12; // r15
  int v13; // ebx
  _QWORD v15[2]; // [rsp+50h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-10h] BYREF
  char v17; // [rsp+68h] [rbp-8h]
  CApplicationManager *v18; // [rsp+A0h] [rbp+30h] BYREF
  float v19; // [rsp+B8h] [rbp+48h] BYREF

  v18 = this;
  v15[1] = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v15[0] = 0LL;
  v19 = FLOAT_1_0;
  LODWORD(v18) = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, a3, a2);
  }
  *a4 = 0;
  v11 = a5;
  *a5 = 0;
  v12 = a7;
  *a7 = 0;
  v13 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, _QWORD *))(*(_QWORD *)g_pVolumeProvider
                                                                                                + 48LL))(
          g_pVolumeProvider,
          a2,
          v15);
  if ( v13 < 0
    || ((*(void (__fastcall **)(_QWORD, float *))(*(_QWORD *)v15[0] + 120LL))(v15[0], &v19),
        (*(void (__fastcall **)(_QWORD, CApplicationManager **))(*(_QWORD *)v15[0] + 192LL))(v15[0], &v18),
        v13 = TsSessionIdAddEndpointVolumeReference(a3, a2, v19, (int)v18, a4, v11, a6, v12, a8),
        v13 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v13);
    }
    AudPolicyLogError("CApplicationManager::ApplyEndpointVolumeOverride", 2850, v13);
  }
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v13;
}
