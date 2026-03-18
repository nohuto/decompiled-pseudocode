/*
 * XREFs of ?UnRegisterNotifiers@CVisualGroup@@UEAAXXZ @ 0x180107450
 * Callers:
 *     ??1CVisualGroup@@EEAA@XZ @ 0x180106D1C (--1CVisualGroup@@EEAA@XZ.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x180106F60 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?UnRegisterNNotifiersInternal@CVisualGroup@@AEAAXPEAPEAVCVisual@@I@Z @ 0x1801073A8 (-UnRegisterNNotifiersInternal@CVisualGroup@@AEAAXPEAPEAVCVisual@@I@Z.c)
 */

void __fastcall CVisualGroup::UnRegisterNotifiers(CVisualGroup *this)
{
  struct CVisual **v1; // rdx
  struct CVisual **v3; // rdx

  v1 = (struct CVisual **)*((_QWORD *)this + 6);
  if ( v1 )
  {
    CVisualGroup::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 10));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_DWORD *)this + 10) = 0;
  v3 = (struct CVisual **)*((_QWORD *)this + 9);
  if ( v3 )
  {
    CVisualGroup::UnRegisterNNotifiersInternal(this, v3, *((_DWORD *)this + 16));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_DWORD *)this + 16) = 0;
}
