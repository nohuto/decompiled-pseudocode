/*
 * XREFs of ViAllocateMapRegistersFromFile @ 0x14073D498
 * Callers:
 *     ViMapDoubleBuffer @ 0x14073EBE8 (ViMapDoubleBuffer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 *     ViTagBuffer @ 0x14073F500 (ViTagBuffer.c)
 */

__int64 __fastcall ViAllocateMapRegistersFromFile(__int64 a1, const void *a2, unsigned int a3, char a4, _DWORD *a5)
{
  __int64 v5; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  volatile signed __int32 *v8; // rbp
  ULONG_PTR *v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned int v11; // esi
  int v12; // r12d
  unsigned int v13; // r13d
  const void *v14; // rax
  ULONG_PTR *v15; // r14
  ULONG_PTR *v16; // r15
  const void *v17; // r13
  ULONG_PTR v18; // rax
  unsigned __int64 *v19; // rbx
  unsigned int v20; // r9d
  __int64 v21; // r11
  char v22; // r10
  unsigned int v23; // eax
  int v24; // r9d
  __int64 v26; // [rsp+38h] [rbp-60h]
  volatile signed __int32 *v27; // [rsp+40h] [rbp-58h]
  unsigned __int8 CurrentIrql; // [rsp+48h] [rbp-50h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v5 = a1;
  v6 = a3;
  v7 = (unsigned __int64)a2;
  v26 = a3;
  v8 = (volatile signed __int32 *)(v5 + 80);
  v27 = (volatile signed __int32 *)(v5 + 80);
  v9 = (ULONG_PTR *)(v5 + 88);
  v10 = (((unsigned __int16)a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v5 + 80));
  }
  else
  {
    if ( !_interlockedbittestandset64(v8, 0LL) )
      goto LABEL_6;
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v5 + 80));
  }
  v6 = v26;
LABEL_6:
  if ( *(_DWORD *)(v5 + 32) )
  {
    v14 = (const void *)(v6 + v7);
    v15 = (ULONG_PTR *)(v5 + 88);
    v16 = &v9[4 * *(unsigned int *)(v5 + 28)];
    if ( v9 < v16 )
    {
      v17 = v14;
      do
      {
        v18 = *v15;
        if ( *v15 && v18 >= (unsigned __int64)a2 && v18 < (unsigned __int64)v17 )
        {
          ViHalPreprocessOptions(
            byte_140323134,
            "Driver is trying to map an address range(%p-%p) that is already mapped    at %p",
            (const void *)0x1D,
            a2,
            v17);
          VfReportIssueWithOptions(230, 29, (int)a2, (int)v17, *v15, byte_140323134);
        }
        v15 += 4;
      }
      while ( v15 < v16 );
      v8 = v27;
      v12 = 0;
      v13 = 0;
    }
    v5 = a1;
    v7 = (unsigned __int64)a2;
  }
  if ( (_DWORD)v10 )
  {
    while ( v12 != *(_DWORD *)(v5 + 28) )
    {
      if ( *v9 )
        v13 = 0;
      else
        ++v13;
      v9 += 4;
      ++v12;
      if ( v13 >= (unsigned int)v10 )
        goto LABEL_22;
    }
    ViHalPreprocessOptions(byte_14032312C, "Map registers needed: %x available: %x", 0x10000000, 2);
    VfReportIssueWithOptions(230, 0, 2, v10, v13, byte_14032312C);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v8, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  }
  else
  {
LABEL_22:
    v19 = &v9[-4 * (unsigned int)v10];
    *a5 = v12 - v10;
    if ( (_DWORD)v10 )
    {
      v20 = a3;
      v21 = 4095LL;
      v22 = a4;
      do
      {
        *v19 = v7;
        v19[3] = v7;
        v23 = v20;
        if ( 4096 - ((unsigned int)v21 & (unsigned int)v7) < v20 )
          v23 = 4096 - (v21 & v7);
        *((_DWORD *)v19 + 2) = v23;
        *((_DWORD *)v19 + 3) = 2 - (v22 != 0);
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
        ViTagBuffer(v19[2] + (v21 & v7) + 4096, *((unsigned int *)v19 + 2), 3LL);
        v20 = v24 - *((_DWORD *)v19 + 2);
        v19 += 4;
        v7 = (v7 + 4096) & 0xFFFFFFFFFFFFF000uLL;
        LODWORD(v10) = v10 - 1;
      }
      while ( (_DWORD)v10 );
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v8, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    v11 = 1;
  }
  __writecr8(CurrentIrql);
  return v11;
}
