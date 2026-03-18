/*
 * XREFs of PiCMDeviceAction @ 0x14058ACF4
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     _CmValidateDeviceName @ 0x14043D110 (_CmValidateDeviceName.c)
 *     PiCMReleaseObjectInputData @ 0x140442B00 (PiCMReleaseObjectInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     _CmGetDeviceStatus @ 0x1404DCCB8 (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x1404DCF48 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1404DD148 (PiCMReturnBasicResultData.c)
 *     _CmIsRootDevice @ 0x1404DEBD8 (_CmIsRootDevice.c)
 *     PiQueueDeviceRequest @ 0x14058AF74 (PiQueueDeviceRequest.c)
 *     PiAuDoesClientHavePrivilege @ 0x14058B044 (PiAuDoesClientHavePrivilege.c)
 *     PiCMSetProblem @ 0x14058B0D8 (PiCMSetProblem.c)
 */

__int64 __fastcall PiCMDeviceAction(ULONG64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v8; // r13d
  int v9; // esi
  int inited; // ebx
  const WCHAR *v11; // r15
  int v12; // r14d
  int v13; // r14d
  int v14; // r8d
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // eax
  int v23; // r8d
  unsigned int v24; // [rsp+38h] [rbp-39h]
  int DeviceStatus; // [rsp+48h] [rbp-29h] BYREF
  int v26; // [rsp+4Ch] [rbp-25h] BYREF
  int v27; // [rsp+50h] [rbp-21h] BYREF
  int v28; // [rsp+54h] [rbp-1Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  char v30[4]; // [rsp+68h] [rbp-9h] BYREF
  int v31; // [rsp+6Ch] [rbp-5h]
  int v32; // [rsp+70h] [rbp-1h]
  PCWSTR SourceString; // [rsp+78h] [rbp+7h]
  int v34; // [rsp+84h] [rbp+13h]
  int v35; // [rsp+88h] [rbp+17h]

  v26 = 0;
  v28 = 0;
  *a6 = 0;
  v8 = 0;
  v27 = 0;
  v9 = 0;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, v30);
  if ( inited >= 0 )
  {
    v11 = SourceString;
    if ( !SourceString || v32 != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_25;
    }
    v12 = v34;
    if ( v34 == 1 )
    {
      v9 = v31;
      if ( (unsigned int)(v31 - 1) > 5 )
        inited = -1073741811;
    }
    else
    {
      if ( v34 != 2 )
        goto LABEL_52;
      v8 = v31;
      if ( (unsigned int)(v31 - 1) > 1 )
        inited = -1073741811;
    }
    if ( inited < 0 )
      goto LABEL_25;
    inited = CmValidateDeviceName((unsigned int)(v34 - 1), SourceString);
    if ( inited < 0 )
      goto LABEL_25;
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_52;
      if ( !PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
        goto LABEL_48;
      inited = RtlInitUnicodeStringEx(&DestinationString, v11);
      if ( inited < 0 )
        goto LABEL_25;
      v22 = PiQueueDeviceRequest((unsigned int)&DestinationString, 9, v23, v8 != 2, 0LL);
    }
    else
    {
      if ( v9 <= 0 )
        goto LABEL_52;
      if ( v9 > 2 )
      {
        if ( v9 <= 6 )
        {
          if ( PiAuDoesClientHaveAccess(2u) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
          {
            inited = RtlInitUnicodeStringEx(&DestinationString, v11);
            if ( inited < 0 )
              goto LABEL_25;
            v15 = v9 - 3;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 == 1 )
                  {
                    v18 = 24;
                    goto LABEL_23;
                  }
                  inited = -1073741811;
                  DeviceStatus = -1073741811;
LABEL_25:
                  inited = PiCMReturnBasicResultData(inited, v35, a3, a4, a6);
                  goto LABEL_26;
                }
                v18 = 23;
              }
              else
              {
                v18 = 22;
              }
            }
            else
            {
              v18 = 21;
            }
LABEL_23:
            inited = PiQueueDeviceRequest((unsigned int)&DestinationString, v18, v14, 1, (__int64)&DeviceStatus);
            if ( inited >= 0 )
              inited = DeviceStatus;
            goto LABEL_25;
          }
LABEL_48:
          inited = -1073741790;
          goto LABEL_25;
        }
        goto LABEL_52;
      }
      if ( !PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
        goto LABEL_48;
      if ( CmIsRootDevice(v11) )
      {
LABEL_52:
        inited = -1073741811;
        goto LABEL_25;
      }
      DeviceStatus = CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v11, 0LL, &v26, &v28, &v27, v24);
      if ( DeviceStatus >= 0 )
      {
        if ( (v26 & 8) != 0 )
          goto LABEL_25;
        if ( (v26 & 0x400) != 0 )
        {
          inited = PiCMSetProblem(v11);
          if ( inited < 0 )
            goto LABEL_25;
        }
      }
      inited = RtlInitUnicodeStringEx(&DestinationString, v11);
      if ( inited < 0 )
        goto LABEL_25;
      v21 = 16;
      if ( v9 != 1 )
        v21 = 12;
      v22 = PiQueueDeviceRequest((unsigned int)&DestinationString, v21, v20, 1, 0LL);
    }
    inited = v22;
    goto LABEL_25;
  }
LABEL_26:
  PiCMReleaseObjectInputData((__int64)v30);
  return (unsigned int)inited;
}
