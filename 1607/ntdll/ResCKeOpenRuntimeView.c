/*
 * XREFs of ResCKeOpenRuntimeView @ 0x18005A014
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1F8 (LdrpGetMUIFromCMFSegment.c)
 *     ResCKeGetCacheIndices @ 0x1800FF240 (ResCKeGetCacheIndices.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     ResCKeDirectoryOpenMapping @ 0x18005A110 (ResCKeDirectoryOpenMapping.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     ResCKeGetBaseFolder @ 0x18005A658 (ResCKeGetBaseFolder.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     ResCDirectoryFree @ 0x1800FFE18 (ResCDirectoryFree.c)
 *     ResCKeHitsOpenMapping @ 0x1801001B0 (ResCKeHitsOpenMapping.c)
 *     _ResCDupString @ 0x180103814 (_ResCDupString.c)
 */

unsigned __int64 ResCKeOpenRuntimeView()
{
  int BaseFolder; // eax
  unsigned __int16 *v1; // rdi
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v4; // edx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  _DWORD v12[4]; // [rsp+30h] [rbp-238h] BYREF
  unsigned __int16 v13[264]; // [rsp+40h] [rbp-228h] BYREF

  v12[0] = 0;
  memset(v13, 0, 0x208uLL);
  BaseFolder = ResCKeGetBaseFolder(v13);
  v1 = v13;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( (unsigned int)(BaseFolder - 1) > 0x102 )
    v1 = 0LL;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 8u, 0x30uLL);
  v5 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(14LL);
    return 0LL;
  }
  *(_QWORD *)(Heap + 8) = 0LL;
  v6 = ResCKeDirectoryOpenMapping(-1, v4, 0, 0, 0, (__int64)v12);
  *(_QWORD *)(v5 + 16) = v6;
  if ( !v6 )
  {
LABEL_5:
    if ( *(_QWORD *)(v5 + 16) )
      ResCDirectoryFree();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v6 + 24) + 68LL) )
  {
    v8 = 536937730LL;
LABEL_13:
    RtlSetLastWin32Error(v8);
    goto LABEL_5;
  }
  *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL) = ResCKeHitsOpenMapping();
  v9 = RtlAllocateHeap(
         (__int64)NtCurrentPeb()->ProcessHeap,
         8u,
         8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 24LL) + 52LL));
  *(_QWORD *)(v5 + 24) = v9;
  if ( !v9 )
  {
    if ( NtCurrentTeb()->LastErrorValue )
      goto LABEL_5;
    v8 = 14LL;
    goto LABEL_13;
  }
  if ( v1 )
    v10 = ResCDupString(v1);
  else
    v10 = 0LL;
  *(_DWORD *)v5 |= 0x80u;
  *(_QWORD *)(v5 + 32) = v10;
  v11 = v12[0] & 7;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_DWORD *)(v5 + 4) |= v11;
  return v5;
}
