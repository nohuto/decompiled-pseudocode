/*
 * XREFs of ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C023FFF4
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FE34 (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_CO.c)
 * Callees:
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023DEA4 (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C02406F0 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceShapeDescriptor(
        struct InteractiveControlDevice *this,
        PHIDP_PREPARSED_DATA PreparsedData)
{
  int ScaledUsageValue; // esi
  _QWORD *v3; // rdi
  bool v5; // zf
  _QWORD **v7; // rcx
  _QWORD *v8; // rax
  int v9; // edx
  int *v10; // r14
  _BYTE *Report; // r15
  int v12; // eax

  ScaledUsageValue = 0;
  v3 = 0LL;
  *((_DWORD *)this + 62) = 0;
  v5 = *((_DWORD *)this + 53) == 1;
  *((_DWORD *)this + 62) = 2;
  if ( !v5 )
  {
    *((_DWORD *)this + 65) = 5800;
    *((_DWORD *)this + 66) = 5800;
    return (unsigned int)ScaledUsageValue;
  }
  v7 = (_QWORD **)((char *)this + 224);
  v8 = *v7;
  do
  {
    if ( v8 == v7 )
      break;
    v3 = v8;
    v8 = (_QWORD *)*v8;
  }
  while ( *((_DWORD *)v3 + 4) != 8 );
  if ( *((_DWORD *)v3 + 25) )
  {
    v9 = *((_DWORD *)v3 + 17);
    if ( *((_DWORD *)v3 + 16) == v9 )
    {
      v10 = (int *)((char *)this + 260);
      *((_DWORD *)this + 65) = InteractiveControlParser::GetScaledComponentValue(
                                 (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v3,
                                 v9);
      goto LABEL_12;
    }
    Report = (_BYTE *)Win32AllocPool(*((unsigned __int16 *)this + 60), 1819440195LL);
    if ( Report )
    {
      *Report = *((_BYTE *)v3 + 26);
      ScaledUsageValue = InteractiveControlDevice::SendDeviceIOControl(
                           this,
                           0xB01A2u,
                           0LL,
                           0,
                           Report,
                           *((unsigned __int16 *)this + 60),
                           0LL);
      if ( ScaledUsageValue < 0
        || (v10 = (int *)((char *)this + 260),
            ScaledUsageValue = HidP_GetScaledUsageValue(
                                 HidP_Input,
                                 *((_WORD *)v3 + 12),
                                 *((_WORD *)v3 + 15),
                                 *((_WORD *)v3 + 40),
                                 (PLONG)this + 65,
                                 PreparsedData,
                                 Report,
                                 *((unsigned __int16 *)this + 60)),
            *((_DWORD *)this + 65) = InteractiveControlParser::GetScaledComponentValue(
                                       (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v3,
                                       *((_DWORD *)this + 65)),
            ScaledUsageValue < 0) )
      {
        v12 = 5800;
        *((_DWORD *)this + 62) = 2;
        *((_DWORD *)this + 65) = 5800;
        goto LABEL_14;
      }
LABEL_12:
      v12 = *v10;
LABEL_14:
      *((_DWORD *)this + 66) = v12;
      return (unsigned int)ScaledUsageValue;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ScaledUsageValue;
}
