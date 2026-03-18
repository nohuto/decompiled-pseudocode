/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C003B2AC
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C003B850 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = *(_DWORD *)(a1 + 200);
  v3 = 0;
  if ( v2 || a2 != 1 )
  {
    if ( a2 == 2 && v2 == 1 )
    {
      *(LARGE_INTEGER *)(a1 + 224) = KeQueryPerformanceCounter(0LL);
    }
    else if ( v2 == 2 && a2 == 1 )
    {
      *(_QWORD *)(a1 + 216) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a1 + 224) = 0LL;
    }
    else if ( !v2 || a2 )
    {
      if ( v2 != a2 )
        return (unsigned int)-1073741811;
    }
    else
    {
      *(_QWORD *)(a1 + 216) = 0LL;
      *(_QWORD *)(a1 + 224) = 0LL;
      *(_QWORD *)(a1 + 232) = 0LL;
      *(_QWORD *)(a1 + 240) = 0LL;
    }
  }
  else
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_BYTE *)(a1 + 248) &= ~1u;
    *(LARGE_INTEGER *)(a1 + 216) = PerformanceCounter;
  }
  *(_DWORD *)(a1 + 200) = a2;
  return v3;
}
