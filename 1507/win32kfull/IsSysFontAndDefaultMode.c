/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C024B5AC
 * Callers:
 *     DT_InitDrawTextInfo @ 0x1C024B15C (DT_InitDrawTextInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     GreGetHFONT @ 0x1C0292834 (GreGetHFONT.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // ebx
  __int64 result; // rax
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)GetDPIMetrics(a1, a2, a3);
  if ( GreGetHFONT(a1) != v4 )
    return 0LL;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = *(_DWORD *)(*(_QWORD *)(v7[0] + 80LL) + 308LL);
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  result = 1LL;
  if ( v5 != 1 )
    return 0LL;
  return result;
}
