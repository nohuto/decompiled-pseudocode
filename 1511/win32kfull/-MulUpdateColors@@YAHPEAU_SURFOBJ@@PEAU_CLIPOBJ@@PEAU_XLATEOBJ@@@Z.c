/*
 * XREFs of ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02983D4
 * Callers:
 *     NtGdiUpdateColors @ 0x1C02B1C00 (NtGdiUpdateColors.c)
 * Callees:
 *     OffCopyBits @ 0x1C00EAB10 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall MulUpdateColors(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _XLATEOBJ *a3)
{
  RECTL rclBounds; // xmm0
  DHPDEV dhpdev; // rax
  unsigned int v7; // ebp
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // r8
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v15; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16[2]; // [rsp+58h] [rbp-50h] BYREF
  RECTL v17; // [rsp+68h] [rbp-40h] BYREF

  rclBounds = a2->rclBounds;
  dhpdev = a1->dhpdev;
  v7 = 1;
  v17 = rclBounds;
  v8 = *(__int64 **)dhpdev;
  if ( *(_QWORD *)dhpdev )
  {
    do
    {
      v9 = v8[6];
      if ( (*(_DWORD *)(v9 + 2196) & 0x100) != 0
        && bIntersect(&v17, (const struct _RECTL *)((char *)v8 + 28), (struct _RECTL *)v16) )
      {
        v10 = *(__m128i *)v16;
        LODWORD(v15) = _mm_cvtsi128_si32(*(__m128i *)v16);
        a2->rclBounds = *(RECTL *)v16;
        v11 = *(_QWORD *)(v9 + 2576);
        v12 = v8[8];
        HIDWORD(v15) = _mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
        if ( (*(_DWORD *)(v11 + 112) & 0x400) != 0 )
          v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v9 + 2872);
        else
          v13 = EngCopyBits;
        v7 &= OffCopyBits(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v13,
                (LONG *)v8 + 18,
                v12,
                (int *)v8 + 18,
                v12,
                a2,
                (__int64)a3,
                v16,
                &v15);
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 );
    rclBounds = v17;
  }
  a2->rclBounds = rclBounds;
  return v7;
}
