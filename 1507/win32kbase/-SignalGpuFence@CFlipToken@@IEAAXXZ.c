/*
 * XREFs of ?SignalGpuFence@CFlipToken@@IEAAXXZ @ 0x1C00A40D8
 * Callers:
 *     ?InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00E1090 (-InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?SignalDirectFlipFence@CFlipToken@@UEAAXXZ @ 0x1C00E1140 (-SignalDirectFlipFence@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0048480 (-SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 */

void __fastcall CFlipToken::SignalGpuFence(CFlipToken *this)
{
  unsigned __int64 v2; // rax

  if ( !*((_BYTE *)this + 48) )
  {
    v2 = *((_QWORD *)this + 14);
    if ( v2 > 1 )
      CompositionSurfaceObject::SignalGpuFence(*((CompositionSurfaceObject **)this + 4), *((_QWORD *)this + 5), v2 - 1);
  }
  *((_QWORD *)this + 14) = 0LL;
}
