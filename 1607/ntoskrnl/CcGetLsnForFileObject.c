/*
 * XREFs of CcGetLsnForFileObject @ 0x1401B1F54
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 */

__int64 __fastcall CcGetLsnForFileObject(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _FAST_MUTEX *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !v3 )
    return 0LL;
  v5 = (struct _FAST_MUTEX *)(v3 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(v3 + 280));
  v6 = 0LL;
  v7 = v3 + 16;
  v8 = *(_QWORD *)(v3 + 16);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = v8 - 16;
    v11 = (__int64 *)(v10 + 16);
    if ( v10 + 16 == v7 )
      break;
    if ( *(_WORD *)v10 == 765 )
    {
      if ( *(_BYTE *)(v10 + 2) )
      {
        v12 = *(_QWORD *)(v10 + 40);
        v13 = *(_QWORD *)(v10 + 48);
        if ( v12 )
        {
          if ( !v6 || v12 < v6 )
            v6 = v12;
          if ( v13 > v9 )
            v9 = v13;
        }
      }
    }
    v8 = *v11;
  }
  KeReleaseGuardedMutex(v5);
  if ( a2 )
    *a2 = v6;
  return v9;
}
