/*
 * XREFs of SetContactBoundary @ 0x1C01C2440
 * Callers:
 *     ApplyTransforms @ 0x1C01C1EC0 (ApplyTransforms.c)
 *     ?AddSimulatedPointerDeviceData@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTEREVENTINT@@PEAPEAEPEAK@Z @ 0x1C01C41C8 (-AddSimulatedPointerDeviceData@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTEREVENTINT@@PEAP.c)
 * Callees:
 *     ApplyMagInputTransform @ 0x1C01C1E60 (ApplyMagInputTransform.c)
 *     TransformPhysicalPointToScreen @ 0x1C01C2998 (TransformPhysicalPointToScreen.c)
 *     TransformPointerDevicePointToPhysical @ 0x1C01C2AE0 (TransformPointerDevicePointToPhysical.c)
 */

__int64 __fastcall SetContactBoundary(__int64 a1, _DWORD *a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v8; // eax
  unsigned __int64 v9; // r8
  int v10; // eax
  int v11; // edx
  __int64 result; // rax
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // [rsp+40h] [rbp+20h] BYREF
  __int64 v16; // [rsp+48h] [rbp+28h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp+30h] BYREF

  v17 = a3;
  LODWORD(v15) = a3 - (a4 >> 1);
  v8 = a3 + (a4 >> 1);
  v9 = HIDWORD(a3);
  LODWORD(v16) = v8;
  HIDWORD(v15) = v9 - (a5 >> 1);
  HIDWORD(v16) = v9 + (a5 >> 1);
  v10 = *(_DWORD *)(a1 + 236);
  if ( (v10 & 8) == 0 || (v10 & 0x4000) != 0 )
  {
    TransformPointerDevicePointToPhysical(a1, v15, &v17);
    TransformPhysicalPointToScreen(a1, &v17, &v15);
    TransformPointerDevicePointToPhysical(a1, v16, &v17);
    TransformPhysicalPointToScreen(a1, &v17, &v16);
  }
  else
  {
    ApplyMagInputTransform((__int64)&v15, (__int64)&v16);
  }
  v11 = v15;
  result = (unsigned int)v16;
  v13 = HIDWORD(v15);
  v14 = HIDWORD(v16);
  *a2 = v15;
  a2[2] = result;
  a2[1] = v13;
  a2[3] = v14;
  if ( v11 == (_DWORD)result && a4 )
  {
    result = (unsigned int)(v11 + 1);
    a2[2] = result;
  }
  if ( v13 == v14 )
  {
    if ( a5 )
    {
      result = (unsigned int)(v13 + 1);
      a2[3] = result;
    }
  }
  return result;
}
