/*
 * XREFs of ?AddSimulatedPointerDeviceData@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTEREVENTINT@@PEAPEAEPEAK@Z @ 0x1C01C5D88
 * Callers:
 *     ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C89D4 (-xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     SetContactBoundary @ 0x1C01C4000 (SetContactBoundary.c)
 */

__int64 __fastcall AddSimulatedPointerDeviceData(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        unsigned int a2,
        struct tagPOINTEREVENTINT *a3,
        CHAR **a4,
        unsigned int *a5)
{
  __int64 v5; // rbp
  __int64 v9; // rbx
  __int64 v10; // r10
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  ULONG ReportLength; // esi
  CHAR *Report; // rax
  CHAR *v14; // rbx
  __int64 v15; // rbp
  NTSTATUS v16; // ecx

  v5 = a2;
  v9 = HMValidateHandle(*((_QWORD *)a1 + 92), 19);
  v10 = *(_QWORD *)(v9 + 400);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v10 + 16);
  ReportLength = *(unsigned __int16 *)(v10 + 44);
  if ( (unsigned int)(*((_DWORD *)a1 + 6) - 1) <= 4 )
    SetContactBoundary((__int64)a1, (_DWORD *)a3 + 32, *(_QWORD *)(2400 * v5 + *((_QWORD *)a1 + 87) + 2284), 0, 0);
  Report = (CHAR *)Win32AllocPoolZInit(*(unsigned __int16 *)(*(_QWORD *)(v9 + 400) + 44LL), 1668313941LL);
  v14 = Report;
  if ( Report )
  {
    v15 = 2400 * v5;
    v16 = HidP_SetUsageValue(
            HidP_Input,
            1u,
            0,
            0x30u,
            *(_DWORD *)(*((_QWORD *)a1 + 87) + v15 + 2284),
            PreparsedData,
            Report,
            ReportLength);
    if ( v16 >= 0 )
    {
      v16 = HidP_SetUsageValue(
              HidP_Input,
              1u,
              0,
              0x31u,
              *(_DWORD *)(*((_QWORD *)a1 + 87) + v15 + 2288),
              PreparsedData,
              v14,
              ReportLength);
      if ( v16 >= 0 )
      {
        *a4 = v14;
        *a5 = ReportLength;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v16;
}
