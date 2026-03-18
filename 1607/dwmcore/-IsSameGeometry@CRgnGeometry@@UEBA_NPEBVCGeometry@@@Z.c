/*
 * XREFs of ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x18002FA90
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180050630 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800234A4 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002FC70 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRgnGeometry::IsSameGeometry(CRgnGeometry *this, __m128i *a2)
{
  char v2; // bl
  __int64 (__fastcall *v5)(__m128i *, __int64); // rax
  int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // r8d
  int v11; // r9d
  __m128i v13; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    v5 = *(__int64 (__fastcall **)(__m128i *, __int64))(a2->m128i_i64[0] + 48);
    if ( (char *)v5 == (char *)CRgnGeometry::IsOfType ? CRgnGeometry::IsOfType(a2, 70LL) : (unsigned __int8)v5(a2, 70LL) )
    {
      v13 = a2[11];
      if ( *((_DWORD *)this + 44) >> 4 == (unsigned int)_mm_cvtsi128_si32(v13) >> 4 )
      {
        v7 = 0;
        v2 = 1;
        if ( *((_DWORD *)this + 44) >> 4 )
        {
          v8 = *((_QWORD *)this + 23);
          v9 = v13.m128i_i64[1];
          while ( !operator!=((_DWORD *)(v8 + 16LL * v7), (_DWORD *)(v9 + 16LL * v7)) )
          {
            v7 = v10 + 1;
            if ( v7 >= v11 )
              return v2;
          }
          return 0;
        }
      }
    }
  }
  return v2;
}
