/*
 * XREFs of NtGdiSelectClipPath @ 0x1C02A5380
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0027798 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C013073C (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C027AD5C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C027AEC4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C02A4BD0 (-bInactive@DC@@QEAAHXZ.c)
 */

_BOOL8 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  DC *v3; // rdi
  BOOL v4; // ebx
  ULONG v5; // ecx
  struct _RECTL *v6; // r9
  DC *v8[2]; // [rsp+20h] [rbp-A8h] BYREF
  struct REGION *v9[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v11; // [rsp+48h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v3 = v8[0];
  v4 = 0;
  if ( !v8[0] || (unsigned int)(a2 - 1) > 4 )
  {
    v5 = 87;
    goto LABEL_12;
  }
  if ( !(unsigned int)DC::bInactive(v8[0]) )
  {
    v5 = 1003;
LABEL_12:
    EngSetLastError(v5);
    goto LABEL_13;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, v8);
  if ( v11 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP(
      (RGNMEMOBJTMP *)v9,
      (struct EPATHOBJ *)v10,
      *(unsigned __int8 *)(*((_QWORD *)v3 + 10) + 74LL),
      v6);
    if ( v9[0] )
      v4 = DC::iSelect(v3, v9[0], a2) != 0;
    *((_DWORD *)v3 + 44) &= ~1u;
    DC::hpath(v3, 0LL);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
  }
  else
  {
    EngSetLastError(8u);
    *((_DWORD *)v3 + 44) &= ~1u;
    DC::hpath(v3, 0LL);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
LABEL_13:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
  return v4;
}
