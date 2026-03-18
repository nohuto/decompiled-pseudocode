/*
 * XREFs of PsInitializeQuotaSystem @ 0x1407E1018
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PspSanitizeResourceLimits @ 0x1405B92F4 (PspSanitizeResourceLimits.c)
 *     PspInitializeQuotaExpansionDescriptor @ 0x1407E116C (PspInitializeQuotaExpansionDescriptor.c)
 */

char __fastcall PsInitializeQuotaSystem(int a1, int a2, __int64 a3, int a4)
{
  _QWORD *v4; // rdx
  char *v5; // rcx
  char *PoolWithTag; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r9d

  if ( a1 )
  {
    PspResourceFlags[0] = 5;
    PspDefaultResourceLimits = -1;
    dword_14077EDC4 = -1;
    dword_14077EDC8 = -1;
    dword_14077EDCC = -1;
    dword_1403D1744 = -1073741756;
    byte_1403D1748 = 5;
    dword_1403D174C = -1073741756;
    byte_1403D1750 = 0;
    dword_1403D1754 = -1073741524;
    byte_1403D1758 = 0;
    dword_1403D175C = -1073741663;
    PspInitializeQuotaExpansionDescriptor((unsigned int)&PspQuotaExpansionDescriptors, a2, 0x10000, a4);
    PspInitializeQuotaExpansionDescriptor((unsigned int)&unk_14032C518, v9, 0x80000, v10);
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_1403564C0 = 1;
  v4 = &unk_140356300;
  dword_1403564C4 = 1;
  v5 = PspResourceFlags;
  do
  {
    if ( (*v5 & 2) == 0 )
      *v4 = -1LL;
    v5 += 8;
    v4 += 16;
  }
  while ( (__int64)v5 < (__int64)&MiPermanentIoSpace );
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[4] = (unsigned __int64)&PspSystemQuotaBlock;
  PspSanitizeResourceLimits((unsigned int *)&PspDefaultResourceLimits, 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x300uLL, 0x74517350u);
  PspQuotaBlockTable = (ULONG_PTR)PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = PoolWithTag + 8;
    v8 = 32LL;
    do
    {
      v7[1] = v7;
      *v7 = v7;
      *(v7 - 1) = 0LL;
      v7 += 3;
      --v8;
    }
    while ( v8 );
    goto LABEL_9;
  }
  return (char)PoolWithTag;
}
