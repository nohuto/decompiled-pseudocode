/*
 * XREFs of OffStretchBlt @ 0x1C0147CD4
 * Callers:
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0147A10 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0296EA0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00EA440 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffStretchBlt(
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
  LONG v14; // r13d
  LONG v15; // r12d
  _DWORD *v16; // r15
  LONG x; // edi
  LONG y; // esi
  unsigned int v19; // ebx
  _DWORD v21[2]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v22; // [rsp+68h] [rbp-61h]
  __int64 v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  __int64 v25; // [rsp+80h] [rbp-49h]
  struct _CLIPOBJ *v26; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v27)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int); // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  __int64 v29; // [rsp+A0h] [rbp-29h]
  _DWORD v30[4]; // [rsp+A8h] [rbp-21h] BYREF
  _DWORD v31[4]; // [rsp+B8h] [rbp-11h] BYREF

  v14 = a2[1];
  v15 = *a2;
  v16 = a10;
  x = gptlZero.x;
  y = gptlZero.y;
  v27 = a1;
  v28 = a8;
  v23 = a5;
  v24 = a9;
  v22 = a6;
  v29 = a13;
  v25 = a3;
  v26 = a7;
  CLIPOBJ_vOffset(a7, v15, v14);
  v31[0] = v15 + *a11;
  v31[2] = v15 + a11[2];
  v31[1] = v14 + a11[1];
  v31[3] = v14 + a11[3];
  v30[0] = x + *a12;
  v30[2] = x + a12[2];
  v30[1] = y + a12[1];
  v30[3] = y + a12[3];
  if ( a10 )
  {
    v21[0] = v15 + *a10;
    v16 = v21;
    v21[1] = v14 + a10[1];
  }
  v19 = v27(v25, v23, v22, v26, v28, v24, v16, v31, v30, v29, a14);
  CLIPOBJ_vOffset(v26, -v15, -v14);
  return v19;
}
