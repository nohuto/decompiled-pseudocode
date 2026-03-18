/*
 * XREFs of KdpStub @ 0x1400F67A4
 * Callers:
 *     KdTrap @ 0x1400AE7E0 (KdTrap.c)
 *     KiDispatchException @ 0x1400F3D60 (KiDispatchException.c)
 * Callees:
 *     KdEnableDebugger @ 0x1401D1624 (KdEnableDebugger.c)
 *     KdpTrap @ 0x1406F312C (KdpTrap.c)
 */

char __fastcall KdpStub(int a1, int a2, __int64 a3, __int64 a4, char a5, char a6)
{
  int v6; // edi
  int v7; // ebx
  __int64 v11; // r8

  v6 = a4;
  v7 = a3;
  if ( *(_DWORD *)a3 == -2147483645
    && *(_DWORD *)(a3 + 24)
    && ((v11 = *(_QWORD *)(a3 + 32), (unsigned __int64)(v11 - 3) <= 2) || v11 == 1) )
  {
    ++*(_QWORD *)(a4 + 248);
    return 1;
  }
  else if ( !KdPitchDebugger
         && KdAutoEnableOnEvent
         && KdPreviouslyEnabled
         && !(_BYTE)KdDebuggerEnabled
         && KdEnableDebugger() >= 0
         && (_BYTE)KdDebuggerEnabled )
  {
    return KdpTrap(a1, a2, v7, v6, a5, a6);
  }
  else
  {
    return 0;
  }
}
