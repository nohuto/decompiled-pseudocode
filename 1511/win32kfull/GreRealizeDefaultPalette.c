/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C010CB04
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C0215630 (xxxFlushPalette.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0041738 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreSetSystemPaletteUse @ 0x1C02B159C (GreSetSystemPaletteUse.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreRealizeDefaultPalette(HDC a1)
{
  __int64 v2; // rdi
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+28h] [rbp-31h] BYREF
  __int64 v12; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v14[96]; // [rsp+50h] [rbp-9h] BYREF
  char v15; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v2 = v13[0];
  if ( v13[0] )
  {
    v16 = *(_QWORD *)(v13[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v10, (struct PDEVOBJ *)&v16);
    v12 = *(_QWORD *)(v16 + 72);
    GreAcquireSemaphore(v12);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14, (struct PDEVOBJ *)&v16);
    if ( (*(_DWORD *)(v16 + 2196) & 0x100) != 0 )
    {
      v17 = *(_QWORD *)(v16 + 1832);
      v5 = v17;
      v11 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( (*(_DWORD *)(v5 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v6 = *(_DWORD *)(v5 + 60) >> 1;
      v7 = *(_DWORD *)(v5 + 28) - v6;
      if ( v6 < v7 )
      {
        v8 = 4LL * v6;
        v9 = v7 - v6;
        do
        {
          v8 += 4LL;
          *(_BYTE *)(v8 + *(_QWORD *)(v5 + 128) - 1) &= ~0x20u;
          --v9;
        }
        while ( v9 );
      }
      hForePalette = 0LL;
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v17);
      *(_DWORD *)(*(_QWORD *)(v2 + 80) + 8LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v11);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
    SEMOBJ::vUnlock((SEMOBJ *)&v12);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v10);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  return 0LL;
}
