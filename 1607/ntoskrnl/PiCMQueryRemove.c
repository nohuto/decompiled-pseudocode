/*
 * XREFs of PiCMQueryRemove @ 0x14064810C
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140008650 (RtlGetActiveConsoleId.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     Template_z @ 0x1401CDE1C (Template_z.c)
 *     Template_qz @ 0x1401D0BD8 (Template_qz.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     _CmGetDeviceStatus @ 0x1404DA838 (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x1404E0950 (_CmValidateDeviceName.c)
 *     _CmIsRootDevice @ 0x14050CCF4 (_CmIsRootDevice.c)
 *     PnpGetCallerSessionId @ 0x14062D88C (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x140630D6C (PiAuCheckClientInteractive.c)
 *     PiAuDoesClientHavePrivilege @ 0x140630FB8 (PiAuDoesClientHavePrivilege.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B4B0 (PnpQueueQueryAndRemoveEvent.c)
 */

__int64 __fastcall PiCMQueryRemove(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  const wchar_t *v6; // r12
  int v7; // r14d
  ULONG v8; // r15d
  _WORD *v9; // rsi
  ULONG v10; // r13d
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  int v14; // edi
  signed int DeviceRegProp; // ebx
  int v16; // eax
  _WORD *PoolWithTag; // rax
  int v19; // edi
  int v20; // edi
  signed int v21; // eax
  unsigned int v22; // [rsp+38h] [rbp-69h]
  char v23[4]; // [rsp+58h] [rbp-49h] BYREF
  ULONG SessionId; // [rsp+5Ch] [rbp-45h] BYREF
  int v25; // [rsp+60h] [rbp-41h] BYREF
  int v26; // [rsp+64h] [rbp-3Dh] BYREF
  int v27; // [rsp+68h] [rbp-39h] BYREF
  int v28; // [rsp+6Ch] [rbp-35h] BYREF
  char v29[8]; // [rsp+70h] [rbp-31h] BYREF
  char v30[4]; // [rsp+78h] [rbp-29h] BYREF
  int v31; // [rsp+7Ch] [rbp-25h]
  int v32; // [rsp+80h] [rbp-21h]
  PCWSTR SourceString; // [rsp+88h] [rbp-19h]
  int v34; // [rsp+94h] [rbp-Dh]
  int v35; // [rsp+98h] [rbp-9h]
  int v36; // [rsp+A0h] [rbp-1h] BYREF
  int v37; // [rsp+A4h] [rbp+3h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+7h] BYREF

  v23[0] = 0;
  v6 = 0LL;
  v7 = 0;
  SessionId = 0;
  *a6 = 0;
  v8 = 0;
  v9 = 0LL;
  v25 = 0;
  v10 = 0;
  v12 = PiCMCaptureObjectInputData(a1, a2, a5, v30);
  if ( v12 < 0 )
    goto LABEL_14;
  v6 = SourceString;
  v14 = v34;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_qz(v11, &KMPnPEvt_CfgMgr_QueryRemove_Start, v13, v34, SourceString);
  if ( !v6 || v32 != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_60;
  }
  if ( !a3 || a4 < 0x14 )
    goto LABEL_26;
  DeviceRegProp = CmValidateDeviceName(v11, v6);
  if ( DeviceRegProp < 0 )
    goto LABEL_60;
  if ( CmIsRootDevice(v6) )
  {
    DeviceRegProp = -1073741773;
LABEL_11:
    v16 = PiCMReturnBufferResultData(DeviceRegProp, v10, v25, 0LL, 0, v35, a3, a4, a6);
    goto LABEL_12;
  }
  v8 = a4 - 20;
  if ( a4 - 20 < 2 )
    v8 = 0;
  if ( v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x34706E50u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_11;
    }
    *PoolWithTag = 0;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    if ( PiAuDoesClientHaveAccess(0x20u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( (v31 & 0xFFFFFFFE) != 0 )
        goto LABEL_30;
      v7 = v31 & 1;
    }
    else
    {
      DeviceRegProp = -1073741790;
    }
    goto LABEL_54;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v28 = 0;
    v27 = 4;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)v6,
                      0LL,
                      16,
                      (__int64)&v28,
                      (__int64)v29,
                      (__int64)&v27,
                      0);
    if ( DeviceRegProp < 0 )
      goto LABEL_60;
    v7 = 8;
    if ( (v29[0] & 8) != 0 )
    {
      if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0x19u) )
        goto LABEL_39;
    }
    else
    {
      DeviceRegProp = PnpGetCallerSessionId(&SessionId);
      if ( DeviceRegProp < 0 || SessionId != RtlGetActiveConsoleId() )
      {
        DeviceRegProp = PiAuCheckClientInteractive(v23);
        if ( DeviceRegProp < 0 || !v23[0] )
        {
          if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
            goto LABEL_39;
          DeviceRegProp = 0;
        }
      }
    }
    if ( v31 )
      goto LABEL_30;
    goto LABEL_54;
  }
  if ( v20 != 1 )
  {
LABEL_26:
    DeviceRegProp = -1073741811;
    goto LABEL_11;
  }
  if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
  {
LABEL_39:
    DeviceRegProp = -1073741790;
    goto LABEL_11;
  }
  if ( v31 )
  {
LABEL_30:
    DeviceRegProp = -1073741811;
    goto LABEL_11;
  }
  v7 = 2;
  if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v6, 0, &v26, &v37, &v36, v22) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_11;
  }
  if ( (v26 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_11;
  }
LABEL_54:
  if ( DeviceRegProp < 0 || (DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v6), DeviceRegProp < 0) )
  {
LABEL_60:
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_11;
    goto LABEL_61;
  }
  SessionId = v8;
  v21 = PnpQueueQueryAndRemoveEvent(
          (unsigned int)&DestinationString,
          (unsigned int)&v25,
          (_DWORD)v9,
          (unsigned int)&SessionId,
          v7,
          0);
  v10 = SessionId;
  DeviceRegProp = v21;
  if ( v21 != -2147483608 )
    goto LABEL_11;
  if ( v9 )
    v9[((unsigned __int64)v8 >> 1) - 1] = 0;
LABEL_61:
  if ( v10 > v8 )
    goto LABEL_11;
  v16 = PiCMReturnBufferResultData(0x80000028, v10, v25, v9, v10, v35, a3, a4, a6);
LABEL_12:
  v12 = v16;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x34706E50u);
LABEL_14:
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_z(v11, &KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v6);
  PiCMReleaseObjectInputData((__int64)v30);
  return (unsigned int)v12;
}
