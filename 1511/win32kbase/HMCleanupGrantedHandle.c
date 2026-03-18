/*
 * XREFs of HMCleanupGrantedHandle @ 0x1C00AF9B0
 * Callers:
 *     HMFreeObject @ 0x1C0041860 (HMFreeObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0077BDC (HMRemoveHandleForObjectWorker.c)
 * Callees:
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

void *__fastcall HMCleanupGrantedHandle(__int64 a1)
{
  __int64 i; // rbx
  unsigned int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // r9
  void *result; // rax

  for ( i = gpJobsList; i; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 48);
    v4 = 0LL;
    v5 = *(_QWORD *)(i + 56);
    if ( v3 )
    {
      while ( *(_QWORD *)(v5 + 8 * v4) != a1 )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= v3 )
          goto LABEL_7;
      }
      result = memmove((void *)(v5 + 8 * v4), (const void *)(v5 + 8 * v4 + 8), 8LL * (v3 - (unsigned int)v4 - 1));
      --*(_DWORD *)(i + 48);
    }
LABEL_7:
    ;
  }
  return result;
}
