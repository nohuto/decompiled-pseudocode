/*
 * XREFs of NtGdiStrokeAndFillPath @ 0x1C02A54A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C027AD5C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C027AEC4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C02A4BD0 (-bInactive@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiStrokeAndFillPath(HDC a1)
{
  unsigned int v1; // ebx
  DC *v2; // r8
  ULONG v3; // ecx
  __int64 v4; // rdx
  int v5; // edi
  DC *v6; // rcx
  DC *v8[2]; // [rsp+30h] [rbp-49h] BYREF
  struct _XFORMOBJ v9; // [rsp+40h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-29h] BYREF
  __int64 v11; // [rsp+58h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v1 = 0;
  if ( !v8[0] || (*((_DWORD *)v8[0] + 9) & 0x10000) != 0 )
  {
    v3 = 87;
    goto LABEL_14;
  }
  if ( !(unsigned int)DC::bInactive(v8[0]) )
  {
    v3 = 1003;
LABEL_14:
    EngSetLastError(v3);
    goto LABEL_15;
  }
  v4 = *((_QWORD *)v2 + 10);
  v5 = *(_DWORD *)(v4 + 8);
  if ( (v5 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v2, *(_QWORD *)(v4 + 16));
    v2 = v8[0];
  }
  if ( (v5 & 0x2000) != 0 )
    GreDCSelectPen(v2, *(_QWORD *)(*((_QWORD *)v2 + 10) + 24LL));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v8);
  if ( v11 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v9, (struct XDCOBJ *)v8, 0x204u);
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
    v1 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v8, (LINEATTRS *)((char *)v8[0] + 184), &v9, 3u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v6 = v8[0];
  *((_DWORD *)v8[0] + 44) &= ~1u;
  DC::hpath(v6, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v1;
}
