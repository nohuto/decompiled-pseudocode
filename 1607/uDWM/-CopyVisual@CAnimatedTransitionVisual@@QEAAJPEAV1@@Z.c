/*
 * XREFs of ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180005B88
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18000C56C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180014640 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001517C (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180020960 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::CopyVisual(
        CAnimatedTransitionVisual *this,
        struct CAnimatedTransitionVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // edi
  float v11; // xmm1_4

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x283u);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 212) - *((_DWORD *)a2 + 210);
    if ( v6 < 0 )
      v6 = 0;
    v7 = *((_DWORD *)a2 + 213) - *((_DWORD *)a2 + 211);
    if ( v7 < 0 )
      v7 = 0;
    v8 = RoundToNearestInt((float)*((int *)a2 + 210) + *((float *)a2 + 184));
    *((_DWORD *)this + 210) = v8;
    v9 = v8;
    v10 = RoundToNearestInt((float)*((int *)a2 + 211) + *((float *)a2 + 185));
    *((_DWORD *)this + 211) = v10;
    *((_DWORD *)this + 212) = RoundToNearestInt((float)((float)v6 * *((float *)this + 187)) + (float)v9);
    *((_DWORD *)this + 213) = RoundToNearestInt((float)((float)v7 * *((float *)this + 188)) + (float)v10);
    *((float *)this + 226) = *((float *)a2 + 226) + *((float *)a2 + 186);
    if ( !*((_BYTE *)this + 953) )
      *((_DWORD *)this + 228) = *((_DWORD *)a2 + 182);
    v11 = *((float *)this + 228);
    *((float *)this + 182) = v11;
    *(_OWORD *)((char *)this + 808) = *(_OWORD *)((char *)a2 + 808);
    *((_BYTE *)this + 970) = *((_BYTE *)a2 + 970);
    *((_BYTE *)this + 971) = *((_BYTE *)a2 + 971);
    *(_OWORD *)((char *)this + 872) = *(_OWORD *)((char *)a2 + 808);
    if ( !*((_BYTE *)this + 960) )
    {
      CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v11);
      CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    }
    *((_BYTE *)this + 952) = 1;
    *((_DWORD *)this + 241) = *((_DWORD *)a2 + 241);
    v5 = 0;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000u);
  }
  return v5;
}
