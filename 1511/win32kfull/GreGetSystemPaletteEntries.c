/*
 * XREFs of GreGetSystemPaletteEntries @ 0x1C02B12A0
 * Callers:
 *     CreateScreenPalette @ 0x1C02318A4 (CreateScreenPalette.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C004153C (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSystemPaletteEntries(HDC a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int Entries; // edi
  __int64 v8; // rbx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  _BYTE v11[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  Entries = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v8 = *(_QWORD *)(v13[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v11);
    if ( (*(_DWORD *)(v8 + 2196) & 0x100) != 0 )
    {
      v12 = *(_QWORD *)(v8 + 1832);
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&v12, a2, a3, a4, 1);
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  return Entries;
}
