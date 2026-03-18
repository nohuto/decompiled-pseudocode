/*
 * XREFs of ?DestroyDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C023CE9C
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023CD74 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023DA94 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDevice::DestroyDeadzone(InteractiveControlDevice *this)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 35);
  if ( !v2 || *((_QWORD *)this + 50) == -1LL )
    return 3221225485LL;
  result = RIMDestroyPointerDeviceDeadzone(v2 + 64);
  *((_QWORD *)this + 50) = -1LL;
  *((_DWORD *)this + 98) = 0;
  return result;
}
