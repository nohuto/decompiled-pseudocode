/*
 * XREFs of WerKernelSubmitReportForHungProcess @ 0x140303654
 * Callers:
 *     _lambda_ee4856d16542b31eb6609ee4cd7f16f7_::_lambda_invoker_cdecl_ @ 0x1402DB2C0 (_lambda_ee4856d16542b31eb6609ee4cd7f16f7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WerStartSystemErrorHandler @ 0x1403039D0 (WerStartSystemErrorHandler.c)
 *     WerWaitForSystemErrorHandler @ 0x140303B08 (WerWaitForSystemErrorHandler.c)
 *     WerpAllocateAndInitializeSid @ 0x140303BDC (WerpAllocateAndInitializeSid.c)
 *     WerpFreeMem @ 0x140303D00 (WerpFreeMem.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall WerKernelSubmitReportForHungProcess(int a1, int a2, int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  NTSTATUS started; // eax
  __int64 v10; // r9
  const CHAR *v11; // r8
  int v12; // eax
  int v14; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+40h] [rbp-C0h]
  int v20; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 SystemInformation; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v30[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-20h]
  _DWORD v32[352]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v33[352]; // [rsp+6A0h] [rbp+5A0h] BYREF

  Handle = 0LL;
  memset_0(v32, 0, 0x578uLL);
  memset_0(v33, 0, 0x578uLL);
  v24 = 0LL;
  v22 = 0LL;
  *(_QWORD *)&v27 = 0LL;
  DWORD2(v27) = 0;
  DestinationString = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v25 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v26 = 0LL;
  SystemInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
  memset_0(v30, 0, 0x48uLL);
  v31 = 1400LL;
  v6 = WerpAllocateAndInitializeSid(&IdentifierAuthority, v14, v16, v17, v18, v19, v20, (__int64)&v22);
  v7 = v22;
  v8 = v6;
  if ( v6 >= 0 )
  {
    started = WerStartSystemErrorHandler();
    v8 = started;
    if ( started < 0 )
    {
      v10 = 1369LL;
      v11 = "WERLIVEKERNELREPORTING:%u: ERROR WerStartSystemErrorHandler failed with 0x%x\n";
LABEL_4:
      LODWORD(v15) = started;
      DbgPrintEx(0x96u, 0, v11, v10, v15);
      goto LABEL_21;
    }
    started = ZwQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
    v8 = started;
    if ( started < 0 )
    {
      v10 = 1384LL;
      v11 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQuerySysInfo(ErrorPortTimeouts) failed with 0x%x\n";
      goto LABEL_4;
    }
    started = WerWaitForSystemErrorHandler((unsigned int)SystemInformation);
    v8 = started;
    if ( started < 0 )
    {
      v10 = 1391LL;
      v11 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler failed with 0x%x\n";
      goto LABEL_4;
    }
    if ( started == 258 )
    {
      started = -1073740973;
      v11 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler timed out, failing the call with 0x%x\n";
      v8 = -1073740973;
      v10 = 1398LL;
      goto LABEL_4;
    }
    LODWORD(v25) = 48;
    *((_QWORD *)&v25 + 1) = 0LL;
    DWORD2(v26) = 512;
    *(_QWORD *)&v26 = 0LL;
    v27 = 0LL;
    started = ZwAlpcConnectPort(&Handle, &DestinationString, &v25, v30, 0x20000, v7, 0LL, 0LL, 0LL, 0LL, 0LL);
    v8 = started;
    if ( started < 0 )
    {
      v10 = 1421LL;
      v11 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort failed with 0x%x\n";
      goto LABEL_4;
    }
    if ( started == 258 )
    {
      started = -1073740973;
      v11 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort timed out, failing the call with 0x%x\n";
      v8 = -1073740973;
      v10 = 1428LL;
      goto LABEL_4;
    }
    v32[0] = 91751760;
    v32[10] = 0x10000000;
    v32[12] = a1;
    v32[28] = a2;
    v32[66] = -1073741637;
    v32[345] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v24 = 1400LL;
    v32[344] = a3;
    v33[0] = 91751760;
    v12 = ZwAlpcSendWaitReceivePort(Handle, 0x20000LL, v32, 0LL, v33, &v24, 0LL, 0LL);
    v8 = v12;
    if ( v12 < 0 || v12 == 258 )
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n", 1459);
    }
    else if ( v33[11] >= 0 )
    {
      v8 = 0;
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Service returned failure\n", 1465);
      v8 = -1073741823;
    }
  }
LABEL_21:
  if ( v7 )
    WerpFreeMem(v7);
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
