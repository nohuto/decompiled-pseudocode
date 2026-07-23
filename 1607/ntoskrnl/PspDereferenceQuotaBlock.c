/*
 * XREFs of PspDereferenceQuotaBlock @ 0x14051E418
 * Callers:
 *     ObpFreeObject @ 0x14041A6C0 (ObpFreeObject.c)
 *     PspAssignProcessQuotaBlock @ 0x1404BAE98 (PspAssignProcessQuotaBlock.c)
 *     PsReturnSharedPoolQuota @ 0x14051E3D0 (PsReturnSharedPoolQuota.c)
 *     PspDereferenceQuota @ 0x14067D038 (PspDereferenceQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x1400C46E0 (PspReturnResourceQuota.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PspRemoveQuotaBlock @ 0x14067D044 (PspRemoveQuotaBlock.c)
 */

void __fastcall PspDereferenceQuotaBlock(volatile signed __int32 *P, __int64 a2, __int64 a3, _BOOL8 a4)
{
  signed int v5; // esi
  char *v6; // r14
  char *v7; // rdi
  __int64 v8; // r8

  if ( _InterlockedExchangeAdd(P + 128, 0xFFFFFFFF) == 1 )
  {
    v5 = 0;
    v6 = PspResourceFlags;
    v7 = (char *)(P + 16);
    do
    {
      if ( (*v6 & 3) == 1 )
      {
        a3 = *(_QWORD *)v7;
        a4 = *((_QWORD *)v7 + 2) != 0LL;
        if ( *(_QWORD *)v7 + *((_QWORD *)v7 + 1) )
        {
          if ( *((_QWORD *)v7 + 2) )
          {
            v8 = _InterlockedExchange64((volatile __int64 *)v7 + 1, 0LL);
            a3 = _InterlockedExchange64((volatile __int64 *)v7, 0LL) + v8;
          }
        }
        else
        {
          a3 = 0LL;
        }
        if ( a3 || a4 )
          PspReturnResourceQuota(v5, (__int64)(v7 - 64), a3, a4);
      }
      ++v5;
      v7 += 128;
      v6 += 8;
    }
    while ( v5 < 4 );
    PspRemoveQuotaBlock(P, a2, a3, a4);
    ExFreePoolWithTag((PVOID)P, 0);
  }
}
