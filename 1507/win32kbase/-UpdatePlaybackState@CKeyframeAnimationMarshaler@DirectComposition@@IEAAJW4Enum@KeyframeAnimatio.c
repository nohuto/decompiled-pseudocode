/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C00D6DFC
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D6B30 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = *(_DWORD *)(a1 + 140);
  v3 = 0;
  if ( v2 || a2 != 1 )
  {
    if ( v2 == 1 && a2 == 2 )
    {
      *(LARGE_INTEGER *)(a1 + 160) = KeQueryPerformanceCounter(0LL);
    }
    else if ( v2 == 2 && a2 == 1 )
    {
      *(_QWORD *)(a1 + 152) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 160) = 0LL;
    }
    else if ( !v2 || a2 )
    {
      if ( v2 != a2 )
        return (unsigned int)-1073741811;
    }
    else
    {
      *(_QWORD *)(a1 + 152) = 0LL;
      *(_QWORD *)(a1 + 160) = 0LL;
    }
  }
  else
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_BYTE *)(a1 + 168) &= ~1u;
    *(LARGE_INTEGER *)(a1 + 152) = PerformanceCounter;
  }
  *(_DWORD *)(a1 + 140) = a2;
  return v3;
}
