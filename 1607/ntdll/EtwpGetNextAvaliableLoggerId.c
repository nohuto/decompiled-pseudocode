/*
 * XREFs of EtwpGetNextAvaliableLoggerId @ 0x180056E1C
 * Callers:
 *     EtwpStartUmLogger @ 0x18005395C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 */

__int64 __fastcall EtwpGetNextAvaliableLoggerId(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned int v6; // r9d
  __int64 v7; // rdx
  _QWORD *Heap; // rax
  __int64 v10; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = EtwpLoggerArray;
  v3 = 0;
  if ( !EtwpLoggerArray )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x400uLL);
    v2 = (__int64)Heap;
    if ( !Heap )
      return 1450LL;
    v10 = 64LL;
    do
    {
      *Heap = 1LL;
      Heap += 2;
      --v10;
    }
    while ( v10 );
    _InterlockedOr(v11, 0);
    EtwpLoggerArray = v2;
  }
  LOBYTE(v3) = (*(_DWORD *)(a1 + 64) & 0x20000) != 0;
  v6 = (-(unsigned __int8)v3 & 0x3F) + 1;
  if ( v3 >= v6 )
    return 1450LL;
  while ( 1 )
  {
    v7 = 2LL * v3;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 16LL * v3 + 8));
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(EtwpLoggerArray + 16LL * v3), 3LL, 1LL) == 1 )
      break;
    ++v3;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 8));
    if ( v3 >= v6 )
      return 1450LL;
    v2 = EtwpLoggerArray;
  }
  *a2 = v3;
  return 0LL;
}
