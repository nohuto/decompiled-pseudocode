/*
 * XREFs of ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18002A9CC
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041030 (-Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  __int64 v1; // rcx
  CTopLevelWindow3D *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CTopLevelWindow3D::`vftable'{for `CVisual'};
  *(_QWORD *)(v1 + 264) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_BYTE *)(v1 + 274) = 0;
  *(_QWORD *)(v1 + 440) = 0LL;
  *(_DWORD *)(v1 + 448) = 0;
  *(_QWORD *)(v1 + 452) = 0LL;
  *(_DWORD *)(v1 + 460) = 0;
  result = (CTopLevelWindow3D *)v1;
  *(_BYTE *)(v1 + 464) = 0;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  return result;
}
