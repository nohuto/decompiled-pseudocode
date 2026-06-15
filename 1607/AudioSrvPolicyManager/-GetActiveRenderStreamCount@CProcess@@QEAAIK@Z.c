/*
 * XREFs of ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180010178
 * Callers:
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x18000B1D8 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000BB20 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000EE3C (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18000FF60 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180020390 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010DA4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall CProcess::GetActiveRenderStreamCount(CProcess *this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r9d
  int v4; // r11d
  __int64 v5; // r8
  CProcess *i; // r10
  __int64 v7; // rax

  v2 = *((int *)this + 68);
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  for ( i = this; v5 < v2; v3 += *(_DWORD *)(v7 + 4LL * a2) )
  {
    if ( v5 < 0 || v4 >= *((_DWORD *)i + 68) )
    {
      ATL::_AtlRaiseException((unsigned int)this, a2);
      JUMPOUT(0x1800101CELL);
    }
    ++v4;
    LODWORD(this) = a2;
    v7 = *(_QWORD *)(*((_QWORD *)i + 33) + 8 * v5++);
  }
  return v3;
}
