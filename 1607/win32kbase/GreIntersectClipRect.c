/*
 * XREFs of GreIntersectClipRect @ 0x1C00453F0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0039950 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0045F90 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     bCvtPts1 @ 0x1C0046144 (bCvtPts1.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00BCF30 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG left, LONG a3, LONG right, LONG a5)
{
  unsigned int v6; // edi
  DC *v10; // rbx
  ULONG v11; // ecx
  _DWORD *v12; // rcx
  int v13; // r15d
  bool v14; // zf
  char *v15; // rcx
  int v16; // edx
  int v17; // eax
  char *v19; // [rsp+20h] [rbp-60h] BYREF
  int v20; // [rsp+28h] [rbp-58h]
  int v21; // [rsp+2Ch] [rbp-54h]
  DC *v22[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v23[32]; // [rsp+40h] [rbp-40h] BYREF
  struct _RECTL v24; // [rsp+60h] [rbp-20h] BYREF

  v6 = 0;
  v22[0] = 0LL;
  v22[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v23);
  XDCOBJ::vLock((XDCOBJ *)v22, a1);
  v10 = v22[0];
  if ( !v22[0] || *((_WORD *)v22[0] + 6) > 1u )
  {
    v11 = 6;
LABEL_22:
    EngSetLastError(v11);
    goto LABEL_23;
  }
  v12 = (_DWORD *)*((_QWORD *)v22[0] + 10);
  v13 = v12[78] & 1;
  v14 = (v12[88] & 0xE000) == 0;
  v20 = v12[17];
  v21 = v13;
  if ( v14 )
  {
    v15 = (char *)v22[0] + 336;
    v19 = (char *)v22[0] + 336;
  }
  else
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v22, 0x204u, 0);
    v15 = v19;
    v10 = v22[0];
    v13 = v21;
  }
  v16 = *((_DWORD *)v15 + 8);
  v24.left = left;
  v24.top = a3;
  v24.right = right;
  v24.bottom = a5;
  if ( (v16 & 1) != 0 )
  {
    if ( (v16 & 0x43) != 0x43 )
    {
      bCvtPts1(v15, &v24, 2LL);
      right = v24.right;
      left = v24.left;
    }
    if ( v13 )
    {
      v24.left = left + 1;
      v24.right = right + 1;
    }
    ERECTL::vOrder((ERECTL *)&v24);
    v17 = DC::iCombine(v10, &v24, 1);
    goto LABEL_18;
  }
  if ( (((left & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v11 = 87;
    goto LABEL_22;
  }
  v17 = DC::iCombine(v10, (struct EXFORMOBJ *)&v19, &v24, 1);
LABEL_18:
  v6 = v17;
  if ( v17 > 1 )
    v6 = 3;
LABEL_23:
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v6;
}
