/*
 * XREFs of ndisOidPreQueryOffloadEncapsulation @ 0x1C004749C
 * Callers:
 *     ndisOidPreOffloadEncapsulation @ 0x1C00B1B00 (ndisOidPreOffloadEncapsulation.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 */

char __fastcall ndisOidPreQueryOffloadEncapsulation(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  const void *v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  char v7; // si
  __int64 v8; // r13
  __int64 v9; // r15
  KIRQL v10; // al
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rax

  v1 = *a1;
  v3 = a1[4];
  v4 = 0LL;
  v5 = a1[3];
  v6 = 0;
  v7 = 1;
  v8 = a1[2];
  if ( v5 )
  {
    v4 = *(const void **)(v5 + 792);
    if ( !v4 )
    {
      *((_DWORD *)a1 + 10) = 0;
      *(_DWORD *)(v3 + 52) = 0;
      return 1;
    }
    goto LABEL_8;
  }
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 32);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 96));
    *(_QWORD *)(v9 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v9 + 1856) = 2308730;
    v11 = *(_BYTE *)(v8 + 60);
    *(_QWORD *)(v9 + 520) = 0LL;
    *(_DWORD *)(v9 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 96), v10);
    if ( (v11 & 1) != 0 )
    {
      v12 = *(_QWORD *)(v9 + 4152);
      if ( v12 )
      {
        v4 = (const void *)(v12 + 756);
LABEL_8:
        v6 = 28;
LABEL_14:
        if ( v6 > *(_DWORD *)(v3 + 48) )
        {
          *(_DWORD *)(v3 + 56) = v6;
          *((_DWORD *)a1 + 10) = -1073676266;
        }
        else
        {
          memmove(*(void **)(v3 + 40), v4, v6);
          *(_DWORD *)(v3 + 52) = v6;
          *((_DWORD *)a1 + 10) = 0;
        }
        return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( v1 )
    {
      v13 = *(_QWORD *)(v1 + 4152);
      if ( v13 )
      {
        v4 = (const void *)(v13 + 728);
        v6 = 28;
      }
    }
    v7 = 0;
    if ( v6 )
      goto LABEL_14;
  }
  return v7;
}
