/*
 * XREFs of ?BypassGestureTargeting@?A0x734f6366@@YA_NPEBUIManipulationContext@@K@Z @ 0x1800058D8
 * Callers:
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z @ 0x180003CFC (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@K@Z.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x180004E5C (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall `anonymous namespace'::BypassGestureTargeting(
        _anonymous_namespace_ *this,
        const struct IManipulationContext *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebp
  __int64 v5; // rbx
  char v6; // si
  __int64 v7; // rdi

  v2 = *(_QWORD *)this;
  v4 = (unsigned int)a2;
  v5 = (*(__int64 (__fastcall **)(_anonymous_namespace_ *))(*(_QWORD *)this + 16LL))(this);
  v6 = 0;
  if ( !(*(__int64 (__fastcall **)(_anonymous_namespace_ *, __int64))(v2 + 32))(this, v5) )
  {
    v7 = (*(__int64 (__fastcall **)(_anonymous_namespace_ *))(*(_QWORD *)this + 16LL))(this);
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 80LL))(v7, v4, 0LL, 2LL) )
      return (*(unsigned int (__fastcall **)(_anonymous_namespace_ *))(*(_QWORD *)this + 120LL))(this) == 0;
  }
  return v6;
}
