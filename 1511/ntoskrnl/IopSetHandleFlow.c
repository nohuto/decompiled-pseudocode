/*
 * XREFs of IopSetHandleFlow @ 0x1401BDC08
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1400E8ED8 (ExGetExtensionTable.c)
 */

LONG __fastcall IopSetHandleFlow(__int64 a1)
{
  unsigned __int64 ExtensionTable; // rax
  __int64 v3; // r8

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoQosExtensionHost);
  if ( ExtensionTable )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 168);
    *(_DWORD *)(a1 + 160) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(ExtensionTable + 16))(
                              *(_QWORD *)(a1 + 64),
                              *(_QWORD *)(a1 + 56),
                              v3,
                              *(unsigned int *)(a1 + 164));
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoQosExtensionHost + 64));
  }
  else
  {
    *(_DWORD *)(a1 + 160) = -1073741822;
  }
  return KeSetEvent((PRKEVENT)(a1 + 136), 0, 0);
}
