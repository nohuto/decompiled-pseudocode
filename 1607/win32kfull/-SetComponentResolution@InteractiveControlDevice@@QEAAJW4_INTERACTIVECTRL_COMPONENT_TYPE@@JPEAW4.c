/*
 * XREFs of ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023E230
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B484 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023BC38 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023E8E4 (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023DEA4 (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C02406F0 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlDevice::SetComponentResolution(__int64 a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v5; // esi
  CHAR *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r14d
  ULONG v13; // ebx
  struct InteractiveControlManager *v15; // rax
  _QWORD *v16; // r13
  int v17; // ecx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // r8
  ULONG LogicalMin; // esi
  __int64 v22; // rax
  int ScaledComponentValue; // eax
  int v24; // eax
  int v25; // eax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  ULONG UsageValue; // [rsp+4Ch] [rbp-B4h]
  NTSTATUS SpecificValueCaps; // [rsp+50h] [rbp-B0h]
  int v31; // [rsp+54h] [rbp-ACh]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS v33; // [rsp+B0h] [rbp-50h] BYREF

  v28 = a2;
  v5 = 0;
  v31 = a3;
  v9 = 0LL;
  ValueCapsLength[0] = 1;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v12 = a3;
  v13 = 2;
  UsageValue = 2;
  if ( !a4 || *a4 )
  {
LABEL_8:
    if ( !*(_DWORD *)(a1 + 108) && *((_DWORD *)InteractiveControlManager::Instance() + 29) )
      v12 = *((_DWORD *)InteractiveControlManager::Instance() + 27);
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(a1 + 108) )
  {
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21) )
    {
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 25) )
        v13 = 3;
      UsageValue = v13;
    }
    goto LABEL_8;
  }
LABEL_11:
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v15 = InteractiveControlManager::Instance();
      v10 = (unsigned int)(v12 << 8 >> 31);
      LODWORD(v10) = (v12 << 8) % *((_DWORD *)v15 + 35);
      v12 = (v12 << 8) / *((_DWORD *)v15 + 35);
    }
    else if ( a2 != 4 )
    {
      return 3221225659LL;
    }
  }
  v16 = *(_QWORD **)(a1 + 224);
  if ( v16 == (_QWORD *)(a1 + 224) )
    return v5;
  v17 = v28;
  v18 = (_QWORD *)(a1 + 224);
  while ( 1 )
  {
    v19 = v16;
    v16 = (_QWORD *)*v16;
    if ( *((_DWORD *)v19 + 4) == v17 )
      break;
LABEL_59:
    if ( v16 == v18 )
      goto LABEL_62;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        1u,
                        *((_WORD *)v19 + 15),
                        0x48u,
                        &ValueCaps,
                        ValueCapsLength,
                        *(PHIDP_PREPARSED_DATA *)(a1 + 288));
  if ( SpecificValueCaps < 0 )
  {
    if ( v12 )
      ScaledComponentValue = v12;
    else
      ScaledComponentValue = *((_DWORD *)v19 + 28);
    v5 = 0;
LABEL_44:
    *((_DWORD *)v19 + 28) = ScaledComponentValue;
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
    {
      if ( v12 )
        v24 = v12;
      else
        v24 = *((_DWORD *)v19 + 28);
      *((_DWORD *)v19 + 28) = v24;
    }
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) )
    {
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) != 1 )
      {
        *((_DWORD *)v19 + 27) = 1;
        goto LABEL_56;
      }
    }
    else
    {
      v25 = v31;
      if ( v31 )
      {
LABEL_54:
        *((_DWORD *)v19 + 27) = v25;
LABEL_56:
        *((_DWORD *)v19 + 26) = 0;
        v17 = v28;
        if ( a4 )
          *(_DWORD *)(a1 + 104) = *a4;
        v18 = (_QWORD *)(a1 + 224);
        goto LABEL_59;
      }
    }
    v25 = *((_DWORD *)v19 + 28);
    goto LABEL_54;
  }
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21) && (v20 = v12 * (__int64)*((int *)v19 + 30)) != 0 && v12 )
  {
    LogicalMin = ValueCaps.LogicalMin;
    v22 = *((int *)v19 + 29) / v20;
    if ( (int)v22 >= ValueCaps.LogicalMin )
    {
      LogicalMin = *((int *)v19 + 29) / v20;
      if ( (int)v22 > ValueCaps.LogicalMax )
        LogicalMin = ValueCaps.LogicalMax;
    }
  }
  else
  {
    LogicalMin = ValueCaps.LogicalMax;
  }
  if ( *((_DWORD *)v19 + 31) == LogicalMin && (!a4 || *a4 == *(_DWORD *)(a1 + 104)) )
  {
LABEL_39:
    ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                             (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v19,
                             1);
    v5 = SpecificValueCaps;
    goto LABEL_44;
  }
  if ( v9 || (v9 = (CHAR *)Win32AllocPool(*(unsigned __int16 *)(a1 + 124), 1819440195LL)) != 0LL )
  {
    *v9 = ValueCaps.ReportID;
    if ( (int)InteractiveControlDevice::SendDeviceIOControl(
                (InteractiveControlDevice *)a1,
                0xB0192u,
                0LL,
                0,
                v9,
                *(unsigned __int16 *)(a1 + 124),
                0LL) >= 0 )
    {
      if ( a4 )
      {
        memset(&v33, 0, sizeof(v33));
        v27 = 1;
        HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &v33, &v27, *(PHIDP_PREPARSED_DATA *)(a1 + 288));
        HidP_SetUsageValue(
          HidP_Feature,
          0xEu,
          v33.LinkCollection,
          0x20u,
          UsageValue,
          *(PHIDP_PREPARSED_DATA *)(a1 + 288),
          v9,
          *(unsigned __int16 *)(a1 + 124));
      }
      if ( HidP_SetUsageValue(
             HidP_Feature,
             1u,
             ValueCaps.LinkCollection,
             0x48u,
             LogicalMin,
             *(PHIDP_PREPARSED_DATA *)(a1 + 288),
             v9,
             *(unsigned __int16 *)(a1 + 124)) >= 0
        && (int)InteractiveControlDevice::SendDeviceIOControl(
                  (InteractiveControlDevice *)a1,
                  0xB0191u,
                  v9,
                  *(unsigned __int16 *)(a1 + 124),
                  0LL,
                  0,
                  0LL) >= 0 )
      {
        *((_DWORD *)v19 + 31) = LogicalMin;
      }
    }
    goto LABEL_39;
  }
  v5 = -1073741670;
LABEL_62:
  if ( v9 )
    Win32FreePool(v9, v10, v11);
  return v5;
}
