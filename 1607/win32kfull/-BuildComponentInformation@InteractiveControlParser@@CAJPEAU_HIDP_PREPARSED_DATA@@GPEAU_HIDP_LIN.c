/*
 * XREFs of ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FAFC
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FED4 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023DEA4 (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1C0240160 (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 *     ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024050C (-FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall InteractiveControlParser::BuildComponentInformation(
        PHIDP_PREPARSED_DATA PreparsedData,
        __int64 a2,
        struct _HIDP_LINK_COLLECTION_NODE *a3,
        struct InteractiveControlDevice *a4)
{
  USHORT v4; // di
  struct _INTERACTIVECTRL_CAPABILITIES *v5; // r13
  struct _HIDP_VALUE_CAPS *ValueCaps; // r14
  struct _HIDP_BUTTON_CAPS *v9; // rsi
  NTSTATUS SpecificValueCaps; // eax
  int v11; // ebx
  __int64 v12; // rcx
  UCHAR *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  NTSTATUS SpecificButtonCaps; // eax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-59h] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+44h] [rbp-55h] BYREF
  USHORT v22; // [rsp+48h] [rbp-51h] BYREF
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v23[2]; // [rsp+50h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS v24; // [rsp+60h] [rbp-39h] BYREF

  v4 = 0;
  v5 = (struct InteractiveControlDevice *)((char *)a4 + 112);
  ValueCapsLength[0] = 0;
  ButtonCapsLength[0] = 0;
  v22 = 1;
  *((_QWORD *)a4 + 29) = (char *)a4 + 224;
  ValueCaps = 0LL;
  *((_QWORD *)a4 + 28) = (char *)a4 + 224;
  v9 = 0LL;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, 0LL, ValueCapsLength, PreparsedData);
  v11 = SpecificValueCaps;
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    goto LABEL_30;
  if ( !ValueCapsLength[0] )
    goto LABEL_17;
  ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * ValueCapsLength[0], 1819440195LL);
  if ( !ValueCaps )
  {
    v11 = -1073741670;
LABEL_31:
    InteractiveControlParser::FreeComponentInformation(v5);
    return (unsigned int)v11;
  }
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, ValueCaps, ValueCapsLength, PreparsedData) < 0 )
  {
LABEL_17:
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, 0LL, ButtonCapsLength, PreparsedData);
    v11 = SpecificButtonCaps;
    if ( (!SpecificButtonCaps || SpecificButtonCaps == -1072627705) && ButtonCapsLength[0] )
    {
      v9 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72LL * ButtonCapsLength[0], 1819440195LL);
      if ( v9 )
      {
        v11 = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, v9, ButtonCapsLength, PreparsedData);
        if ( v11 >= 0 && ButtonCapsLength[0] )
        {
          do
          {
            v11 = InteractiveControlParser::CreateAndLinkComponent((struct _HIDP_VALUE_CAPS *)&v9[v4], 1, v5, v23);
            if ( v11 < 0 )
              break;
            ++v4;
          }
          while ( v4 < ButtonCapsLength[0] );
        }
      }
      else
      {
        v11 = -1073741670;
      }
    }
    goto LABEL_26;
  }
  if ( HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0x48u, &v24, &v22, PreparsedData) < 0 )
  {
LABEL_10:
    if ( ValueCapsLength[0] )
    {
      do
      {
        v11 = InteractiveControlParser::CreateAndLinkComponent(&ValueCaps[v4], 0, v5, v23);
        if ( v11 < 0 )
          goto LABEL_26;
        if ( v23[0] && ValueCaps[v4].LinkCollection == v24.LinkCollection )
          *((_DWORD *)v23[0] + 31) = 1;
      }
      while ( ++v4 < ValueCapsLength[0] );
    }
    v4 = 0;
    goto LABEL_17;
  }
  v12 = *((unsigned __int16 *)v5 + 6);
  LODWORD(v23[0]) = 0;
  v13 = (UCHAR *)Win32AllocPool(v12, 1819440195LL);
  *v13 = v24.ReportID;
  v11 = InteractiveControlDevice::SendDeviceIOControl(
          a4,
          0xB0192u,
          0LL,
          0,
          v13,
          *((unsigned __int16 *)v5 + 6),
          (unsigned int *)v23);
  if ( v11 >= 0 )
  {
    DbgPrintEx(0x4Du, 2u, "InteractiveControlParser::BuildComponentInformationFound Device Resolution Multiplier:\n");
    DbgPrintEx(
      0x4Du,
      2u,
      "InteractiveControlParser::BuildComponentInformation\tLogical Rnage = [%d - %d]\n",
      v24.LogicalMin,
      v24.LogicalMax);
    DbgPrintEx(0x4Du, 2u, "InteractiveControlParser::BuildComponentInformation\tMultiplier Value = %d\n", 1);
    Win32FreePool(v13, v16, v17);
    v4 = 0;
    goto LABEL_10;
  }
LABEL_26:
  if ( ValueCaps )
    Win32FreePool(ValueCaps, v14, v15);
  if ( v9 )
    Win32FreePool(v9, v14, v15);
LABEL_30:
  if ( v11 < 0 )
    goto LABEL_31;
  return (unsigned int)v11;
}
