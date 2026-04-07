/*
 * XREFs of ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x180009D18
 * Callers:
 *     ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x180009CC0 (--_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18001A054 (--1CResource@@MEAA@XZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImageBrushResource::~CCachedVisualImageBrushResource(
        CCachedVisualImageBrushResource *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  _QWORD v5[2]; // [rsp+90h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+A0h] [rbp-28h] BYREF

  *(_QWORD *)this = &CCachedVisualImageBrushResource::`vftable';
  v4 = *((_QWORD *)this + 2);
  v5[0] = 0LL;
  v5[1] = 0LL;
  v6[0] = 0LL;
  v6[1] = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, _QWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v4 + 1152LL))(
    v4,
    *((unsigned int *)this + 6),
    a3,
    v6,
    v5,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  CResource::~CResource(this);
}
