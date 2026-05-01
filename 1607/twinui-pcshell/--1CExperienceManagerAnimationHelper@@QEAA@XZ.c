/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180026F78
 * Callers:
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18001009C (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIOleWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007F40 (-Release@-$RuntimeClass@U-$InterfaceList@UIOleWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@M.c)
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    DestroyWindow(*(HWND *)(v2 + 24));
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IOleWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  }
}
