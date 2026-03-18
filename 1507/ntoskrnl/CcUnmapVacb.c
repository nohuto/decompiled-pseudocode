/*
 * XREFs of CcUnmapVacb @ 0x1404B2D44
 * Callers:
 *     CcGetVacbMiss @ 0x14003F1B0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400851D0 (CcUpdateSharedCacheMapFlag.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     PfCheckDeprioritizeFile @ 0x140443ABC (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x140444244 (PfCheckDeprioritizeImage.c)
 */

__int64 __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v8; // ecx
  _KPROCESS *Process; // r8
  __int64 v10; // rdx
  int v11; // ebp
  __int64 result; // rax
  signed __int64 *v13; // rsi
  ULONG_PTR v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // r8

  v4 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
    v4 = 1;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(a2 + 152) & 0x200200) != 0x200000 )
    goto LABEL_8;
  v8 = *(_DWORD *)(a2 + 512);
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = *(unsigned int *)&Process[1].BasePriority;
  if ( (_DWORD)v10 == v8 )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      goto LABEL_16;
    if ( (_DWORD)v10 == v8 )
      goto LABEL_6;
  }
  if ( (unsigned int)PfCheckDeprioritizeImage(v8, v10, (__int64)Process, a4) )
  {
LABEL_16:
    v13 = (signed __int64 *)(a2 + 96);
    v14 = ObFastReferenceObject((signed __int64 *)(a2 + 96));
    if ( !v14 )
      v14 = CcSlowReferenceSharedCacheMapFileObject(a2, 0LL, v15, v16);
    v17 = *(_QWORD *)(v14 + 24);
    _m_prefetchw(v13);
    v18 = *v13;
    while ( (v14 ^ v18) < 0xF )
    {
      v19 = v18;
      v18 = _InterlockedCompareExchange64(v13, v18 + 1, v18);
      if ( v19 == v18 )
        goto LABEL_21;
    }
    ObDereferenceObjectDeferDelete((PVOID)v14);
LABEL_21:
    v20 = *(_QWORD *)(a2 + 8) & 0xFFFLL;
    v21 = *(__int64 *)(a2 + 8) >> 12;
    v22 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v21 + (unsigned __int64)((*(_QWORD *)(a2 + 8) & 0xFFF) != 0) < v22 )
      v22 = v21 + (v20 != 0);
    if ( v22 <= 1 )
      LODWORD(v22) = 1;
    if ( (unsigned int)PfCheckDeprioritizeFile(*(_DWORD *)(a2 + 512), v17, v22, v20) )
      v4 = 1;
  }
LABEL_6:
  if ( (v4 & 1) == 0 )
    CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
LABEL_8:
  v11 = a3 & 2;
  if ( v11 )
    v4 |= 2u;
  result = MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v4);
  if ( !v11 )
    *(_QWORD *)a1 = 0LL;
  return result;
}
