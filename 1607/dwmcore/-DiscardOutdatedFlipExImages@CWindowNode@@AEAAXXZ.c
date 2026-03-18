/*
 * XREFs of ?DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ @ 0x18013FF88
 * Callers:
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180140BF0 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18010938C (-ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

void __fastcall CWindowNode::DiscardOutdatedFlipExImages(struct CResource ***this)
{
  struct CResource **v2; // rbx
  int v3; // eax
  struct CResource **v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx

  CWindowNode::ProcessReadyFlipExImages((CWindowNode *)this, 0LL);
  while ( *((_DWORD *)this + 248) > 0x10u )
  {
    v2 = this[121];
    CResource::UnRegisterNotifierInternal((CResource *)this, *v2);
    *v2 = 0LL;
    v3 = *((_DWORD *)this + 248);
    if ( v3 )
    {
      v4 = this[121];
      v5 = 0LL;
      if ( v3 != 1 )
      {
        do
        {
          v6 = (unsigned int)(v5 + 1);
          v4[v5] = v4[v6];
          v5 = v6;
        }
        while ( (unsigned int)v6 < *((_DWORD *)this + 248) - 1 );
      }
      --*((_DWORD *)this + 248);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
    }
  }
}
