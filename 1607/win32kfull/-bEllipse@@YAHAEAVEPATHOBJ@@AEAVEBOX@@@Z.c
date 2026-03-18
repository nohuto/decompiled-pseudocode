/*
 * XREFs of ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C02A9B84
 * Callers:
 *     NtGdiCreateEllipticRgn @ 0x1C0290560 (NtGdiCreateEllipticRgn.c)
 *     NtGdiEllipse @ 0x1C0292B20 (NtGdiEllipse.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall bEllipse(struct EPATHOBJ *a1, struct EBOX *a2)
{
  __int64 v2; // r14
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  LONG v8; // eax
  struct _POINTL v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  struct _POINTL v15; // [rsp+20h] [rbp-49h] BYREF
  struct _POINTL v16; // [rsp+30h] [rbp-39h] BYREF
  int v17; // [rsp+38h] [rbp-31h]
  int v18; // [rsp+3Ch] [rbp-2Dh]
  struct _POINTL v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  int v21; // [rsp+50h] [rbp-19h]
  int v22; // [rsp+54h] [rbp-15h]
  __int64 v23; // [rsp+58h] [rbp-11h]
  __int64 v24; // [rsp+60h] [rbp-9h]
  int v25; // [rsp+68h] [rbp-1h]
  int v26; // [rsp+6Ch] [rbp+3h]
  __int64 v27; // [rsp+70h] [rbp+7h]
  __int64 v28; // [rsp+78h] [rbp+Fh]
  int v29; // [rsp+80h] [rbp+17h]
  int v30; // [rsp+84h] [rbp+1Bh]
  __int64 v31; // [rsp+88h] [rbp+1Fh]

  v2 = 1922922357LL * *((int *)a2 + 12);
  v5 = 1922922357LL * *((int *)a2 + 13);
  v6 = 1922922357LL * *((int *)a2 + 14);
  v7 = 1922922357LL * *((int *)a2 + 15);
  v8 = *((_DWORD *)a2 + 14) + *((_DWORD *)a2 + 8);
  v15.y = *((_DWORD *)a2 + 15) + *((_DWORD *)a2 + 9);
  v7 >>= 32;
  v2 >>= 32;
  v5 >>= 32;
  v6 >>= 32;
  v15.x = v8;
  EPATHOBJ::bMoveTo(a1, 0LL, &v15);
  v16 = (struct _POINTL)*((_QWORD *)a2 + 1);
  v9 = v16;
  v16.x -= v6;
  v16.y -= v7;
  v17 = v9.x - v2;
  v18 = v9.y - v5;
  v19 = v9;
  v19.x = v9.x - *((_DWORD *)a2 + 12);
  v19.y = v9.y - *((_DWORD *)a2 + 13);
  v20 = *((_QWORD *)a2 + 2);
  v10 = v20;
  LODWORD(v20) = v2 + v20;
  HIDWORD(v20) += v5;
  v21 = v10 - v6;
  v22 = HIDWORD(v10) - v7;
  v23 = v10;
  LODWORD(v23) = v10 - *((_DWORD *)a2 + 14);
  HIDWORD(v23) = HIDWORD(v10) - *((_DWORD *)a2 + 15);
  v24 = *((_QWORD *)a2 + 3);
  v11 = v24;
  LODWORD(v24) = v6 + v24;
  HIDWORD(v24) += v7;
  v25 = v2 + v11;
  v26 = v5 + HIDWORD(v11);
  v27 = v11;
  LODWORD(v27) = *((_DWORD *)a2 + 12) + v11;
  HIDWORD(v27) = *((_DWORD *)a2 + 13) + HIDWORD(v11);
  v28 = *((_QWORD *)a2 + 4);
  v12 = v28;
  LODWORD(v28) = v28 - v2;
  HIDWORD(v28) -= v5;
  v29 = v6 + v12;
  v30 = v7 + HIDWORD(v12);
  v31 = v12;
  LODWORD(v31) = *((_DWORD *)a2 + 14) + v12;
  HIDWORD(v31) = *((_DWORD *)a2 + 15) + HIDWORD(v12);
  v13 = 0;
  if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v16, 0xCu) )
    return EPATHOBJ::bCloseFigure(a1) != 0;
  return v13;
}
