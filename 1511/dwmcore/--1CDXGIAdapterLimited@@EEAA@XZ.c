/*
 * XREFs of ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x18006B570
 * Callers:
 *     ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x18006AFF0 (--_GCDXGIAdapterLimited@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
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
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 352);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
