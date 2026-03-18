/*
 * XREFs of CcUnmapVacb @ 0x14047B6A0
 * Callers:
 *     CcGetVacbMiss @ 0x1400AEA80 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14000D4E4 (CcReferenceSharedCacheMapFileObject.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400E7E70 (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeFile @ 0x1403E7394 (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x1404D66AC (PfCheckDeprioritizeImage.c)
 */

__int64 __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebx
  int v7; // eax
  int v8; // ecx
  _KPROCESS *Process; // r8
  unsigned int v10; // edx
  int v11; // esi
  __int64 result; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // r8

  v3 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
    v3 = 1;
    goto LABEL_8;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    v8 = *(_DWORD *)(a2 + 512);
    Process = KeGetCurrentThread()->ApcState.Process;
    v10 = Process[1].ThreadSeed[1];
    if ( v10 == v8 )
    {
      if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
        goto LABEL_18;
      if ( v10 == v8 )
      {
LABEL_6:
        if ( (v3 & 1) == 0 )
          CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
        goto LABEL_8;
      }
    }
    if ( !(unsigned int)PfCheckDeprioritizeImage() )
      goto LABEL_6;
LABEL_18:
    v13 = CcReferenceSharedCacheMapFileObject(a2);
    v14 = *(_QWORD *)(v13 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v13);
    v15 = *(__int64 *)(a2 + 8) >> 12;
    v16 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v15 + (unsigned __int64)((*(_QWORD *)(a2 + 8) & 0xFFF) != 0) < v16 )
      v16 = v15 + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v16 <= 1 )
      LODWORD(v16) = 1;
    if ( (unsigned int)PfCheckDeprioritizeFile(*(_DWORD *)(a2 + 512), v14, v16) )
      v3 = 1;
    goto LABEL_6;
  }
LABEL_8:
  v11 = a3 & 2;
  if ( v11 )
    v3 |= 2u;
  result = MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v3);
  if ( !v11 )
    *(_QWORD *)a1 = 0LL;
  return result;
}
