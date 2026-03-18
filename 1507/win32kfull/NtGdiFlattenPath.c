/*
 * XREFs of NtGdiFlattenPath @ 0x1C02A54F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0005F34 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C0006014 (-bInactive@DC@@QEAAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiFlattenPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  __int64 v3; // rdx
  DC *v5[6]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v6[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v7; // [rsp+58h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = 0;
  if ( !v5[0] )
  {
    v2 = 6;
LABEL_6:
    EngSetLastError(v2);
    goto LABEL_12;
  }
  if ( !(unsigned int)DC::bInactive(v5[0]) || *(_WORD *)(v3 + 12) > 1u )
  {
    v2 = 1003;
    goto LABEL_6;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, v5);
  if ( v7 && EPATHOBJ::bFlatten((EPATHOBJ *)v6) )
    v1 = 1;
  else
    EngSetLastError(8u);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
LABEL_12:
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v1;
}
