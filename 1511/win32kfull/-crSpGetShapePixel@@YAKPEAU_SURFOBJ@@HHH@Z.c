/*
 * XREFs of ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C02605C4
 * Callers:
 *     GrePtInSprite @ 0x1C003BB90 (GrePtInSprite.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall crSpGetShapePixel(struct _SURFOBJ *a1, int a2, int a3, int a4)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  unsigned int v7; // ebx
  __int64 v9; // rdx
  HDEV hdev; // rcx
  __m128i si128; // xmm0
  unsigned int *v12; // rsi
  unsigned int (__fastcall *v13)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, __m128i *, _DWORD *); // rax
  __int64 v14; // rcx
  unsigned int v15; // edx
  _DWORD v17[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-50h] BYREF
  __m128i v19; // [rsp+58h] [rbp-40h] BYREF

  v4 = a2;
  v6 = a3;
  v7 = 0;
  v18[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v18, a1);
  if ( v18[0] )
  {
    v9 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    if ( (*(_DWORD *)(v9 + 116) & 1) != 0 )
    {
      hdev = a1->hdev;
      if ( hdev )
      {
        si128 = _mm_load_si128(&_xmm);
        v12 = *(unsigned int **)(*((_QWORD *)hdev + 141) + 56LL);
        v13 = (unsigned int (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, __m128i *, _DWORD *))*((_QWORD *)hdev + 359);
        *v12 = 0;
        v14 = *((_QWORD *)hdev + 141);
        v19 = si128;
        v17[0] = v4;
        v17[1] = v6;
        if ( v13(v14, a1, 0LL, 0LL, &v19, v17) )
          v7 = *v12;
      }
    }
    else
    {
      v15 = *(_DWORD *)(v6 * *(int *)(v9 + 88) + 4 * v4 + *(_QWORD *)(v9 + 80));
      if ( a4 )
        v7 = v15 & 0xFF00 | ((unsigned __int8)v15 << 16) | BYTE2(v15);
      else
        v7 = v15;
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v18);
  return v7;
}
