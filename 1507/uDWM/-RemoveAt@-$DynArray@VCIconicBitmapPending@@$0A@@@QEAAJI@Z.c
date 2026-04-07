/*
 * XREFs of ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800819F8
 * Callers:
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x180008DB0 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030C0C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18007DEBC (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EDE8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x180081D5C (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 *     ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x180098F80 (-NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CIconicBitmapPending,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx

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
        v7 = 2LL * v4;
        v8 = 2LL * ++v4;
        *(_OWORD *)(v6 + 8 * v7) = *(_OWORD *)(v6 + 8 * v8);
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
