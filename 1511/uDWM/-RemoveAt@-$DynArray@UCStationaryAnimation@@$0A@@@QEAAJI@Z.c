/*
 * XREFs of ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x180087B00
 * Callers:
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180013478 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18003F560 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x180070A84 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800857F4 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CStationaryAnimation,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  __int64 v9; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4++;
        v8 = *(_QWORD *)(v6 + 24LL * v4 + 16);
        v9 = 3 * v7;
        *(_OWORD *)(v6 + 8 * v9) = *(_OWORD *)(v6 + 24LL * v4);
        *(_QWORD *)(v6 + 8 * v9 + 16) = v8;
      }
      while ( v4 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  return v3;
}
