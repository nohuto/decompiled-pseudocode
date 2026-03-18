/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0029920
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetTextFaceW @ 0x1C002FB84 (GreGetTextFaceW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0038848 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C00DD3C4 (GreGetCharSet.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027FB10 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027940 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B47F0 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v6; // rbx
  int v7; // ebp
  __int64 v9; // rcx
  struct _POINTL *v10; // r10
  __int64 v11; // r11
  unsigned int *v12; // r9
  __int64 v14; // r13
  char v15; // si
  unsigned int v16; // r14d
  int v17; // r12d
  int v18; // r12d
  __int64 v19; // rsi
  struct PFE *v20; // r14
  unsigned int *v21; // rsi
  __int64 v22; // rcx
  int v23; // edx
  struct PFE *result; // rax
  __int64 v25; // rcx
  unsigned int v26; // r8d
  char v27; // dl
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rax
  struct tagPvtData *v31; // rax
  char v32; // al
  __int64 v33; // [rsp+50h] [rbp-68h]
  _QWORD v34[12]; // [rsp+58h] [rbp-60h] BYREF
  int v35; // [rsp+C0h] [rbp+8h]
  unsigned int v36; // [rsp+C8h] [rbp+10h]

  v6 = *(_QWORD *)a2;
  v7 = 0;
  v35 = 0;
  v36 = 0;
  v9 = *(_QWORD *)this;
  v10 = a4;
  v11 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v12 = a3;
  v33 = v11;
  v14 = v9 + 40;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 1) != 0 )
  {
    v17 = 0;
  }
  else
  {
    v15 = *(_BYTE *)(v9 + 302);
    if ( ((*(_DWORD *)(v6 + 36) & 1) != 0 || *(_DWORD *)(v6 + 32) == 1)
      && ((gulFontInformation & 2) != 0 && v15 != 3 || (unsigned __int8)(v15 - 4) <= 2u)
      && *(_QWORD *)(v6 + 512) )
    {
      GreAcquireHmgrSemaphore(gulFontInformation, a2, a3, a3);
      v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 512LL) + 96LL);
      v36 = v16;
      if ( v16 == 6 || v16 >= 4 && v16 <= 5 )
      {
        v35 = 0x10000;
        if ( v15 == 6 )
        {
          v17 = 1342242816;
          v35 = 1342242816;
        }
        else
        {
          if ( v15 == 5 || (gulFontInformation & 0x10) != 0 )
            v35 = 268500992;
          v17 = v35;
        }
      }
      else
      {
        v17 = 0;
      }
      GreReleaseHmgrSemaphore();
      v12 = a3;
      v10 = a4;
      v11 = v33;
    }
    else
    {
      v17 = 0;
    }
    if ( !a6 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 36LL) != *(_DWORD *)(gpGdiSharedMemory + 1573016LL) )
      {
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
      }
      if ( *(int *)(*(_QWORD *)this + 32LL) > 0 )
      {
        v18 = 1;
        v19 = v14;
        do
        {
          if ( v11 == *(_QWORD *)v19
            && *(float *)(v19 + 8) == *(float *)(v6 + 336)
            && *(float *)(v19 + 12) == *(float *)(v6 + 340)
            && *(float *)(v19 + 16) == *(float *)(v6 + 344)
            && *(float *)(v19 + 20) == *(float *)(v6 + 348) )
          {
            v20 = *(struct PFE **)(v19 + 24);
            if ( v20 )
            {
              v34[0] = *(_QWORD *)v20;
              if ( *(struct PFT **const *)(v34[0] + 128LL) != gpPFTPrivate
                || (v31 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v34), v11 = v33, v31) )
              {
                if ( v35 )
                {
                  if ( (*(_DWORD *)(v19 + 32) & 0x10010000) == v35 && v36 == *(_DWORD *)(v19 + 48) )
                  {
LABEL_29:
                    v21 = a5;
                    v22 = 56LL * v7;
                    *a3 = *(_DWORD *)(v22 + v14 + 32);
                    a4->x = *(_DWORD *)(v22 + v14 + 36);
                    a4->y = *(_DWORD *)(v22 + v14 + 40);
                    *a5 = *(_DWORD *)(v22 + v14 + 44);
                    goto LABEL_52;
                  }
                }
                else if ( (*(_DWORD *)(v19 + 32) & 0x10000) == 0 )
                {
                  goto LABEL_29;
                }
              }
            }
            v23 = *(_DWORD *)(*(_QWORD *)this + 32LL);
            if ( v18 < v23 )
            {
              memmove((void *)(v14 + 56LL * v7), (const void *)(v14 + 56LL * v18), (unsigned int)(56 * (v23 - v7) - 56));
              v11 = v33;
            }
            --v7;
            --v18;
            --*(_DWORD *)(*(_QWORD *)this + 32LL);
            v19 -= 56LL;
          }
          ++v7;
          ++v18;
          v19 += 56LL;
        }
        while ( v7 < *(_DWORD *)(*(_QWORD *)this + 32LL) );
        v17 = v35;
        v12 = a3;
        v10 = a4;
      }
    }
  }
  v21 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 276LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 208LL),
             (__int64)v12,
             32 * (*(_BYTE *)(*(_QWORD *)this + 28LL) & 2u),
             v12,
             v10,
             a5,
             a6);
  v20 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 1) == 0 )
    {
      if ( v17 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) != 0 )
        {
          *a3 |= 0x10000u;
          v25 = *(_QWORD *)a2;
          v26 = *a3;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) != 0 || *(_DWORD *)(v25 + 32) == 1 )
          {
            if ( *(_QWORD *)(v25 + 512) )
            {
              if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) != 0 )
              {
                v27 = *(_BYTE *)(*(_QWORD *)this + 302LL);
                if ( v27 != 4 && ((unsigned __int8)(v27 - 5) <= 1u || (gulFontInformation & 0x12) == 0x12) )
                {
                  if ( v27 == 6 )
                    v28 = v26 | 0x50000000;
                  else
                    v28 = v26 | 0x10000000;
                  *a3 = v28;
                }
              }
            }
          }
        }
      }
      if ( !a6 )
      {
        if ( v7 >= 3 )
        {
          v7 = 0;
          *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        }
        v29 = 56LL * v7;
        *(_QWORD *)(v29 + v14) = v33;
        *(_QWORD *)(v29 + v14 + 24) = result;
        *(_DWORD *)(v29 + v14 + 32) = *a3;
        *(_DWORD *)(v29 + v14 + 36) = a4->x;
        *(_DWORD *)(v29 + v14 + 40) = a4->y;
        v30 = 14LL * v7;
        *(_DWORD *)(v14 + 4 * v30 + 8) = *(_DWORD *)(v6 + 336);
        *(_DWORD *)(v14 + 4 * v30 + 12) = *(_DWORD *)(v6 + 340);
        *(_DWORD *)(v14 + 4 * v30 + 16) = *(_DWORD *)(v6 + 344);
        *(_DWORD *)(v14 + 4 * v30 + 20) = *(_DWORD *)(v6 + 348);
        *(_DWORD *)(v29 + v14 + 44) = *a5;
        *(_DWORD *)(v29 + v14 + 48) = v36;
        ++*(_DWORD *)(*(_QWORD *)this + 32LL);
      }
    }
LABEL_52:
    if ( !fFontAssocStatus || (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) != 0 )
      goto LABEL_53;
    v32 = fFontAssocStatus | gForceFontAssocCodePage;
    if ( *((_BYTE *)v21 + 3) )
    {
      if ( *((unsigned __int8 *)v21 + 3) != 255 || (v32 & 1) == 0 )
        goto LABEL_53;
    }
    else if ( (v32 & 2) == 0 )
    {
      goto LABEL_53;
    }
    *v21 = *v21 & 0xFF0000FF | (gSystemAnsiCodePage << 8);
LABEL_53:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 64LL) = *v21 >> 8;
    result = v20;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 8LL) &= ~0x10u;
  }
  return result;
}
