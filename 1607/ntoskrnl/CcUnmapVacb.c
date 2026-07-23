/*
 * XREFs of CcUnmapVacb @ 0x14042A530
 * Callers:
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 * Callees:
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14006AD1C (CcUpdateSharedCacheMapFlag.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 *     PfCheckDeprioritizeFile @ 0x1403E6D5C (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x1403E7CC8 (PfCheckDeprioritizeImage.c)
 */

void __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebx
  int v7; // eax
  int v8; // esi
  unsigned int v9; // ecx
  _KPROCESS *Process; // r8
  unsigned int v11; // edx
  ULONG_PTR v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  unsigned __int64 v15; // r8

  v3 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
    v3 = 1;
    goto LABEL_3;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    v9 = *(_DWORD *)(a2 + 512);
    Process = KeGetCurrentThread()->ApcState.Process;
    v11 = Process[1].ThreadSeed[1];
    if ( v11 == v9 )
    {
      if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
        goto LABEL_18;
      if ( v11 == v9 )
      {
LABEL_13:
        if ( (v3 & 1) == 0 )
          CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
        goto LABEL_3;
      }
    }
    if ( !(unsigned int)PfCheckDeprioritizeImage(v9) )
      goto LABEL_13;
LABEL_18:
    v12 = CcReferenceSharedCacheMapFileObject(a2);
    v13 = *(_QWORD *)(v12 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v12);
    v14 = *(__int64 *)(a2 + 8) >> 12;
    v15 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v14 + (unsigned __int64)((*(_QWORD *)(a2 + 8) & 0xFFF) != 0) < v15 )
      v15 = v14 + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v15 <= 1 )
      LODWORD(v15) = 1;
    if ( (unsigned int)PfCheckDeprioritizeFile(*(_DWORD *)(a2 + 512), v13, v15) )
      v3 = 1;
    goto LABEL_13;
  }
LABEL_3:
  v8 = a3 & 2;
  if ( v8 )
    v3 |= 2u;
  MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v3);
  if ( !v8 )
    *(_QWORD *)a1 = 0LL;
}
