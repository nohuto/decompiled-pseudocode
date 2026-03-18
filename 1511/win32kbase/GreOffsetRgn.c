/*
 * XREFs of GreOffsetRgn @ 0x1C00441E0
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0023820 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     NtGdiOffsetRgn @ 0x1C0045A30 (NtGdiOffsetRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0075658 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     EngOffsetRgn @ 0x1C00BF4F0 (EngOffsetRgn.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0029C90 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // esi
  unsigned int *v6; // rbx
  unsigned int *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  struct _POINTL v10; // [rsp+68h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a1, 0);
  v10.x = a2;
  v5 = 0;
  v6 = v8[0];
  v10.y = a3;
  if ( v8[0] )
  {
    if ( (unsigned int)RGNOBJ::bOffset(v8, &v10) )
    {
      v5 = 1;
      if ( v6[21] != 1 )
        v5 = (v6[20] > 0xA0) + 2;
    }
  }
  if ( !v9 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v8);
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
  return v5;
}
