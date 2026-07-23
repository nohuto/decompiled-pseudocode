/*
 * XREFs of PnpCopyDevProperty @ 0x140487EE8
 * Callers:
 *     PnpCopyDevPropertyArray @ 0x140487E24 (PnpCopyDevPropertyArray.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     PnpFreeDevProperty @ 0x1404E5718 (PnpFreeDevProperty.c)
 */

__int64 __fastcall PnpCopyDevProperty(__int64 a1, ULONG a2, __int64 a3)
{
  int PWSTR; // edi
  const wchar_t *v7; // rcx
  unsigned int v8; // eax
  PVOID PoolWithTag; // rax

  PWSTR = 0;
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  v7 = *(const wchar_t **)(a1 + 24);
  if ( v7 )
  {
    PWSTR = PnpAllocatePWSTR(v7);
    if ( PWSTR < 0 )
      goto LABEL_9;
  }
  v8 = *(_DWORD *)(a3 + 36);
  if ( v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, a2);
    *(_QWORD *)(a3 + 40) = PoolWithTag;
    if ( !PoolWithTag )
    {
      PWSTR = -1073741670;
LABEL_9:
      PnpFreeDevProperty(a3, a2);
      memset((void *)a3, 0, 0x30uLL);
      return (unsigned int)PWSTR;
    }
  }
  memmove(*(void **)(a3 + 40), *(const void **)(a1 + 40), *(unsigned int *)(a3 + 36));
  return (unsigned int)PWSTR;
}
