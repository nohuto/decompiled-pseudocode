/*
 * XREFs of HUBPDO_AssignPDOIds @ 0x1C006761C
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1C0067804 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBID_BuildUxdPnpId @ 0x1C0015CDC (HUBID_BuildUxdPnpId.c)
 *     HUBID_BuildDeviceID @ 0x1C0015E58 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x1C001604C (HUBID_BuildHardwareID.c)
 *     HUBID_BuildCompatibleID @ 0x1C00166A0 (HUBID_BuildCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x1C0016788 (HUBID_BuildContainerID.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C006D1C8 (HUBREG_UpdateUxdSettings.c)
 */

__int64 __fastcall HUBPDO_AssignPDOIds(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  NTSTATUS v11; // [rsp+28h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-68h] BYREF
  char v13; // [rsp+40h] [rbp-58h] BYREF

  *(_DWORD *)&DestinationString.Length = 3670016;
  DestinationString.Buffer = (unsigned __int16 *)&v13;
  HUBREG_UpdateUxdSettings(*(_QWORD *)a1, a1, 0LL);
  if ( (*(_DWORD *)(a1 + 1616) & 1) != 0 )
    HUBID_BuildUxdPnpId(a1, (const void **)(a1 + 2104));
  v4 = HUBID_BuildDeviceID(a1, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = HUBID_BuildHardwareID(a1, a2, 0LL);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v4 = HUBID_BuildCompatibleID(a1, a2, 0LL);
      v5 = v4;
      if ( v4 >= 0 )
      {
        HUBID_BuildContainerID(a1, a2);
        v7 = *(_DWORD *)(a1 + 1616);
        if ( (v7 & 0x40) != 0 )
        {
          if ( (v7 & 2) == 0 )
            DestinationString.MaximumLength = 32;
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 2136));
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015
                                                                                                 + 1704))(
                 WdfDriverGlobals,
                 a2,
                 &DestinationString);
          v5 = v4;
          if ( v4 < 0 )
          {
            v6 = 91;
            goto LABEL_5;
          }
        }
        else
        {
          v8 = *(_QWORD *)(a1 + 8);
          if ( (*(_DWORD *)(v8 + 204) & 0x200) == 0 || (v9 = *(_WORD *)(v8 + 236)) == 0 )
            v9 = *(_WORD *)(v8 + 200);
          v4 = RtlIntegerToUnicodeString(v9, 0xAu, &DestinationString);
          v5 = v4;
          if ( v4 < 0 )
          {
            v6 = 92;
            goto LABEL_5;
          }
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015
                                                                                                 + 1704))(
                 WdfDriverGlobals,
                 a2,
                 &DestinationString);
          v5 = v4;
          if ( v4 < 0 )
          {
            v6 = 93;
            goto LABEL_5;
          }
        }
        return 0;
      }
      v6 = 90;
    }
    else
    {
      v6 = 89;
    }
  }
  else
  {
    v6 = 88;
  }
LABEL_5:
  v11 = v4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    v6,
    (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
    v11,
    *(_QWORD *)&DestinationString.Length,
    DestinationString.Buffer);
  return v5;
}
