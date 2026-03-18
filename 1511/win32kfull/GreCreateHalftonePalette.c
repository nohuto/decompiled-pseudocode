/*
 * XREFs of GreCreateHalftonePalette @ 0x1C02B1138
 * Callers:
 *     CreateDIBPalette @ 0x1C01F08C0 (CreateDIBPalette.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001BFE0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C001C078 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(HDC a1)
{
  __int64 v1; // rbx
  HPALETTE *v2; // rax
  unsigned int v3; // r8d
  unsigned int *v4; // r9
  DYNAMICMODECHANGESHARELOCK *v5; // rcx
  _BYTE v7[8]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp-20h]
  _QWORD v10[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+18h] BYREF
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v1 = 0LL;
  if ( v10[0] )
  {
    v12 = *(_QWORD *)(v10[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v7, (struct PDEVOBJ *)&v12);
    v13 = ghsemHT;
    GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v12) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v12, 0LL) )
    {
      v2 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v12);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v11, *v2);
      v9 = 0;
      v8 = 0LL;
      if ( v11 && (v3 = *(_DWORD *)(v11 + 28)) != 0 )
      {
        v4 = *(unsigned int **)(v11 + 128);
      }
      else
      {
        v3 = logDefaultPal[1];
        v4 = (unsigned int *)&logDefaultPal[2];
      }
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v8, 1u, v3, v4, 0, 0, 0, 0x100500u)
        && (unsigned int)GreSetPaletteOwner(*v8, 2147483650LL) )
      {
        v9 = 1;
        v1 = *v8;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v8);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v11);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v7);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v5);
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return v1;
}
