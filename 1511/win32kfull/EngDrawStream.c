/*
 * XREFs of EngDrawStream @ 0x1C00353A0
 * Callers:
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C028EA00 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0295BE0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 * Callees:
 *     ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1C0038DA8 (-bRedirHooked@SURFACE@@QEAAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C0041D3C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EngDrawStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct _POINTL *a6,
        unsigned int a7,
        __int64 a8,
        _QWORD *a9)
{
  unsigned int v11; // esi
  __int64 v12; // r15
  __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 v15; // rbx
  int *v16; // rdi
  int v17; // eax
  bool v18; // sf
  __int64 v19; // rax
  __int64 (__fastcall *v20)(int, int, int, int, __int64, __int64, __int64, __int64); // r10
  __int64 (__fastcall *v21)(int, int, int, int, __int64, __int64, __int64, __int64); // r9
  int v25; // [rsp+68h] [rbp-49h] BYREF
  __int64 v26; // [rsp+70h] [rbp-41h]
  __int64 v27; // [rsp+78h] [rbp-39h]
  __int64 v28; // [rsp+80h] [rbp-31h]
  struct _POINTL *v29; // [rsp+88h] [rbp-29h]
  _DWORD v30[2]; // [rsp+90h] [rbp-21h] BYREF
  int v31; // [rsp+98h] [rbp-19h]
  int v32; // [rsp+9Ch] [rbp-15h]

  v29 = a6;
  v11 = 1;
  v12 = SURFOBJ_TO_SURFACE(a1);
  SURFOBJ_TO_SURFACE(a2);
  v14 = a7;
  v15 = *(_QWORD *)(v12 + 48);
  if ( a7 >= 4 )
  {
    v16 = (int *)(a8 + 12);
    do
    {
      if ( *(v16 - 3) != 9 || v14 < 0x3C )
        break;
      v30[0] = *(v16 - 2);
      v30[1] = *(v16 - 1);
      v31 = *v16;
      v32 = v16[1];
      v17 = ERECTL::bOffsetAdd((ERECTL *)v30, v29, v13);
      v13 = 0LL;
      if ( !v17 )
        goto LABEL_20;
      v18 = v30[0] - v31 < 0;
      if ( v30[0] < v31 )
        v18 = v31 - v30[0] < 0;
      if ( v18 )
      {
LABEL_20:
        v11 = 0;
      }
      else
      {
        v19 = *(_QWORD *)(v12 + 48);
        v20 = EngNineGrid;
        if ( *(_QWORD *)(v19 + 3448) )
          v20 = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64, __int64))(v19 + 3448);
        if ( (!*(_QWORD *)(a1 + 16) || (*(_DWORD *)(v15 + 2152) & 0x400) == 0)
          && !(unsigned int)SURFACE::bRedirHooked((SURFACE *)v12)
          && (*(_BYTE *)(v12 + 112) & 0x10) == 0 )
        {
          v20 = v21;
        }
        v28 = a9[6];
        v27 = a9[5];
        v26 = a9[4];
        v25 = 33488896;
        v11 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _DWORD *, int *, int *, int *, __int64))v20)(
                a1,
                a2,
                a3,
                a4,
                v30,
                v16 + 2,
                v16 + 6,
                &v25,
                v13);
      }
      v14 -= 60;
      v16 += 15;
    }
    while ( v14 >= 4 );
  }
  return v11;
}
