/*
 * XREFs of NtGdiFillPath @ 0x1C02A6000
 * Callers:
 *     <none>
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02793AC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C02A5D20 (-bInactive@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiFillPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  __int64 v3; // r8
  __int64 v4; // rdx
  DC *v5; // rcx
  DC *v7[6]; // [rsp+30h] [rbp-59h] BYREF
  PATHOBJ ppo; // [rsp+60h] [rbp-29h] BYREF
  __int64 v9; // [rsp+68h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v1 = 0;
  if ( !v7[0] || *((_WORD *)v7[0] + 6) != 1 || (*((_DWORD *)v7[0] + 9) & 0x10000) != 0 )
  {
    v2 = 87;
LABEL_7:
    EngSetLastError(v2);
    goto LABEL_14;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v2 = 1003;
    goto LABEL_7;
  }
  v4 = *(_QWORD *)(v3 + 80);
  if ( (*(_DWORD *)(v4 + 8) & 0x1000) != 0 )
    GreDCSelectBrush(v3, *(_QWORD *)(v4 + 16));
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
LABEL_14:
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v1;
}
