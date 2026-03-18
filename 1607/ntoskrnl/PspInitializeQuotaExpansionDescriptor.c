/*
 * XREFs of PspInitializeQuotaExpansionDescriptor @ 0x1407B6844
 * Callers:
 *     PsInitializeQuotaSystem @ 0x1407B6714 (PsInitializeQuotaSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspInitializeQuotaExpansionDescriptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = MmRaisePoolQuota;
  *(_QWORD *)(a1 + 32) = MmReturnPoolQuota;
  result = a1 + 40;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_DWORD *)a1 = a6 >= 2u;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
