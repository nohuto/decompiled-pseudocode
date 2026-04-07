/*
 * XREFs of ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180011710
 * Callers:
 *     ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x180011660 (-OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_i.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180012FF0 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800130A4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18003F3F8 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003F880 (--_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_qdq @ 0x18008E1F0 (Template_qdq.c)
 */

__int64 __fastcall CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(CAnimationEngine *this, unsigned int a2)
{
  __int64 v3; // r15
  int v4; // ecx
  CAnimationEngine::CTransitionVisualSet *v5; // rsi
  unsigned int v6; // edi
  unsigned int i; // ebp
  void (__fastcall ***v8)(_QWORD, _QWORD); // rcx
  unsigned int v9; // edx
  __int64 v10; // rax
  CAnimationEngine::CTransitionVisualSet *v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8 * v3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qdq(
      v4,
      (unsigned int)&UdwmAnimationEngine_Animation_End,
      *(_DWORD *)v5,
      *((_DWORD *)v5 + 3),
      *((_DWORD *)v5 + 2));
  v6 = 0;
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v8 = *(void (__fastcall ****)(_QWORD, _QWORD))(*((_QWORD *)this + 9) + 8LL * i);
    if ( v8 )
      (**v8)(v8, *(unsigned int *)v5);
  }
  CAnimationEngine::CTransitionVisualSet::StopStoryboard(v5);
  v10 = *((_QWORD *)this + 5);
  *((_BYTE *)this + 112) = 1;
  v11 = *(CAnimationEngine::CTransitionVisualSet **)(v10 + 8 * v3);
  if ( v11 )
  {
    CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(v11, v9);
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3) = 0LL;
  }
  v12 = *((_DWORD *)this + 16);
  if ( (unsigned int)v3 >= v12 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x218u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x597u);
  }
  else
  {
    v13 = v12 - 1;
    if ( (unsigned int)v3 < (unsigned int)v13 )
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v13);
    --*((_DWORD *)this + 16);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v6;
}
