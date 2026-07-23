/*
 * XREFs of ResCKeCreateRuntimeView @ 0x1800F7138
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18000EF20 (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     ResCKeDirectoryOpenMapping @ 0x18000EE38 (ResCKeDirectoryOpenMapping.c)
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     ResCKeGetBaseFolder @ 0x18000F23C (ResCKeGetBaseFolder.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 *     ResCKeGetCacheIndices @ 0x1800F7300 (ResCKeGetCacheIndices.c)
 *     ResCDirectoryFree @ 0x1800F7FCC (ResCDirectoryFree.c)
 *     ResCKeHitsOpenMapping @ 0x1800F84A0 (ResCKeHitsOpenMapping.c)
 *     _ResCDupString @ 0x1800F9568 (_ResCDupString.c)
 */

_DWORD *__fastcall ResCKeCreateRuntimeView(__int64 a1, int a2, int a3)
{
  int BaseFolder; // eax
  unsigned __int16 *v6; // rdi
  void *ProcessHeap; // rcx
  _DWORD *Heap; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  PVOID v12; // rax
  void *v13; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // [rsp+30h] [rbp-248h] BYREF
  int v18; // [rsp+34h] [rbp-244h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-240h] BYREF
  unsigned __int16 v20[264]; // [rsp+40h] [rbp-238h] BYREF

  v17 = 0;
  memset(v20, 0, 520);
  BaseFolder = ResCKeGetBaseFolder(v20);
  v6 = v20;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( (unsigned int)(BaseFolder - 1) > 0x102 )
    v6 = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 8u, 0x30uLL);
  v9 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(14);
    return 0LL;
  }
  *((_QWORD *)Heap + 1) = 0LL;
  ResCKeGetCacheIndices(&v18, v19);
  v11 = ResCKeDirectoryOpenMapping(v18, v10, a2, a3, 1u, &v17);
  *((_QWORD *)v9 + 2) = v11;
  if ( !v11 || !*(_DWORD *)(v11[3] + 68LL) )
  {
LABEL_11:
    v13 = (void *)*((_QWORD *)v9 + 2);
    if ( v13 )
      ResCDirectoryFree(v13);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return 0LL;
  }
  *(_QWORD *)(*((_QWORD *)v9 + 2) + 64LL) = ResCKeHitsOpenMapping();
  v12 = RtlAllocateHeap(
          NtCurrentPeb()->ProcessHeap,
          8u,
          8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 24LL) + 52LL));
  *((_QWORD *)v9 + 3) = v12;
  if ( !v12 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(14);
    goto LABEL_11;
  }
  if ( v6 )
    v15 = ResCDupString(v6);
  else
    v15 = 0LL;
  *v9 |= 0x80u;
  *((_QWORD *)v9 + 4) = v15;
  v16 = v17 & 7;
  *((_QWORD *)v9 + 5) = 0LL;
  v9[1] |= v16;
  return v9;
}
