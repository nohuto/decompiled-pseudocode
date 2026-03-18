/*
 * XREFs of IopQueryFlowInformation @ 0x1401BDADC
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
 */

LONG __fastcall IopQueryFlowInformation(__int64 a1)
{
  unsigned __int64 ExtensionTable; // r10

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoQosExtensionHost);
  if ( ExtensionTable )
  {
    *(_DWORD *)(a1 + 160) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _BYTE))(ExtensionTable + 40))(
                              *(_QWORD *)(a1 + 56),
                              *(_QWORD *)(a1 + 104),
                              *(unsigned int *)(a1 + 128),
                              *(_QWORD *)(a1 + 112),
                              *(_QWORD *)(a1 + 120),
                              *(_BYTE *)(a1 + 169));
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoQosExtensionHost + 64));
  }
  else
  {
    *(_DWORD *)(a1 + 160) = -1073741822;
  }
  return KeSetEvent((PRKEVENT)(a1 + 136), 0, 0);
}
