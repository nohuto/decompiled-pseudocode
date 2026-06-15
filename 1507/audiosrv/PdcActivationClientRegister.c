/*
 * XREFs of PdcActivationClientRegister @ 0x180039BBC
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18003AA60 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     PdcPortOpen @ 0x180039C74 (PdcPortOpen.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

__int64 __fastcall PdcActivationClientRegister(__int64 a1, __int64 a2)
{
  PVOID Heap; // rax
  void *v3; // rbx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edi
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  g_hPdcActivator = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x50uLL);
  v3 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x50uLL);
    *(_DWORD *)v3 = 1097032784;
    *((_DWORD *)v3 + 6) = 40;
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    v8 = 0LL;
    InitializeSRWLock((PSRWLOCK)v3 + 1);
    v6 = PdcPortOpen(v5, v4, (_DWORD)v3, (unsigned int)&v8);
    if ( !v6 )
    {
      g_hPdcActivator = v3;
      v3 = 0LL;
    }
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
