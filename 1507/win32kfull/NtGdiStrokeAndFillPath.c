/*
 * XREFs of NtGdiStrokeAndFillPath @ 0x1C02A5A40
 * Callers:
 *     <none>
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0005F34 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C0006014 (-bInactive@DC@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiStrokeAndFillPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  DC *v3; // r8
  __int64 v4; // rdx
  int v5; // edi
  DC *v6; // rcx
  DC *v8[6]; // [rsp+30h] [rbp-69h] BYREF
  struct _XFORMOBJ v9; // [rsp+60h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-29h] BYREF
  __int64 v11; // [rsp+78h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v1 = 0;
  if ( !v8[0] || *((_WORD *)v8[0] + 6) != 1 || (*((_DWORD *)v8[0] + 9) & 0x10000) != 0 )
  {
    v2 = 87;
LABEL_7:
    EngSetLastError(v2);
    goto LABEL_16;
  }
  if ( !(unsigned int)DC::bInactive(v8[0]) )
  {
    v2 = 1003;
    goto LABEL_7;
  }
  v4 = *((_QWORD *)v3 + 10);
  v5 = *(_DWORD *)(v4 + 8);
  if ( (v5 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v3, *(_QWORD *)(v4 + 16));
    v3 = v8[0];
  }
  if ( (v5 & 0x2000) != 0 )
    GreDCSelectPen(v3, *(_QWORD *)(*((_QWORD *)v3 + 10) + 24LL));
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
LABEL_16:
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v1;
}
