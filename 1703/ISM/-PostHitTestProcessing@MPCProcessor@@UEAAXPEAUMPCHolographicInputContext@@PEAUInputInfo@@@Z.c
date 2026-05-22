/*
 * XREFs of ?PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180048290
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 */

void __fastcall MPCProcessor::PostHitTestProcessing(
        MPCGestureHandler **this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  int v5; // eax
  int v6; // edx
  bool v7; // zf
  __int128 v8; // xmm0

  if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
    return;
  if ( *((_BYTE *)a3 + 785) )
  {
    v5 = *((_DWORD *)a3 + 176);
    v6 = 0;
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
        v6 = 1;
      }
      else if ( v5 > 2 )
      {
        if ( v5 > 4 )
        {
          if ( v5 != 7 )
          {
            if ( v5 == 8 )
              v6 = 4;
            goto LABEL_13;
          }
          goto LABEL_12;
        }
        v6 = 2;
      }
LABEL_13:
      v7 = *((_BYTE *)a3 + 1073) == 0;
      v8 = *(_OWORD *)((char *)a3 + 796);
      *((_DWORD *)a3 + 316) = *((_DWORD *)a3 + 197);
      *((_DWORD *)a3 + 317) = *((_DWORD *)a3 + 198);
      *((_DWORD *)a3 + 322) = *((_DWORD *)a3 + 204);
      *((_DWORD *)a3 + 312) = v6;
      *((_BYTE *)a3 + 1292) = !v7;
      *(_OWORD *)((char *)a3 + 1272) = v8;
      MPCGestureHandler::DownLevelTo2D(this[21], a3);
      goto LABEL_14;
    }
LABEL_12:
    v6 = 3;
    goto LABEL_13;
  }
LABEL_14:
  if ( (unsigned int)(*((_DWORD *)a3 + 176) - 2) <= 4 )
  {
    if ( *((_DWORD *)a3 + 324) )
      *((_DWORD *)a3 + 309) = *((_DWORD *)a3 + 336);
    else
      *((_DWORD *)a3 + 309) = 1065353216;
  }
}
