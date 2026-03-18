/*
 * XREFs of PspReturnResourceQuota @ 0x140125584
 * Callers:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObpFreeObject @ 0x14048AE10 (ObpFreeObject.c)
 *     PspDereferenceQuotaBlock @ 0x1404D0058 (PspDereferenceQuotaBlock.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x14012574C (PspLockQuotaExpansion.c)
 */

__int64 __fastcall PspReturnResourceQuota(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  char *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v8 = (char *)&PspQuotaExpansionDescriptors + 56 * (int)a1;
  PspLockQuotaExpansion(v8, &v12);
  if ( a3 )
    (*((void (__fastcall **)(_QWORD, __int64))v8 + 4))(a1, a3);
  if ( a4 )
  {
    v9 = *(_QWORD *)(a2 + 80);
    v11 = *(_QWORD **)(a2 + 88);
    if ( *(_QWORD *)(v9 + 8) != a2 + 80 || *v11 != a2 + 80 )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(v9 + 8) = v11;
  }
  LOBYTE(v9) = v12;
  return PspUnlockQuotaExpansion(v8, v9);
}
