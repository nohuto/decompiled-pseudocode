/*
 * XREFs of NtGdiFillPath @ 0x1C02A4E80
 * Callers:
 *     <none>
 * Callees:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C027AD5C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C027AEC4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C02A4BD0 (-bInactive@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiFillPath(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  ULONG v3; // ecx
  __int64 v4; // rdx
  DC *v5; // rcx
  DC *v7[2]; // [rsp+30h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v1 = 0;
  if ( !v7[0] || (*((_DWORD *)v7[0] + 9) & 0x10000) != 0 )
  {
    v3 = 87;
    goto LABEL_12;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v3 = 1003;
LABEL_12:
    EngSetLastError(v3);
    goto LABEL_13;
  }
  v4 = *(_QWORD *)(v2 + 80);
  if ( (*(_DWORD *)(v4 + 8) & 0x1000) != 0 )
    GreDCSelectBrush(v2, *(_QWORD *)(v4 + 16));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v7);
  if ( v9 )
  {
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
    v1 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v7, 0LL, 0LL, 2u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v5 = v7[0];
  *((_DWORD *)v7[0] + 44) &= ~1u;
  DC::hpath(v5, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_13:
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v1;
}
