/*
 * XREFs of ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1800605A0
 * Callers:
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180060418 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180060640 (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x1800480B8 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CTransform3DGroup::UnRegisterNotifiers(CTransform3DGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 17);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 32));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_DWORD *)this + 32) = 0;
}
