/*
 * XREFs of NdisMWriteLogData @ 0x1C0055520
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 */

NDIS_STATUS __stdcall NdisMWriteLogData(NDIS_HANDLE LogHandle, PVOID LogBuffer, UINT LogBufferSize)
{
  NDIS_STATUS v6; // ebp
  UINT v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r14
  char *v10; // rcx
  char *v11; // rdx
  size_t v12; // r8
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // esi
  char *v20; // rcx
  char *v21; // rdx
  size_t v22; // r8
  char *v23; // r14
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  UCHAR Irql; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)LogHandle + 1);
  v7 = *((_DWORD *)LogHandle + 6);
  if ( LogBufferSize > v7 )
  {
    v6 = -2147483643;
    goto LABEL_31;
  }
  v8 = *((unsigned int *)LogHandle + 8);
  v9 = v7 - (unsigned int)v8;
  v10 = (char *)LogHandle + v8 + 40;
  v11 = (char *)LogBuffer;
  if ( LogBufferSize > (unsigned int)v9 )
  {
    memmove(v10, LogBuffer, (unsigned int)v9);
    v11 = (char *)LogBuffer + v9;
    v12 = LogBufferSize - (unsigned int)v9;
    v10 = (char *)LogHandle + 40;
  }
  else
  {
    v12 = LogBufferSize;
  }
  memmove(v10, v11, v12);
  *((_DWORD *)LogHandle + 7) += LogBufferSize;
  v13 = *((_DWORD *)LogHandle + 6);
  v14 = *((_DWORD *)LogHandle + 7);
  if ( v14 > v13 )
    v14 = *((_DWORD *)LogHandle + 6);
  *((_DWORD *)LogHandle + 8) += LogBufferSize;
  v15 = *((_DWORD *)LogHandle + 8);
  *((_DWORD *)LogHandle + 7) = v14;
  if ( v15 >= v13 )
    *((_DWORD *)LogHandle + 8) = v15 - v13;
  v16 = v14;
  if ( v14 == v13 )
    *((_DWORD *)LogHandle + 9) = *((_DWORD *)LogHandle + 8);
  v17 = *((_QWORD *)LogHandle + 2);
  if ( v17 )
  {
    *((_QWORD *)LogHandle + 2) = 0LL;
    v18 = *(_QWORD *)(v17 + 8);
    v19 = *(_DWORD *)(v18 + 40);
    if ( v19 > v16 )
      v19 = v16;
    if ( v13 - *((_DWORD *)LogHandle + 9) < v19 )
    {
      if ( (*(_BYTE *)(v18 + 10) & 5) != 0 )
        v23 = *(char **)(v18 + 24);
      else
        v23 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v18, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
      if ( v23 )
      {
        memmove(
          v23,
          (char *)LogHandle + *((unsigned int *)LogHandle + 9) + 40,
          (unsigned int)(*((_DWORD *)LogHandle + 6) - *((_DWORD *)LogHandle + 9)));
        v21 = (char *)LogHandle + 40;
        v24 = *((unsigned int *)LogHandle + 6);
        v22 = v19 + *((_DWORD *)LogHandle + 9) - (_DWORD)v24;
        v20 = &v23[v24 - *((unsigned int *)LogHandle + 9)];
        goto LABEL_25;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v18 + 10) & 5) != 0 )
        v20 = *(char **)(v18 + 24);
      else
        v20 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v18, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
      if ( v20 )
      {
        v21 = (char *)LogHandle + *((unsigned int *)LogHandle + 9) + 40;
        v22 = v19;
LABEL_25:
        memmove(v20, v21, v22);
LABEL_27:
        *((_DWORD *)LogHandle + 9) += v19;
        *((_DWORD *)LogHandle + 7) -= v19;
        v25 = *((_DWORD *)LogHandle + 9);
        v26 = *((_DWORD *)LogHandle + 6);
        if ( v25 >= v26 )
          *((_DWORD *)LogHandle + 9) = v25 - v26;
        *(_QWORD *)(v17 + 56) = v19;
        _InterlockedExchange64((volatile __int64 *)(v17 + 104), 0LL);
        *(_DWORD *)(v17 + 48) = 0;
        IofCompleteRequest((PIRP)v17, 2);
        goto LABEL_31;
      }
    }
    v6 = -1073741670;
    goto LABEL_27;
  }
LABEL_31:
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)LogHandle + 1);
  IoReleaseCancelSpinLock(Irql);
  return v6;
}
