/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A49A0
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180094B94 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A4A14 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A4D70 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x1800A62F4 (-Run@CDWMInputThread@@AEAAKXZ.c)
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A6BA0 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CMmcssTask::Revert(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  EnterCriticalSection(this);
  v2 = *(_QWORD *)&this[1].LockCount;
  if ( v2 && *(_QWORD *)(v2 + 136) )
  {
    ((void (__fastcall *)(_QWORD))this[1].SpinCount)(*(_QWORD *)(v2 + 136));
    *(_QWORD *)(*(_QWORD *)&this[1].LockCount + 136LL) = 0LL;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
