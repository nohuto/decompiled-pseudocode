/*
 * XREFs of ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023CEE4
 * Callers:
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023DA94 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C023D1B8 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 */

void __fastcall InteractiveControlDevice::DetectPressAndHoldGesture(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        __int16 a3)
{
  struct InteractiveControlManager *v6; // rax
  signed int v7; // ebx
  __int64 v8; // rdx

  if ( (a3 & 0x200) != 0 )
  {
    *((_DWORD *)this + 104) = 0;
    *((_DWORD *)this + 105) = 1;
    *((_QWORD *)this + 53) = a2;
    v6 = InteractiveControlManager::Instance();
    *((_QWORD *)this + 51) = SetRITTimer(
                               0LL,
                               *((_DWORD *)v6 + 37),
                               (__int64)lambda_22b1152649b846f91130bab36d1a9194_::_lambda_invoker_cdecl_,
                               1);
  }
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 39) && (a3 & 0x80u) != 0 )
  {
    if ( *((_QWORD *)this + 51) )
    {
      *((_DWORD *)this + 104) += *((_DWORD *)a2 + 19);
      v7 = abs32(*((_DWORD *)this + 104));
      if ( v7 > *((_DWORD *)InteractiveControlManager::Instance() + 41) )
      {
        FindTimer(0LL, *((_QWORD *)this + 51), 4u, 1, 0LL);
        *((_QWORD *)this + 51) = 0LL;
        InteractiveControlDevice::FlushBufferedInput(this, 0);
      }
    }
  }
  if ( (a3 & 0x100) != 0 )
  {
    v8 = *((_QWORD *)this + 51);
    if ( v8 )
    {
      FindTimer(0LL, v8, 4u, 1, 0LL);
      *((_QWORD *)this + 51) = 0LL;
      InteractiveControlDevice::FlushBufferedInput(this, 0x80u);
    }
  }
  if ( (a3 & 0x20) != 0 )
    *((_DWORD *)this + 108) = 0;
}
