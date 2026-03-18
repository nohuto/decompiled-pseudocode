/*
 * XREFs of ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C02403DC
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FE34 (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_CO.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C02406F0 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::FindDigitizerForDevice(
        struct InteractiveControlDevice *a1,
        struct _HIDP_PREPARSED_DATA *a2)
{
  char *v2; // rsi
  char *v3; // rbx
  unsigned int v5; // edi
  char *v6; // rcx
  __int16 v7; // ax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int128 v12; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  __int64 *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  char *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]

  v2 = (char *)a1 + 224;
  v3 = (char *)*((_QWORD *)a1 + 28);
  v12 = 0LL;
  v5 = 0;
  while ( v3 != v2 )
  {
    v6 = v3;
    v3 = *(char **)v3;
    if ( *((_DWORD *)v6 + 4) == 1 )
    {
      v7 = *((_WORD *)v6 + 40);
      if ( v7 == 48 )
      {
        DWORD2(v12) = InteractiveControlParser::GetScaledComponentValue(
                        (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v6,
                        *((_DWORD *)v6 + 19) - *((_DWORD *)v6 + 18));
      }
      else if ( v7 == 49 )
      {
        HIDWORD(v12) = InteractiveControlParser::GetScaledComponentValue(
                         (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v6,
                         *((_DWORD *)v6 + 19) - *((_DWORD *)v6 + 18));
      }
    }
  }
  RIMFindTouchDigitizerWithSize(&v12, (char *)a1 + 280);
  if ( !*((_QWORD *)a1 + 35) )
  {
    if ( (unsigned int)hProvider > 3 )
    {
      TlgCreateSz(&pDesc, "InteractiveControlParser::FindDigitizerForDevice failed to find matching digitizer.");
      v15 = &v11;
      v17 = (char *)&v11 + 4;
      v11 = *((_QWORD *)&v12 + 1);
      v16 = 4LL;
      v18 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF7ED, v8, v9, 5u, &pData);
    }
    return (unsigned int)-1073741632;
  }
  return v5;
}
