/*
 * XREFs of RIMGetPTPFrameContactCount @ 0x1C00D2500
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CD9FC (rimProcessPTPDeviceInput.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C000A018 (rimHidP_GetUsageValue.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C53B4 (RIMUpdateDeviceFrameState.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00C5600 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C7D58 (WPP_RECORDER_SF_dd.c)
 *     RIMProcessPointerEvent @ 0x1C00C9674 (RIMProcessPointerEvent.c)
 *     RIMGetPTPClickButtonState @ 0x1C00D1D6C (RIMGetPTPClickButtonState.c)
 */

__int64 __fastcall RIMGetPTPFrameContactCount(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int *a7,
        unsigned int *a8,
        __int64 a9,
        LARGE_INTEGER *a10)
{
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned int *v15; // rbx
  int UsageValue; // eax
  __int64 v17; // rdx
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  unsigned int v22; // ecx
  int v23; // r15d
  struct _HIDP_PREPARSED_DATA *v24; // r8
  unsigned int v25; // r9d
  char *v26; // rax
  unsigned int v27; // eax
  unsigned __int16 v28; // r9
  unsigned int v29; // eax
  __int64 v31; // [rsp+28h] [rbp-150h]
  __int64 v32; // [rsp+30h] [rbp-148h]
  __int64 v33; // [rsp+38h] [rbp-140h]
  __int64 v34; // [rsp+40h] [rbp-138h]
  unsigned int v35; // [rsp+60h] [rbp-118h] BYREF
  unsigned int v36; // [rsp+64h] [rbp-114h]
  char *v37; // [rsp+68h] [rbp-110h]
  struct _HIDP_PREPARSED_DATA *v38; // [rsp+70h] [rbp-108h]
  __int64 v39; // [rsp+78h] [rbp-100h]
  _DWORD *v40; // [rsp+80h] [rbp-F8h]
  _DWORD *v41; // [rsp+88h] [rbp-F0h]
  _QWORD v42[20]; // [rsp+90h] [rbp-E8h] BYREF

  v13 = a2[52];
  v41 = a5;
  v40 = a6;
  v39 = a9;
  v14 = a2[50];
  v37 = a4;
  v36 = a3;
  v38 = *(struct _HIDP_PREPARSED_DATA **)(v14 + 16);
  *a10 = KeQueryPerformanceCounter(0LL);
  v15 = *(unsigned int **)(v13 + 712);
  v35 = *(_DWORD *)(v13 + 720) - 1;
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a7, v38, v37, a3);
  v17 = 0LL;
  v18 = UsageValue;
  if ( UsageValue < 0 )
  {
    if ( *v15 )
      v15[1] |= 2u;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x11u,
      (__int64)&WPP_79b55fd9a60c404dcf14bfb04a0fe0d1_Traceguids);
    return (unsigned int)-1073741668;
  }
  else
  {
    v19 = *a7;
    if ( *a7 > v35 )
    {
      *a8 = 0;
      if ( *v15 )
        v15[1] |= 2u;
      v27 = *(_DWORD *)(v13 + 720);
      v28 = 18;
      goto LABEL_18;
    }
    if ( v19 )
    {
      if ( *v15 )
      {
        v29 = *v15;
        if ( *v15 )
          v15[1] |= 2u;
        v18 = -1073741668;
        LODWORD(v33) = v29;
        LODWORD(v32) = *(_DWORD *)(v13 + 720);
        LODWORD(v31) = *a7;
        WPP_RECORDER_SF_ddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0LL,
          3u,
          0x10u,
          (__int64)&WPP_79b55fd9a60c404dcf14bfb04a0fe0d1_Traceguids,
          v31,
          v32,
          v33);
      }
      else
      {
        *a8 = v19;
        *(LARGE_INTEGER *)(v13 + 1464) = *a10;
        v20 = v15[10];
        if ( *a7 > v20 )
        {
          *a8 = v20;
          *v15 = *a7 - v15[10];
        }
      }
      return v18;
    }
    if ( *v15 )
    {
      v21 = (_DWORD *)v39;
      *v41 = 1;
      *v21 = *(_DWORD *)(v13 + 1436);
      *a10 = *(LARGE_INTEGER *)(v13 + 1464);
      *v40 = 1;
      v22 = v15[10];
      if ( *v15 <= v22 )
      {
        *a8 = *v15;
        *v15 = 0;
      }
      else
      {
        *a8 = v22;
        *v15 -= v15[10];
      }
      return v18;
    }
    v23 = v36;
    v24 = v38;
    v25 = v36;
    v26 = v37;
    v35 = 0;
    *a8 = 0;
    RIMGetPTPClickButtonState(a1, v13, v24, v25, v26, (int *)&v35);
    RIMUpdateDeviceFrameState(a1, v13);
    if ( v35 )
    {
      memset(v42, 0, sizeof(v42));
      v42[3] = a2[2];
      LODWORD(v42[1]) = 5;
      HIDWORD(v42[2]) = v35;
      RIMProcessPointerEvent(a1, (__int64)a2, 1, 0, (__int64)v42, v23, (__int64)v37, v33, v34, 1, 0);
      v18 = 0;
    }
    if ( (v18 & 0x80000000) != 0 )
    {
      v27 = *v15;
      if ( *v15 )
        v15[1] |= 2u;
      v28 = 15;
LABEL_18:
      LODWORD(v32) = v27;
      LODWORD(v31) = *a7;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v17,
        3u,
        v28,
        (__int64)&WPP_79b55fd9a60c404dcf14bfb04a0fe0d1_Traceguids,
        v31,
        v32);
    }
  }
  return v18;
}
