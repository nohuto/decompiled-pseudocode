/*
 * XREFs of NtGdiSelectClipPath @ 0x1C02A5910
 * Callers:
 *     <none>
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0005F34 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C0006014 (-bInactive@DC@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001CF44 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C01057B4 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  unsigned int v3; // ebx
  int v4; // edi
  ULONG v5; // ecx
  struct _RECTL *v6; // r9
  DC *v7; // rcx
  DC *v8; // rcx
  struct REGION *v10[2]; // [rsp+28h] [rbp-69h] BYREF
  DC *v11[6]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v12[8]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v13; // [rsp+70h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v3 = 0;
  if ( !v11[0] || (unsigned int)(a2 - 1) > 4 || (v4 = 1, *((_WORD *)v11[0] + 6) > 1u) )
  {
    v5 = 87;
    goto LABEL_14;
  }
  if ( !(unsigned int)DC::bInactive(v11[0]) )
  {
    v5 = 1003;
LABEL_14:
    EngSetLastError(v5);
    goto LABEL_15;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v12, v11);
  if ( v13 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP(
      (RGNMEMOBJTMP *)v10,
      (struct EPATHOBJ *)v12,
      *(unsigned __int8 *)(*((_QWORD *)v11[0] + 10) + 74LL),
      v6);
    if ( !v10[0] || !(unsigned int)DC::iSelect(v11[0], v10[0], a2) )
      v4 = 0;
    v8 = v11[0];
    *((_DWORD *)v11[0] + 44) &= ~1u;
    DC::hpath(v8, 0LL);
    v3 = v4;
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
  }
  else
  {
    EngSetLastError(8u);
    v7 = v11[0];
    *((_DWORD *)v11[0] + 44) &= ~1u;
    DC::hpath(v7, 0LL);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v12);
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v3;
}
