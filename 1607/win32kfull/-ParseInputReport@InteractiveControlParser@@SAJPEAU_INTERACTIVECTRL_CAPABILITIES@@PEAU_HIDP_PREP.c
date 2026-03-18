/*
 * XREFs of ?ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C02407D8
 * Callers:
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C023EE14 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C02406F0 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::ParseInputReport(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        CHAR *Report,
        ULONG a4,
        struct tagINTERACTIVECTRL_INFO *a5)
{
  NTSTATUS Usages; // esi
  int v8; // r12d
  struct _INTERACTIVECTRL_CAPABILITIES *v9; // r14
  struct _INTERACTIVECTRL_CAPABILITIES *v10; // rax
  struct _INTERACTIVECTRL_CAPABILITIES *v11; // rbx
  int v12; // ecx
  NTSTATUS v13; // eax
  ULONG v14; // ecx
  unsigned int v15; // ecx
  NTSTATUS ScaledUsageValue; // eax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  int ScaledComponentValue; // eax
  int v22; // ecx
  int v23; // r8d
  int v24; // eax
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  __int64 v29; // rcx
  ULONG UsageValue; // [rsp+40h] [rbp-C0h] BYREF
  struct _HIDP_PREPARSED_DATA *v32; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v33; // [rsp+50h] [rbp-B0h]
  ULONG UsageLength; // [rsp+58h] [rbp-A8h] BYREF
  NTSTATUS v35; // [rsp+5Ch] [rbp-A4h] BYREF
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v37; // [rsp+64h] [rbp-9Ch] BYREF
  NTSTATUS v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  NTSTATUS *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  ULONG *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  ULONG *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  NTSTATUS *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  int *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  USHORT UsageList; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+102h] [rbp+2h]

  v33 = (unsigned __int8 *)Report;
  v32 = PreparsedData;
  UsageLength = 5;
  *(_QWORD *)a5 = 0LL;
  *((_QWORD *)a5 + 1) = 0LL;
  Usages = 0;
  *((_QWORD *)a5 + 2) = 0LL;
  v8 = 0;
  *((_DWORD *)a5 + 6) = 0;
  v9 = (struct _INTERACTIVECTRL_CAPABILITIES *)*((_QWORD *)a1 + 14);
  UsageList = 0;
  v54 = 0LL;
  v39 = 0LL;
  if ( v9 == (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a1 + 112) )
    return (unsigned int)Usages;
  v10 = (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a1 + 112);
  do
  {
    v11 = v9;
    UsageValue = 0;
    v9 = *(struct _INTERACTIVECTRL_CAPABILITIES **)v9;
    if ( *((_DWORD *)v11 + 25) )
      continue;
    v12 = *((_DWORD *)v11 + 4);
    if ( ((v12 - 1) & 0xFFFFFFF9) != 0 || v12 == 3 )
    {
      ScaledUsageValue = HidP_GetScaledUsageValue(
                           HidP_Input,
                           *((_WORD *)v11 + 12),
                           *((_WORD *)v11 + 15),
                           *((_WORD *)v11 + 40),
                           (PLONG)&UsageValue,
                           PreparsedData,
                           Report,
                           a4);
      v14 = UsageValue;
      Usages = ScaledUsageValue;
    }
    else if ( v12 == 1 )
    {
      v13 = HidP_GetUsageValue(
              HidP_Input,
              *((_WORD *)v11 + 12),
              *((_WORD *)v11 + 15),
              *((_WORD *)v11 + 40),
              &UsageValue,
              PreparsedData,
              Report,
              a4);
      v14 = UsageValue;
      Usages = v13;
      if ( (signed int)UsageValue < *((_DWORD *)v11 + 16) || (signed int)UsageValue > *((_DWORD *)v11 + 17) )
        Usages = -2146369535;
    }
    else
    {
      UsageLength = 5;
      Usages = HidP_GetUsages(
                 HidP_Input,
                 *((_WORD *)v11 + 12),
                 *((_WORD *)v11 + 15),
                 &UsageList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 a4);
      v15 = 0;
      if ( UsageLength )
      {
        while ( *(&UsageList + v15) != *((_WORD *)v11 + 40) )
        {
          if ( ++v15 >= UsageLength )
            goto LABEL_13;
        }
        v14 = 1;
        UsageValue = 1;
      }
      else
      {
LABEL_13:
        v14 = UsageValue;
      }
    }
    if ( Usages < 0 )
    {
      if ( Usages != -2146369535 && (unsigned int)hProvider > 2 )
      {
        TlgCreateSz(&pDesc, "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.");
        v35 = Usages;
        v43 = &v35;
        v36 = *((_DWORD *)v11 + 4);
        v45 = (ULONG *)&v36;
        v47 = &v37;
        v38 = *((unsigned __int16 *)a1 + 4);
        v49 = &v38;
        v44 = 4LL;
        v46 = 4LL;
        v37 = a4;
        v48 = 4LL;
        v50 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF8A8, v17, v18, 7u, &pData);
      }
      Usages = 0;
      goto LABEL_43;
    }
    if ( *((_DWORD *)v11 + 4) != 1 )
    {
      if ( *((_DWORD *)v11 + 4) == 3 )
      {
        if ( v14 )
        {
          if ( *((_DWORD *)v11 + 28) )
          {
            ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v11, v14);
            v22 = *((_DWORD *)v11 + 26);
            v23 = *((_DWORD *)v11 + 27);
            v24 = v22 + ScaledComponentValue;
            *((_DWORD *)v11 + 26) = v24;
            v25 = v24 / *((_DWORD *)v11 + 28);
            v26 = v25 * v23;
            v27 = v25;
            *((_DWORD *)a5 + 6) = v26;
            v28 = *((_DWORD *)v11 + 26);
            if ( v22 < 0 != v28 < 0 )
            {
              if ( v28 <= 0 )
                *((_DWORD *)a5 + 6) = v26 - *((_DWORD *)v11 + 27);
              else
                *((_DWORD *)a5 + 6) = v26 + *((_DWORD *)v11 + 27);
            }
            *((_DWORD *)a5 + 6) = v27 * *((_DWORD *)v11 + 27);
            *((_DWORD *)v11 + 26) -= v27 * *((_DWORD *)v11 + 28);
          }
          else if ( (unsigned int)hProvider > 2 )
          {
            TlgCreateSz(&pDesc, "InteractiveControlParser::ParseInputReport -> Invalid component configuration");
            v38 = Usages;
            v43 = &v38;
            v37 = *((_DWORD *)v11 + 4);
            v45 = &v37;
            v36 = *((_DWORD *)v11 + 26);
            v47 = (ULONG *)&v36;
            v35 = *((_DWORD *)v11 + 28);
            v49 = &v35;
            v40 = *((_DWORD *)v11 + 27);
            v51 = &v40;
            v44 = 4LL;
            v46 = 4LL;
            v48 = 4LL;
            v50 = 4LL;
            v52 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF82C, v19, v20, 8u, &pData);
          }
        }
      }
      else if ( (*((_DWORD *)v11 + 4) == 5 || *((_DWORD *)v11 + 4) == 7) && v14 )
      {
        *((_DWORD *)a5 + 5) |= *((_DWORD *)v11 + 24);
      }
      goto LABEL_43;
    }
    if ( *((_WORD *)v11 + 12) == 1 )
    {
      if ( *((_WORD *)v11 + 40) == 48 )
      {
        LODWORD(v39) = v14;
LABEL_41:
        *((_DWORD *)a5 + 5) |= *((_DWORD *)v11 + 24);
        goto LABEL_42;
      }
      if ( *((_WORD *)v11 + 40) == 49 )
      {
        HIDWORD(v39) = v14;
        goto LABEL_41;
      }
    }
LABEL_42:
    v8 = 1;
LABEL_43:
    PreparsedData = v32;
    v10 = (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a1 + 112);
    Report = (CHAR *)v33;
  }
  while ( v9 != v10 );
  if ( v8 )
  {
    v29 = *((_QWORD *)a1 + 21);
    if ( v29 )
      RIMTransformCoordinatesFromDigitizer(v29, &v39, (char *)a5 + 12, (char *)a5 + 4);
  }
  return (unsigned int)Usages;
}
