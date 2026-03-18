/*
 * XREFs of ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x180083BA0
 * Callers:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180094D78 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180094E98 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::GetChannelHandle(CAnimation *this)
{
  return *((unsigned int *)this + 11);
}
