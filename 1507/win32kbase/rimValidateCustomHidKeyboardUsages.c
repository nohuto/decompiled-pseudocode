/*
 * XREFs of rimValidateCustomHidKeyboardUsages @ 0x1C00CFB7C
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00CED4C (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0073DA0 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall rimValidateCustomHidKeyboardUsages(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        _WORD *a4)
{
  __int64 v4; // rdi
  struct _HIDP_BUTTON_CAPS *v7; // r14
  struct _HIDP_BUTTON_CAPS *v8; // rsi
  int SpecificButtonCaps; // ebx
  int v10; // r10d
  unsigned __int16 v11; // r8
  int *v12; // r9
  union _HIDP_BUTTON_CAPS::$EECF18E811B231775A73F932F7651893 *p_Range; // rdx
  int v14; // ecx
  struct _HIDP_VALUE_CAPS *v15; // rdi
  unsigned __int16 v16; // r9
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int16 v19; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int16 v20; // [rsp+98h] [rbp+58h] BYREF

  v18 = a1;
  v4 = *(_QWORD *)(a2 + 424);
  v19 = 0;
  v20 = 0;
  v7 = 0LL;
  LOWORD(v18) = 0;
  v8 = 0LL;
  if ( a4[26] <= 1u )
    goto LABEL_15;
  LOWORD(v18) = a4[23];
  v8 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolNonPaged();
  if ( !v8 )
    return (unsigned int)-1073741801;
  memset(v8, 0, 72LL * (unsigned __int16)v18);
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Output, 8u, 0, 0, v8, (unsigned __int16 *)&v18, a3);
  if ( SpecificButtonCaps >= 0 )
  {
    *(_QWORD *)(v4 + 376) = 0LL;
    v10 = 0;
    v11 = v18;
    if ( (_WORD)v18 )
    {
      v12 = (int *)(v4 + 380);
      p_Range = (union _HIDP_BUTTON_CAPS::$EECF18E811B231775A73F932F7651893 *)&v8->Range;
      while ( 1 )
      {
        if ( p_Range[-4].Range.DesignatorMin != 8 || LOBYTE(p_Range[-3].NotRange.StringIndex) )
          goto LABEL_14;
        if ( p_Range->Range.UsageMin == 80 )
          break;
        if ( p_Range->Range.UsageMin == 81 )
        {
          v14 = 2;
LABEL_13:
          *v12 = v14;
          v12 += 2;
          v11 = v18;
        }
LABEL_14:
        ++v10;
        p_Range = (union _HIDP_BUTTON_CAPS::$EECF18E811B231775A73F932F7651893 *)((char *)p_Range + 72);
        if ( v10 >= v11 )
          goto LABEL_15;
      }
      v14 = 1;
      goto LABEL_13;
    }
LABEL_15:
    if ( !a4[27] )
    {
      SpecificButtonCaps = -1073741823;
      goto LABEL_37;
    }
    v20 = a4[27];
    v15 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolNonPaged();
    if ( !v15 )
    {
      SpecificButtonCaps = -1073741801;
      goto LABEL_37;
    }
    memset(0LL, 0, 72LL * v19);
    SpecificButtonCaps = rimHidP_GetSpecificValueCaps(HidP_Output, 0x14u, 0, 0xA0u, v15, &v20, a3);
    if ( SpecificButtonCaps < 0 )
      goto LABEL_36;
    if ( v20
      && !v15->IsRange
      && v15->LogicalMin >= 0
      && v15->BitSize * v15->ReportCount == 8
      && v15->Range.UsageMin == 160 )
    {
      if ( a4[23] < 8u )
      {
        SpecificButtonCaps = -1073741823;
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0x12u,
          (__int64)&WPP_2bd8efd1c66f7dab78a0b28985ecab13_Traceguids);
LABEL_36:
        Win32FreePool();
        goto LABEL_37;
      }
      v19 = a4[23];
      v7 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolNonPaged();
      if ( !v7 )
      {
        SpecificButtonCaps = -1073741801;
        goto LABEL_36;
      }
      memset(v7, 0, 72LL * v19);
      SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, 0, v7, &v19, a3);
      if ( SpecificButtonCaps >= 0 )
      {
        SpecificButtonCaps = 0;
        goto LABEL_34;
      }
      v16 = 19;
    }
    else
    {
      SpecificButtonCaps = -1073741823;
      v16 = 17;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      v16,
      (__int64)&WPP_2bd8efd1c66f7dab78a0b28985ecab13_Traceguids);
LABEL_34:
    if ( v7 )
      Win32FreePool();
    goto LABEL_36;
  }
LABEL_37:
  if ( v8 )
    Win32FreePool();
  return (unsigned int)SpecificButtonCaps;
}
