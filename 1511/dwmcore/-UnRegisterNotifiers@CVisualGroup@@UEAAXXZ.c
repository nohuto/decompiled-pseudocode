/*
 * XREFs of ?UnRegisterNotifiers@CVisualGroup@@UEAAXXZ @ 0x180124A50
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1800F9040 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ??1CVisualGroup@@EEAA@XZ @ 0x180124820 (--1CVisualGroup@@EEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnRegisterNNotifiersInternal@CVisualGroup@@AEAAXPEAPEAVCVisual@@I@Z @ 0x1801249AC (-UnRegisterNNotifiersInternal@CVisualGroup@@AEAAXPEAPEAVCVisual@@I@Z.c)
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
  }
  *((_DWORD *)this + 10) = 0;
  v3 = (struct CVisual **)*((_QWORD *)this + 8);
  if ( v3 )
  {
    CVisualGroup::UnRegisterNNotifiersInternal(this, v3, *((_DWORD *)this + 14));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
}
