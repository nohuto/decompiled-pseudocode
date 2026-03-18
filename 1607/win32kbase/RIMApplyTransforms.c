/*
 * XREFs of RIMApplyTransforms @ 0x1C00D33A8
 * Callers:
 *     rimTransformGeometry @ 0x1C00DE5E8 (rimTransformGeometry.c)
 * Callees:
 *     EtwTracePointerDeviceTransformationStart @ 0x1C00B5800 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C00B5830 (EtwTracePointerDeviceTransformationStop.c)
 *     RIMSetContactBoundary @ 0x1C00D3A3C (RIMSetContactBoundary.c)
 *     RIMTransformCoordinates @ 0x1C00D3B54 (RIMTransformCoordinates.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00D3F64 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00D40F4 (RIMTransformPointerDevicePointToPhysical.c)
 *     ApiSetTransformForInputMagnification @ 0x1C00DE8E0 (ApiSetTransformForInputMagnification.c)
 */

__int64 __fastcall RIMApplyTransforms(__int64 a1, __int64 a2, unsigned int *a3, int a4, _DWORD *a5)
{
  int v8; // r12d
  int v9; // ebp
  int v10; // eax
  _DWORD *v11; // r14
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  unsigned int v17; // ecx
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v8 = a2;
  v9 = 0;
  EtwTracePointerDeviceTransformationStart(*a3, a2, (__int64)a3);
  v10 = *(_DWORD *)(a1 + 252);
  if ( (v10 & 0x20) == 0 || (v10 & 0x10000) != 0 )
  {
    RIMTransformCoordinates(a1, v8, (_DWORD)a3 + 4, a4, (__int64)&v19);
    v11 = a5;
    *a5 = v19;
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    {
      RIMTransformCoordinates(a1, v8, (_DWORD)a3 + 12, a4, (__int64)&v19);
      *v11 = v19;
    }
    else
    {
      *(_QWORD *)(a3 + 3) = *(_QWORD *)(a3 + 1);
    }
  }
  RIMTransformPointerDevicePointToPhysical(a1, *(_QWORD *)(a3 + 1), a3 + 30);
  v12 = *(_DWORD *)(a1 + 252);
  if ( (v12 & 0x20) == 0 || (v12 & 0x10000) != 0 )
  {
    v9 = RIMTransformPhysicalPointToScreen(a1, a3 + 30, a3 + 28);
    if ( v9 < 0 )
      goto LABEL_16;
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 28LL);
    a3[1] += v13;
    a3[2] += HIDWORD(v13);
    *((_QWORD *)a3 + 14) = *(_QWORD *)(a3 + 1);
    ApiSetTransformForInputMagnification(a1, a3 + 30);
    *(_QWORD *)(a3 + 3) = *(_QWORD *)(a3 + 1);
  }
  if ( a3[5] )
  {
    if ( ((*(_DWORD *)(a1 + 732) - 2) & 0xFFFFFFFD) == 0 )
    {
      v16 = *(_DWORD *)(a1 + 252);
      if ( (v16 & 0x20) == 0 || (v16 & 0x10000) != 0 )
      {
        v17 = a3[6];
        a3[6] = a3[7];
        a3[7] = v17;
      }
    }
    RIMSetContactBoundary(a1, (_DWORD)a3 + 184, *(_QWORD *)(a3 + 3), a3[6], a3[7]);
    *(_OWORD *)(a3 + 42) = *(_OWORD *)(a3 + 46);
  }
LABEL_16:
  EtwTracePointerDeviceTransformationStop(*a3, v14, v15);
  return (unsigned int)v9;
}
