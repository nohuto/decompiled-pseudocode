/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x1404D8EBC
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     Template_jzt @ 0x1401D0AC0 (Template_jzt.c)
 *     Template_q @ 0x1401D0B78 (Template_q.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1404D8CF0 (PiCMCaptureInterfaceListInputData.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  PVOID v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  int v13; // esi
  const WCHAR *v14; // r13
  __int64 v15; // rcx
  NTSTATUS inited; // eax
  int v17; // r9d
  unsigned int DeviceInterfaces; // eax
  int v19; // eax
  unsigned int v21; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v23; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  char v25[4]; // [rsp+78h] [rbp-31h] BYREF
  int v26; // [rsp+7Ch] [rbp-2Dh]
  _BYTE v27[16]; // [rsp+80h] [rbp-29h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp-19h]
  int v29; // [rsp+9Ch] [rbp-Dh]

  v23 = a6;
  P = 0LL;
  v8 = 0LL;
  v21 = 0;
  *a6 = 0;
  v9 = 0;
  v11 = PiCMCaptureInterfaceListInputData(a1, a2, a5, v25);
  if ( v11 < 0 )
    goto LABEL_17;
  v13 = v26;
  v14 = SourceString;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_jzt(v10, 0LL, 1LL, (ULONGLONG)v27, SourceString, (v26 & 0x10000) != 0);
  if ( a3 && a4 >= 0x14 )
  {
    v15 = 3221225485LL;
    if ( (v13 & 0xFFFE0000) != 0 )
      goto LABEL_22;
    if ( (_WORD)v13 )
      v11 = -1073741811;
    v15 = (unsigned int)v11;
    if ( v11 < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, v14);
    v15 = (unsigned int)inited;
    if ( inited < 0 )
      goto LABEL_22;
    LOBYTE(v17) = 1;
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (unsigned int)v27,
                         (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0),
                         (v13 & 0x10000) == 0,
                         v17,
                         (__int64)&P,
                         (__int64)&v21);
    v9 = v21;
    v15 = DeviceInterfaces;
    v8 = P;
    if ( a4 - 20 < v21 )
      v15 = 3221225507LL;
  }
  else
  {
    v15 = 3221225485LL;
  }
  if ( (int)v15 >= 0 )
  {
    v19 = PiCMReturnBufferResultData(v15, v9, 0LL, v8, v9, v29, a3, a4, v23);
    goto LABEL_15;
  }
LABEL_22:
  v19 = PiCMReturnBufferResultData(v15, v9, 0LL, 0LL, 0, v29, a3, a4, v23);
LABEL_15:
  v11 = v19;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_17:
  if ( SourceString )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_q(v10, &KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v12, v11);
  return (unsigned int)v11;
}
