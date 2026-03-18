/*
 * XREFs of NtGdiCloseFigure @ 0x1C02A5450
 * Callers:
 *     <none>
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0005F34 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiCloseFigure(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  DC *v4[6]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v5[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v6; // [rsp+58h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = 0;
  if ( !v4[0] )
  {
    v2 = 87;
LABEL_5:
    EngSetLastError(v2);
    goto LABEL_11;
  }
  if ( (*((_DWORD *)v4[0] + 44) & 1) == 0 )
  {
    v2 = 1003;
    goto LABEL_5;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, v4);
  if ( v6 && EPATHOBJ::bCloseFigure((EPATHOBJ *)v5) )
    v1 = 1;
  else
    EngSetLastError(8u);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
LABEL_11:
  DCOBJ::~DCOBJ((DCOBJ *)v4);
  return v1;
}
