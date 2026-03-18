/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C02B159C
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C010CB04 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C02A7DE0 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0041738 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // r14
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 i; // r8
  DYNAMICMODECHANGESHARELOCK *v20; // rcx
  _BYTE v22[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v23; // [rsp+38h] [rbp-41h] BYREF
  __int64 v24; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v26[112]; // [rsp+60h] [rbp-19h] BYREF
  int v27; // [rsp+E8h] [rbp+6Fh] BYREF
  _DWORD *v28; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v29; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  v5 = v25[0];
  if ( v25[0] )
  {
    v29 = *(_QWORD *)(v25[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v22, (struct PDEVOBJ *)&v29);
    v24 = *(_QWORD *)(v29 + 72);
    GreAcquireSemaphore(v24);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v26, (struct PDEVOBJ *)&v29);
    v28 = *(_DWORD **)(v29 + 1832);
    if ( (*(_DWORD *)(v29 + 2196) & 0x100) == 0 )
    {
LABEL_34:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v26);
      SEMOBJ::vUnlock((SEMOBJ *)&v24);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v22);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v20);
      goto LABEL_35;
    }
    v23 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v6 = v28;
    v7 = v28[6];
    if ( (v7 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v7 & 0x10000 | 0x8000u) >> 15;
    if ( v2 == 1 )
    {
      if ( (v7 & 0x11000) != 0 )
      {
        v8 = v28[15] >> 1;
        if ( (unsigned int)v8 > 0xA )
          v8 = 10LL;
        if ( (_DWORD)v8 )
        {
          v9 = 0LL;
          v10 = (unsigned int)v8;
          do
          {
            v11 = *((_QWORD *)v6 + 16);
            v27 = *(_DWORD *)(v9 + *((_QWORD *)ppalDefault + 16));
            HIBYTE(v27) = 48;
            *(_DWORD *)(v9 + v11) = v27;
            v9 += 4LL;
            v6 = v28;
            --v10;
          }
          while ( v10 );
        }
        LODWORD(v12) = v6[7];
        LODWORD(v13) = 20;
        if ( (_DWORD)v8 )
        {
          while ( 1 )
          {
            v13 = (unsigned int)(v13 - 1);
            v12 = (unsigned int)(v12 - 1);
            v14 = *((_QWORD *)v6 + 16);
            v27 = *(_DWORD *)(*((_QWORD *)ppalDefault + 16) + 4 * v13);
            HIBYTE(v27) = 48;
            *(_DWORD *)(v14 + 4 * v12) = v27;
            if ( !--v8 )
              break;
            v6 = v28;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) |= 0xFu;
        v28[6] &= 0xFFFEEFFF;
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v28);
        v4 = 1;
      }
      goto LABEL_29;
    }
    if ( v2 == 2 )
    {
      v15 = v28[7];
      if ( !v15 )
      {
        v3 = 0;
LABEL_29:
        SEMOBJ::vUnlock((SEMOBJ *)&v23);
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
      v16 = 1;
      if ( (unsigned int)(v15 - 1) > 1 )
      {
        do
        {
          v17 = v16++;
          *(_BYTE *)(*((_QWORD *)v6 + 16) + 4 * v17 + 3) = 0;
          v6 = v28;
        }
        while ( v16 < v28[7] - 1 );
      }
      v18 = v6[6] & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v28[7]; v6 = v28 )
      {
        *(_BYTE *)(*((_QWORD *)v6 + 16) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v18 = v6[6] & 0xFFFEEFFF | 0x10000;
    }
    v6[6] = v18;
    goto LABEL_29;
  }
LABEL_35:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v25);
  return v3;
}
