/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1C00C39B4
 * Callers:
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C40FC (RIMMarkEndPointerMessageDelivery.c)
 * Callees:
 *     IsSetContactBoundarySupported_0 @ 0x1C0002CC0 (IsSetContactBoundarySupported_0.c)
 *     SetContactBoundary_0 @ 0x1C0002CC8 (SetContactBoundary_0.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     rimHidP_SetUsageValue @ 0x1C0071910 (rimHidP_SetUsageValue.c)
 *     RIMSetContactBoundary @ 0x1C00CE2A4 (RIMSetContactBoundary.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char **a5,
        unsigned int *a6)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v9; // rax
  struct _HIDP_PREPARSED_DATA *v10; // r12
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // r14
  int v16; // eax
  unsigned __int16 v17; // r9
  __int64 v19; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 16);
  v7 = a3;
  v9 = *(_QWORD *)(v6 + 400);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(v9 + 16);
  v11 = *(unsigned __int16 *)(v9 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 4 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v6 + 184) & 0x200000) != 0 )
  {
    if ( (int)IsSetContactBoundarySupported_0() >= 0 )
      SetContactBoundary_0();
LABEL_6:
    v13 = (char *)Win32AllocPoolZInit(*(unsigned __int16 *)(*(_QWORD *)(v6 + 400) + 44LL));
    v14 = v13;
    if ( !v13 )
      return (unsigned int)-1073741801;
    v15 = 2400 * v7;
    v16 = rimHidP_SetUsageValue(
            HidP_Input,
            1u,
            0,
            0x30u,
            *(_DWORD *)(*(_QWORD *)(a2 + 680) + v15 + 2284),
            v10,
            v13,
            v11);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 42;
    }
    else
    {
      v16 = rimHidP_SetUsageValue(
              HidP_Input,
              1u,
              0,
              0x31u,
              *(_DWORD *)(*(_QWORD *)(a2 + 680) + v15 + 2288),
              v10,
              v14,
              v11);
      v12 = v16;
      if ( v16 >= 0 )
      {
        *a5 = v14;
        *a6 = v11;
        return v12;
      }
      v17 = 41;
    }
    LODWORD(v19) = v16;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v17,
      (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids,
      v19);
    return v12;
  }
  v12 = RIMSetContactBoundary(a2, a4 + 128, *(_QWORD *)(2400LL * a3 + *(_QWORD *)(a2 + 680) + 2284), 0, 0);
  if ( (v12 & 0x80000000) == 0 )
    goto LABEL_6;
  return v12;
}
