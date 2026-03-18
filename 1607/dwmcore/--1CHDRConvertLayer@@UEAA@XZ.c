/*
 * XREFs of ??1CHDRConvertLayer@@UEAA@XZ @ 0x180121360
 * Callers:
 *     ??_GCHDRConvertLayer@@UEAAPEAXI@Z @ 0x180121540 (--_GCHDRConvertLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHDRConvertLayer::~CHDRConvertLayer(CHDRConvertLayer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CHDRConvertLayer::`vftable';
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CExternalLayer::~CExternalLayer(this);
}
