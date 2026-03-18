/*
 * XREFs of RIMApplyTransforms @ 0x1C00CD848
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     EtwTracePointerDeviceTransformationStart @ 0x1C00A7B30 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C00A7B60 (EtwTracePointerDeviceTransformationStop.c)
 *     ApiSetTransformForInputMagnification @ 0x1C00CD5D4 (ApiSetTransformForInputMagnification.c)
 *     RIMSetContactBoundary @ 0x1C00CE2A4 (RIMSetContactBoundary.c)
 *     RIMTransformCoordinates @ 0x1C00CE3BC (RIMTransformCoordinates.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00CE690 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00CE840 (RIMTransformPointerDevicePointToPhysical.c)
 */

__int64 __fastcall RIMApplyTransforms(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v6; // r15d
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ecx
  unsigned int v15; // ecx

  v6 = a3;
  v8 = 0;
  EtwTracePointerDeviceTransformationStart(*a4, a2, a3);
  v9 = *(_DWORD *)(a1 + 236);
  if ( (v9 & 8) == 0 || (v9 & 0x4000) != 0 )
  {
    RIMTransformCoordinates(a4 + 1, a1, v6);
    if ( (*(_DWORD *)(a1 + 236) & 0x200) != 0 )
      RIMTransformCoordinates(a4 + 3, a1, v6);
    else
      *(_QWORD *)(a4 + 3) = *(_QWORD *)(a4 + 1);
  }
  RIMTransformPointerDevicePointToPhysical(a1, *(_QWORD *)(a4 + 1), a2 + 64);
  v10 = *(_DWORD *)(a1 + 236);
  if ( (v10 & 8) == 0 || (v10 & 0x4000) != 0 )
  {
    v8 = RIMTransformPhysicalPointToScreen(a1, a2 + 64, a2 + 56);
    if ( v8 < 0 )
      goto LABEL_16;
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 28LL);
    a4[1] += v11;
    a4[2] += HIDWORD(v11);
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a4 + 1);
    ApiSetTransformForInputMagnification();
    *(_QWORD *)(a4 + 3) = *(_QWORD *)(a4 + 1);
  }
  if ( a4[5] )
  {
    if ( ((*(_DWORD *)(a1 + 748) - 2) & 0xFFFFFFFD) == 0 )
    {
      v14 = *(_DWORD *)(a1 + 236);
      if ( (v14 & 8) == 0 || (v14 & 0x4000) != 0 )
      {
        v15 = a4[6];
        a4[6] = a4[7];
        a4[7] = v15;
      }
    }
    RIMSetContactBoundary(a1, a2 + 128, *(_QWORD *)(a4 + 3), a4[6], a4[7]);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a2 + 128);
  }
LABEL_16:
  EtwTracePointerDeviceTransformationStop(*a4, v12, v13);
  return (unsigned int)v8;
}
