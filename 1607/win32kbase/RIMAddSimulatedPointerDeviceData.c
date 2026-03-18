/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1C00D472C
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00DB4B0 (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     IsSetContactBoundarySupported_0 @ 0x1C0002CF0 (IsSetContactBoundarySupported_0.c)
 *     SetContactBoundary_0 @ 0x1C0002CF8 (SetContactBoundary_0.c)
 *     rimHidP_SetUsageValue @ 0x1C0005984 (rimHidP_SetUsageValue.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     RIMSetContactBoundary @ 0x1C00D3A3C (RIMSetContactBoundary.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char **a5,
        unsigned int *a6)
{
  __int64 v6; // r14
  __int64 v8; // rax
  struct _HIDP_PREPARSED_DATA *v9; // r12
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  char *v12; // rax
  char *v13; // rdi
  int v14; // eax
  unsigned __int16 v15; // r9
  __int64 v17; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 16);
  v8 = *(_QWORD *)(v6 + 464);
  v9 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v10 = *(unsigned __int16 *)(v8 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v6 + 184) & 0x200000) != 0 )
  {
    if ( (int)IsSetContactBoundarySupported_0() >= 0 )
      SetContactBoundary_0();
LABEL_6:
    v12 = (char *)Win32AllocPoolZInit(*(unsigned __int16 *)(*(_QWORD *)(v6 + 464) + 44LL));
    v13 = v12;
    if ( !v12 )
      return (unsigned int)-1073741801;
    v14 = rimHidP_SetUsageValue(HidP_Input, 1u, 0, 0x30u, *(_DWORD *)(a3 + 2556), v9, v12, v10);
    v11 = v14;
    if ( v14 < 0 )
    {
      v15 = 38;
    }
    else
    {
      v14 = rimHidP_SetUsageValue(HidP_Input, 1u, 0, 0x31u, *(_DWORD *)(a3 + 2560), v9, v13, v10);
      v11 = v14;
      if ( v14 >= 0 )
      {
        *a5 = v13;
        *a6 = v10;
        return v11;
      }
      v15 = 37;
    }
    LODWORD(v17) = v14;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v15,
      (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids,
      v17);
    return v11;
  }
  v11 = RIMSetContactBoundary(a2, (_DWORD *)(a4 + 128), *(_QWORD *)(a3 + 2556), 0, 0);
  if ( (v11 & 0x80000000) == 0 )
    goto LABEL_6;
  return v11;
}
