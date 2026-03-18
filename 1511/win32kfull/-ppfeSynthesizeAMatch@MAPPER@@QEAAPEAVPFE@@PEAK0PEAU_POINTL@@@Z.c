/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C001F1F0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001EF54 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C001D81C (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C001D83C (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C0020D78 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ulCharsetToCodePage @ 0x1C0116034 (ulCharsetToCodePage.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C025D254 (-bInitPrivatePFT@@YAHXZ.c)
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
  struct PFF *v17; // rcx
  unsigned int v18; // r8d
  int v19; // r11d
  unsigned int v20; // edx
  int v21; // esi
  char *v22; // r10
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // r9d
  size_t v32; // [rsp+28h] [rbp-80h]
  struct PFF *v33; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v34[3]; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+8h] BYREF

  v35 = 0;
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
  v33 = 0LL;
  if ( !v13 )
    return (struct PFE *)v8;
  v14 = gpPFTPrivate;
  if ( gpPFTPrivate )
  {
LABEL_11:
    v34[0] = *v14;
    if ( (*(_DWORD *)(v13 + 52) & 0x10) == 0 )
    {
      LODWORD(v32) = v11;
      v15 = -(int)PUBLIC_PFTOBJ::bLoadFonts(
                    (PUBLIC_PFTOBJ *)v34,
                    *(unsigned __int16 **)(v13 + 24),
                    *(_DWORD *)(v13 + 32),
                    *(_DWORD *)(v13 + 36),
                    (struct tagDESIGNVECTOR *)v9,
                    v32,
                    &v35,
                    0x40u,
                    &v33,
                    0x30u,
                    1,
                    0LL);
      v16 = v15 != 0 ? v35 : 0;
      if ( v16 )
      {
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        v17 = v33;
        if ( v33 )
        {
          if ( v16 == 1 )
          {
            v8 = *((_QWORD *)v33 + 27);
          }
          else
          {
            v18 = 0;
            v19 = 0x7FFFFFFF;
            v20 = 0;
            if ( v16 )
            {
              v22 = (char *)v33 + 216;
              do
              {
                v23 = *(_QWORD *)(*(_QWORD *)v22 + 32LL);
                v21 = *((_DWORD *)this + 43);
                v24 = *(unsigned __int16 *)(v23 + 46) - v21;
                if ( v24 < 0 )
                  v24 = v21 - *(unsigned __int16 *)(v23 + 46);
                if ( v24 <= v19 )
                {
                  v19 = v24;
                  v25 = *(int *)(v23 + 8);
                  if ( (*((_DWORD *)this + 63) & 0x2000000) != 0 )
                  {
                    if ( *(_WORD *)(v25 + v23) == 64 )
                      v18 = v20;
                  }
                  else if ( *(_WORD *)(v25 + v23) != 64 )
                  {
                    v18 = v20;
                  }
                }
                ++v20;
                v22 += 8;
              }
              while ( v20 < v16 );
              v17 = v33;
            }
            v8 = *((_QWORD *)v17 + v18 + 27);
          }
          *a2 = 0;
          v26 = *((_QWORD *)this + 1);
          v27 = *(_QWORD *)(v8 + 32);
          v34[0] = v27;
          if ( *(_BYTE *)(v26 + 20) && (*(_BYTE *)(v27 + 52) & 1) == 0 )
          {
            v28 = IFIOBJ::bSimItalic((IFIOBJ *)v34);
            v29 = 0;
            if ( v28 )
              v29 = 0x4000;
            *a2 = v29;
          }
          if ( (*((_DWORD *)this + 63) & 0x200000) == 0
            && *(unsigned __int16 *)(v27 + 46) - *((_DWORD *)this + 43) < 0
            && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v27 + 46) > 150 )
          {
            if ( IFIOBJ::pvSimBold((IFIOBJ *)v34) )
              *a2 |= 0x2000u;
          }
          *a3 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 23LL) << 24;
          v30 = ulCharsetToCodePage();
          *a3 = v31 | (v30 << 8);
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
