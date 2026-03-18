/*
 * XREFs of ??1CD2DBitmapBrushWrapper@@UEAA@XZ @ 0x1800B0A24
 * Callers:
 *     ??_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z @ 0x1800B0A80 (--_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapBrushWrapper::~CD2DBitmapBrushWrapper(CD2DBitmapBrushWrapper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CD2DBitmapBrushWrapper::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
