/*
 * XREFs of ViAllocateMapRegistersFromFile @ 0x140708A08
 * Callers:
 *     ViMapDoubleBuffer @ 0x140709EAC (ViMapDoubleBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 *     ViTagBuffer @ 0x14070A724 (ViTagBuffer.c)
 */

__int64 __fastcall ViAllocateMapRegistersFromFile(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        _DWORD *a5)
{
  __int64 v5; // r14
  ULONG_PTR *v6; // rbx
  __int64 v7; // r15
  unsigned int v8; // esi
  unsigned __int64 v9; // r13
  int v10; // ebp
  unsigned int v11; // r12d
  unsigned __int64 v12; // rdi
  const void *v13; // rax
  ULONG_PTR *v14; // r14
  ULONG_PTR *v15; // r15
  const void *v16; // r12
  ULONG_PTR v17; // rax
  unsigned int v18; // r11d
  unsigned __int64 *v19; // rbx
  unsigned int v20; // r9d
  char v21; // r10
  unsigned int v22; // eax
  int v23; // r9d
  KSPIN_LOCK *SpinLock; // [rsp+40h] [rbp-58h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+10h]

  v5 = a3;
  v6 = (ULONG_PTR *)(a1 + 88);
  v7 = a1;
  v8 = 0;
  v9 = a2;
  v10 = 0;
  v11 = 0;
  v12 = ((a2 & 0xFFF) + a3 + 4095LL) >> 12;
  SpinLock = (KSPIN_LOCK *)(a1 + 80);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( *(_DWORD *)(v7 + 32) )
  {
    v13 = (const void *)(v5 + v9);
    v14 = v6;
    v15 = &v6[4 * *(unsigned int *)(v7 + 28)];
    if ( v6 < v15 )
    {
      v16 = v13;
      do
      {
        v17 = *v14;
        if ( *v14 && v17 >= v9 && v17 < (unsigned __int64)v16 )
        {
          ViHalPreprocessOptions(
            byte_1402F996C,
            "Driver is trying to map an address range(%p-%p) that is already mapped    at %p",
            (const void *)0x1D,
            (const void *)v9,
            v16);
          VfReportIssueWithOptions(230, 29, v9, (int)v16, *v14, byte_1402F996C);
        }
        v14 += 4;
      }
      while ( v14 < v15 );
      v10 = 0;
      v11 = 0;
    }
    v7 = a1;
  }
  v18 = 1;
  if ( (_DWORD)v12 )
  {
    while ( v10 != *(_DWORD *)(v7 + 28) )
    {
      if ( *v6 )
        v11 = 0;
      else
        ++v11;
      v6 += 4;
      ++v10;
      if ( v11 >= (unsigned int)v12 )
        goto LABEL_17;
    }
    ViHalPreprocessOptions(byte_1402F9970, "Map registers needed: %x available: %x", 0x10000000, 2);
    VfReportIssueWithOptions(230, 0, 2, v12, v11, byte_1402F9970);
  }
  else
  {
LABEL_17:
    v19 = &v6[-4 * (unsigned int)v12];
    *a5 = v10 - v12;
    if ( (_DWORD)v12 )
    {
      v20 = a3;
      v21 = a4;
      do
      {
        *v19 = v9;
        v19[3] = v9;
        v22 = v20;
        if ( 4096 - (v9 & 0xFFF) < v20 )
          v22 = 4096 - (v9 & 0xFFF);
        *((_DWORD *)v19 + 2) = v22;
        *((_DWORD *)v19 + 3) = 2 - (v21 != 0);
        _InterlockedAdd((volatile signed __int32 *)(v7 + 32), v18);
        ViTagBuffer(v19[2] + 4096 + (v9 & 0xFFF), *((unsigned int *)v19 + 2), 3LL);
        v20 = v23 - *((_DWORD *)v19 + 2);
        v19 += 4;
        v9 = (v9 + 4096) & 0xFFFFFFFFFFFFF000uLL;
        LODWORD(v12) = v12 - 1;
      }
      while ( (_DWORD)v12 );
    }
    v8 = v18;
  }
  KeReleaseSpinLock(SpinLock, NewIrql);
  return v8;
}
