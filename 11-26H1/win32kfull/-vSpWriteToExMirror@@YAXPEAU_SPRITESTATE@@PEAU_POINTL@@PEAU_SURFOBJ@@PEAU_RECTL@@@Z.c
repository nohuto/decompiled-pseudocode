/*
 * XREFs of ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140318514
 * Callers:
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1403175F8 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x140248BE4 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x140313D80 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1403159F4 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpWriteToExMirror(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // r14
  struct _CLIPOBJ *v5; // rax
  int v10; // eax
  struct _SURFOBJ *v11; // rdx
  struct _POINTL v12; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[52]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+A0h] [rbp-60h]
  int v17; // [rsp+A8h] [rbp-58h]
  int v18; // [rsp+D0h] [rbp-30h]
  __int64 v19; // [rsp+E0h] [rbp-20h]
  int v20; // [rsp+E8h] [rbp-18h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  v5 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v18 = 1;
  v19 = 0LL;
  v15 = 0LL;
  v20 = 0;
  if ( !v4 )
    goto LABEL_4;
  v10 = bConcurrent(a1);
  ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v13, v10, v4, (struct ERECTL *)a4, 0);
  if ( !ERECTL::bEmpty((ERECTL *)v14) )
  {
    v5 = (struct _CLIPOBJ *)v13;
LABEL_4:
    a3->iUniq = 0;
    v11 = (struct _SURFOBJ *)*((_QWORD *)a1 + 167);
    v12 = 0LL;
    INVOKEOFFCOPYBITS(&v12, v11, a2, a3, v5, 0LL, a4, (struct _POINTL *)a4);
  }
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v13);
}
