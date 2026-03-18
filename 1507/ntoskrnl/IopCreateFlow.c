/*
 * XREFs of IopCreateFlow @ 0x1401F91EC
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140120818 (ExGetExtensionTable.c)
 */

LONG __fastcall IopCreateFlow(__int64 a1)
{
  __int64 (__fastcall **ExtensionTable)(_QWORD); // rax
  struct _EX_RUNDOWN_REF *v3; // rcx
  unsigned __int64 v4; // rtt

  ExtensionTable = (__int64 (__fastcall **)(_QWORD))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoQosExtensionHost);
  if ( ExtensionTable )
  {
    *(_DWORD *)(a1 + 160) = (*ExtensionTable)(*(_QWORD *)(a1 + 56));
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
