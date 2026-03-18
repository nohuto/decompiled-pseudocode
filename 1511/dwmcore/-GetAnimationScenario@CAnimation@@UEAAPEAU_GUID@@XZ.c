/*
 * XREFs of ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x180083B90
 * Callers:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180094D78 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180094E98 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CAnimation::GetAnimationScenario(CAnimation *this)
{
  return (struct _GUID *)*((_QWORD *)this + 9);
}
