/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0022154
 * Callers:
 *     GreGetTextFaceW @ 0x1C001B3B4 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetCharSet @ 0x1C00E1358 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00E8DF8 (GreGetOutlineTextMetricsInternalW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027F4D0 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001EF54 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B37C4 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v6; // r10
  int v7; // r14d
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int *v11; // rbp
  struct XDCOBJ *v12; // rdi
  __int64 v13; // r9
  float *v14; // r15
  __int64 v15; // r13
  char v16; // bl
  int v17; // ebp
  __int64 v18; // rbx
  struct PFE *v19; // rdi
  bool v20; // zf
  unsigned int *v21; // rbx
  struct XDCOBJ *v22; // r9
  __int64 v23; // rcx
  int v24; // edx
  struct PFE *AMatch; // rax
  __int64 v26; // rcx
  unsigned int v27; // edx
  char v28; // r8
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  char v35; // al
  unsigned int v36[2]; // [rsp+50h] [rbp-68h]
  _QWORD v37[12]; // [rsp+58h] [rbp-60h] BYREF
  int v38; // [rsp+C0h] [rbp+8h]

  v6 = *(_QWORD *)a2;
  v7 = 0;
  v38 = 0;
  v9 = *(_QWORD *)this;
  v10 = 0;
  v11 = a3;
  v12 = a2;
  v13 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v14 = (float *)(*(_QWORD *)a2 + 336LL);
  *(_QWORD *)v36 = v13;
  v15 = v9 + 40;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 1) == 0 )
  {
    v16 = *(_BYTE *)(v9 + 302);
    if ( ((*(_DWORD *)(v6 + 36) & 1) != 0 || *(_DWORD *)(v6 + 32) == 1)
      && ((gulFontInformation & 2) != 0 && v16 != 3 || (unsigned __int8)(v16 - 4) <= 2u)
      && *(_QWORD *)(v6 + 512) )
    {
      GreAcquireHmgrSemaphore();
      v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 512LL) + 96LL);
      if ( (unsigned int)(v38 - 4) <= 2 )
      {
        v10 = 0x10000;
        if ( v16 == 6 )
        {
          v10 = 1342242816;
        }
        else if ( v16 == 5 || (gulFontInformation & 0x10) != 0 )
        {
          v10 = 268500992;
        }
      }
      GreReleaseHmgrSemaphore();
      v13 = *(_QWORD *)v36;
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
        v17 = 1;
        v18 = v15;
        while ( v13 != *(_QWORD *)v18
             || *(float *)(v18 + 8) != *v14
             || *(float *)(v18 + 12) != v14[1]
             || *(float *)(v18 + 16) != v14[2]
             || *(float *)(v18 + 20) != v14[3] )
        {
LABEL_32:
          ++v7;
          ++v17;
          v18 += 56LL;
          if ( v7 >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
          {
            v11 = a3;
            v12 = a2;
            goto LABEL_34;
          }
        }
        v19 = *(struct PFE **)(v18 + 24);
        if ( v19 )
        {
          v37[0] = *(_QWORD *)v19;
          if ( *(struct PFT **const *)(v37[0] + 128LL) != gpPFTPrivate || PFFOBJ::pPvtDataMatch((PFFOBJ *)v37) )
          {
            if ( !v10 )
            {
              v20 = (*(_DWORD *)(v18 + 32) & 0x10000) == 0;
LABEL_27:
              if ( v20 )
              {
                v21 = a5;
                v22 = a2;
                v23 = 56LL * v7;
                *a3 = *(_DWORD *)(v23 + v15 + 32);
                a4->x = *(_DWORD *)(v23 + v15 + 36);
                a4->y = *(_DWORD *)(v23 + v15 + 40);
                *a5 = *(_DWORD *)(v23 + v15 + 44);
                goto LABEL_53;
              }
              goto LABEL_29;
            }
            if ( (*(_DWORD *)(v18 + 32) & 0x10010000) == v10 )
            {
              v20 = v38 == *(_DWORD *)(v18 + 48);
              goto LABEL_27;
            }
          }
        }
LABEL_29:
        v24 = *(_DWORD *)(*(_QWORD *)this + 32LL);
        if ( v17 < v24 )
          memmove((void *)(v15 + 56LL * v7), (const void *)(v15 + 56LL * v17), (unsigned int)(56 * (v24 - v7) - 56));
        --v7;
        v13 = *(_QWORD *)v36;
        --v17;
        --*(_DWORD *)(*(_QWORD *)this + 32LL);
        v18 -= 56LL;
        goto LABEL_32;
      }
    }
  }
LABEL_34:
  v21 = a5;
  AMatch = ppfeGetAMatch(
             v12,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 276LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 208LL),
             v13,
             32 * (*(_BYTE *)(*(_QWORD *)this + 28LL) & 2u),
             v11,
             a4,
             a5,
             a6);
  v19 = AMatch;
  if ( AMatch )
  {
    v22 = a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 176LL) & 1) == 0 )
    {
      if ( v10 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)AMatch + 4) + 48LL) & 0x40) != 0 )
        {
          *v11 |= 0x10000u;
          v26 = *(_QWORD *)a2;
          v27 = *v11;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) != 0 || *(_DWORD *)(v26 + 32) == 1 )
          {
            if ( *(_QWORD *)(v26 + 512) )
            {
              if ( (*(_DWORD *)(*((_QWORD *)AMatch + 4) + 48LL) & 1) != 0 )
              {
                v28 = *(_BYTE *)(*(_QWORD *)this + 302LL);
                if ( v28 != 4 && ((unsigned __int8)(v28 - 5) <= 1u || (gulFontInformation & 0x12) == 0x12) )
                {
                  if ( v28 == 6 )
                    v29 = v27 | 0x50000000;
                  else
                    v29 = v27 | 0x10000000;
                  *v11 = v29;
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
          *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
          v7 = 0;
        }
        v30 = 56LL * v7;
        v31 = v30 + v15;
        v32 = v30 - (_QWORD)v14;
        *(_QWORD *)v31 = *(_QWORD *)v36;
        *(_QWORD *)(v31 + 24) = AMatch;
        *(_DWORD *)(v31 + 32) = *v11;
        *(_DWORD *)(v31 + 36) = a4->x;
        *(_DWORD *)(v31 + 40) = a4->y;
        v33 = 4LL;
        do
        {
          *(float *)((char *)v14 + v32 + v15 + 8) = *v14;
          ++v14;
          --v33;
        }
        while ( v33 );
        *(_DWORD *)(v31 + 44) = *a5;
        *(_DWORD *)(v31 + 48) = v38;
        ++*(_DWORD *)(*(_QWORD *)this + 32LL);
      }
    }
LABEL_53:
    if ( fFontAssocStatus && (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) == 0 )
    {
      if ( (v35 = fFontAssocStatus | gForceFontAssocCodePage, !*((_BYTE *)v21 + 3)) && (v35 & 2) != 0
        || *((unsigned __int8 *)v21 + 3) == 255 && (v35 & 1) != 0 )
      {
        *v21 = *v21 & 0xFF0000FF | (gSystemAnsiCodePage << 8);
      }
    }
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 80LL) + 64LL) = *v21 >> 8;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 80LL) + 8LL) &= ~0x10u;
  }
  return v19;
}
