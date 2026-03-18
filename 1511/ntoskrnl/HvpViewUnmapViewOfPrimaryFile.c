/*
 * XREFs of HvpViewUnmapViewOfPrimaryFile @ 0x1405EB9E4
 * Callers:
 *     HvViewMapCleanup @ 0x1404C3A78 (HvViewMapCleanup.c)
 *     HvViewMapStart @ 0x1405EB210 (HvViewMapStart.c)
 *     HvpViewMapGrowFile @ 0x1405EB4C0 (HvpViewMapGrowFile.c)
 * Callees:
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 *     CmpReleaseGlobalQuota @ 0x1403D8344 (CmpReleaseGlobalQuota.c)
 *     CcUnpinData @ 0x1403F7D90 (CcUnpinData.c)
 */

__int64 __fastcall HvpViewUnmapViewOfPrimaryFile(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax

  v5 = *(_QWORD *)(a2 + 8 * (((unsigned __int64)a3 >> 24) & 0x7F)) + 32 * (((unsigned __int64)a3 >> 18) & 0x3F);
  MmProtectSystemCacheView(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFEuLL, *(unsigned int *)(v5 + 24), 4u);
  CcUnpinData(*(PVOID *)(v5 + 8));
  v6 = *(_QWORD *)(v5 + 16) - ((*(_QWORD *)(v5 + 16) >> 1) & 0x5555555555555555LL);
  v7 = 0x101010101010101LL
     * (((v6 & 0x3333333333333333LL)
       + ((v6 >> 2) & 0x3333333333333333LL)
       + (((v6 & 0x3333333333333333LL) + ((v6 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL);
  LODWORD(v6) = *(_DWORD *)(v5 + 24);
  *a4 = HIBYTE(v7);
  CmpReleaseGlobalQuota(v6);
  result = 0LL;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 16) = 0LL;
  return result;
}
