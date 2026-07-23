/*
 * XREFs of ResCKeOpenRuntimeView @ 0x180048884
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 *     ResCKeGetCacheIndices @ 0x1800F70EC (ResCKeGetCacheIndices.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     ResCKeDirectoryOpenMapping @ 0x180048988 (ResCKeDirectoryOpenMapping.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCKeGetBaseFolder @ 0x180048D88 (ResCKeGetBaseFolder.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     ResCDirectoryFree @ 0x1800F7C24 (ResCDirectoryFree.c)
 *     ResCKeHitsOpenMapping @ 0x1800F7FBC (ResCKeHitsOpenMapping.c)
 *     _ResCDupString @ 0x1800F8E80 (_ResCDupString.c)
 */

_DWORD *ResCKeOpenRuntimeView()
{
  int BaseFolder; // eax
  unsigned __int16 *v1; // rdi
  void *ProcessHeap; // rcx
  _DWORD *Heap; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rax
  void *v6; // rcx
  LONG v8; // ecx
  PVOID v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-238h] BYREF
  unsigned __int16 v13[264]; // [rsp+40h] [rbp-228h] BYREF

  LODWORD(v12) = 0;
  memset(v13, 0, 520);
  BaseFolder = ResCKeGetBaseFolder(v13);
  v1 = v13;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( (unsigned int)(BaseFolder - 1) > 0x102 )
    v1 = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 8u, 0x30uLL);
  v4 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(14);
    return 0LL;
  }
  *((_QWORD *)Heap + 1) = 0LL;
  v5 = ResCKeDirectoryOpenMapping(-1, 0, (__int64)&v12);
  *((_QWORD *)v4 + 2) = v5;
  if ( !v5 )
  {
LABEL_5:
    v6 = (void *)*((_QWORD *)v4 + 2);
    if ( v6 )
      ResCDirectoryFree(v6);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v5 + 24) + 68LL) )
  {
    v8 = 536937730;
LABEL_13:
    RtlSetLastWin32Error(v8);
    goto LABEL_5;
  }
  *(_QWORD *)(*((_QWORD *)v4 + 2) + 64LL) = ResCKeHitsOpenMapping();
  v9 = RtlAllocateHeap(
         NtCurrentPeb()->ProcessHeap,
         8u,
         8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 24LL) + 52LL));
  *((_QWORD *)v4 + 3) = v9;
  if ( !v9 )
  {
    if ( NtCurrentTeb()->LastErrorValue )
      goto LABEL_5;
    v8 = 14;
    goto LABEL_13;
  }
  if ( v1 )
    v10 = ResCDupString(v1);
  else
    v10 = 0LL;
  *v4 |= 0x80u;
  *((_QWORD *)v4 + 4) = v10;
  v11 = v12 & 7;
  *((_QWORD *)v4 + 5) = 0LL;
  v4[1] |= v11;
  return v4;
}
