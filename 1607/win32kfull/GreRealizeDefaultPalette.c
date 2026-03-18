/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C01008B0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C020E340 (xxxFlushPalette.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C003A928 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     GreSetSystemPaletteUse @ 0x1C02B443C (GreSetSystemPaletteUse.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreRealizeDefaultPalette(HDC a1)
{
  __int64 v2; // rbx
  unsigned int v3; // ecx
  unsigned int v4; // edx
  __int64 v5; // r8
  __int64 v6; // rcx
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-79h] BYREF
  __int64 v10; // [rsp+28h] [rbp-71h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v14[32]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v15[96]; // [rsp+90h] [rbp-9h] BYREF
  char v16; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+110h] [rbp+77h] BYREF
  __int64 v18; // [rsp+118h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    v17 = *(_QWORD *)(v12[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v11, (struct PDEVOBJ *)&v17);
    v10 = *(_QWORD *)(v17 + 72);
    GreAcquireSemaphore(v10);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14, (struct PDEVOBJ *)&v17);
    if ( (*(_DWORD *)(v17 + 2196) & 0x100) != 0 )
    {
      v18 = *(_QWORD *)(v17 + 1832);
      v2 = v18;
      v9 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( (*(_DWORD *)(v2 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v3 = *(_DWORD *)(v2 + 60) >> 1;
      v4 = *(_DWORD *)(v2 + 28) - v3;
      if ( v3 < v4 )
      {
        v5 = 4LL * v3;
        v6 = v4 - v3;
        do
        {
          v5 += 4LL;
          *(_BYTE *)(*(_QWORD *)(v2 + 120) + v5 - 1) &= ~0x20u;
          --v6;
        }
        while ( v6 );
      }
      hForePalette = 0LL;
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v18);
      *(_DWORD *)(*(_QWORD *)(v12[0] + 80LL) + 8LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v9);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
    DCOBJ::~DCOBJ((DCOBJ *)v15);
    SEMOBJ::vUnlock((SEMOBJ *)&v10);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v11);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v13);
  return 0LL;
}
