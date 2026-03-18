/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00645D8
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025A6C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025A93C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025AD2C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ComputeFileviewCheckSum @ 0x1C00BC940 (ComputeFileviewCheckSum.c)
 *     GetFontIntensityCorrectionTable @ 0x1C01312F8 (GetFontIntensityCorrectionTable.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C01572D8 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C0157D50 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02B61D4 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(
        PFFMEMOBJ *this,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *Src,
        size_t Size,
        unsigned __int64 a8,
        HDEV a9,
        struct DHPDEV__ *a10,
        struct PFT *a11,
        unsigned int a12,
        unsigned int a13,
        struct _FNTCHECKSUM *a14,
        struct _FONTFILEVIEW **a15,
        struct _UNIVERSAL_FONT_ID *a16)
{
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int v20; // r13d
  unsigned int v21; // ebx
  int v22; // eax
  char *v23; // rax
  wchar_t *v24; // rax
  unsigned int v25; // ebx
  struct _FONTFILEVIEW **v26; // rsi
  __int64 v27; // rax
  __int64 v29; // rbx
  int v30; // edx
  __int64 v31; // r8
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rbx
  unsigned int v35; // [rsp+58h] [rbp+10h]

  v17 = 8LL * a2;
  v18 = a4;
  v35 = 0;
  v20 = 0;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 5) = a13;
  *((_DWORD *)this + 2) = 0;
  if ( v17 > 0xFFFFFFFF || (v21 = v17 + 224, (unsigned int)v17 >= 0xFFFFFF20) )
  {
    v21 = -1;
    v22 = 0;
  }
  else
  {
    v22 = 1;
  }
  if ( a3 && v22 )
  {
    v20 = v21;
    if ( v21 + ((2 * a4 + 3) & 0xFFFFFFFC) < v21 )
    {
      v21 = -1;
      v22 = 0;
    }
    else
    {
      v21 += (2 * a4 + 3) & 0xFFFFFFFC;
      v22 = 1;
    }
  }
  if ( (_DWORD)Size )
  {
    if ( !v22 )
      return this;
    v35 = v21;
    if ( v21 + (unsigned int)Size >= v21 )
    {
      v21 += Size;
      goto LABEL_10;
    }
    v21 = -1;
    v22 = 0;
  }
  if ( !v22 )
    return this;
LABEL_10:
  v23 = (char *)PALLOCMEM2(v21, 1717989447LL, 1);
  *(_QWORD *)this = v23;
  if ( !v23 )
    return this;
  PushThreadGuardedObject(v23 + 176, v23, CleanUpPFF);
  **(_QWORD **)this = v21;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 80LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 88LL) = a9;
  *(_QWORD *)(*(_QWORD *)this + 96LL) = a10;
  *(_QWORD *)(*(_QWORD *)this + 128LL) = a11;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = a5;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v18;
  if ( !(_DWORD)v18 )
  {
    *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
LABEL_14:
    v25 = a12;
    goto LABEL_15;
  }
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this + v20;
  memmove(*(void **)(*(_QWORD *)this + 24LL), a3, 2 * v18);
  if ( a9 != (HDEV)gppdevTrueType )
    goto LABEL_14;
  v24 = wcsstr(*(const wchar_t **)(*(_QWORD *)this + 24LL), L"YUGOTH");
  if ( !v24 )
    goto LABEL_14;
  v25 = a12 | 0x100;
  *(_QWORD *)(*(_QWORD *)this + 208LL) = GetFontIntensityCorrectionTable(v24);
LABEL_15:
  *(_DWORD *)(*(_QWORD *)this + 48LL) = Size;
  if ( (_DWORD)Size )
  {
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v35;
    memmove(*(void **)(*(_QWORD *)this + 40LL), Src, (unsigned int)Size);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
  }
  v26 = a15;
  *(_QWORD *)(*(_QWORD *)this + 152LL) = a15;
  *(_DWORD *)(*(_QWORD *)this + 144LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 52LL) = v25;
  *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
  v27 = *(_QWORD *)this;
  if ( (a13 & 0x1C) != 0 )
  {
    *(_DWORD *)(v27 + 56) = 0;
    *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
    PFFOBJ::bAddPvtData(this, a13);
  }
  else if ( (a13 & 0x20) != 0 )
  {
    *(_DWORD *)(v27 + 56) = 0;
    *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
  }
  else
  {
    *(_DWORD *)(v27 + 56) = 1;
    *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
  }
  *(_QWORD *)(*(_QWORD *)this + 168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
  if ( a16 )
  {
    *(_DWORD *)(*(_QWORD *)this + 136LL) = *(_DWORD *)a16;
  }
  else if ( a15 )
  {
    *(_DWORD *)(*(_QWORD *)this + 136LL) = *((_DWORD *)a14 + 1);
    if ( !*(_DWORD *)(*(_QWORD *)this + 136LL) )
    {
      v29 = *(_QWORD *)this;
      *(_DWORD *)(v29 + 136) += ComputeFileviewCheckSumInFontDriverAddressSpace(a15, a5);
      if ( (a13 & 0x10) == 0 )
      {
        v30 = 1;
        if ( !a5 )
          goto LABEL_31;
        v31 = a5;
        do
        {
          v32 = (__int64)*v26++;
          v33 = (*(_BYTE *)(v32 + 40) & 0x18) != 0 ? v30 : 0;
          v30 = v33;
          --v31;
        }
        while ( v31 );
        if ( v33 )
LABEL_31:
          PutFNTCacheCheckSum(*(_DWORD *)a14, *(_DWORD *)(*(_QWORD *)this + 136LL));
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)this + 48LL) )
    {
      v34 = *(_QWORD *)this;
      *(_DWORD *)(v34 + 136) += ComputeFileviewCheckSum(Src, (unsigned int)Size);
    }
  }
  return this;
}
