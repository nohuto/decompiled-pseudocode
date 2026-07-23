/*
 * XREFs of LdrpLoadForwardedDll @ 0x18007A1FC
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x180016890 (LdrpResolveProcedureAddress.c)
 *     LdrpGetDelayloadExportDll @ 0x18007A108 (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpPreprocessDllName @ 0x180020EEC (LdrpPreprocessDllName.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18007A3B8 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, PVOID *a6)
{
  int appended; // [rsp+40h] [rbp-2C8h] BYREF
  unsigned int v11[3]; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v12; // [rsp+50h] [rbp-2B8h] BYREF
  int v13; // [rsp+58h] [rbp-2B0h]
  _BYTE v14[56]; // [rsp+60h] [rbp-2A8h] BYREF
  int v15; // [rsp+A0h] [rbp-268h] BYREF
  _WORD *v16; // [rsp+A8h] [rbp-260h]
  _WORD v17[128]; // [rsp+B0h] [rbp-258h] BYREF
  _UNICODE_STRING v18; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD v19[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v18.Buffer = v19;
  *(_DWORD *)&v18.Length = 0x1000000;
  v19[0] = 0;
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&v15, a1);
  if ( appended >= 0 )
  {
    v12 = 72LL;
    v13 = 1;
    memset(v14, 0, sizeof(v14));
    RtlActivateActivationContextUnsafeFast((__int64)&v12, *(_QWORD *)(a4 + 136));
    v11[0] = 0;
    appended = LdrpPreprocessDllName((unsigned __int16 *)&v15, &v18.Length, a4, v11);
    if ( appended >= 0 )
      LdrpLoadDllInternal(&v18, a2, v11[0], a5, a4, a3, a6, &appended);
    RtlDeactivateActivationContextUnsafeFast((__int64)&v12);
  }
  if ( v17 != v16 )
    NtdllpFreeStringRoutine(v16);
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  if ( v19 != v18.Buffer )
    NtdllpFreeStringRoutine(v18.Buffer);
  return (unsigned int)appended;
}
