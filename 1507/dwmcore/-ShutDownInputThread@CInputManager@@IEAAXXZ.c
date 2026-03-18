/*
 * XREFs of ?ShutDownInputThread@CInputManager@@IEAAXXZ @ 0x1801293BC
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x180129228 (--1CInputManager@@MEAA@XZ.c)
 * Callees:
 *     ?UseDesktopInputStack@CInputManager@@AEAAHXZ @ 0x18008A750 (-UseDesktopInputStack@CInputManager@@AEAAHXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CInputManager::ShutDownInputThread(CInputManager *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 5) == 0LL;
  *((_BYTE *)this + 48) = 1;
  if ( !v1 )
  {
    if ( CInputManager::UseDesktopInputStack(this) )
    {
      SetEvent(*((HANDLE *)this + 3));
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 51) + 232LL))(*((_QWORD *)this + 51));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 51) + 16LL))(*((_QWORD *)this + 51));
      *((_QWORD *)this + 51) = 0LL;
    }
    WaitForSingleObject(*((HANDLE *)this + 5), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
}
