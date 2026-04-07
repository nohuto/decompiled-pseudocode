/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800701B8
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180037B24 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x1800385F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ceilf_0 @ 0x180050552 (ceilf_0.c)
 */

void __fastcall CWindowList::OnClientMarginsChange(CWindowList *this, struct CWindowData *a2)
{
  int v3; // eax
  float v4; // xmm0_4
  int v5; // eax
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm0_4
  int v9; // eax
  float v10; // xmm0_4
  _OWORD *v11; // rcx
  int v12; // r8d
  __int128 v13; // xmm0
  CVisual *v14; // rcx
  CWindowIconic *v15; // rcx
  __int64 i; // rdi
  CThumbnailVisual *v17; // rcx
  __int64 v18; // rax
  __int64 j; // rdi
  CThumbnailVisual *v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-18h] BYREF

  v3 = (int)ceilf_0((float)*((int *)a2 + 59) * *((float *)a2 + 43));
  v4 = (float)*((int *)a2 + 60);
  LODWORD(v21) = v3;
  v5 = (int)ceilf_0(v4 * *((float *)a2 + 43));
  v6 = (float)*((int *)a2 + 61);
  DWORD1(v21) = v5;
  v7 = (int)ceilf_0(v6 * *((float *)a2 + 44));
  v8 = (float)*((int *)a2 + 62);
  DWORD2(v21) = v7;
  v9 = (int)ceilf_0(v8 * *((float *)a2 + 44));
  v10 = (float)*((int *)a2 + 67);
  HIDWORD(v21) = v9;
  ceilf_0(v10 * *((float *)a2 + 43));
  if ( operator!=((_DWORD *)a2 + 16, &v21) || *((_DWORD *)a2 + 24) != v12 )
  {
    v13 = v21;
    *((_DWORD *)a2 + 24) = v12;
    *v11 = v13;
    v14 = (CVisual *)*((_QWORD *)a2 + 48);
    if ( v14 )
      CVisual::SetDirtyFlags(v14, 0x2000);
    v15 = (CWindowIconic *)*((_QWORD *)a2 + 52);
    if ( v15 )
      CWindowIconic::UpdateSizeOrMargins(v15, 0);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 130); i = (unsigned int)(i + 1) )
    {
      v17 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 62) + 8 * i) + 88LL);
      if ( v17 )
      {
        v18 = *((_QWORD *)v17 + 44);
        if ( v18 )
        {
          if ( *(_DWORD *)(v18 + 77) )
            CThumbnailVisual::SetDirtyFlags(v17, 0x4000);
        }
      }
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 122); j = (unsigned int)(j + 1) )
    {
      v20 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 58) + 8 * j) + 88LL);
      if ( v20 )
        CThumbnailVisual::SetDirtyFlags(v20, 4096);
    }
  }
}
