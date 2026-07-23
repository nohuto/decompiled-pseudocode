/*
 * XREFs of MmCopyVirtualMemory @ 0x1404EEDF0
 * Callers:
 *     PsQueryProcessCommandLine @ 0x1400B0074 (PsQueryProcessCommandLine.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     MiReadWriteVirtualMemory @ 0x1404EEBF0 (MiReadWriteVirtualMemory.c)
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 *     AlpcpCopyRequestData @ 0x1406552E4 (AlpcpCopyRequestData.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiDbgReadWriteEnclave @ 0x14065F25C (MiDbgReadWriteEnclave.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        _KPROCESS *BugCheckParameter1,
        void *a2,
        _KPROCESS *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        KPROCESSOR_MODE a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v8; // r14
  _KPROCESS *v9; // r9
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdx
  int v12; // ebx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r12
  struct _KTHREAD *v15; // r15
  _KPROCESS *Process; // rdi
  unsigned __int64 v17; // r14
  int v18; // ebx
  unsigned __int64 v19; // r12
  struct _KTHREAD *v20; // r15
  _KPROCESS *v21; // rsi
  __int64 v22; // r9
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  SIZE_T v26; // r15
  unsigned __int8 v27; // di
  int v28; // eax
  PVOID v29; // r14
  const void *v30; // rdx
  char *v31; // r14
  int v32; // eax
  unsigned int v33; // r14d
  bool v35; // cc
  __int64 v36; // rcx
  unsigned __int64 j; // rdx
  char v38; // r8
  char v39; // r10
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  _QWORD **v43; // rax
  _QWORD *i; // rax
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rcx
  _QWORD **v47; // rax
  _QWORD *k; // rax
  __int64 v49; // rcx
  unsigned __int64 n; // rdx
  char v51; // r8
  char v52; // r10
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  _QWORD **v56; // rax
  _QWORD *m; // rax
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rcx
  _QWORD **v60; // rax
  _QWORD *ii; // rax
  int v64; // [rsp+50h] [rbp-458h]
  int v65; // [rsp+54h] [rbp-454h]
  size_t Size; // [rsp+58h] [rbp-450h]
  _BYTE *P; // [rsp+60h] [rbp-448h]
  char *v69; // [rsp+80h] [rbp-428h]
  unsigned __int64 v70; // [rsp+98h] [rbp-410h]
  unsigned __int64 Src; // [rsp+A8h] [rbp-400h]
  unsigned __int64 v73; // [rsp+B8h] [rbp-3F0h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-3C8h]
  _QWORD v75[7]; // [rsp+E8h] [rbp-3C0h] BYREF
  _BYTE v76[32]; // [rsp+120h] [rbp-388h] BYREF
  __int64 v77; // [rsp+140h] [rbp-368h]
  _BYTE v78[32]; // [rsp+150h] [rbp-358h] BYREF
  __int64 v79; // [rsp+170h] [rbp-338h]
  _BYTE v80[48]; // [rsp+180h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+1B0h] [rbp-2F8h] BYREF
  _BYTE v82[512]; // [rsp+260h] [rbp-248h] BYREF

  v8 = (unsigned __int64)a2;
  v9 = BugCheckParameter1;
  v75[1] = BugCheckParameter1;
  v75[2] = a3;
  v75[3] = a4;
  if ( !a5 )
    return 0LL;
  *a7 = 0LL;
  v73 = 0LL;
  v10 = BugCheckParameter1[1].Affinity.Bitmap[12] == 0;
  Src = (unsigned __int64)a2;
  v69 = (char *)a4;
  v11 = a5;
  Size = a5;
  CurrentThread = KeGetCurrentThread();
  v64 = 0;
  P = 0LL;
  v75[4] = 0LL;
  while ( 1 )
  {
    v12 = ((unsigned __int8)v10 ^ (unsigned __int8)(2 * v10)) & 2 ^ v10;
    v13 = a5 - v11;
    v14 = a5 - v11 + v8;
    v15 = KeGetCurrentThread();
    Process = v15->ApcState.Process;
    if ( Process == v9 )
    {
      v77 = 0LL;
    }
    else
    {
      KiStackAttachProcess(v9, 0, (__int64)v76);
      v11 = Size;
      v9 = BugCheckParameter1;
    }
    v17 = 0LL;
    if ( !*(_DWORD *)(qword_140327FD0 + 276840556) )
    {
      v70 = v11;
      goto LABEL_7;
    }
    LOCK_ADDRESS_SPACE((__int64)v15, (__int64)v9);
    v36 = (__int64)BugCheckParameter1;
    j = BugCheckParameter1[2].Affinity.Bitmap[3];
    v38 = 0;
    v39 = 0;
    if ( !j )
      goto LABEL_98;
    v40 = v14 >> 12;
    while ( v40 > (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) )
    {
      v41 = *(_QWORD *)(j + 8);
      if ( !v41 )
      {
        v38 = 1;
        goto LABEL_97;
      }
LABEL_95:
      j = v41;
    }
    if ( v40 < (*(unsigned int *)(j + 24) | ((unsigned __int64)*(unsigned __int8 *)(j + 32) << 32)) )
    {
      v41 = *(_QWORD *)j;
      if ( !*(_QWORD *)j )
      {
        v38 = 0;
        goto LABEL_97;
      }
      goto LABEL_95;
    }
    v39 = 1;
LABEL_97:
    v36 = (__int64)BugCheckParameter1;
LABEL_98:
    if ( v39 )
    {
      if ( (*(_BYTE *)(j + 48) & 7) != 3 )
        goto LABEL_112;
      if ( (*(_DWORD *)(j + 48) & 0x40000) == 0 )
        goto LABEL_112;
      v17 = j;
      if ( (*(_DWORD *)(j + 88) & 2) != 0 )
        goto LABEL_112;
      v17 = 0LL;
      v36 = (__int64)BugCheckParameter1;
      goto LABEL_114;
    }
    if ( v38 )
    {
      v42 = j;
      v43 = *(_QWORD ***)(j + 8);
      if ( v43 )
      {
        j = *(_QWORD *)(j + 8);
        for ( i = *v43; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v42 )
            break;
          v42 = j;
        }
      }
LABEL_112:
      v36 = (__int64)BugCheckParameter1;
    }
    if ( v17 )
    {
      v70 = (((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) << 12) | 0xFFF)
          - v14
          + 1;
    }
    else
    {
LABEL_114:
      if ( j )
      {
        do
        {
          v45 = j;
          if ( (*(_BYTE *)(j + 48) & 7) == 3 && (*(_DWORD *)(j + 48) & 0x40000) != 0 )
          {
            v17 = j;
            if ( (*(_DWORD *)(j + 88) & 2) != 0 )
              break;
            v17 = 0LL;
          }
          if ( (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) >= (v14 + Size - 1) >> 12 )
          {
            v36 = (__int64)BugCheckParameter1;
            goto LABEL_131;
          }
          v46 = j;
          v47 = *(_QWORD ***)(j + 8);
          if ( v47 )
          {
            j = *(_QWORD *)(j + 8);
            for ( k = *v47; k; k = (_QWORD *)*k )
              j = (unsigned __int64)k;
          }
          else
          {
            for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v46 )
                break;
              v46 = j;
            }
          }
        }
        while ( j );
        v36 = (__int64)BugCheckParameter1;
        if ( !j )
          goto LABEL_131;
        v70 = ((*(unsigned int *)(v45 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v45 + 32) << 32)) << 12) - v14;
        v36 = (__int64)BugCheckParameter1;
      }
      else
      {
LABEL_131:
        v70 = Size;
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v15, v36);
    v9 = BugCheckParameter1;
LABEL_7:
    if ( Process != v9 )
      KiUnstackDetachProcess((struct _KTHREAD *)v76, 0);
    v18 = ((unsigned __int8)v12 ^ (unsigned __int8)(4 * (v17 != 0))) & 4 ^ v12;
    v19 = v13 + a4;
    v20 = KeGetCurrentThread();
    v21 = v20->ApcState.Process;
    v22 = (__int64)a3;
    if ( v21 == a3 )
    {
      v79 = 0LL;
    }
    else
    {
      KiStackAttachProcess(a3, 0, (__int64)v78);
      v22 = (__int64)a3;
    }
    v23 = 0LL;
    if ( !*(_DWORD *)(qword_140327FD0 + 276840556) )
    {
      v11 = Size;
      v24 = Size;
      goto LABEL_13;
    }
    LOCK_ADDRESS_SPACE((__int64)v20, v22);
    v49 = (__int64)a3;
    n = a3[2].Affinity.Bitmap[3];
    v51 = 0;
    v52 = 0;
    if ( !n )
      goto LABEL_145;
    v53 = v19 >> 12;
    while ( 2 )
    {
      if ( v53 > (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) )
      {
        v54 = *(_QWORD *)(n + 8);
        if ( !v54 )
        {
          v51 = 1;
          goto LABEL_144;
        }
        goto LABEL_142;
      }
      if ( v53 < (*(unsigned int *)(n + 24) | ((unsigned __int64)*(unsigned __int8 *)(n + 32) << 32)) )
      {
        v54 = *(_QWORD *)n;
        if ( !*(_QWORD *)n )
        {
          v51 = 0;
          goto LABEL_144;
        }
LABEL_142:
        n = v54;
        continue;
      }
      break;
    }
    v52 = 1;
LABEL_144:
    v49 = (__int64)a3;
LABEL_145:
    if ( v52 )
    {
      if ( (*(_BYTE *)(n + 48) & 7) != 3 )
        goto LABEL_159;
      if ( (*(_DWORD *)(n + 48) & 0x40000) == 0 )
        goto LABEL_159;
      v23 = n;
      if ( (*(_DWORD *)(n + 88) & 2) != 0 )
        goto LABEL_159;
      v23 = 0LL;
      v49 = (__int64)a3;
      goto LABEL_161;
    }
    if ( v51 )
    {
      v55 = n;
      v56 = *(_QWORD ***)(n + 8);
      if ( v56 )
      {
        n = *(_QWORD *)(n + 8);
        for ( m = *v56; m; m = (_QWORD *)*m )
          n = (unsigned __int64)m;
      }
      else
      {
        for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)n == v55 )
            break;
          v55 = n;
        }
      }
LABEL_159:
      v49 = (__int64)a3;
    }
    if ( v23 )
    {
      v24 = (((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12) | 0xFFF)
          - v19
          + 1;
    }
    else
    {
LABEL_161:
      if ( n )
      {
        do
        {
          v58 = n;
          if ( (*(_BYTE *)(n + 48) & 7) == 3 && (*(_DWORD *)(n + 48) & 0x40000) != 0 )
          {
            v23 = n;
            if ( (*(_DWORD *)(n + 88) & 2) != 0 )
              break;
            v23 = 0LL;
          }
          if ( (*(unsigned int *)(n + 28) | ((unsigned __int64)*(unsigned __int8 *)(n + 33) << 32)) >= (v19 + Size - 1) >> 12 )
          {
            v49 = (__int64)a3;
            goto LABEL_178;
          }
          v59 = n;
          v60 = *(_QWORD ***)(n + 8);
          if ( v60 )
          {
            n = *(_QWORD *)(n + 8);
            for ( ii = *v60; ii; ii = (_QWORD *)*ii )
              n = (unsigned __int64)ii;
          }
          else
          {
            for ( n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL; n; n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)n == v59 )
                break;
              v59 = n;
            }
          }
        }
        while ( n );
        v49 = (__int64)a3;
        if ( !n )
          goto LABEL_178;
        v24 = ((*(unsigned int *)(v58 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v58 + 32) << 32)) << 12) - v19;
      }
      else
      {
LABEL_178:
        v24 = Size;
      }
    }
    UNLOCK_ADDRESS_SPACE((__int64)v20, v49);
    v11 = Size;
    v22 = (__int64)a3;
LABEL_13:
    if ( v21 != (_KPROCESS *)v22 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v78, 0);
      v11 = Size;
    }
    v10 = ((unsigned __int8)v18 ^ (unsigned __int8)(8 * (v23 != 0))) & 8 ^ v18;
    if ( (v10 & 4) != 0 )
      v10 &= ~2u;
    v25 = v11;
    if ( v70 < v11 )
      v25 = v70;
    if ( v24 < v25 )
      v25 = v24;
    v65 = v64;
LABEL_22:
    v8 = (unsigned __int64)a2;
LABEL_23:
    if ( v25 < 0x200 || (v10 & 2) == 0 )
    {
      v10 &= ~2u;
      v26 = v73;
      if ( v73 )
      {
        if ( v25 > v73 )
          goto LABEL_28;
      }
      else
      {
        if ( v25 > 0x200 )
        {
          v26 = 0x10000LL;
          if ( v11 <= 0x10000 )
            v26 = v11;
          do
          {
            P = ExAllocatePoolWithTag(PagedPool, v26, 0x77526D4Du);
            if ( P )
            {
              v73 = v26;
              goto LABEL_80;
            }
            v26 >>= 1;
          }
          while ( v26 > 0x200 );
          P = v82;
          v26 = 512LL;
LABEL_80:
          v11 = Size;
          v35 = v25 <= v26;
          goto LABEL_81;
        }
        P = v82;
      }
LABEL_27:
      v26 = v25;
      goto LABEL_28;
    }
    v26 = 57344LL;
    v35 = a5 <= 0xE000;
LABEL_81:
    if ( v35 )
      goto LABEL_27;
LABEL_28:
    if ( v25 )
      break;
    v9 = BugCheckParameter1;
    if ( !v11 )
    {
      if ( v73 )
        ExFreePoolWithTag(P, 0);
      *a7 = a5;
      return 0LL;
    }
  }
  if ( v25 < v26 )
    v26 = v25;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v80);
  if ( a6 && Src == v8 && (v8 + a5 > 0x7FFFFFFF0000LL || v8 + a5 < v8) )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((v10 >> 1) & 1) != 0 )
  {
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = 8 * (((v26 + (Src & 0xFFF) + 4095) >> 12) + 6);
    MemoryDescriptorList.MdlFlags = 0;
    MemoryDescriptorList.StartVa = (PVOID)(Src & 0xFFFFFFFFFFFFF000uLL);
    MemoryDescriptorList.ByteOffset = Src & 0xFFF;
    MemoryDescriptorList.ByteCount = v26;
  }
  v27 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  if ( ((v10 >> 1) & 1) != 0 )
  {
    MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
LABEL_41:
    v28 = v65;
  }
  else
  {
    if ( (v10 & 4) == 0 )
    {
      memmove(P, (const void *)Src, v26);
      goto LABEL_41;
    }
    v28 = MiDbgReadWriteEnclave(Src, (_DWORD)P, v26, 1, (__int64)v75);
    v65 = v28;
    v64 = v28;
  }
  if ( !v27 )
    CurrentThread->MiscFlags &= ~0x20u;
  if ( v28 >= 0 )
  {
    if ( ((v10 >> 1) & 1) != 0 )
    {
      v29 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
      if ( !v29 )
      {
        MmUnlockPages(&MemoryDescriptorList);
        v10 &= ~2u;
        KiUnstackDetachProcess((struct _KTHREAD *)v80, 0);
        v11 = Size;
        goto LABEL_22;
      }
    }
    else
    {
      v29 = P;
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v80, 0);
    KiStackAttachProcess(a3, 0, (__int64)v80);
    if ( a6 && (void *)Src == a2 && (a4 + a5 > 0x7FFFFFFF0000LL || a4 + a5 < a4) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( (v10 & 8) != 0 )
    {
      v32 = MiDbgReadWriteEnclave((_DWORD)v69, (_DWORD)P, v26, 0, (__int64)v75);
      v33 = v32;
      v65 = v32;
      v64 = v32;
      if ( v32 == -1073741819 )
      {
        *a7 = (unsigned __int64)&v69[v75[0] - (_QWORD)a2];
        v33 = -2147483635;
        goto LABEL_70;
      }
      if ( v32 < 0 )
        goto LABEL_70;
      v31 = v69;
    }
    else
    {
      v30 = v29;
      v31 = v69;
      memmove(v69, v30, v26);
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v80, 0);
    if ( ((v10 >> 1) & 1) != 0 )
      MmUnlockPages(&MemoryDescriptorList);
    v25 -= v26;
    v11 = Size - v26;
    Size -= v26;
    Src += v26;
    v69 = &v31[v26];
    v8 = (unsigned __int64)a2;
    goto LABEL_28;
  }
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    KiUnstackDetachProcess((struct _KTHREAD *)v80, 0);
    v11 = Size;
    goto LABEL_23;
  }
  *a7 = a5 - v25;
  v33 = -2147483635;
LABEL_70:
  KiUnstackDetachProcess((struct _KTHREAD *)v80, 0);
  if ( v73 )
    ExFreePoolWithTag(P, 0);
  return v33;
}
