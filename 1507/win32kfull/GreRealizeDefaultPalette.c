/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C007B930
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C007B50C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C0215780 (xxxFlushPalette.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0013D20 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     GreSetSystemPaletteUse @ 0x1C02B2310 (GreSetSystemPaletteUse.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreRealizeDefaultPalette(HDC a1)
{
  DYNAMICMODECHANGESHARELOCK *v2; // rcx
  __int64 v4; // rbx
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v10; // [rsp+28h] [rbp-71h] BYREF
  __int64 v11; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v12[7]; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v13[32]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v14[96]; // [rsp+90h] [rbp-9h] BYREF
  char v15; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+110h] [rbp+77h] BYREF
  __int64 v17; // [rsp+118h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    v16 = *(_QWORD *)(v12[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v9, (struct PDEVOBJ *)&v16);
    v11 = *(_QWORD *)(v16 + 72);
    GreAcquireSemaphore(v11);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct PDEVOBJ *)&v16);
    if ( (*(_DWORD *)(v16 + 2196) & 0x100) != 0 )
    {
      v17 = *(_QWORD *)(v16 + 1832);
      v4 = v17;
      v10 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( (*(_DWORD *)(v4 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v5 = *(_DWORD *)(v4 + 60) >> 1;
      v6 = *(_DWORD *)(v4 + 28) - v5;
      if ( v5 < v6 )
      {
        v7 = 4LL * v5;
        v8 = v6 - v5;
        do
        {
          v7 += 4LL;
          *(_BYTE *)(v7 + *(_QWORD *)(v4 + 128) - 1) &= ~0x20u;
          --v8;
        }
        while ( v8 );
      }
      hForePalette = 0LL;
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v17);
      *(_DWORD *)(*(_QWORD *)(v12[0] + 80LL) + 8LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v10);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
    DCOBJ::~DCOBJ((DCOBJ *)v14);
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v9);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v2);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return 0LL;
}
