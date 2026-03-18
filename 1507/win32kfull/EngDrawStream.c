/*
 * XREFs of EngDrawStream @ 0x1C009B840
 * Callers:
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C028EC10 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02960E0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 * Callees:
 *     ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1C009CE08 (-bRedirHooked@SURFACE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
  unsigned int v11; // edi
  __int64 v12; // r15
  unsigned int v13; // r14d
  __int64 v14; // rbx
  int *v15; // rsi
  __int64 v16; // r11
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // edx
  int v22; // ecx
  bool v23; // sf
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 (__fastcall *v26)(int, int, int, int, __int64, __int64, __int64, __int64); // r10
  __int64 (__fastcall *v27)(int, int, int, int, __int64, __int64, __int64, __int64); // r9
  int v32; // [rsp+70h] [rbp-41h] BYREF
  __int64 v33; // [rsp+78h] [rbp-39h]
  __int64 v34; // [rsp+80h] [rbp-31h]
  __int64 v35; // [rsp+88h] [rbp-29h]
  _QWORD *v36; // [rsp+90h] [rbp-21h]
  int v37; // [rsp+98h] [rbp-19h] BYREF
  int v38; // [rsp+9Ch] [rbp-15h]
  int v39; // [rsp+A0h] [rbp-11h]
  int v40; // [rsp+A4h] [rbp-Dh]

  v11 = 1;
  v36 = a9;
  v12 = SURFOBJ_TO_SURFACE(a1);
  SURFOBJ_TO_SURFACE(a2);
  v13 = a7;
  v14 = *(_QWORD *)(v12 + 48);
  if ( a7 >= 4 )
  {
    v15 = (int *)(a8 + 12);
    do
    {
      if ( *(v15 - 3) != 9 || v13 < 0x3C )
        break;
      v16 = *a6;
      v37 = *(v15 - 2);
      v17 = *(v15 - 1);
      v38 = *(v15 - 1);
      v18 = *v15;
      v39 = *v15;
      v19 = v15[1];
      v40 = v15[1];
      if ( (unsigned __int64)(v16 + v37 + 0x80000000LL) > 0xFFFFFFFF )
        goto LABEL_23;
      if ( (unsigned __int64)(v16 + v18 + 0x80000000LL) > 0xFFFFFFFF )
        goto LABEL_23;
      v20 = a6[1];
      if ( (unsigned __int64)(v20 + v17 + 0x80000000LL) > 0xFFFFFFFF
        || (unsigned __int64)(v20 + v19 + 0x80000000LL) > 0xFFFFFFFF )
      {
        goto LABEL_23;
      }
      v21 = v16 + v37;
      v22 = v16 + v18;
      v37 = v21;
      v39 = v22;
      v38 = v20 + v17;
      v40 = v20 + v19;
      v23 = v21 - v22 < 0;
      if ( v21 < v22 )
        v23 = v22 - v21 < 0;
      if ( v23 )
      {
LABEL_23:
        v11 = 0;
      }
      else
      {
        v24 = *(_QWORD *)(v12 + 48);
        v25 = 0LL;
        v26 = EngNineGrid;
        if ( *(_QWORD *)(v24 + 3448) )
          v26 = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64, __int64))(v24 + 3448);
        if ( (!*(_QWORD *)(a1 + 16) || (*(_DWORD *)(v14 + 2152) & 0x400) == 0)
          && !(unsigned int)SURFACE::bRedirHooked((SURFACE *)v12)
          && (*(_BYTE *)(v12 + 112) & 0x10) == 0 )
        {
          v26 = v27;
        }
        v35 = v36[6];
        v34 = v36[5];
        v33 = v36[4];
        v32 = 33488896;
        v11 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int *, int *, int *, int *, __int64))v26)(
                a1,
                a2,
                a3,
                a4,
                &v37,
                v15 + 2,
                v15 + 6,
                &v32,
                v25);
      }
      v13 -= 60;
      v15 += 15;
    }
    while ( v13 >= 4 );
  }
  return v11;
}
