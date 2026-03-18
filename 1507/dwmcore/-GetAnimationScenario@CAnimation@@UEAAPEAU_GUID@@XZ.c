/*
 * XREFs of ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x180046D70
 * Callers:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180068410 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180068518 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CAnimation::GetAnimationScenario(CAnimation *this)
{
  return (struct _GUID *)*((_QWORD *)this + 9);
}
