/*
 * XREFs of CsrpLocalSetupForSecureProcess @ 0x1800CEC24
 * Callers:
 *     CsrClientConnectToServer @ 0x1800751A0 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18002CD70 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     swprintf_s @ 0x1800A2340 (swprintf_s.c)
 *     wcscpy_s @ 0x1800A24E0 (wcscpy_s.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 CsrpLocalSetupForSecureProcess()
{
  struct _PEB *v0; // rbp
  __int64 v1; // rsi
  unsigned int SessionId; // ebx
  size_t v3; // rsi
  size_t v4; // r15
  __int64 v5; // r14
  size_t v6; // r14
  _QWORD *Heap; // rax
  unsigned __int64 v8; // rdi
  NTSTATUS SystemInformation; // ebx
  void **v10; // r13
  char *v11; // rbx
  char *v12; // rbx
  char *v13; // rcx
  __int128 v14; // xmm0
  unsigned __int64 v15; // rdi
  wchar_t Destination[256]; // [rsp+30h] [rbp-238h] BYREF

  v0 = NtCurrentPeb();
  v1 = -1LL;
  do
    ++v1;
  while ( *(_WORD *)(2 * v1 + 0x7FFE0030) );
  SessionId = v0->SessionId;
  v3 = 2 * v1;
  v4 = v3 + 18;
  if ( SessionId == RtlGetCurrentServiceSessionId() )
    wcscpy_s(Destination, 0x100uLL, L"\\BaseNamedObjects");
  else
    swprintf_s(Destination, 0x100uLL, L"%ws\\%ld\\BaseNamedObjects", L"\\Sessions", SessionId);
  v5 = -1LL;
  do
    ++v5;
  while ( Destination[v5] );
  v6 = 2 * v5;
  Heap = RtlAllocateHeap(CsrHeap, 8u, v3 + v6 + v3 + 2960);
  v8 = (unsigned __int64)Heap;
  if ( Heap )
  {
    v10 = (void **)(Heap + 365);
    Heap[366] = Heap;
    v11 = (char *)(Heap + 367);
    Heap[1] = Heap + 367;
    *(_WORD *)Heap = v3;
    *((_WORD *)Heap + 1) = v3 + 2;
    memmove(Heap + 367, (const void *)0x7FFE0030, v3);
    *(_WORD *)(v8 + 16) = v4;
    *(_WORD *)(v8 + 18) = v3 + 20;
    v12 = &v11[v3 + 2];
    *(_QWORD *)(v8 + 24) = v12;
    memmove(v12, (const void *)0x7FFE0030, v3);
    v13 = &v12[v4 + 2];
    *(_OWORD *)&v12[v3] = *(_OWORD *)L"\\System32";
    *(_DWORD *)&v12[v3 + 16] = *(_DWORD *)L"2";
    *(_WORD *)(v8 + 34) = v6 + 2;
    *(_QWORD *)(v8 + 40) = v13;
    *(_WORD *)(v8 + 32) = v6;
    memmove(v13, Destination, v6);
    v14 = *(_OWORD *)(v8 + 32);
    *(_DWORD *)(v8 + 2864) = -1;
    *(_QWORD *)(v8 + 2896) = v8;
    *(_OWORD *)(v8 + 2880) = v14;
    SystemInformation = NtQuerySystemInformation(SystemTimeOfDayInformation, (PVOID)(v8 + 320), 0x30u, 0LL);
    if ( SystemInformation < 0 )
    {
      RtlFreeHeap(CsrHeap, 0, (PVOID)v8);
    }
    else
    {
      v15 = v8 & 0xFFFFFFFFFFFF0000uLL;
      v0->ReadOnlyStaticServerData = v10;
      v0->CsrServerReadOnlySharedMemoryBase = v15;
      v0->ReadOnlySharedMemoryBase = (void *)v15;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)SystemInformation;
}
