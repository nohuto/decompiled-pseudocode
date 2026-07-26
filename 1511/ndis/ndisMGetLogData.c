/*
 * XREFs of ndisMGetLogData @ 0x1C00557DC
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 */

__int64 __fastcall ndisMGetLogData(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  KSPIN_LOCK *v5; // r15
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  char *v9; // r14
  __int64 v10; // rcx
  const void *v11; // rdx
  unsigned int v12; // eax
  char *v13; // rcx
  size_t v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  UCHAR Irql; // [rsp+60h] [rbp+8h] BYREF

  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 852768;
  if ( v4 )
  {
    v5 = (KSPIN_LOCK *)(v4 + 8);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 8));
    v6 = *(_DWORD *)(v4 + 28);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      v8 = *(_DWORD *)(v7 + 40);
      if ( v8 > v6 )
        v8 = *(_DWORD *)(v4 + 28);
      if ( (*(_BYTE *)(v7 + 10) & 5) != 0 )
        v9 = *(char **)(v7 + 24);
      else
        v9 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
      if ( v9 )
      {
        v10 = *(unsigned int *)(v4 + 36);
        v11 = (const void *)(v10 + v4 + 40);
        v12 = *(_DWORD *)(v4 + 24) - v10;
        v13 = v9;
        if ( v12 < v8 )
        {
          memmove(v9, v11, v12);
          v11 = (const void *)(v4 + 40);
          v15 = *(unsigned int *)(v4 + 24);
          v14 = v8 + *(_DWORD *)(v4 + 36) - (_DWORD)v15;
          v13 = &v9[v15 - *(unsigned int *)(v4 + 36)];
        }
        else
        {
          v14 = v8;
        }
        memmove(v13, v11, v14);
        *(_DWORD *)(v4 + 36) += v8;
        *(_DWORD *)(v4 + 28) -= v8;
        v16 = *(_DWORD *)(v4 + 36);
        v17 = *(_DWORD *)(v4 + 24);
        if ( v16 >= v17 )
          *(_DWORD *)(v4 + 36) = v16 - v17;
        v18 = 0;
        *(_QWORD *)(a2 + 56) = v8;
      }
      else
      {
        v18 = -1073741670;
      }
    }
    else if ( *(_QWORD *)(v4 + 16) )
    {
      v18 = -1073741823;
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ndisCancelLogIrp);
      *(_QWORD *)(v4 + 16) = a2;
      v18 = 259;
    }
    KeReleaseSpinLockFromDpcLevel(v5);
  }
  else
  {
    v18 = -1073741823;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  IoReleaseCancelSpinLock(Irql);
  return v18;
}
