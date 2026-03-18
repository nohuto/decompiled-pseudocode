/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C02B443C
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C01008B0 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C02A9920 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C003A928 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
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
  __int64 v21; // [rsp+30h] [rbp-89h] BYREF
  __int64 v22; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v23[8]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v25[40]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v26[32]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v27[112]; // [rsp+A0h] [rbp-19h] BYREF
  int v28; // [rsp+128h] [rbp+6Fh] BYREF
  _DWORD *v29; // [rsp+130h] [rbp+77h] BYREF
  __int64 v30; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( v24[0] )
  {
    v30 = *(_QWORD *)(v24[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v23, (struct PDEVOBJ *)&v30);
    v22 = *(_QWORD *)(v30 + 72);
    GreAcquireSemaphore(v22);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v26, (struct PDEVOBJ *)&v30);
    v29 = *(_DWORD **)(v30 + 1832);
    if ( (*(_DWORD *)(v30 + 2196) & 0x100) == 0 )
    {
LABEL_34:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v26);
      DCOBJ::~DCOBJ((DCOBJ *)v27);
      SEMOBJ::vUnlock((SEMOBJ *)&v22);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v23);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
      goto LABEL_35;
    }
    v21 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v5 = v29;
    v6 = v29[6];
    if ( (v6 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v6 & 0x10000 | 0x8000u) >> 15;
    if ( v2 == 1 )
    {
      if ( (v6 & 0x11000) != 0 )
      {
        v7 = v29[15] >> 1;
        if ( (unsigned int)v7 > 0xA )
          v7 = 10LL;
        if ( (_DWORD)v7 )
        {
          v8 = 0LL;
          v9 = (unsigned int)v7;
          do
          {
            v10 = *((_QWORD *)v5 + 15);
            v28 = *(_DWORD *)(v8 + *((_QWORD *)ppalDefault + 15));
            HIBYTE(v28) = 48;
            *(_DWORD *)(v8 + v10) = v28;
            v8 += 4LL;
            v5 = v29;
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
            v13 = *((_QWORD *)v5 + 15);
            v28 = *(_DWORD *)(*((_QWORD *)ppalDefault + 15) + 4 * v12);
            HIBYTE(v28) = 48;
            *(_DWORD *)(v13 + 4 * v11) = v28;
            if ( !--v7 )
              break;
            v5 = v29;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v24[0] + 80LL) + 8LL) |= 0xFu;
        v29[6] &= 0xFFFEEFFF;
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v29);
        v4 = 1;
      }
      goto LABEL_29;
    }
    if ( v2 == 2 )
    {
      v14 = v29[7];
      if ( !v14 )
      {
        v3 = 0;
LABEL_29:
        SEMOBJ::vUnlock((SEMOBJ *)&v21);
        if ( v4 && (*(_DWORD *)(v30 + 56) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v30 + 1792) )
            (*(void (__fastcall **)(_QWORD, _DWORD **, _QWORD, _QWORD, _DWORD))(v30 + 1792))(
              *(_QWORD *)(*(_QWORD *)(v30 + 40) + 1824LL),
              &v29,
              0LL,
              0LL,
              v29[7]);
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
          *(_BYTE *)(*((_QWORD *)v5 + 15) + 4 * v16 + 3) = 0;
          v5 = v29;
        }
        while ( v15 < v29[7] - 1 );
      }
      v17 = v5[6] & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v29[7]; v5 = v29 )
      {
        *(_BYTE *)(*((_QWORD *)v5 + 15) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v17 = v5[6] & 0xFFFEEFFF | 0x10000;
    }
    v5[6] = v17;
    goto LABEL_29;
  }
LABEL_35:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v24);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v25);
  return v3;
}
