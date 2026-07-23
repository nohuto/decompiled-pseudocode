/*
 * XREFs of LdrpLoadForwardedDll @ 0x180010DF8
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800104CC (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveDelayloadAddress @ 0x1800323F0 (LdrpResolveDelayloadAddress.c)
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 * Callees:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180010FF8 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpPreprocessDllName @ 0x1800121A0 (LdrpPreprocessDllName.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int appended; // [rsp+40h] [rbp-2C8h] BYREF
  int v10; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v11; // [rsp+50h] [rbp-2B8h] BYREF
  int v12; // [rsp+58h] [rbp-2B0h]
  _BYTE v13[56]; // [rsp+60h] [rbp-2A8h] BYREF
  int v14; // [rsp+A0h] [rbp-268h] BYREF
  _WORD *v15; // [rsp+A8h] [rbp-260h]
  _WORD v16[128]; // [rsp+B0h] [rbp-258h] BYREF
  _UNICODE_STRING v17; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD v18[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v17.Buffer = v18;
  *(_DWORD *)&v17.Length = 0x1000000;
  v18[0] = 0;
  v15 = v16;
  v14 = 0x1000000;
  v16[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&v14, a1);
  if ( appended >= 0 )
  {
    v11 = 72LL;
    v12 = 1;
    memset(v13, 0, sizeof(v13));
    RtlActivateActivationContextUnsafeFast(&v11, *(_QWORD *)(a4 + 136));
    v10 = 0;
    appended = LdrpPreprocessDllName(&v14, &v17, a4, &v10);
    if ( appended >= 0 )
      LdrpLoadDllInternal(&v17, a4, a3, a6, (__int64)&appended);
    RtlDeactivateActivationContextUnsafeFast(&v11);
  }
  if ( v16 != v15 )
    NtdllpFreeStringRoutine();
  v15 = v16;
  v14 = 0x1000000;
  v16[0] = 0;
  if ( v18 != v17.Buffer )
    NtdllpFreeStringRoutine();
  return (unsigned int)appended;
}
