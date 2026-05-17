/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x1800D17A0
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A9F20 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     EtwEventRegister @ 0x18002A3C0 (EtwEventRegister.c)
 *     RtlDecodePointer @ 0x180051BE0 (RtlDecodePointer.c)
 *     EtwNotificationUnregister @ 0x180059700 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x18005AF20 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall LdrpLogFatalUserCallbackException(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(_QWORD *); // rax
  __int64 result; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v8; // ecx
  wchar_t *Buffer; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // eax
  __int16 v14; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+40h] [rbp-C0h]
  int v18; // [rsp+44h] [rbp-BCh]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  __int16 *v22; // [rsp+E0h] [rbp-20h] BYREF
  int v23; // [rsp+E8h] [rbp-18h]
  int v24; // [rsp+ECh] [rbp-14h]
  wchar_t *v25; // [rsp+F0h] [rbp-10h]
  int v26; // [rsp+F8h] [rbp-8h]
  int v27; // [rsp+FCh] [rbp-4h]

  v16[0] = a1;
  v16[1] = a2;
  v4 = (__int64 (__fastcall *)(_QWORD *))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v4 )
    result = v4(v16);
  else
    result = RtlUnhandledExceptionFilter2(v16, &unk_18010C822);
  if ( (_DWORD)result != -1 )
  {
    if ( !(unsigned int)EtwEventRegister((int)&UserLoaderGuid, 0LL, 0LL, (__int64)&v15) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      v24 = 0;
      v14 = Length >> 1;
      v22 = &v14;
      v23 = 2;
      v8 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v27 = 0;
      v26 = v8;
      v25 = Buffer;
      EtwEventWrite(v15, (int)&FatalUserCallbackException, 2, (__int64)&v22);
      EtwNotificationUnregister(v15, 0LL, v10, v11);
    }
    v12 = *(_QWORD *)(a2 + 248);
    v21 = 0;
    v20 = v12;
    LODWORD(v12) = *(_DWORD *)(a1 + 4) | 1;
    v17 = -1073740771;
    v18 = v12;
    v19 = a1;
    v13 = ZwRaiseException();
    RtlRaiseStatus(v13);
  }
  return result;
}
