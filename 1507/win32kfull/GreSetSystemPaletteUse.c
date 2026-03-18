/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C02B2310
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C007B930 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C02A8690 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0013D20 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  _DWORD *v5; // rax
  int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 i; // r8
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  _BYTE v21[8]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v22; // [rsp+38h] [rbp-81h] BYREF
  __int64 v23; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v24[7]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v25[32]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v26[112]; // [rsp+A0h] [rbp-19h] BYREF
  int v27; // [rsp+128h] [rbp+6Fh] BYREF
  _DWORD *v28; // [rsp+130h] [rbp+77h] BYREF
  __int64 v29; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( v24[0] )
  {
    v29 = *(_QWORD *)(v24[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v21, (struct PDEVOBJ *)&v29);
    v23 = *(_QWORD *)(v29 + 72);
    GreAcquireSemaphore(v23);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25, (struct PDEVOBJ *)&v29);
    v28 = *(_DWORD **)(v29 + 1832);
    if ( (*(_DWORD *)(v29 + 2196) & 0x100) == 0 )
    {
LABEL_34:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
      DCOBJ::~DCOBJ((DCOBJ *)v26);
      SEMOBJ::vUnlock((SEMOBJ *)&v23);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v21);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
      goto LABEL_35;
    }
    v22 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v5 = v28;
    v6 = v28[6];
    if ( (v6 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v6 & 0x10000 | 0x8000u) >> 15;
    if ( v2 == 1 )
    {
      if ( (v6 & 0x11000) != 0 )
      {
        v7 = v28[15] >> 1;
        if ( (unsigned int)v7 > 0xA )
          v7 = 10LL;
        if ( (_DWORD)v7 )
        {
          v8 = 0LL;
          v9 = (unsigned int)v7;
          do
          {
            v10 = *((_QWORD *)v5 + 16);
            v27 = *(_DWORD *)(v8 + *((_QWORD *)ppalDefault + 16));
            HIBYTE(v27) = 48;
            *(_DWORD *)(v8 + v10) = v27;
            v8 += 4LL;
            v5 = v28;
            --v9;
          }
          while ( v9 );
        }
        LODWORD(v11) = v5[7];
        LODWORD(v12) = 20;
        if ( (_DWORD)v7 )
        {
          while ( 1 )
          {
            v12 = (unsigned int)(v12 - 1);
            v11 = (unsigned int)(v11 - 1);
            v13 = *((_QWORD *)v5 + 16);
            v27 = *(_DWORD *)(*((_QWORD *)ppalDefault + 16) + 4 * v12);
            HIBYTE(v27) = 48;
            *(_DWORD *)(v13 + 4 * v11) = v27;
            if ( !--v7 )
              break;
            v5 = v28;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v24[0] + 80LL) + 8LL) |= 0xFu;
        v28[6] &= 0xFFFEEFFF;
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v28);
        v4 = 1;
      }
      goto LABEL_29;
    }
    if ( v2 == 2 )
    {
      v14 = v28[7];
      if ( !v14 )
      {
        v3 = 0;
LABEL_29:
        SEMOBJ::vUnlock((SEMOBJ *)&v22);
        if ( v4 && (*(_DWORD *)(v29 + 56) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v29 + 1792) )
            (*(void (__fastcall **)(_QWORD, _DWORD **, _QWORD, _QWORD, _DWORD))(v29 + 1792))(
              *(_QWORD *)(*(_QWORD *)(v29 + 40) + 1824LL),
              &v28,
              0LL,
              0LL,
              v28[7]);
          else
            v3 = 0;
        }
        goto LABEL_34;
      }
      v15 = 1;
      if ( (unsigned int)(v14 - 1) > 1 )
      {
        do
        {
          v16 = v15++;
          *(_BYTE *)(*((_QWORD *)v5 + 16) + 4 * v16 + 3) = 0;
          v5 = v28;
        }
        while ( v15 < v28[7] - 1 );
      }
      v17 = v5[6] & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v28[7]; v5 = v28 )
      {
        *(_BYTE *)(*((_QWORD *)v5 + 16) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v17 = v5[6] & 0xFFFEEFFF | 0x10000;
    }
    v5[6] = v17;
    goto LABEL_29;
  }
LABEL_35:
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return v3;
}
