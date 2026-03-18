/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ @ 0x180017380
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x180016C50 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180016CE4 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x1800480B8 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CAtlasedRectsGroup::UnRegisterNotifiers(CAtlasedRectsGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 19);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 36));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 36) = 0;
}
