/*
 * XREFs of PspExpandQuota @ 0x1400C4764
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140029750 (PsChargeProcessNonPagedPoolQuota.c)
 *     PspChargeQuota @ 0x14002B710 (PspChargeQuota.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1400C4814 (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1400C486C (PspLockQuotaExpansion.c)
 *     PspReleaseReturnedQuota @ 0x14020EE38 (PspReleaseReturnedQuota.c)
 */

char __fastcall PspExpandQuota(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  char *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  signed __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  char v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v9 = (char *)&PspQuotaExpansionDescriptors + 56 * (int)a1;
  PspLockQuotaExpansion(v9, &v17);
  v11 = *(_QWORD *)(a2 + 64);
  if ( a3 + a4 <= v11 )
  {
    LOBYTE(v10) = v17;
    PspUnlockQuotaExpansion(v9, v10);
    *a5 = v11;
    return 1;
  }
  if ( (*((unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))v9 + 3))(
         a1,
         *(_QWORD *)(a2 + 64),
         0LL,
         &v18)
    || PspReleaseReturnedQuota(a1, v9)
    && (*((unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, __int64 *))v9 + 3))(a1, v11, 0LL, &v18) )
  {
    v13 = v18 - v11;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), v18 - v11);
    LOBYTE(v12) = v17;
    v15 = v13 + v14;
    PspUnlockQuotaExpansion(v9, v12);
    *a5 = v15;
    return 1;
  }
  LOBYTE(v12) = v17;
  PspUnlockQuotaExpansion(v9, v12);
  *a5 = v11;
  return 0;
}
