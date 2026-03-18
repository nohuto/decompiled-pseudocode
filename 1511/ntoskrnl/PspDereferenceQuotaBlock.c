/*
 * XREFs of PspDereferenceQuotaBlock @ 0x14046C324
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1403BD170 (PspAssignProcessQuotaBlock.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     ObpFreeObject @ 0x14042F610 (ObpFreeObject.c)
 *     PsReturnSharedPoolQuota @ 0x14046C2DC (PsReturnSharedPoolQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x140012DFC (PspReturnResourceQuota.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspRemoveQuotaBlock @ 0x14063E5B0 (PspRemoveQuotaBlock.c)
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
