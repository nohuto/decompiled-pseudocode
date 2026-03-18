/*
 * XREFs of PiCMQueryRemove @ 0x14058A87C
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     Template_z @ 0x14015CA44 (Template_z.c)
 *     Template_qz @ 0x1401FD450 (Template_qz.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x14043D110 (_CmValidateDeviceName.c)
 *     PiCMReturnBufferResultData @ 0x140441124 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x140442B00 (PiCMReleaseObjectInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     _CmGetDeviceStatus @ 0x1404DCCB8 (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x1404DCF48 (PiCMCaptureObjectInputData.c)
 *     _CmIsRootDevice @ 0x1404DEBD8 (_CmIsRootDevice.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14058AA90 (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuDoesClientHavePrivilege @ 0x14058B044 (PiAuDoesClientHavePrivilege.c)
 *     PnpGetCallerSessionId @ 0x14067E2AC (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x140681644 (PiAuCheckClientInteractive.c)
 */

__int64 __fastcall PiCMQueryRemove(ULONG64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  const wchar_t *v7; // rdi
  int v8; // r15d
  unsigned int v9; // r12d
  _WORD *v10; // r14
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  const wchar_t *v14; // rsi
  int v15; // edi
  signed int DeviceRegProp; // ebx
  _WORD *PoolWithTag; // rax
  int v18; // edi
  int v19; // eax
  int v21; // edi
  unsigned int v22; // [rsp+38h] [rbp-69h]
  char v23[4]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v24; // [rsp+5Ch] [rbp-45h] BYREF
  int v25; // [rsp+60h] [rbp-41h] BYREF
  ULONG SessionId; // [rsp+64h] [rbp-3Dh] BYREF
  int v27; // [rsp+68h] [rbp-39h] BYREF
  char v28[4]; // [rsp+6Ch] [rbp-35h] BYREF
  int v29; // [rsp+70h] [rbp-31h] BYREF
  int v30; // [rsp+74h] [rbp-2Dh] BYREF
  PCWSTR v31; // [rsp+78h] [rbp-29h]
  char v32[4]; // [rsp+80h] [rbp-21h] BYREF
  int v33; // [rsp+84h] [rbp-1Dh]
  int v34; // [rsp+88h] [rbp-19h]
  PCWSTR SourceString; // [rsp+90h] [rbp-11h]
  int v36; // [rsp+9Ch] [rbp-5h]
  int v37; // [rsp+A0h] [rbp-1h]
  int v38; // [rsp+A8h] [rbp+7h] BYREF
  int v39; // [rsp+ACh] [rbp+Bh] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+Fh] BYREF

  v23[0] = 0;
  v7 = 0LL;
  SessionId = 0;
  *a6 = 0;
  v8 = 0;
  v9 = 0;
  v24 = 0;
  v10 = 0LL;
  v25 = 0;
  v12 = PiCMCaptureObjectInputData(a1, a2, a5, v32);
  if ( v12 < 0 )
    goto LABEL_27;
  v14 = SourceString;
  v15 = v36;
  v31 = SourceString;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_qz(v11, &KMPnPEvt_CfgMgr_QueryRemove_Start, v13, v36, SourceString);
  if ( !v14 || v34 != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_60;
  }
  if ( !a3 || a4 < 0x14 )
    goto LABEL_31;
  DeviceRegProp = CmValidateDeviceName(v11, v14);
  if ( DeviceRegProp < 0 )
    goto LABEL_60;
  if ( CmIsRootDevice(v14) )
  {
    DeviceRegProp = -1073741773;
    goto LABEL_23;
  }
  v9 = a4 - 20;
  if ( a4 - 20 < 2 )
    v9 = 0;
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x34706E50u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_23;
    }
    *PoolWithTag = 0;
  }
  v18 = v15 - 1;
  if ( !v18 )
  {
    if ( !PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
    {
      DeviceRegProp = -1073741790;
      goto LABEL_20;
    }
    if ( (v33 & 0xFFFFFFFE) == 0 )
    {
      v8 = v33 & 1;
      goto LABEL_20;
    }
LABEL_55:
    DeviceRegProp = -1073741811;
    goto LABEL_23;
  }
  v21 = v18 - 1;
  if ( !v21 )
  {
    v27 = 0;
    v30 = 4;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)v14,
                      0LL,
                      16,
                      (__int64)&v27,
                      (__int64)v28,
                      (__int64)&v30);
    if ( DeviceRegProp < 0 )
      goto LABEL_60;
    v8 = 8;
    if ( (v28[0] & 8) != 0 )
    {
      if ( !PiAuDoesClientHaveAccess(4u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(25LL) )
        goto LABEL_46;
    }
    else
    {
      DeviceRegProp = PnpGetCallerSessionId(&SessionId);
      if ( DeviceRegProp < 0 || (v14 = SourceString, SessionId != MEMORY[0xFFFFF780000002D8]) )
      {
        DeviceRegProp = PiAuCheckClientInteractive(v23);
        if ( DeviceRegProp < 0 || !v23[0] )
        {
          if ( !PiAuDoesClientHaveAccess(4u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
            goto LABEL_46;
          DeviceRegProp = 0;
        }
      }
    }
    if ( !v33 )
      goto LABEL_20;
    goto LABEL_55;
  }
  if ( v21 != 1 )
  {
LABEL_31:
    DeviceRegProp = -1073741811;
    goto LABEL_23;
  }
  if ( !PiAuDoesClientHaveAccess(4u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
  {
LABEL_46:
    DeviceRegProp = -1073741790;
    goto LABEL_23;
  }
  if ( v33 )
    goto LABEL_55;
  v8 = 2;
  if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v14, 0LL, &v29, &v39, &v38, v22) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_23;
  }
  if ( (v29 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_23;
  }
LABEL_20:
  if ( DeviceRegProp < 0 || (DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v14), DeviceRegProp < 0) )
  {
LABEL_60:
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_23;
    goto LABEL_61;
  }
  v24 = v9;
  DeviceRegProp = PnpQueueQueryAndRemoveEvent(
                    (unsigned int)&DestinationString,
                    (unsigned int)&v25,
                    (_DWORD)v10,
                    (unsigned int)&v24,
                    v8,
                    0);
  if ( DeviceRegProp != -2147483608 )
    goto LABEL_23;
  if ( v10 )
    v10[((unsigned __int64)v9 >> 1) - 1] = 0;
LABEL_61:
  if ( v24 <= v9 )
  {
    v19 = PiCMReturnBufferResultData(0x80000028, v24, v25, v10, v24, v37, a3, a4, a6);
    goto LABEL_24;
  }
LABEL_23:
  v19 = PiCMReturnBufferResultData(DeviceRegProp, v24, v25, 0LL, 0, v37, a3, a4, a6);
LABEL_24:
  v12 = v19;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
  v7 = v31;
LABEL_27:
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_z(v11, &KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v7);
  PiCMReleaseObjectInputData((__int64)v32);
  return (unsigned int)v12;
}
