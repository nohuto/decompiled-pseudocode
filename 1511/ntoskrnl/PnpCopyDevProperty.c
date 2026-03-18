/*
 * XREFs of PnpCopyDevProperty @ 0x1404E4784
 * Callers:
 *     PnpCopyDevPropertyArray @ 0x1404E46C0 (PnpCopyDevPropertyArray.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     PnpFreeDevProperty @ 0x140441BE4 (PnpFreeDevProperty.c)
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
    PWSTR = PnpAllocatePWSTR(v7, 0x7FFFFFFFuLL, a2, (PVOID *)(a3 + 24));
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
