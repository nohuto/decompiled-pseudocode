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

__int64 __fastcall LdrpLoadForwardedDll(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int appended; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v11[3]; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v12; // [rsp+50h] [rbp-2B8h] BYREF
  int v13; // [rsp+58h] [rbp-2B0h]
  _BYTE v14[56]; // [rsp+60h] [rbp-2A8h] BYREF
  int v15; // [rsp+A0h] [rbp-268h] BYREF
  _WORD *v16; // [rsp+A8h] [rbp-260h]
  _WORD v17[128]; // [rsp+B0h] [rbp-258h] BYREF
  int v18; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD *v19; // [rsp+1B8h] [rbp-150h]
  _WORD v20[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v19 = v20;
  v18 = 0x1000000;
  v20[0] = 0;
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&v15, a1);
  if ( appended >= 0 )
  {
    v12 = 72LL;
    v13 = 1;
    memset(v14, 0, sizeof(v14));
    RtlActivateActivationContextUnsafeFast(&v12, *(_QWORD *)(a4 + 136));
    v11[0] = 0;
    appended = LdrpPreprocessDllName(&v15, &v18, a4, v11);
    if ( appended >= 0 )
      LdrpLoadDllInternal((unsigned int)&v18, a2, v11[0], a5, a4, a3, a6, (__int64)&appended);
    RtlDeactivateActivationContextUnsafeFast(&v12);
  }
  if ( v17 != v16 )
    NtdllpFreeStringRoutine();
  v16 = v17;
  v15 = 0x1000000;
  v17[0] = 0;
  if ( v20 != v19 )
    NtdllpFreeStringRoutine();
  return (unsigned int)appended;
}
