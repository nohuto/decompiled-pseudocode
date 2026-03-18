/*
 * XREFs of GreGetSystemPaletteUse @ 0x1C007B9EC
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C007B50C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     CreateScreenPalette @ 0x1C0231474 (CreateScreenPalette.c)
 *     NtGdiGetSystemPaletteUse @ 0x1C02A7540 (NtGdiGetSystemPaletteUse.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSystemPaletteUse(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF
  char v6; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v2 = *(_QWORD *)(v5[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
    if ( (*(_DWORD *)(v2 + 2196) & 0x100) != 0 )
    {
      v3 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*(_QWORD *)(v2 + 1832) + 24LL);
      if ( ((unsigned __int16)v3 & 0x1000) != 0 )
      {
        v1 = 2;
      }
      else
      {
        v3 = (DYNAMICMODECHANGESHARELOCK *)(((unsigned int)v3 & 0x10000 | 0x8000) >> 15);
        v1 = (unsigned int)v3;
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v1;
}
