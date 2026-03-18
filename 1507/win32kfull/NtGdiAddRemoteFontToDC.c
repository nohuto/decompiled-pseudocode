/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x1C027EE10
 * Callers:
 *     <none>
 * Callees:
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C015BA90 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D918 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C027E7F0 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C027EF80 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C027F480 (vUnmapRemoteFonts.c)
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
  struct _FONTFILEVIEW **v14; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-E0h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v17[6]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v18[128]; // [rsp+90h] [rbp-98h] BYREF
  struct tagDOWNLOADFONTHEADER *v19; // [rsp+148h] [rbp+20h] BYREF

  v4 = a4;
  RemoteFonts = 0;
  v8 = 0;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v4 = (struct _UNIVERSAL_FONT_ID *)W32UserProbeAddress;
    v16[0] = *(_QWORD *)v4;
    v4 = (struct _UNIVERSAL_FONT_ID *)v16;
    v16[1] = v16;
  }
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( v17[0] )
  {
    v14 = 0LL;
    v10 = 0LL;
    v19 = a2;
    v11 = cMapRemoteFonts(&v19, a3, v18, 1LL);
    v12 = v11;
    v13 = v19;
    if ( v19 )
    {
      if ( v11 )
      {
        v10 = v18;
        v8 = 1;
        LODWORD(v19) = 1;
        RemoteFonts = bCreateFontFileView((const struct _FONTFILEVIEW *)v18, v13, a3, &v14, v11);
        if ( RemoteFonts )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v15);
          RemoteFonts = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                          (PUBLIC_PFTOBJ *)v15,
                          (struct XDCOBJ *)v17,
                          v14,
                          v12,
                          0LL,
                          v4,
                          (int *)&v19);
          v8 = (int)v19;
        }
      }
    }
    if ( !RemoteFonts )
    {
      if ( v8 )
        vUnmapRemoteFonts(v10);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return RemoteFonts;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return 0LL;
  }
}
