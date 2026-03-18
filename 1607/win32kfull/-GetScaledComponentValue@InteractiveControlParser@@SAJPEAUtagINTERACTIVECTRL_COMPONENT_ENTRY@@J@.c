/*
 * XREFs of ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C02406F0
 * Callers:
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023E230 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C023FFF4 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C02403DC (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C02407D8 (-ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREP.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 */

__int64 __fastcall InteractiveControlParser::GetScaledComponentValue(
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a1,
        int a2)
{
  __int64 v3; // rcx
  signed __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  LPCGUID v7; // r8
  int v9; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+34h] [rbp-25h] BYREF
  int v11; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  int *v18; // [rsp+90h] [rbp+37h]
  __int64 v19; // [rsp+98h] [rbp+3Fh]

  v3 = *((int *)a1 + 29) * (__int64)a2;
  v4 = *((int *)a1 + 30) * (unsigned __int64)*((unsigned int *)a1 + 31);
  if ( v4 )
    return v3 / v4;
  if ( (unsigned int)hProvider > 3 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlParser::GetScaledComponentValue -> Invalid component configuration.");
    v6 = *(_DWORD *)(v5 + 116);
    v14 = &v9;
    v10 = *(_DWORD *)(v5 + 120);
    v16 = &v10;
    v11 = *(_DWORD *)(v5 + 124);
    v18 = &v11;
    v9 = v6;
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF913, v7, (LPCGUID)v5, 6u, &pData);
  }
  return 1LL;
}
