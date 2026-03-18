/*
 * XREFs of OffPlgBlt @ 0x1C02C04B4
 * Callers:
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C026D2E0 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00EA440 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffPlgBlt(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int),
        LONG *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _CLIPOBJ *a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        __int64 a13,
        int a14)
{
  LONG v14; // r14d
  LONG v15; // esi
  LONG v16; // edx
  _DWORD *v17; // rdi
  _DWORD *v18; // rbx
  LONG x; // r15d
  LONG y; // r12d
  unsigned int v21; // ebx
  _DWORD v23[2]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v24; // [rsp+68h] [rbp-61h]
  __int64 v25; // [rsp+70h] [rbp-59h]
  __int64 v26; // [rsp+78h] [rbp-51h]
  __int64 v27; // [rsp+80h] [rbp-49h]
  __int64 (__fastcall *v28)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int); // [rsp+88h] [rbp-41h]
  __int64 v29; // [rsp+90h] [rbp-39h]
  __int64 v30; // [rsp+98h] [rbp-31h]
  _DWORD v31[4]; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD v32[6]; // [rsp+B0h] [rbp-19h] BYREF

  v14 = a2[1];
  v15 = *a2;
  v16 = *a2;
  v17 = a10;
  v18 = a12;
  x = gptlZero.x;
  y = gptlZero.y;
  v25 = a5;
  v24 = a6;
  v27 = a8;
  v29 = a9;
  v26 = a3;
  v28 = a1;
  v30 = a13;
  CLIPOBJ_vOffset(a7, v16, v14);
  if ( a10 )
  {
    v23[0] = v15 + *a10;
    v17 = v23;
    v23[1] = v14 + a10[1];
  }
  if ( a12 )
  {
    v31[0] = x + *a12;
    v31[2] = x + a12[2];
    v31[1] = y + a12[1];
    v18 = v31;
    v31[3] = y + a12[3];
  }
  v32[0] = 16 * v15 + *a11;
  v32[2] = 16 * v15 + a11[2];
  v32[4] = 16 * v15 + a11[4];
  v32[1] = 16 * v14 + a11[1];
  v32[3] = 16 * v14 + a11[3];
  v32[5] = 16 * v14 + a11[5];
  v21 = v28(v26, v25, v24, a7, v27, v29, v17, v32, v18, v30, a14);
  CLIPOBJ_vOffset(a7, -v15, -v14);
  return v21;
}
