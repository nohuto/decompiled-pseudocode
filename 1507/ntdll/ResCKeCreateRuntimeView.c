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

unsigned __int64 __fastcall ResCKeCreateRuntimeView(__int64 a1, int a2, int a3)
{
  int BaseFolder; // eax
  unsigned __int16 *v6; // rdi
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-248h] BYREF
  int v17; // [rsp+34h] [rbp-244h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-240h] BYREF
  unsigned __int16 v19[264]; // [rsp+40h] [rbp-238h] BYREF

  v16 = 0;
  memset(v19, 0, 520);
  BaseFolder = ResCKeGetBaseFolder(v19);
  v6 = v19;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( (unsigned int)(BaseFolder - 1) > 0x102 )
    v6 = 0LL;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 8u, 48LL);
  v9 = Heap;
  if ( !Heap )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(0xEu);
    return 0LL;
  }
  *(_QWORD *)(Heap + 8) = 0LL;
  ResCKeGetCacheIndices(&v17, v18);
  v11 = ResCKeDirectoryOpenMapping(v17, v10, a2, a3, 1, &v16);
  *(_QWORD *)(v9 + 16) = v11;
  if ( !v11 || !*(_DWORD *)(*(_QWORD *)(v11 + 24) + 68LL) )
  {
LABEL_11:
    if ( *(_QWORD *)(v9 + 16) )
      ResCDirectoryFree();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(v9 + 16) + 64LL) = ResCKeHitsOpenMapping();
  v12 = RtlAllocateHeap(
          (__int64)NtCurrentPeb()->ProcessHeap,
          8u,
          8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 24LL) + 52LL));
  *(_QWORD *)(v9 + 24) = v12;
  if ( !v12 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(0xEu);
    goto LABEL_11;
  }
  if ( v6 )
    v14 = ResCDupString(v6);
  else
    v14 = 0LL;
  *(_DWORD *)v9 |= 0x80u;
  *(_QWORD *)(v9 + 32) = v14;
  v15 = v16 & 7;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_DWORD *)(v9 + 4) |= v15;
  return v9;
}
