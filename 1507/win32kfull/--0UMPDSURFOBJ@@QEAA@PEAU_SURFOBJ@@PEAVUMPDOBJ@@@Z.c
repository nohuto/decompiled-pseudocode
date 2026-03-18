/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02AB1D0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02AB4F0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02AB990 (NtGdiEngCheckAbort.c)
 *     NtGdiEngCopyBits @ 0x1C02ABAD0 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02AC230 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02AC3A0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02AC5A0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02AC970 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02ACCB0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02ACE40 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AD1B0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AD610 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ADB60 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02ADEC0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02AE1D0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AE560 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AF700 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C025E4D4 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C0286364 (-GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     ?ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C02AA354 (-ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct _SURFOBJ **a3)
{
  struct _SURFOBJ *v4; // rax
  struct _SURFOBJ *LockableSURFOBJ; // rax
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rax
  HDEV v9; // rcx
  HDEV v11; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = a2;
  if ( !a2
    || (a2 != a3[9] ? (a2 != a3[11] ? (a2 != a3[13] ? (v4 = 0LL) : (v4 = a3[12])) : (v4 = a3[10])) : (v4 = a3[8]),
        (*(_QWORD *)this = v4) != 0LL
     || (LockableSURFOBJ = UMPDSURFOBJ::GetLockableSURFOBJ(this, a2),
         *(_QWORD *)this = LockableSURFOBJ,
         v6 = LockableSURFOBJ == 0LL,
         v7 = 1,
         v6)) )
  {
    v7 = 0;
  }
  *((_DWORD *)this + 2) = v7;
  v8 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v9 = *(HDEV *)(v8 + 24);
    if ( v9 )
    {
      v11 = ValidateAndReferencePDEV(v9);
      *((_QWORD *)this + 2) = v11;
      if ( !v11 )
        goto LABEL_15;
    }
    else if ( *(_WORD *)(v8 + 76) )
    {
LABEL_15:
      if ( *((_DWORD *)this + 2) )
      {
        EngUnlockSurface(*(SURFOBJ **)this);
        *((_DWORD *)this + 2) = 0;
      }
      *(_QWORD *)this = 0LL;
      return this;
    }
    CAutoTGO::vGuard((UMPDSURFOBJ *)((char *)this + 24), this, (void (*)(void *))UMPDSURFOBJ::Cleanup);
  }
  return this;
}
