/*
 * XREFs of ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002FFEC
 * Callers:
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EEF0 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180016460 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ceilf_0 @ 0x18004FF12 (ceilf_0.c)
 */

void __fastcall CWindowList::OnClientGlassChange(CWindowList *this, struct CWindowData *a2)
{
  float v3; // xmm6_4
  int v4; // eax
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm6_4
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm0_4
  __int128 v12; // xmm6
  _OWORD *v13; // rcx
  CVisual *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)((char *)a2 + 252) == 0x7FFFFFFF7FFFFFFFLL
    && *((_DWORD *)a2 + 65) == 0x7FFFFFFF
    && *((_DWORD *)a2 + 66) == 0x7FFFFFFF )
  {
    v12 = *(_OWORD *)((char *)a2 + 252);
    v15 = v12;
  }
  else
  {
    v3 = *((float *)a2 + 43);
    v4 = (int)ceilf_0((float)*((int *)a2 + 63) * v3);
    v5 = (float)*((int *)a2 + 64);
    LODWORD(v15) = v4;
    v6 = ceilf_0(v5 * v3);
    v7 = *((float *)a2 + 44);
    v8 = (int)v6;
    v9 = (float)*((int *)a2 + 65);
    DWORD1(v15) = v8;
    v10 = (int)ceilf_0(v9 * v7);
    v11 = (float)*((int *)a2 + 66);
    DWORD2(v15) = v10;
    HIDWORD(v15) = (int)ceilf_0(v11 * v7);
    v12 = v15;
  }
  if ( operator!=((_DWORD *)a2 + 20, &v15) )
  {
    *v13 = v12;
    v14 = (CVisual *)*((_QWORD *)a2 + 48);
    if ( v14 )
      CVisual::SetDirtyFlags(v14, 0x4000);
  }
}
