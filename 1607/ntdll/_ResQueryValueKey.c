/*
 * XREFs of _ResQueryValueKey @ 0x18005AAA8
 * Callers:
 *     _ResCGetRegistryFlags @ 0x180059E20 (_ResCGetRegistryFlags.c)
 *     ResCGetRegistryLatestIndex @ 0x18005D668 (ResCGetRegistryLatestIndex.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall ResQueryValueKey(__int64 a1, __int64 a2, _DWORD *a3, void *a4, _DWORD *a5)
{
  _DWORD *v5; // rsi
  int v10; // eax
  __int64 Heap; // rax
  _DWORD *v12; // rbx
  int v13; // edi

  v5 = a5;
  if ( a5 )
    v10 = *a5;
  else
    v10 = 0;
  LODWORD(a5) = v10 + 12;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v10 + 12));
  v12 = (_DWORD *)Heap;
  if ( !Heap )
    return 3221225626LL;
  v13 = NtQueryValueKey(a1, a2, 2LL, Heap, (_DWORD)a5, &a5);
  if ( v13 != -1073741772 )
  {
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
    {
      if ( v5 )
        *v5 = v12[2];
      if ( a3 )
        *a3 = v12[1];
    }
    if ( v13 >= 0 )
    {
      if ( a4 )
        memmove(a4, v12 + 3, (unsigned int)v12[2]);
    }
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v12);
  return (unsigned int)v13;
}
