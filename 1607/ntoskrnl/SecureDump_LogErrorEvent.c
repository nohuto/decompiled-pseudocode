/*
 * XREFs of SecureDump_LogErrorEvent @ 0x1401CBBDC
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB578 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_PrepareForInit @ 0x1401CBC5C (SecureDump_PrepareForInit.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBF4C (SecureDump_SymmetricEncryptionSetup.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SecureDump_LogErrorEvent(int a1)
{
  REGHANDLE v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v1 = IoMgrTraceHandle;
  result = EtwEventEnabled(IoMgrTraceHandle, &IoMgr_DumpEncryptionFailure);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v4;
    UserData.Size = 4;
    return EtwWrite(v1, &IoMgr_DumpEncryptionFailure, 0LL, 1u, &UserData);
  }
  return result;
}
