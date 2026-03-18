/*
 * XREFs of vFillIFICharsets @ 0x1C015837C
 * Callers:
 *     vFill_IFIMETRICS @ 0x1C0157904 (vFill_IFIMETRICS.c)
 * Callees:
 *     EngGetCurrentCodePage @ 0x1C0125210 (EngGetCurrentCodePage.c)
 *     IsBogusSignature @ 0x1C01582D4 (IsBogusSignature.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     fs_GetGlyphIDs @ 0x1C02D8438 (fs_GetGlyphIDs.c)
 */

char __fastcall vFillIFICharsets(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 OemCodePage, __int64 a6)
{
  __int64 v6; // r14
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r13
  unsigned __int16 v12; // r15
  char v13; // al
  unsigned __int32 v14; // r8d
  __int64 v15; // r9
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int32 v18; // r14d
  unsigned int i; // ecx
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  unsigned __int16 v22; // cx
  __int16 v23; // cx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int16 v42; // ax
  int v43; // ecx
  char v44; // cl
  USHORT AnsiCodePage; // [rsp+70h] [rbp+40h] BYREF
  int v47; // [rsp+78h] [rbp+48h]

  v6 = OemCodePage;
  LODWORD(v9) = a1;
  v10 = 0;
  v11 = *(unsigned int *)(a1 + 304) + a4 + 6;
  if ( OemCodePage )
    v12 = __ROR2__(*(_WORD *)(OemCodePage + 64), 8);
  else
    v12 = 0;
  v13 = *(_BYTE *)(a2 + 44);
  if ( v13 != (char)0x80 && v13 != -127 && v13 != -120 && v13 != -122 )
  {
    v47 = 0;
    goto LABEL_8;
  }
  v47 = 1;
  if ( OemCodePage )
  {
    if ( !__ROR2__(*(_WORD *)OemCodePage, 8) || IsBogusSignature(_byteswap_ulong(*(_DWORD *)(OemCodePage + 78)), a1) )
    {
      v10 = 1;
      *a3 = *(_BYTE *)(a2 + 44);
      goto LABEL_92;
    }
LABEL_8:
    if ( v6 && *(_WORD *)v6 )
    {
      v14 = _byteswap_ulong(*(_DWORD *)(v6 + 78));
      if ( (v14 & gfsCurSignature) != 0 && (gfsCurSignature & 0x10060) == 0 )
      {
        v10 = 1;
        *a3 = gjCurCharset;
      }
      v9 = 0LL;
      v15 = 16LL;
      do
      {
        v16 = *(_DWORD *)((char *)&unk_1C02EA1B0 + v9);
        LOBYTE(v17) = gfsCurSignature;
        if ( (v16 != gfsCurSignature || (gfsCurSignature & 0x10060) != 0) && (v16 & v14) != 0 && v10 < 0x10 )
        {
          LOBYTE(v17) = charsets[v9];
          v20 = v10++;
          a3[v20] = v17;
        }
        v9 += 4LL;
        --v15;
      }
      while ( v15 );
      v18 = _byteswap_ulong(*(_DWORD *)(v6 + 82));
      if ( v18 )
      {
        EngGetCurrentCodePage((PUSHORT)&OemCodePage, &AnsiCodePage);
        v21 = &unk_1C02E9930;
        LODWORD(v17) = 0x80000000;
        LODWORD(v9) = 0;
        while ( (unsigned __int16)OemCodePage != *v21 )
        {
          LODWORD(v17) = (unsigned int)v17 >> 1;
          LODWORD(v9) = v9 + 1;
          ++v21;
          if ( (unsigned int)v9 >= 0x10 )
            goto LABEL_17;
        }
        if ( ((unsigned int)v17 & v18) != 0 && v10 < 0x10 )
        {
          v17 = v10++;
          a3[v17] = -1;
        }
      }
LABEL_17:
      for ( i = 0; i < v10; ++i )
      {
        LOBYTE(v17) = i;
        if ( a3[i] == *(_BYTE *)(a2 + 44) )
          break;
      }
      if ( i == v10 )
      {
        if ( v10 )
        {
          LOBYTE(v17) = *a3;
          *(_BYTE *)(a2 + 44) = *a3;
        }
        else
        {
          *(_BYTE *)(a2 + 44) = 1;
        }
      }
      goto LABEL_20;
    }
  }
  if ( *(_BYTE *)(a2 + 172) != 5 )
  {
    LOBYTE(v17) = 0;
    if ( v12 < 0x100u )
    {
      if ( v11 )
      {
        v22 = *(_WORD *)(a2 + 52);
        LODWORD(v9) = 65280;
        if ( (v22 & 0xFF00) != 0 )
        {
          v23 = HIBYTE(v22);
          LOBYTE(v17) = v23 + 78;
          if ( (unsigned __int8)(v23 + 78) <= 2u )
          {
            LODWORD(v17) = -*(_DWORD *)(gpGdiSharedMemory + 1573012LL);
            LOBYTE(v23) = *(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0 ? -78 : 2;
            *(_BYTE *)(a2 + 44) = v23;
          }
          *a3 = v23;
          v10 = 1;
        }
        else
        {
          v24 = a6;
          v25 = a6;
          *a3 = 0;
          v10 = 1;
          if ( !(unsigned int)fs_GetGlyphIDs(v25, 65280LL, 8710LL) && (_WORD)OemCodePage )
          {
            a3[1] = 77;
            v10 = 2;
          }
          LOWORD(OemCodePage) = 0;
          fs_GetGlyphIDs(v24, v26, 971LL);
          if ( !(unsigned int)fs_GetGlyphIDs(v24, v27, 937LL) && ((_WORD)OemCodePage || AnsiCodePage) )
          {
            v29 = v10++;
            a3[v29] = -95;
          }
          if ( !(unsigned int)fs_GetGlyphIDs(v24, v28, 304LL) && (_WORD)OemCodePage )
          {
            v31 = v10++;
            a3[v31] = -94;
          }
          if ( !(unsigned int)fs_GetGlyphIDs(v24, v30, 1488LL) && (_WORD)OemCodePage )
          {
            v33 = v10++;
            a3[v33] = -79;
          }
          LOWORD(OemCodePage) = 0;
          fs_GetGlyphIDs(v24, v32, 1105LL);
          if ( !(unsigned int)fs_GetGlyphIDs(v24, v34, 1071LL) && ((_WORD)OemCodePage || AnsiCodePage) )
          {
            v36 = v10++;
            a3[v36] = -52;
          }
          LOWORD(OemCodePage) = 0;
          fs_GetGlyphIDs(v24, v35, 328LL);
          if ( !(unsigned int)fs_GetGlyphIDs(v24, v37, 268LL) && ((_WORD)OemCodePage || AnsiCodePage) )
          {
            v39 = v10++;
            a3[v39] = -18;
          }
          if ( !(unsigned int)fs_GetGlyphIDs(v24, v38, 371LL) && (_WORD)OemCodePage )
          {
            v41 = v10++;
            a3[v41] = -70;
          }
          LODWORD(v17) = fs_GetGlyphIDs(v24, v40, 9618LL);
          if ( !(_DWORD)v17 && (_WORD)OemCodePage )
          {
            v17 = v10++;
            a3[v17] = -1;
          }
        }
      }
      goto LABEL_20;
    }
  }
  if ( v12 < 0xF000u || (v42 = *(_WORD *)(a2 + 52), LODWORD(v9) = 65280, (v42 & 0xFF00) == 0) )
  {
    LOBYTE(v17) = *(_BYTE *)(a2 + 44);
    *a3 = v17;
    goto LABEL_89;
  }
  LOWORD(v17) = HIBYTE(v42);
  if ( (_BYTE)v17 == 0xB1 )
    goto LABEL_85;
  if ( (unsigned __int8)v17 > 0xB1u )
  {
    if ( (unsigned __int8)v17 <= 0xB4u )
    {
      LODWORD(v17) = -*(_DWORD *)(gpGdiSharedMemory + 1573012LL);
      v43 = *(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0 ? 0xB0 : 0;
      goto LABEL_86;
    }
    if ( (_BYTE)v17 == 0xB5 )
    {
LABEL_85:
      LODWORD(v17) = -*(_DWORD *)(gpGdiSharedMemory + 1573012LL);
      v43 = *(_DWORD *)(gpGdiSharedMemory + 1573012LL) != 0 ? 0xAF : 0;
LABEL_86:
      v44 = v43 + 2;
      *(_BYTE *)(a2 + 44) = v44;
      *a3 = v44;
LABEL_89:
      v10 = 1;
    }
  }
LABEL_20:
  if ( !v47 )
    goto LABEL_21;
  if ( v10 >= 0x10 )
    return v17;
LABEL_92:
  v17 = v10++;
  a3[v17] = -2;
LABEL_21:
  if ( v10 < 0x10 )
  {
    LOBYTE(v9) = 1;
    LOBYTE(v17) = (unsigned __int8)memset(&a3[v10], v9, 16 - v10);
  }
  return v17;
}
