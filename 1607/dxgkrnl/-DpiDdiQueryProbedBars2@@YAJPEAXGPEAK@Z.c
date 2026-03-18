/*
 * XREFs of ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C002EF20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiQueryProbedBars @ 0x1C015A8FC (DxgkDdiQueryProbedBars.c)
 */

__int64 __fastcall DpiDdiQueryProbedBars2(_QWORD *a1, unsigned __int16 a2, unsigned int *a3)
{
  unsigned int v5; // ebx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v7, a1);
  v5 = v9;
  if ( v9 >= 0 )
  {
    DxgkDdiQueryProbedBars(*(_QWORD *)(v8 + 3688), a2, a3);
    v5 = 0;
    v9 = 0;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
  return v5;
}
