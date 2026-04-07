/*
 * XREFs of ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18009DF64
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180005850 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x180078CF8 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CBitmapSource *,0>::Remove(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r11
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v8; // rdx

  v2 = *a1;
  v4 = *((_DWORD *)a1 + 6);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *a2;
    do
    {
      if ( v6 == *(_QWORD *)(v2 + 8 * v5) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v4 );
  }
  if ( (unsigned int)v5 >= v4 )
    return 0LL;
  if ( (unsigned int)v5 < v4 - 1 )
  {
    do
    {
      v8 = (unsigned int)v5;
      LODWORD(v5) = v5 + 1;
      *(_QWORD *)(v2 + 8 * v8) = *(_QWORD *)(v2 + 8LL * (unsigned int)v5);
    }
    while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
  }
  --*((_DWORD *)a1 + 6);
  return 1LL;
}
