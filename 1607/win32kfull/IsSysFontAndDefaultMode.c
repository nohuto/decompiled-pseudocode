/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C0247874
 * Callers:
 *     DT_InitDrawTextInfo @ 0x1C024742C (DT_InitDrawTextInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     GreGetHFONT @ 0x1C0291350 (GreGetHFONT.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ebx
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)GetDPIMetrics(a1, a2);
  if ( GreGetHFONT(a1) != v3 )
    return 0LL;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
    v4 = *(_DWORD *)(*(_QWORD *)(v6[0] + 80LL) + 308LL);
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  result = 1LL;
  if ( v4 != 1 )
    return 0LL;
  return result;
}
