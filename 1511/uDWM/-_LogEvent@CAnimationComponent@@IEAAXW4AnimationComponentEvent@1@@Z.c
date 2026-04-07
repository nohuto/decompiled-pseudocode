/*
 * XREFs of ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000BD50
 * Callers:
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000BD94 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BE78 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x180099714 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x180099760 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 * Callees:
 *     Template_pdd @ 0x180099794 (Template_pdd.c)
 */

__int64 __fastcall CAnimationComponent::_LogEvent(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  void *v4; // rdx
  __int64 result; // rax

  if ( !a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      return result;
    v4 = &UdwmAnimationComponent_Created;
    return Template_pdd(
             a1,
             (_DWORD)v4,
             *(_QWORD *)(a1 + 16),
             *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL),
             *(_BYTE *)(a1 + 24));
  }
  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v4 = &UdwmAnimationComponent_Ghosted;
        return Template_pdd(
                 a1,
                 (_DWORD)v4,
                 *(_QWORD *)(a1 + 16),
                 *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL),
                 *(_BYTE *)(a1 + 24));
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v4 = &UdwmAnimationComponent_Morphed;
      return Template_pdd(
               a1,
               (_DWORD)v4,
               *(_QWORD *)(a1 + 16),
               *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL),
               *(_BYTE *)(a1 + 24));
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v4 = &UdwmAnimationComponent_Destroyed;
    return Template_pdd(
             a1,
             (_DWORD)v4,
             *(_QWORD *)(a1 + 16),
             *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL),
             *(_BYTE *)(a1 + 24));
  }
  return result;
}
