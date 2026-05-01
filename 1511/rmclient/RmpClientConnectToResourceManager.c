/*
 * XREFs of RmpClientConnectToResourceManager @ 0x18000ECD0
 * Callers:
 *     RmConnectToResourceManager @ 0x18000E980 (RmConnectToResourceManager.c)
 * Callees:
 *     RmpClientWnfCreateSubscription @ 0x180007950 (RmpClientWnfCreateSubscription.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     RmpClientDisconnectContextHandle @ 0x18000EE8C (RmpClientDisconnectContextHandle.c)
 */

__int64 __fastcall RmpClientConnectToResourceManager(_OWORD *a1, __int64 a2, __int64 **a3)
{
  __int64 *Heap; // rdi
  int Pointer; // ebx
  CLIENT_CALL_RETURN v8; // rax
  __int64 **v9; // rax
  unsigned int v11; // [rsp+30h] [rbp-58h]
  _QWORD v12[4]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF

  v12[2] = a3;
  v12[0] = 0LL;
  Heap = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x70uLL);
  v12[1] = Heap;
  if ( !Heap )
  {
    Pointer = -1073741801;
LABEL_8:
    v11 = Pointer;
    goto LABEL_9;
  }
  v8.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017D40, 0, 0LL, a2, v12, &v13).Pointer;
  Pointer = (int)v8.Pointer;
  v12[3] = v8.Pointer;
  v11 = (unsigned int)v8.Pointer;
  if ( SLODWORD(v8.Simple) >= 0 )
  {
    Pointer = RmpClientWnfCreateSubscription(&v13, a1, 0LL, 0LL, (__int64)(Heap + 3));
    v11 = Pointer;
    if ( Pointer >= 0 )
    {
      RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
      v9 = (__int64 **)qword_180024748;
      *Heap = (__int64)&RmpClientConnectionListHead;
      Heap[1] = (__int64)v9;
      if ( *v9 != &RmpClientConnectionListHead )
        __fastfail(3u);
      *v9 = Heap;
      qword_180024748 = (__int64)Heap;
      RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
      Heap[2] = v12[0];
      v12[0] = 0LL;
      *a3 = Heap;
      Heap = 0LL;
      Pointer = 0;
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( v12[0] )
    RmpClientDisconnectContextHandle(v12[0]);
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return v11;
  }
  return (unsigned int)Pointer;
}
