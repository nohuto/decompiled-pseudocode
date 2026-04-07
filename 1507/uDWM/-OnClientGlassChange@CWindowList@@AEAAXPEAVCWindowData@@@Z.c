/*
 * XREFs of ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002CE7C
 * Callers:
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002BC10 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002CFC0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x18003545C (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ceilf_0 @ 0x180049872 (ceilf_0.c)
 */

void __fastcall CWindowList::OnClientGlassChange(CWindowList *this, struct CWindowData *a2)
{
  float v3; // xmm6_4
  float v4; // xmm0_4
  float v5; // xmm6_4
  __int128 v6; // xmm6
  _OWORD *v7; // rcx
  CVisual *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h]

  if ( *(_QWORD *)((char *)a2 + 252) == 0x7FFFFFFF7FFFFFFFLL
    && *((_DWORD *)a2 + 65) == 0x7FFFFFFF
    && *((_DWORD *)a2 + 66) == 0x7FFFFFFF )
  {
    v6 = *(_OWORD *)((char *)a2 + 252);
  }
  else
  {
    v3 = *((float *)a2 + 43);
    LODWORD(v9) = (int)ceilf_0((float)*((int *)a2 + 63) * v3);
    v4 = ceilf_0((float)*((int *)a2 + 64) * v3);
    v5 = *((float *)a2 + 44);
    DWORD1(v9) = (int)v4;
    DWORD2(v9) = (int)ceilf_0((float)*((int *)a2 + 65) * v5);
    HIDWORD(v9) = (int)ceilf_0((float)*((int *)a2 + 66) * v5);
    v6 = v9;
  }
  if ( (unsigned __int8)operator!=((char *)a2 + 80) )
  {
    *v7 = v6;
    v8 = (CVisual *)*((_QWORD *)a2 + 46);
    if ( v8 )
      CVisual::SetDirtyFlags(v8, 0x4000);
  }
}
