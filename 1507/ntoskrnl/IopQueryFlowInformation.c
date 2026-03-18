/*
 * XREFs of IopQueryFlowInformation @ 0x1401F93A4
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 */

LONG __fastcall IopQueryFlowInformation(__int64 a1)
{
  unsigned __int64 ExtensionTable; // r10
  struct _EX_RUNDOWN_REF *v3; // rcx
  unsigned __int64 v4; // rtt

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
    v3 = (struct _EX_RUNDOWN_REF *)(IopIoQosExtensionHost + 64);
    _m_prefetchw((const void *)(IopIoQosExtensionHost + 64));
    v4 = v3->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v4 - 2, v4) )
      ExfReleaseRundownProtection(v3);
  }
  else
  {
    *(_DWORD *)(a1 + 160) = -1073741822;
  }
  return KeSetEvent((PRKEVENT)(a1 + 136), 0, 0);
}
