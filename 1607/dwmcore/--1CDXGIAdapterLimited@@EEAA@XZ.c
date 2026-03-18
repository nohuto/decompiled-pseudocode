/*
 * XREFs of ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x1800B3394
 * Callers:
 *     ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x1800B2E00 (--_GCDXGIAdapterLimited@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDXGIAdapterLimited::~CDXGIAdapterLimited(CDXGIAdapterLimited *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int i; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CDXGIAdapterLimited::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  for ( i = 0; i < *((_DWORD *)this + 98); ++i )
  {
    v5 = 272LL * i;
    v6 = *(_QWORD *)(v5 + *((_QWORD *)this + 46));
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = *(_QWORD *)(v5 + *((_QWORD *)this + 46) + 8);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 368);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
