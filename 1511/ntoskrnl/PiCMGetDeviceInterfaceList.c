/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x1404DD618
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     Template_jzt @ 0x1401C1750 (Template_jzt.c)
 *     Template_q @ 0x1401C1808 (Template_q.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14043AC34 (PiCMReturnBufferResultData.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1404DEA90 (PiCMCaptureInterfaceListInputData.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  PVOID v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  int v13; // esi
  const WCHAR *v14; // r13
  NTSTATUS inited; // ecx
  int v16; // r9d
  NTSTATUS DeviceInterfaces; // eax
  int v18; // eax
  unsigned int v20; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v22; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v24[4]; // [rsp+78h] [rbp-31h] BYREF
  int v25; // [rsp+7Ch] [rbp-2Dh]
  _BYTE v26[16]; // [rsp+80h] [rbp-29h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp-19h]
  int v28; // [rsp+9Ch] [rbp-Dh]

  v22 = a6;
  P = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v9 = 0;
  v20 = 0;
  v11 = PiCMCaptureInterfaceListInputData(a1, a2, a5, v24);
  if ( v11 < 0 )
    goto LABEL_20;
  v13 = v25;
  v14 = SourceString;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_jzt((v25 & 0x10000) != 0, 0LL, 1LL, (ULONGLONG)v26, SourceString, (v25 & 0x10000) != 0);
  if ( a3 && a4 >= 0x14 )
  {
    inited = -1073741811;
    if ( (v13 & 0xFFFE0000) != 0 )
      goto LABEL_17;
    if ( (_WORD)v13 )
      v11 = -1073741811;
    inited = v11;
    if ( v11 < 0 )
      goto LABEL_17;
    inited = RtlInitUnicodeStringEx(&DestinationString, v14);
    if ( inited < 0 )
      goto LABEL_17;
    LOBYTE(v16) = 1;
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (unsigned int)v26,
                         (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0),
                         (v13 & 0x10000) == 0,
                         v16,
                         (__int64)&P,
                         (__int64)&v20);
    v9 = v20;
    inited = DeviceInterfaces;
    v8 = P;
    if ( a4 - 20 < v20 )
      inited = -1073741789;
  }
  else
  {
    inited = -1073741811;
  }
  if ( inited >= 0 )
  {
    v18 = PiCMReturnBufferResultData(inited, v9, 0, v8, v9, v28, a3, a4, v22);
    goto LABEL_18;
  }
LABEL_17:
  v18 = PiCMReturnBufferResultData(inited, v9, 0, 0LL, 0, v28, a3, a4, v22);
LABEL_18:
  v11 = v18;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_20:
  if ( SourceString && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_q(v10, &KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v12, v11);
  return (unsigned int)v11;
}
