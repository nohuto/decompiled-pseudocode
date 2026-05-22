/*
 * XREFs of ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 */

void __fastcall MPCClickerProcessor::PostHitTestProcessing(
        MPCGestureHandler **this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  int v5; // eax
  int v6; // edx
  bool v7; // zf
  __int128 v8; // xmm0

  if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) && *((_BYTE *)a3 + 785) )
  {
    v5 = *((_DWORD *)a3 + 177);
    v6 = 0;
    if ( v5 == 2 )
    {
      v6 = 1;
    }
    else if ( (unsigned int)(v5 - 4) <= 1 )
    {
      v6 = 2;
    }
    v7 = *((_BYTE *)a3 + 1073) == 0;
    v8 = *(_OWORD *)((char *)a3 + 796);
    *((_DWORD *)a3 + 316) = *((_DWORD *)a3 + 197);
    *((_DWORD *)a3 + 317) = *((_DWORD *)a3 + 198);
    *((_DWORD *)a3 + 322) = *((_DWORD *)a3 + 204);
    *((_DWORD *)a3 + 312) = v6;
    *((_BYTE *)a3 + 1292) = !v7;
    *(_OWORD *)((char *)a3 + 1272) = v8;
    MPCGestureHandler::DownLevelTo2D(this[255], a3);
  }
}
