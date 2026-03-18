/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x180013808
 * Callers:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800135C4 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800AEFEC (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v6; // r8

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  else
  {
    v4 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v6 = a2 + 1;
        *(_QWORD *)(v4 + 8LL * a2++) = *(_QWORD *)(v4 + 8 * v6);
      }
      while ( (unsigned int)v6 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  return v3;
}
