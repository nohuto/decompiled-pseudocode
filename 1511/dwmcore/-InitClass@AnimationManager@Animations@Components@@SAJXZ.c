/*
 * XREFs of ?InitClass@AnimationManager@Animations@Components@@SAJXZ @ 0x180163A64
 * Callers:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18012B850 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Now@Time@Animations@Components@@SA?AV123@XZ @ 0x180163BA4 (-Now@Time@Animations@Components@@SA-AV123@XZ.c)
 */

__int64 Components::Animations::AnimationManager::InitClass(void)
{
  unsigned int v0; // esi
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !Components::Animations::AnimationManager::s_PORT_pSingleton )
  {
    v1 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           448LL);
    v2 = v1;
    if ( v1 )
    {
      *(_QWORD *)v1 = &Components::Animations::AnimationManager::`vftable';
      *(_QWORD *)(v1 + 8) = v1 + 24;
      *(_DWORD *)(v1 + 20) = 8;
      *(_DWORD *)(v1 + 16) = 0;
      *(_QWORD *)(v1 + 88) = v1 + 104;
      *(_DWORD *)(v1 + 100) = 8;
      *(_DWORD *)(v1 + 96) = 0;
      *(_QWORD *)(v1 + 168) = v1 + 184;
      *(_DWORD *)(v1 + 180) = 8;
      *(_DWORD *)(v1 + 176) = 0;
      *(_QWORD *)(v1 + 376) = 0LL;
      *(_QWORD *)(v1 + 384) = 0LL;
      *(_QWORD *)(v1 + 408) = 0LL;
      *(_QWORD *)(v1 + 416) = 0LL;
      *(_QWORD *)(v1 + 432) = 0LL;
      *(_QWORD *)(v1 + 440) = 0LL;
    }
    else
    {
      v2 = 0LL;
    }
    if ( v2 )
    {
      *(_QWORD *)(v2 + 440) = 2500 * Components::Animations::Time::s_luFreq.QuadPart / 1000000;
      v3 = *(_QWORD *)Components::Animations::Time::Now(&v5);
      *(_BYTE *)(v2 + 392) &= ~1u;
      *(_QWORD *)(v2 + 400) = 0x3FF0000000000000LL;
      *(_QWORD *)(v2 + 376) = v3;
      Components::Animations::AnimationManager::s_PORT_pSingleton = (Components::Animations::AnimationManager *)v2;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return v0;
}
