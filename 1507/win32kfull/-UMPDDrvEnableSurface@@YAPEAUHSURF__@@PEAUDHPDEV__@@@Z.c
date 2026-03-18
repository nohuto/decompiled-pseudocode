/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C029D980
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C011C1B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C01C1380 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C02869C0 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 */

HSURF __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  UMPDOBJ *v2; // rbx
  HSURF v3; // rdi
  int v4; // eax
  HSURF v5; // rsi
  __int64 v6; // rdx
  int v7; // ecx
  UMPDOBJ *v8; // rcx
  size_t Size; // [rsp+28h] [rbp-19h]
  UMPDOBJ *v11; // [rsp+38h] [rbp-9h] BYREF
  HSURF v12; // [rsp+40h] [rbp-1h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v14; // [rsp+68h] [rbp+27h]
  _QWORD Src[4]; // [rsp+70h] [rbp+2Fh] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v11);
  memset(Src, 0, sizeof(Src));
  v2 = v11;
  v3 = 0LL;
  if ( v11 )
  {
    Src[0] = 0x300000020LL;
    Src[2] = *(_QWORD *)v11;
    Src[3] = a1;
    LODWORD(Size) = 8;
    v4 = UMPDOBJ::Thunk(v11, Src, 0x20u, &v12, Size);
    v5 = v12;
    if ( v4 == -1 )
      v5 = 0LL;
    if ( !v5 )
      goto LABEL_20;
    SURFREF::SURFREF((SURFREF *)v13, v5);
    v6 = v14;
    if ( !v14 )
    {
      v5 = 0LL;
LABEL_19:
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
LABEL_20:
      v3 = v5;
      goto LABEL_21;
    }
    if ( *(_QWORD *)(v14 + 48) )
    {
      v7 = *(_DWORD *)(v14 + 112);
      if ( (v7 & 0x40000) != 0 )
      {
        if ( *(_WORD *)(v14 + 100) == 1 && (v7 & 0x29) != 0x29 )
          v5 = 0LL;
        v8 = (UMPDOBJ *)(v7 & 0x4000000);
        if ( (_DWORD)v8 )
          v5 = 0LL;
        if ( *((_DWORD *)v2 + 109) )
          UMPDOBJ::vClient(v8, (void *)(v14 + 24));
        if ( v5 )
          SURFREF::vKeepIt((SURFREF *)v13, v6);
        goto LABEL_19;
      }
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
  }
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v11);
  return v3;
}
