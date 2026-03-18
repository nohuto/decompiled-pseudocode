/*
 * XREFs of ?xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z @ 0x1C01D0560
 * Callers:
 *     xxxProcessPTPDeviceInput @ 0x1C01D1AB4 (xxxProcessPTPDeviceInput.c)
 * Callees:
 *     xxxUpdateDeviceFrameState @ 0x1C01CFA74 (xxxUpdateDeviceFrameState.c)
 *     ?GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@Z @ 0x1C01CFE08 (-GetPTPClickButtonState@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@KPEADPEAK@.c)
 *     ?xxxBuildPTPButtonOnlyPacket@@YAJPEAEKKPEAUDEVICEINFO@@@Z @ 0x1C01D04B0 (-xxxBuildPTPButtonOnlyPacket@@YAJPEAEKKPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall xxxGetPTPFrameContactCount(
        struct DEVICEINFO *a1,
        ULONG a2,
        CHAR *a3,
        int *a4,
        int *a5,
        unsigned int *UsageValue,
        unsigned int *a7,
        unsigned int *a8,
        union _LARGE_INTEGER *a9)
{
  __int64 v10; // rsi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  union _LARGE_INTEGER *v14; // r15
  unsigned int *v15; // rbx
  unsigned int v16; // r13d
  NTSTATUS v17; // edi
  unsigned int v18; // eax
  ULONG v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  bool v24; // zf
  struct _HIDP_PREPARSED_DATA *v26; // [rsp+40h] [rbp-48h]

  v10 = *((_QWORD *)a1 + 52);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*((_QWORD *)a1 + 50) + 16LL);
  v26 = PreparsedData;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v14 = a9;
  *a9 = PerformanceCounter;
  v15 = *(unsigned int **)(v10 + 712);
  v16 = *(_DWORD *)(v10 + 720) - 1;
  v17 = HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, UsageValue, PreparsedData, a3, a2);
  if ( v17 < 0 )
  {
LABEL_19:
    if ( *v15 )
      v15[1] |= 2u;
    return (unsigned int)-1073741668;
  }
  v18 = *UsageValue;
  if ( *UsageValue > v16 )
  {
    v24 = *v15 == 0;
    *a7 = 0;
LABEL_17:
    if ( !v24 )
      v15[1] |= 2u;
    return (unsigned int)v17;
  }
  if ( v18 )
  {
    if ( !*v15 )
    {
      *a7 = v18;
      *(union _LARGE_INTEGER *)(v10 + 1464) = *v14;
      v19 = *UsageValue;
      v20 = v15[10];
      if ( *UsageValue > v20 )
      {
        *a7 = v20;
        *v15 = v19 - v20;
      }
      return (unsigned int)v17;
    }
    goto LABEL_19;
  }
  if ( *v15 )
  {
    v21 = *(_DWORD *)(v10 + 1436);
    *a4 = 1;
    *a8 = v21;
    *v14 = *(union _LARGE_INTEGER *)(v10 + 1464);
    v22 = *v15;
    *a5 = 1;
    v23 = v15[10];
    if ( v22 <= v23 )
    {
      *a7 = v22;
      *v15 = 0;
    }
    else
    {
      *a7 = v23;
      *v15 = v22 - v23;
    }
    return (unsigned int)v17;
  }
  LODWORD(a9) = 0;
  *a7 = 0;
  GetPTPClickButtonState((struct tagHID_POINTER_DEVICE_INFO *)v10, v26, a2, a3, (unsigned int *)&a9);
  xxxUpdateDeviceFrameState((struct _LIST_ENTRY *)v10, 0, 0, 0LL);
  if ( (_DWORD)a9 )
    v17 = xxxBuildPTPButtonOnlyPacket((unsigned __int8 *)a3, a2, (unsigned int)a9, a1);
  if ( v17 < 0 )
  {
    v24 = *v15 == 0;
    goto LABEL_17;
  }
  return (unsigned int)v17;
}
