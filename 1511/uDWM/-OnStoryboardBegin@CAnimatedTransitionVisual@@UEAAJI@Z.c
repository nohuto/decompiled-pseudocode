/*
 * XREFs of ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x18000DDC0
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180039758 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D4CC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     Template_ddddddddddffffqqq @ 0x18008E3D4 (Template_ddddddddddffffqqq.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardBegin(CAnimatedTransitionVisual *this, char a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // esi
  __int64 v10; // rax

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  LOBYTE(v7) = 0;
  v8 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x97u);
  }
  else
  {
    if ( !*((_BYTE *)this + 952) && *((float *)this + 231) == 0.0 )
    {
      *((_DWORD *)this + 182) = *((_DWORD *)this + 228);
      *((_QWORD *)this + 92) = 0LL;
      *((_DWORD *)this + 186) = 0;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000u);
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v10 = *((_QWORD *)this + 3);
      if ( v10 )
        v7 = *(_DWORD *)(v10 + 24);
      Template_ddddddddddffffqqq(
        v6,
        v5,
        *((_DWORD *)this + 180),
        *((_DWORD *)this + 181),
        *((_DWORD *)this + 210),
        *((_DWORD *)this + 211),
        *((_DWORD *)this + 212),
        *((_DWORD *)this + 213),
        *((_DWORD *)this + 214),
        *((_DWORD *)this + 215),
        *((_DWORD *)this + 216),
        *((_DWORD *)this + 217),
        *((_DWORD *)this + 228),
        *((_DWORD *)this + 229),
        *((_DWORD *)this + 226),
        *((_DWORD *)this + 227),
        v7,
        *((_DWORD *)this + 236),
        a2);
    }
    *((_BYTE *)this + 969) = 1;
  }
  return v8;
}
