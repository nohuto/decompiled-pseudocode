/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x1C027E800
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C01511D8 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D4C4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C027E1E0 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C027E968 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C027EE60 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall NtGdiAddRemoteFontToDC(
        HDC a1,
        struct tagDOWNLOADFONTHEADER *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4)
{
  struct _UNIVERSAL_FONT_ID *v4; // rdi
  unsigned int RemoteFonts; // ebx
  int v8; // r14d
  _BYTE *v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // esi
  struct tagDOWNLOADFONTHEADER *v13; // rdx
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+48h] [rbp-C0h]
  int v16; // [rsp+4Ch] [rbp-BCh]
  struct _FONTFILEVIEW **v17; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v18[8]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v20[128]; // [rsp+70h] [rbp-98h] BYREF
  struct tagDOWNLOADFONTHEADER *v21; // [rsp+128h] [rbp+20h] BYREF

  v4 = a4;
  RemoteFonts = 0;
  v8 = 0;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v4 = (struct _UNIVERSAL_FONT_ID *)W32UserProbeAddress;
    v19[0] = *(_QWORD *)v4;
    v4 = (struct _UNIVERSAL_FONT_ID *)v19;
    v19[1] = v19;
  }
  v15 = 0;
  v16 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v14, a1);
  if ( !v14 )
    return 0LL;
  v17 = 0LL;
  v10 = 0LL;
  v21 = a2;
  v11 = cMapRemoteFonts(&v21, a3, v20, 1LL);
  v12 = v11;
  v13 = v21;
  if ( v21 )
  {
    if ( v11 )
    {
      v10 = v20;
      v8 = 1;
      LODWORD(v21) = 1;
      RemoteFonts = bCreateFontFileView((const struct _FONTFILEVIEW *)v20, v13, a3, &v17, v11);
      if ( RemoteFonts )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v18);
        RemoteFonts = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                        (PUBLIC_PFTOBJ *)v18,
                        (struct XDCOBJ *)&v14,
                        v17,
                        v12,
                        0LL,
                        v4,
                        (int *)&v21);
        v8 = (int)v21;
      }
    }
  }
  if ( !RemoteFonts )
  {
    if ( v8 )
      vUnmapRemoteFonts(v10);
  }
  XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
  return RemoteFonts;
}
