/*
 * XREFs of ??1CD2DResource@@MEAA@XZ @ 0x1800277C4
 * Callers:
 *     ??1CD2DEffect@@MEAA@XZ @ 0x18000FD78 (--1CD2DEffect@@MEAA@XZ.c)
 *     ??1CD2DCommandList@@MEAA@XZ @ 0x180025DC0 (--1CD2DCommandList@@MEAA@XZ.c)
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x18003096C (--1CD2DBitmap@@MEAA@XZ.c)
 *     ??_ECD2DResource@@MEAAPEAXI@Z @ 0x180148040 (--_ECD2DResource@@MEAAPEAXI@Z.c)
 *     ??1CD2DInk@@MEAA@XZ @ 0x18014DA88 (--1CD2DInk@@MEAA@XZ.c)
 *     ??1CD2DMesh@@MEAA@XZ @ 0x18014DF34 (--1CD2DMesh@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CD2DResource::~CD2DResource(CD2DResource *this)
{
  bool v1; // zf
  char *v3; // rax
  __int64 v4; // rdx
  char **v5; // rcx

  v1 = *((_BYTE *)this + 32) == 0;
  *(_QWORD *)this = &CD2DResource::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  if ( !v1 )
  {
    v3 = (char *)this + 40;
    v4 = *((_QWORD *)this + 5);
    v5 = (char **)*((_QWORD *)this + 6);
    if ( *(char **)(v4 + 8) != v3 || *v5 != v3 )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    *((_BYTE *)this + 32) = 0;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 56);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
