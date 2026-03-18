/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C013E6BC
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C013FB2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025D6B4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D918 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025DCE4 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ComputeFileviewCheckSum @ 0x1C013CAE0 (ComputeFileviewCheckSum.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C0159E88 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C015A438 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02B40D0 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
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
  struct _FONTFILEVIEW **v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rbx
  unsigned int v33; // [rsp+58h] [rbp+10h]

  v17 = 8LL * a2;
  v18 = a4;
  v33 = 0;
  v20 = 0;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 5) = a13;
  *((_DWORD *)this + 2) = 0;
  if ( v17 > 0xFFFFFFFF || (v21 = v17 + 216, (unsigned int)v17 >= 0xFFFFFF28) )
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
    v33 = v21;
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
  if ( !(_DWORD)Size )
  {
LABEL_15:
    if ( !v22 )
      return this;
    goto LABEL_16;
  }
  if ( !v22 )
    return this;
  v20 = v21;
  if ( v21 + (unsigned int)Size < v21 )
  {
    v21 = -1;
    v22 = 0;
    goto LABEL_15;
  }
  v21 += Size;
LABEL_16:
  v23 = (char *)PALLOCMEM2(v21, 1717989447LL, 1);
  *(_QWORD *)this = v23;
  if ( v23 )
  {
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
    if ( (_DWORD)v18 )
    {
      *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this + v33;
      memmove(*(void **)(*(_QWORD *)this + 24LL), a3, 2 * v18);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
    }
    *(_DWORD *)(*(_QWORD *)this + 48LL) = Size;
    if ( (_DWORD)Size )
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v20;
      memmove(*(void **)(*(_QWORD *)this + 40LL), Src, (unsigned int)Size);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
    }
    v24 = a15;
    *(_QWORD *)(*(_QWORD *)this + 152LL) = a15;
    *(_DWORD *)(*(_QWORD *)this + 144LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 52LL) = a12;
    *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
    v25 = *(_QWORD *)this;
    if ( (a13 & 0x1C) != 0 )
    {
      *(_DWORD *)(v25 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      PFFOBJ::bAddPvtData(this, a13);
    }
    else if ( (a13 & 0x20) != 0 )
    {
      *(_DWORD *)(v25 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
    }
    else
    {
      *(_DWORD *)(v25 + 56) = 1;
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
        v26 = *(_QWORD *)this;
        *(_DWORD *)(v26 + 136) += ComputeFileviewCheckSumInFontDriverAddressSpace(a15, a5);
        if ( (a13 & 0x10) == 0 )
        {
          v27 = 1;
          if ( !a5 )
            goto LABEL_37;
          v28 = a5;
          do
          {
            v29 = (__int64)*v24++;
            v30 = (*(_BYTE *)(v29 + 40) & 0x18) != 0 ? v27 : 0;
            v27 = v30;
            --v28;
          }
          while ( v28 );
          if ( v30 )
LABEL_37:
            PutFNTCacheCheckSum(*(_DWORD *)a14, *(_DWORD *)(*(_QWORD *)this + 136LL));
        }
      }
      if ( *(_DWORD *)(*(_QWORD *)this + 48LL) )
      {
        v31 = *(_QWORD *)this;
        *(_DWORD *)(v31 + 136) += ComputeFileviewCheckSum(Src, Size);
      }
    }
  }
  return this;
}
