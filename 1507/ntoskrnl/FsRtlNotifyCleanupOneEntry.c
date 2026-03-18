/*
 * XREFs of FsRtlNotifyCleanupOneEntry @ 0x1404A68A4
 * Callers:
 *     FsRtlNotifyCleanup @ 0x1404A67BC (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCleanupAll @ 0x14066E9DC (FsRtlNotifyCleanupAll.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1404A6720 (FsRtlNotifyCompleteIrpList.c)
 */

void __fastcall FsRtlNotifyCleanupOneEntry(char *P, _QWORD *a2)
{
  char **v4; // rdx
  PVOID *v5; // rcx

  *((_WORD *)P + 36) |= 4u;
  if ( *((char **)P + 6) != P + 48 )
    FsRtlNotifyCompleteIrpList((__int64)P, 267);
  v4 = (char **)*((_QWORD *)P + 4);
  v5 = (PVOID *)*((_QWORD *)P + 5);
  if ( v4[1] != P + 32 || *v5 != P + 32 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (char *)v5;
  _InterlockedDecrement((volatile signed __int32 *)P + 28);
  if ( !*((_DWORD *)P + 28) )
  {
    if ( *((_QWORD *)P + 10) )
    {
      PsReturnProcessPagedPoolQuota(*((_QWORD *)P + 15), *((unsigned int *)P + 25));
      ExFreePoolWithTag(*((PVOID *)P + 10), 0);
    }
    if ( (P[72] & 0x40) != 0 || *((_QWORD *)P + 17) )
      *a2 = *((_QWORD *)P + 3);
    else
      *a2 = 0LL;
    ExFreePoolWithTag(P, 0);
  }
}
