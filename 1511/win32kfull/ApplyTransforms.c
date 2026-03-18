/*
 * XREFs of ApplyTransforms @ 0x1C01C3A80
 * Callers:
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C6CD8 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 *     ExtractDeviceUsages @ 0x1C01CB53C (ExtractDeviceUsages.c)
 * Callees:
 *     SetContactBoundary @ 0x1C01C4000 (SetContactBoundary.c)
 *     TransformCoordinates @ 0x1C01C40F4 (TransformCoordinates.c)
 *     TransformForInputMagnification @ 0x1C01C43D0 (TransformForInputMagnification.c)
 *     TransformPhysicalPointToScreen @ 0x1C01C4558 (TransformPhysicalPointToScreen.c)
 *     TransformPointerDevicePointToPhysical @ 0x1C01C46A0 (TransformPointerDevicePointToPhysical.c)
 */

__int64 __fastcall ApplyTransforms(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ecx

  EtwTracePointerDeviceTransformationStart(*a4);
  v8 = *(_DWORD *)(a1 + 252);
  if ( (v8 & 0x20) == 0 || (v8 & 0x10000) != 0 )
  {
    TransformCoordinates(a4 + 1, a1, a3);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      TransformCoordinates(a4 + 3, a1, a3);
    else
      *(_QWORD *)(a4 + 3) = *(_QWORD *)(a4 + 1);
  }
  TransformPointerDevicePointToPhysical(a1, *(_QWORD *)(a4 + 1), a2 + 64);
  v9 = *(_DWORD *)(a1 + 252);
  if ( (v9 & 0x20) == 0 || (v9 & 0x10000) != 0 )
  {
    TransformPhysicalPointToScreen(a1, a2 + 64, a2 + 56);
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 28LL);
    a4[1] += v10;
    a4[2] += HIDWORD(v10);
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a4 + 1);
    TransformForInputMagnification(a1, a2 + 64);
    *(_QWORD *)(a4 + 3) = *(_QWORD *)(a4 + 1);
  }
  if ( a4[5] )
  {
    if ( ((*(_DWORD *)(a1 + 764) - 2) & 0xFFFFFFFD) == 0 )
    {
      v11 = *(_DWORD *)(a1 + 252);
      if ( (v11 & 0x20) == 0 || (v11 & 0x10000) != 0 )
      {
        v12 = a4[6];
        a4[6] = a4[7];
        a4[7] = v12;
      }
    }
    SetContactBoundary(a1, a2 + 128, *(_QWORD *)(a4 + 3), a4[6], a4[7]);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a2 + 128);
  }
  return EtwTracePointerDeviceTransformationStop(*a4);
}
