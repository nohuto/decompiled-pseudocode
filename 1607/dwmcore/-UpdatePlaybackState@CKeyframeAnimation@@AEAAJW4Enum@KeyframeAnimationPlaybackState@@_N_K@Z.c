/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800871E8
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180019470 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x180087A30 (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::UpdatePlaybackState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_QWORD *)(a1 + 384) )
  {
    if ( a2 > 2 )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x367u);
    }
    else
    {
      *(_DWORD *)(a1 + 448) = a2;
      if ( !*(_DWORD *)(a1 + 444) && a2 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 408) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 472LL);
        else
          *(_QWORD *)(a1 + 408) = a4;
        *(_QWORD *)(a1 + 416) = *(_QWORD *)(a1 + 408);
        if ( a2 == 1 )
        {
          ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 168LL) + 96LL);
          *(_BYTE *)(a1 + 452) |= 1u;
        }
      }
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 168LL) + 384LL) |= 2u;
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x360u);
  }
  return v4;
}
