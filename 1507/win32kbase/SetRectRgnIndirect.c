/*
 * XREFs of SetRectRgnIndirect @ 0x1C0041D40
 * Callers:
 *     SetEmptyRgn @ 0x1C0013010 (SetEmptyRgn.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0044440 (UserSetDCVisRgn.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B4270 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall SetRectRgnIndirect(HRGN a1, LONG *a2)
{
  LONG v2; // esi
  LONG v3; // edi
  LONG v4; // ebx
  LONG v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // r14d
  struct _RECTL v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[40]; // [rsp+38h] [rbp-40h] BYREF
  int v12; // [rsp+60h] [rbp-18h]

  v2 = a2[3];
  v3 = a2[2];
  v4 = a2[1];
  v5 = *a2;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v10, a1, 0, 0);
  v6 = v10;
  v7 = 0;
  if ( v10 )
  {
    v9.left = v5;
    v9.top = v4;
    v9.right = v3;
    v9.bottom = v2;
    if ( (((v5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((v2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((v3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((v4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      ERECTL::vOrder((ERECTL *)&v9);
      RGNOBJ::vSet((RGNOBJ *)&v10, &v9);
      v6 = v10;
      v7 = 1;
    }
  }
  if ( !v12 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v10);
    v6 = v10;
  }
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v11);
  return v7;
}
