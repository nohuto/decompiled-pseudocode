/*
 * XREFs of ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x18008E0F8
 * Callers:
 *     ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x18008E0A0 (--_GCDXGIAdapterLimited@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDXGIAdapterLimited::~CDXGIAdapterLimited(CDXGIAdapterLimited *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  unsigned int i; // esi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r14

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CDXGIAdapterLimited::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 4));
  for ( i = 0; i < *((_DWORD *)this + 94); ++i )
  {
    v5 = 264LL * i;
    v6 = *(_QWORD *)(v5 + *((_QWORD *)this + 44));
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = *(_QWORD *)(v5 + *((_QWORD *)this + 44) + 8);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 44);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
