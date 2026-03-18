/*
 * XREFs of UmfdDispatchEscape @ 0x1C02A403C
 * Callers:
 *     NtGdiExtEscape @ 0x1C0140160 (NtGdiExtEscape.c)
 * Callees:
 *     FONTOBJ_pifi @ 0x1C02860F0 (FONTOBJ_pifi.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A33B8 (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3464 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngFntCacheLookUp@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3574 (-UmfdEscEngFntCacheLookUp@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A35C4 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3678 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3764 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3844 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C02A38A8 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A39B8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3B4C (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3C4C (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     atmfdFontManagement @ 0x1C02A4910 (atmfdFontManagement.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D5E6C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

void __fastcall UmfdDispatchEscape(struct _PATHOBJ *a1)
{
  struct _PATHOBJ *v2; // rdx
  int v3; // ebx
  int (*v4)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int); // rcx
  int v5; // eax
  struct UmfdTls *v6; // rax
  PATHOBJ *v7; // rcx
  struct UmfdTls *v8; // rax
  PATHOBJ *v9; // rcx
  struct UmfdTls *v10; // rax
  FONTOBJ *v11; // rcx
  IFIMETRICS *v12; // rax
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  __int128 v23; // [rsp+50h] [rbp-38h] BYREF
  POINTFIX ptfx[2]; // [rsp+60h] [rbp-28h]
  __int128 v25; // [rsp+70h] [rbp-18h]
  int v26; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int16 v27; // [rsp+9Ch] [rbp+14h]

  if ( ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v2 = a1 + 6;
  if ( (unsigned __int64)&a1[6] > W32UserProbeAddress || v2 < a1 )
    *W32UserProbeAddress = 0;
  v23 = *(_OWORD *)&a1->fl;
  *(_OWORD *)&ptfx[0].x = *(_OWORD *)&a1[2].fl;
  v25 = *(_OWORD *)&a1[4].fl;
  v3 = v23;
  if ( (int)v23 > 9 )
  {
    switch ( (_DWORD)v23 )
    {
      case 0xA:
        UmfdEscEngFntCacheLookUp((volatile void **)&v23);
        break;
      case 0xB:
        UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)&v23);
        break;
      case 0xC:
        UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)&v23);
        break;
      case 0xD:
        UmfdEscEngGetFileChangeTime((struct tagUMFD_ESCAPE_ARGUMENT *)&v23);
        break;
      case 0xE:
        UmfdEscEngGetFilePath((struct tagUMFD_ESCAPE_ARGUMENT *)&v23);
        break;
      case 0xF:
        UmfdEscEngComputeGlyphSet((struct tagUMFD_ESCAPE_ARGUMENT *)&v23);
        break;
      case 0x10:
        UmfdEscEngCreateFile((struct tagUMFD_ESCAPE_ARGUMENT *)&v23);
        break;
      case 0x11:
        UmfdEscParseFontResources((struct tagUMFD_ESCAPE_ARGUMENT *)&v23);
        break;
      case 0x12:
        if ( atmfdHandle
          && (v26 = 0, v27 = 0, (unsigned int)atmfdFontManagement(0, 0, 9488, 6, (__int64)&v26, 6, (__int64)&v26) == 1) )
        {
          v5 = v27;
        }
        else
        {
          v5 = -1;
        }
        goto LABEL_27;
      default:
        goto LABEL_57;
    }
LABEL_56:
    v3 = v23;
    goto LABEL_57;
  }
  switch ( (_DWORD)v23 )
  {
    case 9:
LABEL_34:
      DWORD2(v23) = 0;
      goto LABEL_57;
    case 0:
      UmfdEscSendCompleteWaitReceive((volatile void **)&v23);
      goto LABEL_56;
    case 1:
      UmfdEscXFORMOBJ_iGetXform((struct tagUMFD_ESCAPE_ARGUMENT *)&v23);
      goto LABEL_56;
    case 2:
      goto LABEL_57;
  }
  if ( (_DWORD)v23 != 3 )
  {
    if ( (_DWORD)v23 == 4 )
    {
      v8 = UmfdTls::EnsureTls();
      if ( !v8 )
        goto LABEL_57;
      v9 = (PATHOBJ *)*((_QWORD *)v8 + 5);
      if ( v9 )
      {
        v5 = PATHOBJ_bCloseFigure(v9);
        goto LABEL_27;
      }
    }
    else
    {
      if ( (_DWORD)v23 != 5 )
      {
        switch ( (_DWORD)v23 )
        {
          case 6:
            v4 = PATHOBJ_bPolyBezierTo;
            break;
          case 7:
            v4 = PATHOBJ_bPolyLineTo;
            break;
          case 8:
            goto LABEL_17;
          default:
            goto LABEL_57;
        }
        v5 = UmfdEscPATHOBJ_bCommonTo(v4, v2, *(struct _POINTFIX **)ptfx, ptfx[1].x);
        goto LABEL_27;
      }
      v6 = UmfdTls::EnsureTls();
      if ( !v6 )
        goto LABEL_57;
      v7 = (PATHOBJ *)*((_QWORD *)v6 + 5);
      if ( v7 )
      {
        v5 = PATHOBJ_bMoveTo(v7, ptfx[0]);
LABEL_27:
        DWORD2(v23) = v5;
        goto LABEL_57;
      }
    }
    goto LABEL_34;
  }
  v10 = UmfdTls::EnsureTls();
  if ( v10 )
  {
    v11 = (FONTOBJ *)*((_QWORD *)v10 + 4);
    if ( !v11 )
    {
LABEL_17:
      *((_QWORD *)&v23 + 1) = 0LL;
      goto LABEL_57;
    }
    v12 = FONTOBJ_pifi(v11);
    if ( v12 )
      *((_QWORD *)&v23 + 1) = *(_QWORD *)&v12[-1].panose.bMidline;
  }
LABEL_57:
  if ( v3 > 8 )
  {
    v18 = v3 - 9;
    if ( !v18 )
      goto LABEL_75;
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_75;
      v21 = v20 - 2;
      if ( !v21 )
        goto LABEL_75;
      v22 = v21 - 2;
      if ( !v22 )
        goto LABEL_75;
      v17 = v22 - 1;
      if ( v17 )
        goto LABEL_65;
    }
LABEL_67:
    ProbeForWrite(&a1[1], 8uLL, 8u);
    a1[1] = *(struct _PATHOBJ *)((char *)&v23 + 8);
    return;
  }
  if ( v3 == 8 )
    goto LABEL_67;
  if ( !v3 )
    goto LABEL_75;
  v13 = v3 - 1;
  if ( !v13 )
    goto LABEL_75;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_67;
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_67;
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
LABEL_65:
      if ( (unsigned int)(v17 - 1) > 1 )
        return;
    }
  }
LABEL_75:
  ProbeForWrite(&a1[1], 4uLL, 8u);
  a1[1].fl = DWORD2(v23);
}
