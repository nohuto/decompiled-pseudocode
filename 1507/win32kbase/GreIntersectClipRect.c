/*
 * XREFs of GreIntersectClipRect @ 0x1C00279E0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0028530 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     bCvtPts1 @ 0x1C0028698 (bCvtPts1.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B4270 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG left, LONG a3, LONG right, LONG a5)
{
  DC *v8; // rsi
  int v9; // ebx
  _DWORD *v10; // rcx
  int v11; // r14d
  bool v12; // zf
  char *v13; // rcx
  int v14; // edx
  char *v16; // [rsp+20h] [rbp-60h] BYREF
  int v17; // [rsp+28h] [rbp-58h]
  int v18; // [rsp+2Ch] [rbp-54h]
  DC *v19[6]; // [rsp+30h] [rbp-50h] BYREF
  struct _RECTL v20; // [rsp+60h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  v8 = v19[0];
  if ( v19[0] && *((_WORD *)v19[0] + 6) <= 1u )
  {
    v10 = (_DWORD *)*((_QWORD *)v19[0] + 10);
    v11 = v10[78] & 1;
    v12 = (v10[88] & 0xE000) == 0;
    v17 = v10[17];
    v18 = v11;
    if ( v12 )
    {
      v13 = (char *)v19[0] + 336;
      v16 = (char *)v19[0] + 336;
    }
    else
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v16, (struct XDCOBJ *)v19, 0x204u, 0);
      v13 = v16;
      v8 = v19[0];
      v11 = v18;
    }
    v14 = *((_DWORD *)v13 + 8);
    v20.left = left;
    v20.top = a3;
    v20.right = right;
    v20.bottom = a5;
    if ( (v14 & 1) != 0 )
    {
      if ( (v14 & 0x43) != 0x43 )
      {
        bCvtPts1(v13, &v20, 2LL);
        right = v20.right;
        left = v20.left;
      }
      if ( v11 )
      {
        v20.left = left + 1;
        v20.right = right + 1;
      }
      ERECTL::vOrder((ERECTL *)&v20);
      v9 = DC::iCombine(v8, &v20, 1);
      if ( v9 > 1 )
        v9 = 3;
    }
    else if ( (((left & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
           || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
           || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
           || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      EngSetLastError(0x57u);
      v9 = 0;
    }
    else
    {
      v9 = DC::iCombine(v8, (struct EXFORMOBJ *)&v16, &v20, 1);
      if ( v9 > 1 )
        v9 = 3;
    }
  }
  else
  {
    EngSetLastError(6u);
    v9 = 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return (unsigned int)v9;
}
