/*
 * XREFs of EngDrawStream @ 0x1401B7B20
 * Callers:
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1400644A0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x14030D510 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 * Callees:
 *     ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1401B7D74 (-bRedirHooked@SURFACE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EngDrawStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        unsigned int a7,
        __int64 a8,
        _QWORD *a9)
{
  int v9; // ebx
  unsigned int v10; // r14d
  int *v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // r12
  int *v16; // rdi
  __int64 v17; // r15
  __int64 v18; // r11
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v22; // r8
  int v23; // edx
  int v24; // ecx
  __int64 (__fastcall *v25)(int, __int64, int, int, __int64, __int64, __int64, __int64); // r10
  __int64 (__fastcall *v26)(int, __int64, int, int, __int64, __int64, __int64, __int64); // r8
  _QWORD v27[4]; // [rsp+58h] [rbp-69h] BYREF
  int v28; // [rsp+78h] [rbp-49h]
  _QWORD *v29; // [rsp+80h] [rbp-41h]
  __int64 v30; // [rsp+88h] [rbp-39h]
  __int64 v31; // [rsp+90h] [rbp-31h]
  __int64 v32; // [rsp+98h] [rbp-29h]
  int v33; // [rsp+A0h] [rbp-21h] BYREF
  int v34; // [rsp+A4h] [rbp-1Dh]
  int v35; // [rsp+A8h] [rbp-19h]
  int v36; // [rsp+ACh] [rbp-15h]

  v9 = 0;
  v10 = a7;
  v29 = a9;
  v31 = a3;
  v12 = a6;
  v32 = a2;
  v13 = 1;
  v30 = a4;
  v14 = (a1 - 24) & -(__int64)(a1 != 0);
  v28 = 0;
  v15 = *(_QWORD *)(v14 + 0x30);
  if ( a7 >= 4 )
  {
    v16 = (int *)(a8 + 8);
    do
    {
      if ( *(v16 - 2) != 9 || v10 < 0x3C )
        return v13;
      v17 = *v12;
      v33 = *(v16 - 1);
      v18 = *v16;
      v34 = *v16;
      v19 = v16[1];
      v35 = v16[1];
      v20 = v16[2];
      v36 = v16[2];
      if ( (unsigned __int64)(v17 + v33 + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v17 + v19 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v22 = a6[1];
        if ( (unsigned __int64)(v22 + v18 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v22 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v23 = v17 + v33;
          v24 = v19 + v17;
          v34 = v22 + v18;
          v33 = v23;
          v36 = v22 + v20;
          v35 = v19 + v17;
          if ( v23 >= (int)v19 + (int)v17 )
          {
            if ( v23 - v24 >= 0 )
            {
LABEL_14:
              v25 = *(__int64 (__fastcall **)(int, __int64, int, int, __int64, __int64, __int64, __int64))(*(_QWORD *)(v14 + 48) + 3408LL);
              if ( v25 )
                v9 |= 1u;
              else
                v25 = EngNineGrid;
              if ( (v9 & 1) != 0 )
                v9 &= ~1u;
              if ( (!*(_QWORD *)(a1 + 16) || (*(_DWORD *)(v15 + 2112) & 0x400) == 0)
                && !(unsigned int)SURFACE::bRedirHooked((SURFACE *)v14)
                && (*(_BYTE *)(v14 + 112) & 0x10) == 0 )
              {
                v25 = v26;
              }
              v27[3] = v29[6];
              v27[2] = v29[5];
              v27[1] = v29[4];
              v27[0] = 33488896LL;
              v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int *, int *, int *, _QWORD *, _QWORD))v25)(
                      a1,
                      v32,
                      v31,
                      v30,
                      &v33,
                      v16 + 3,
                      v16 + 7,
                      v27,
                      0LL);
              goto LABEL_7;
            }
          }
          else if ( v24 - v23 >= 0 )
          {
            goto LABEL_14;
          }
        }
      }
      v13 = 0;
LABEL_7:
      v12 = a6;
      v10 -= 60;
      v16 += 15;
    }
    while ( v10 >= 4 );
  }
  return v13;
}
