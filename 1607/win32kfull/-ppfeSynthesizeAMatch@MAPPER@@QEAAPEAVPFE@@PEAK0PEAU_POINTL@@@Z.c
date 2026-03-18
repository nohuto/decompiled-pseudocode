/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0024ECC
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0024C7C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C00266F4 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ulCharsetToCodePage @ 0x1C00281D8 (ulCharsetToCodePage.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014BD74 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C025A604 (-bInitPrivatePFT@@YAHXZ.c)
 */

struct PFE *__fastcall MAPPER::ppfeSynthesizeAMatch(
        MAPPER *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _POINTL *a4)
{
  __int64 v8; // rsi
  char *v9; // rdi
  __int64 *v10; // rbp
  int v11; // r15d
  __int64 v13; // rbp
  struct PFT **v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  unsigned int v18; // r8d
  int v19; // r11d
  int v20; // esi
  char *v21; // r10
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // eax
  int v32; // r9d
  size_t v33; // [rsp+28h] [rbp-80h]
  struct PFF *v34; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v35[3]; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+8h] BYREF

  v36 = 0;
  v8 = 0LL;
  if ( (*((_DWORD *)this + 22) & 1) != 0 )
    v9 = (char *)this + 92;
  else
    v9 = (char *)(*((_QWORD *)this + 1) + 348LL);
  v10 = (__int64 *)*((_QWORD *)this + 36);
  v11 = 4 * *((_DWORD *)v9 + 1) + 8;
  if ( !v10 )
    return (struct PFE *)v8;
  v13 = *v10;
  v34 = 0LL;
  if ( !v13 )
    return (struct PFE *)v8;
  v14 = gpPFTPrivate;
  if ( gpPFTPrivate )
  {
LABEL_11:
    v35[0] = *v14;
    if ( (*(_DWORD *)(v13 + 52) & 0x10) == 0 )
    {
      LODWORD(v33) = v11;
      v15 = PUBLIC_PFTOBJ::bLoadFonts(
              (PUBLIC_PFTOBJ *)v35,
              *(unsigned __int16 **)(v13 + 24),
              *(_DWORD *)(v13 + 32),
              *(_DWORD *)(v13 + 36),
              (struct tagDESIGNVECTOR *)v9,
              v33,
              &v36,
              0x40u,
              &v34,
              0x30u,
              1,
              0LL);
      v16 = v15 != 0 ? v36 : 0;
      if ( v16 )
      {
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        if ( v34 )
        {
          if ( v16 == 1 )
          {
            v8 = *((_QWORD *)v34 + 28);
          }
          else
          {
            v18 = 0;
            v19 = 0x7FFFFFFF;
            LODWORD(v17) = 0;
            v21 = (char *)v34 + 224;
            do
            {
              v22 = *(_QWORD *)(*(_QWORD *)v21 + 32LL);
              v20 = *((_DWORD *)this + 43);
              v23 = *(unsigned __int16 *)(v22 + 46) - v20;
              if ( v23 < 0 )
                v23 = v20 - *(unsigned __int16 *)(v22 + 46);
              if ( v23 <= v19 )
              {
                v19 = v23;
                v24 = *(int *)(v22 + 8);
                if ( (*((_DWORD *)this + 63) & 0x2000000) != 0 )
                {
                  if ( *(_WORD *)(v24 + v22) == 64 )
                    v18 = v17;
                }
                else if ( *(_WORD *)(v24 + v22) != 64 )
                {
                  v18 = v17;
                }
              }
              v17 = (unsigned int)(v17 + 1);
              v21 += 8;
            }
            while ( (unsigned int)v17 < v16 );
            v8 = *((_QWORD *)v34 + v18 + 28);
          }
          *a2 = 0;
          v25 = *((_QWORD *)this + 1);
          v26 = *(_QWORD *)(v8 + 32);
          v35[0] = v26;
          if ( *(_BYTE *)(v25 + 20) && (*(_BYTE *)(v26 + 52) & 1) == 0 )
          {
            v27 = IFIOBJ::bSimItalic((IFIOBJ *)v35);
            v28 = 0;
            v17 = 0x4000LL;
            if ( v27 )
              v28 = 0x4000;
            *a2 = v28;
          }
          if ( (*((_DWORD *)this + 63) & 0x200000) == 0
            && *(unsigned __int16 *)(v26 + 46) - *((_DWORD *)this + 43) < 0
            && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v26 + 46) > 150 )
          {
            if ( IFIOBJ::pvSimBold((IFIOBJ *)v35) )
              *a2 |= 0x2000u;
          }
          v29 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 23LL);
          v30 = (unsigned int)((_DWORD)v29 << 24);
          *a3 = v30;
          v31 = ulCharsetToCodePage(v29, v17, v26, v30);
          *a3 = v32 | (v31 << 8);
          a4->y = 1;
          a4->x = 1;
        }
      }
    }
    return (struct PFE *)v8;
  }
  if ( (unsigned int)bInitPrivatePFT() )
  {
    v14 = gpPFTPrivate;
    goto LABEL_11;
  }
  return 0LL;
}
