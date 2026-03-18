/*
 * XREFs of PcwCreateInstance @ 0x1405425C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400E8ECC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
 *     ExpPcwDisabledStatus @ 0x1406740DC (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwCreateInstance(
        PPCW_INSTANCE *Instance,
        PPCW_REGISTRATION Registration,
        PCUNICODE_STRING Name,
        ULONG Count,
        PPCW_DATA Data)
{
  unsigned __int64 ExtensionTable; // r10
  NTSTATUS v10; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    v10 = (*(__int64 (__fastcall **)(PPCW_INSTANCE *, PPCW_REGISTRATION, PCUNICODE_STRING, _QWORD, PPCW_DATA))(ExtensionTable + 16))(
            Instance,
            Registration,
            Name,
            Count,
            Data);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Instance = 0LL;
    return ExpPcwDisabledStatus();
  }
  return v10;
}
