/*
 * XREFs of BCryptEncrypt @ 0x1402001A0
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x14010C40C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
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
    v14 = (*(__int64 (__fastcall **)(BCRYPT_KEY_HANDLE, PUCHAR, _QWORD, void *, _QWORD, _DWORD, PUCHAR, ULONG, ULONG *, _DWORD))(ExtensionTable + 88))(
            hKey,
            pbInput,
            cbInput,
            pPaddingInfo,
            0LL,
            0,
            pbOutput,
            cbOutput,
            pcbResult,
            0);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v14;
}
