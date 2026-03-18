/*
 * XREFs of EngDrawStream @ 0x1C00D3670
 * Callers:
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C028D670 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02953A0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 * Callees:
 *     ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1C0033DB8 (-bRedirHooked@SURFACE@@QEAAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C003560C (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
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
  unsigned int v13; // r14d
  __int64 v14; // rbx
  int *v15; // rdi
  int v16; // eax
  __int64 v17; // r8
  bool v18; // sf
  __int64 v19; // rax
  __int64 (__fastcall *v20)(int, int, int, int, __int64, __int64, __int64, __int64); // r10
  __int64 (__fastcall *v21)(int, int, int, int, __int64, __int64, __int64, __int64); // r9
  int v25; // [rsp+70h] [rbp-41h] BYREF
  __int64 v26; // [rsp+78h] [rbp-39h]
  __int64 v27; // [rsp+80h] [rbp-31h]
  __int64 v28; // [rsp+88h] [rbp-29h]
  _DWORD v29[2]; // [rsp+90h] [rbp-21h] BYREF
  int v30; // [rsp+98h] [rbp-19h]
  int v31; // [rsp+9Ch] [rbp-15h]

  v11 = 1;
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
      v29[0] = *(v15 - 2);
      v29[1] = *(v15 - 1);
      v30 = *v15;
      v31 = v15[1];
      v16 = ERECTL::bOffsetAdd((ERECTL *)v29, a6);
      v17 = 0LL;
      if ( !v16 )
        goto LABEL_20;
      v18 = v29[0] - v30 < 0;
      if ( v29[0] < v30 )
        v18 = v30 - v29[0] < 0;
      if ( v18 )
      {
LABEL_20:
        v11 = 0;
      }
      else
      {
        v19 = *(_QWORD *)(v12 + 48);
        v20 = EngNineGrid;
        if ( *(_QWORD *)(v19 + 3440) )
          v20 = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64, __int64))(v19 + 3440);
        if ( (!*(_QWORD *)(a1 + 16) || (*(_DWORD *)(v14 + 2152) & 0x400) == 0)
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
                v29,
                v15 + 2,
                v15 + 6,
                &v25,
                v17);
      }
      v13 -= 60;
      v15 += 15;
    }
    while ( v13 >= 4 );
  }
  return v11;
}
