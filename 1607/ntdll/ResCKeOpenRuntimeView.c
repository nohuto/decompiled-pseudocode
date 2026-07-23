/*
 * XREFs of ResCKeOpenRuntimeView @ 0x18005A004
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 *     ResCKeGetCacheIndices @ 0x1800FF240 (ResCKeGetCacheIndices.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     ResCKeDirectoryOpenMapping @ 0x18005A100 (ResCKeDirectoryOpenMapping.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     ResCKeGetBaseFolder @ 0x18005A648 (ResCKeGetBaseFolder.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     ResCDirectoryFree @ 0x1800FFD50 (ResCDirectoryFree.c)
 *     ResCKeHitsOpenMapping @ 0x1801000E8 (ResCKeHitsOpenMapping.c)
 *     _ResCDupString @ 0x180103754 (_ResCDupString.c)
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
  memset(v13, 0, 0x208uLL);
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
