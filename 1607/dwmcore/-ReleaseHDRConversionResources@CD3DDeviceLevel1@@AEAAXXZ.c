/*
 * XREFs of ?ReleaseHDRConversionResources@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007F500
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseHDRConversionResources(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 177);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 157);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 176);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (_QWORD *)((char *)this + 1264);
  v6 = 18LL;
  do
  {
    if ( *v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = *((_QWORD *)this + 156);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
