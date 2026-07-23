/*
 * XREFs of CsrpLocalSetupForSecureProcess @ 0x1800BAB28
 * Callers:
 *     CsrClientConnectToServer @ 0x180004320 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     swprintf_s @ 0x18008F780 (swprintf_s.c)
 *     wcscpy_s @ 0x18008F920 (wcscpy_s.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 CsrpLocalSetupForSecureProcess()
{
  struct _PEB *v0; // rbp
  __int64 v1; // rsi
  size_t v2; // rsi
  size_t v3; // r15
  __int64 v4; // r14
  size_t v5; // r14
  _QWORD *Heap; // rax
  unsigned __int64 v7; // rdi
  NTSTATUS SystemInformation; // ebx
  void **v9; // r13
  char *v10; // rbx
  char *v11; // rbx
  char *v12; // rcx
  __int128 v13; // xmm0
  unsigned __int64 v14; // rdi
  wchar_t Destination[256]; // [rsp+30h] [rbp-238h] BYREF

  v0 = NtCurrentPeb();
  v1 = -1LL;
  do
    ++v1;
  while ( *(_WORD *)(2 * v1 + 0x7FFE0030) );
  v2 = 2 * v1;
  v3 = v2 + 18;
  if ( v0->SessionId )
    swprintf_s(Destination, 0x100uLL, L"%ws\\%ld\\BaseNamedObjects", L"\\Sessions", v0->SessionId);
  else
    wcscpy_s(Destination, 0x100uLL, L"\\BaseNamedObjects");
  v4 = -1LL;
  do
    ++v4;
  while ( Destination[v4] );
  v5 = 2 * v4;
  Heap = RtlAllocateHeap(CsrHeap, 8u, v2 + v5 + v2 + 2960);
  v7 = (unsigned __int64)Heap;
  if ( Heap )
  {
    v9 = (void **)(Heap + 365);
    Heap[366] = Heap;
    v10 = (char *)(Heap + 367);
    Heap[1] = Heap + 367;
    *(_WORD *)Heap = v2;
    *((_WORD *)Heap + 1) = v2 + 2;
    memmove(Heap + 367, (const void *)0x7FFE0030, v2);
    *(_WORD *)(v7 + 16) = v3;
    *(_WORD *)(v7 + 18) = v2 + 20;
    v11 = &v10[v2 + 2];
    *(_QWORD *)(v7 + 24) = v11;
    memmove(v11, (const void *)0x7FFE0030, v2);
    v12 = &v11[v3 + 2];
    *(_OWORD *)&v11[v2] = *(_OWORD *)L"\\System32";
    *(_DWORD *)&v11[v2 + 16] = *(_DWORD *)L"2";
    *(_WORD *)(v7 + 34) = v5 + 2;
    *(_QWORD *)(v7 + 40) = v12;
    *(_WORD *)(v7 + 32) = v5;
    memmove(v12, Destination, v5);
    v13 = *(_OWORD *)(v7 + 32);
    *(_DWORD *)(v7 + 2864) = -1;
    *(_QWORD *)(v7 + 2896) = v7;
    *(_OWORD *)(v7 + 2880) = v13;
    SystemInformation = NtQuerySystemInformation(SystemTimeOfDayInformation, (PVOID)(v7 + 320), 0x30u, 0LL);
    if ( SystemInformation < 0 )
    {
      RtlFreeHeap(CsrHeap, 0, (PVOID)v7);
    }
    else
    {
      v14 = v7 & 0xFFFFFFFFFFFF0000uLL;
      v0->ReadOnlyStaticServerData = v9;
      v0->CsrServerReadOnlySharedMemoryBase = v14;
      v0->ReadOnlySharedMemoryBase = (void *)v14;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)SystemInformation;
}
