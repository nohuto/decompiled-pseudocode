/*
 * XREFs of PiCMQueryRemove @ 0x140613880
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     Template_z @ 0x1401BFA48 (Template_z.c)
 *     Template_qz @ 0x1401C1868 (Template_qz.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14043AC34 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x14043BC80 (_CmValidateDeviceName.c)
 *     PiCMReleaseObjectInputData @ 0x140443254 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140443494 (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceStatus @ 0x14045BF1C (_CmGetDeviceStatus.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x1404B1458 (_CmIsRootDevice.c)
 *     PnpGetCallerSessionId @ 0x140603440 (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x14060689C (PiAuCheckClientInteractive.c)
 *     PiAuDoesClientHavePrivilege @ 0x140606AEC (PiAuDoesClientHavePrivilege.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1406169A8 (PnpQueueQueryAndRemoveEvent.c)
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
  int v17; // eax
  _WORD *PoolWithTag; // rax
  int v20; // edi
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
    goto LABEL_15;
  v14 = SourceString;
  v15 = v36;
  v31 = SourceString;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_qz(v11, &KMPnPEvt_CfgMgr_QueryRemove_Start, v13, v36, SourceString);
  if ( !v14 || v34 != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_61;
  }
  if ( !a3 || a4 < 0x14 )
    goto LABEL_27;
  DeviceRegProp = CmValidateDeviceName(v11, v14);
  if ( DeviceRegProp < 0 )
    goto LABEL_61;
  if ( CmIsRootDevice(v14) )
  {
    DeviceRegProp = -1073741773;
    goto LABEL_11;
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
      goto LABEL_11;
    }
    *PoolWithTag = 0;
  }
  v20 = v15 - 1;
  if ( !v20 )
  {
    if ( PiAuDoesClientHaveAccess(0x20u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( (v33 & 0xFFFFFFFE) != 0 )
        goto LABEL_31;
      v8 = v33 & 1;
    }
    else
    {
      DeviceRegProp = -1073741790;
    }
    goto LABEL_55;
  }
  v21 = v20 - 1;
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
      goto LABEL_61;
    v8 = 8;
    if ( (v28[0] & 8) != 0 )
    {
      if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0x19u) )
        goto LABEL_40;
    }
    else
    {
      DeviceRegProp = PnpGetCallerSessionId(&SessionId);
      if ( DeviceRegProp < 0 || (v14 = SourceString, SessionId != MEMORY[0xFFFFF780000002D8]) )
      {
        DeviceRegProp = PiAuCheckClientInteractive(v23);
        if ( DeviceRegProp < 0 || !v23[0] )
        {
          if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
            goto LABEL_40;
          DeviceRegProp = 0;
        }
      }
    }
    if ( v33 )
      goto LABEL_31;
    goto LABEL_55;
  }
  if ( v21 != 1 )
  {
LABEL_27:
    DeviceRegProp = -1073741811;
    goto LABEL_11;
  }
  if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
  {
LABEL_40:
    DeviceRegProp = -1073741790;
    goto LABEL_11;
  }
  if ( v33 )
  {
LABEL_31:
    DeviceRegProp = -1073741811;
    goto LABEL_11;
  }
  v8 = 2;
  if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v14, 0LL, &v29, &v39, &v38, v22) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_11;
  }
  if ( (v29 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_11;
  }
LABEL_55:
  if ( DeviceRegProp >= 0 )
  {
    DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v14);
    if ( DeviceRegProp >= 0 )
    {
      v24 = v9;
      DeviceRegProp = PnpQueueQueryAndRemoveEvent(
                        (unsigned int)&DestinationString,
                        (unsigned int)&v25,
                        (_DWORD)v10,
                        (unsigned int)&v24,
                        v8,
                        0);
      if ( DeviceRegProp != -2147483608 )
        goto LABEL_11;
      if ( v10 )
        v10[((unsigned __int64)v9 >> 1) - 1] = 0;
      goto LABEL_62;
    }
  }
LABEL_61:
  if ( DeviceRegProp != -2147483608 )
    goto LABEL_11;
LABEL_62:
  if ( v24 <= v9 )
  {
    v17 = PiCMReturnBufferResultData(0x80000028, v24, v25, v10, v24, v37, a3, a4, a6);
    goto LABEL_12;
  }
LABEL_11:
  v17 = PiCMReturnBufferResultData(DeviceRegProp, v24, v25, 0LL, 0, v37, a3, a4, a6);
LABEL_12:
  v12 = v17;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
  v7 = v31;
LABEL_15:
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_z(v11, &KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v7);
  PiCMReleaseObjectInputData((__int64)v32);
  return (unsigned int)v12;
}
