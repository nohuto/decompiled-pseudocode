/*
 * XREFs of IopSetHandleFlow @ 0x1401F94F8
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 */

LONG __fastcall IopSetHandleFlow(__int64 a1)
{
  unsigned __int64 ExtensionTable; // rax
  __int64 v3; // r8
  struct _EX_RUNDOWN_REF *v4; // rcx
  unsigned __int64 v5; // rtt

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoQosExtensionHost);
  if ( ExtensionTable )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 168);
    *(_DWORD *)(a1 + 160) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(ExtensionTable + 16))(
                              *(_QWORD *)(a1 + 64),
                              *(_QWORD *)(a1 + 56),
                              v3,
                              *(unsigned int *)(a1 + 164));
    v4 = (struct _EX_RUNDOWN_REF *)(IopIoQosExtensionHost + 64);
    _m_prefetchw((const void *)(IopIoQosExtensionHost + 64));
    v5 = v4->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v5 - 2, v5) )
      ExfReleaseRundownProtection(v4);
  }
  else
  {
    *(_DWORD *)(a1 + 160) = -1073741822;
  }
  return KeSetEvent((PRKEVENT)(a1 + 136), 0, 0);
}
