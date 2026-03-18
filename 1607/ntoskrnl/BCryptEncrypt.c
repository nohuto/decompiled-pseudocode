/*
 * XREFs of BCryptEncrypt @ 0x14021955C
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB578 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Encrypt_DmpData @ 0x1401CB7C4 (SecureDump_Encrypt_DmpData.c)
 *     SmCrAuthEncrypt @ 0x14022244C (SmCrAuthEncrypt.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1400B6E94 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 */

NTSTATUS __stdcall BCryptEncrypt(
        BCRYPT_KEY_HANDLE hKey,
        PUCHAR pbInput,
        ULONG cbInput,
        void *pPaddingInfo,
        PUCHAR pbIV,
        ULONG cbIV,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v14; // ebx
  unsigned __int64 ExtensionTable; // r10

  v14 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v14 = (*(__int64 (__fastcall **)(BCRYPT_KEY_HANDLE, PUCHAR, _QWORD, void *, PUCHAR, ULONG, PUCHAR, ULONG, ULONG *, ULONG))(ExtensionTable + 88))(
            hKey,
            pbInput,
            cbInput,
            pPaddingInfo,
            pbIV,
            cbIV,
            pbOutput,
            cbOutput,
            pcbResult,
            dwFlags);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v14;
}
