/*
 * XREFs of IopDeleteFlow @ 0x1401BD9BC
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
 */

LONG __fastcall IopDeleteFlow(__int64 a1)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoQosExtensionHost);
  if ( ExtensionTable )
  {
    *(_DWORD *)(a1 + 160) = (*(__int64 (__fastcall **)(_QWORD))(ExtensionTable + 24))(*(_QWORD *)(a1 + 56));
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoQosExtensionHost + 64));
  }
  else
  {
    *(_DWORD *)(a1 + 160) = -1073741822;
  }
  return KeSetEvent((PRKEVENT)(a1 + 136), 0, 0);
}
