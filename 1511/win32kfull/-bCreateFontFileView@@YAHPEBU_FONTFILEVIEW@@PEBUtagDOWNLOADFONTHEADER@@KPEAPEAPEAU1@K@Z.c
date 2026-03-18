/*
 * XREFs of ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C027E1E0
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C027E6FC (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027E800 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0118128 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_N@Z @ 0x1C0118170 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_N@Z.c)
 *     ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C01181A4 (--0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall bCreateFontFileView(
        const struct _FONTFILEVIEW *a1,
        const struct tagDOWNLOADFONTHEADER *a2,
        unsigned int a3,
        struct _FONTFILEVIEW ***a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  unsigned int v11; // edi
  struct _FONTFILEVIEW **v12; // rax
  struct _FONTFILEVIEW **v13; // r9
  unsigned int v14; // edx
  char *v15; // rcx
  unsigned int v16; // edi
  struct _FONTFILEVIEW **v17; // r11
  unsigned int *v18; // r10
  unsigned int v19; // r8d
  unsigned int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-168h]
  __int128 v22; // [rsp+28h] [rbp-160h]
  __int128 v23; // [rsp+38h] [rbp-150h]
  __int128 v24; // [rsp+48h] [rbp-140h]
  __int128 v25; // [rsp+58h] [rbp-130h]
  __int128 v26; // [rsp+68h] [rbp-120h]
  __int128 v27; // [rsp+88h] [rbp-100h]
  __int128 v28; // [rsp+B0h] [rbp-D8h]
  _BYTE v29[60]; // [rsp+120h] [rbp-68h] BYREF
  int v30; // [rsp+15Ch] [rbp-2Ch]

  v9 = 1;
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v29);
  if ( !UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
          (UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v29,
          (*((_DWORD *)a1 + 10) & 0x20) != 0) )
    goto LABEL_4;
  v27 = *(_OWORD *)a1;
  v28 = *((_OWORD *)a1 + 1);
  v25 = *((_OWORD *)a1 + 2);
  v22 = *((_OWORD *)a1 + 3);
  v23 = *((_OWORD *)a1 + 4);
  v24 = *((_OWORD *)a1 + 5);
  v26 = *((_OWORD *)a1 + 6);
  v21 = *((_QWORD *)a1 + 14);
  if ( a3 <= ((4 * a5 + 15) & 0xFFFFFFF8) )
  {
    v30 = 87;
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  v11 = (8 * a5 + 7) & 0xFFFFFFF8;
  v12 = (struct _FONTFILEVIEW **)PALLOCMEM2(v11 + 120 * a5, 1986422343LL, 1);
  v13 = v12;
  if ( !v12 )
  {
    v30 = 8;
    goto LABEL_4;
  }
  v14 = 0;
  v15 = (char *)v12 + v11;
  v16 = 0;
  v17 = v12;
  *(_OWORD *)v15 = v27;
  *((_OWORD *)v15 + 1) = v28;
  *((_OWORD *)v15 + 2) = v25;
  *((_OWORD *)v15 + 3) = v22;
  *((_OWORD *)v15 + 4) = v23;
  *((_OWORD *)v15 + 5) = v24;
  *((_OWORD *)v15 + 6) = v26;
  *((_QWORD *)v15 + 14) = v21;
  if ( a5 )
  {
    v18 = (unsigned int *)((char *)a2 + 8);
    while ( 1 )
    {
      v19 = *v18;
      if ( *v18 < v14 || v19 > DWORD2(v28) || v14 != ((v14 + 3) & 0xFFFFFFFC) )
        break;
      ++v16;
      ++v18;
      *((_QWORD *)v15 + 2) = v28 + v14;
      v20 = v19 - v14;
      v14 = v19;
      *((_DWORD *)v15 + 6) = v20;
      *v17++ = (struct _FONTFILEVIEW *)v15;
      v15 += 120;
      if ( v16 >= a5 )
        goto LABEL_14;
    }
    v9 = 0;
    Win32FreePool(v13);
  }
  else
  {
LABEL_14:
    *a4 = v13;
  }
LABEL_5:
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v29);
  return v9;
}
