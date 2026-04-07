/*
 * XREFs of ??1CResource@@MEAA@XZ @ 0x18001A054
 * Callers:
 *     ??_ECGaussianBlurEffect@@UEAAPEAXI@Z @ 0x1800055D0 (--_ECGaussianBlurEffect@@UEAAPEAXI@Z.c)
 *     ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x180009D18 (--1CCachedVisualImageBrushResource@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CResource::~CResource(CResource *this)
{
  *(_QWORD *)this = &CResource::`vftable';
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 120LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 6));
  *(_QWORD *)this = &CBaseObject::`vftable';
}
