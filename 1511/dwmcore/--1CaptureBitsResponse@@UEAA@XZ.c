/*
 * XREFs of ??1CaptureBitsResponse@@UEAA@XZ @ 0x1800A5104
 * Callers:
 *     ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1800A4E40 (--_GCaptureBitsResponse@@UEAAPEAXI@Z.c)
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18010A0E8 (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x18010AA20 (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CaptureBitsResponse::~CaptureBitsResponse(CaptureBitsResponse *this)
{
  __int64 v1; // rsi
  const void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rsi
  CMILRefCountBase *v6; // rcx
  CMILRefCountBase *v7; // rcx
  __int64 v8; // rsi

  v1 = *((_QWORD *)this + 19);
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = (const void *)*((_QWORD *)this + 17);
  if ( v3 )
    UnmapViewOfFile(v3);
  v4 = (void *)*((_QWORD *)this + 16);
  if ( v4 )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 9));
  v6 = (CMILRefCountBase *)*((_QWORD *)this + 8);
  if ( v6 )
    CMILRefCountBase::Release(v6);
  v7 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v7 )
    CMILRefCountBase::Release(v7);
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 5));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
