/*
 * XREFs of ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012180
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001167C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000EC6C (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18000F1B0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18000FE8C (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveProcess(CApplicationManager *this, struct CProcess *a2)
{
  volatile signed __int32 *v2; // rdi
  int v4; // esi
  _QWORD *i; // rdx
  int *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  v2 = (volatile signed __int32 *)a2;
  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  for ( i = (_QWORD *)*((_QWORD *)this + 14); i && (volatile signed __int32 *)i[2] != v2; i = (_QWORD *)*i )
    ;
  if ( i )
  {
    v4 = 0;
    try
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((_QWORD *)this + 14, i);
    }
    catch ( ATL::CAtlException *v9 )
    {
      v8 = (int *)v9;
      if ( *(_DWORD *)v9 == -1073741571 )
        _o__resetstkoflw();
      v2 = (volatile signed __int32 *)a2;
      v4 = *v8;
    }
    if ( v2 )
    {
      CProcess::CleanupProcessTerminationWatcher((CProcess *)v2, 0);
      CProcess::NotifyPLM((__int64)v2, 1);
      if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 32LL))(v2);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      }
    }
    if ( v4 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v4);
      }
      AudPolicyLogError("CApplicationManager::RemoveProcess", 1387, v4);
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
