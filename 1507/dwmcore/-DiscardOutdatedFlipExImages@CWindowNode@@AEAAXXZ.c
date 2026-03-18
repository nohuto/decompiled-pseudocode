/*
 * XREFs of ?DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ @ 0x180104D9C
 * Callers:
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801067A4 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180079B20 (-ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

void __fastcall CWindowNode::DiscardOutdatedFlipExImages(struct CResource ***this)
{
  struct CResource **v2; // rbx
  int v3; // eax
  struct CResource **v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx

  CWindowNode::ProcessReadyFlipExImages((CWindowNode *)this, 0LL);
  while ( *((_DWORD *)this + 308) > 0x10u )
  {
    v2 = this[151];
    CResource::UnRegisterNotifierInternal((CResource *)this, *v2);
    *v2 = 0LL;
    v3 = *((_DWORD *)this + 308);
    if ( v3 )
    {
      v4 = this[151];
      v5 = 0LL;
      if ( v3 != 1 )
      {
        do
        {
          v6 = (unsigned int)(v5 + 1);
          v4[v5] = v4[v6];
          v5 = v6;
        }
        while ( (unsigned int)v6 < *((_DWORD *)this + 308) - 1 );
      }
      --*((_DWORD *)this + 308);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
    }
  }
}
