/*
 * XREFs of SecureDump_LogErrorEvent @ 0x1401CBAC0
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB45C (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_PrepareForInit @ 0x1401CBB40 (SecureDump_PrepareForInit.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBE30 (SecureDump_SymmetricEncryptionSetup.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
