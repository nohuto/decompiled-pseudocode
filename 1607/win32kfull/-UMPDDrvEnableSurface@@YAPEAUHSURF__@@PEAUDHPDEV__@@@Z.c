/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C029DEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C01BF508 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0285444 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

HSURF __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  UMPDOBJ *v2; // rbx
  HSURF v3; // rdi
  int v4; // eax
  HSURF v5; // rsi
  UMPDOBJ *v6; // rcx
  size_t Size; // [rsp+28h] [rbp-19h]
  UMPDOBJ *v9; // [rsp+38h] [rbp-9h] BYREF
  HSURF v10; // [rsp+40h] [rbp-1h] BYREF
  _BYTE v11[32]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v12; // [rsp+68h] [rbp+27h]
  _QWORD Src[4]; // [rsp+70h] [rbp+2Fh] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v9);
  memset(Src, 0, sizeof(Src));
  v2 = v9;
  v3 = 0LL;
  if ( v9 )
  {
    Src[0] = 0x300000020LL;
    Src[2] = *(_QWORD *)v9;
    Src[3] = a1;
    LODWORD(Size) = 8;
    v4 = UMPDOBJ::Thunk(v9, Src, 32LL, &v10, Size);
    v5 = v10;
    if ( v4 == -1 )
      v5 = 0LL;
    if ( !v5 )
      goto LABEL_20;
    SURFREF::SURFREF((SURFREF *)v11, v5);
    if ( !v12 )
    {
      v5 = 0LL;
LABEL_19:
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v11);
LABEL_20:
      v3 = v5;
      goto LABEL_21;
    }
    if ( *(_QWORD *)(v12 + 48) )
    {
      v6 = (UMPDOBJ *)*(unsigned int *)(v12 + 112);
      if ( ((unsigned int)v6 & 0x40000) != 0 )
      {
        if ( *(_WORD *)(v12 + 100) == 1 && ((unsigned __int8)v6 & 0x29) != 0x29 )
          v5 = 0LL;
        if ( ((unsigned int)v6 & 0x4000000) != 0 )
          v5 = 0LL;
        if ( *((_DWORD *)v2 + 109) )
          UMPDOBJ::vClient(v6, (void *)(v12 + 24));
        if ( v5 )
          SURFREF::vKeepIt((SURFREF *)v11);
        goto LABEL_19;
      }
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v11);
  }
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v9);
  return v3;
}
