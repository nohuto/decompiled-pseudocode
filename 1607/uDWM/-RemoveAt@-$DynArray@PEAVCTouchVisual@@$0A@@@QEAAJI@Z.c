/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x180079DB8
 * Callers:
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18003ABFC (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18007086C (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x180079640 (--1CImmersiveIconicBitmapRegistry@@UEAA@XZ.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007A26C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CTouchVisual *,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // r8

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 < v2 )
  {
    v4 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v5 = a2 + 1;
        *(_QWORD *)(v4 + 8LL * a2++) = *(_QWORD *)(v4 + 8 * v5);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
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
