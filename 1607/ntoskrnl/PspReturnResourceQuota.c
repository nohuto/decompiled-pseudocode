/*
 * XREFs of PspReturnResourceQuota @ 0x1400C46E0
 * Callers:
 *     PspReturnQuota @ 0x140010620 (PspReturnQuota.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObpFreeObject @ 0x14041A6C0 (ObpFreeObject.c)
 *     PspDereferenceQuotaBlock @ 0x14051E418 (PspDereferenceQuotaBlock.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x1400C486C (PspLockQuotaExpansion.c)
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
