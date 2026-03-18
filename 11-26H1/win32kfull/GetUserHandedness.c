/*
 * XREFs of GetUserHandedness @ 0x14023BD40
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x140295A68 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402FC900 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402FD39C (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetUserHandedness()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)RIMIsDefaultUILanguageRTL() )
    LOBYTE(v2) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v1, v0) + 19904) + 2056LL) == 0;
  else
    LOBYTE(v2) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v1, v0) + 19904) + 2056LL) != 0;
  return v2;
}
