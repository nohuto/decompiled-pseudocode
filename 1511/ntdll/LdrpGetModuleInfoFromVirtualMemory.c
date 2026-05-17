/*
 * XREFs of LdrpGetModuleInfoFromVirtualMemory @ 0x180084CF8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpMUIEtwOutput @ 0x1800D420C (LdrpMUIEtwOutput.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     wcsrchr @ 0x18009B430 (wcsrchr.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall LdrpGetModuleInfoFromVirtualMemory(
        __int64 a1,
        void *a2,
        unsigned __int16 a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  size_t v8; // rbx
  unsigned __int64 Heap; // rbp
  __int64 v12; // rsi
  int VirtualMemory; // edi
  __int64 v14; // rax
  size_t v15; // r8
  wchar_t *v16; // rax
  _WORD *v17; // rbx
  __int64 v18; // rsi
  void *v19; // rax

  v8 = a3;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, a3);
  if ( !Heap )
    goto LABEL_23;
  v12 = -1LL;
  VirtualMemory = ZwQueryVirtualMemory(-1LL, a1, 2LL, Heap);
  if ( VirtualMemory < 0 )
    goto LABEL_18;
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)(*(_QWORD *)(Heap + 8) + 2 * v14) );
  v15 = 2 * v14 + 2;
  if ( v15 >= v8 )
  {
    VirtualMemory = -2147483643;
    goto LABEL_18;
  }
  memmove(a2, *(const void **)(Heap + 8), v15);
  v16 = wcsrchr((const wchar_t *)a2, 0x5Cu);
  if ( !v16 )
  {
    VirtualMemory = -1073741767;
    goto LABEL_18;
  }
  v17 = v16 + 1;
  do
    ++v12;
  while ( v17[v12] );
  v18 = (unsigned int)(2 * v12);
  if ( !a5 )
    goto LABEL_12;
  v19 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v18 + 2);
  *a5 = v19;
  if ( !v19 )
  {
LABEL_23:
    VirtualMemory = -1073741801;
    goto LABEL_18;
  }
  memmove(v19, v17, v18 + 2);
LABEL_12:
  if ( a6 )
    *a6 = v18;
  if ( a4 )
    *a4 = 2 * (((char *)v17 - (_BYTE *)a2) >> 1);
  if ( a7 )
    *a7 = 1;
LABEL_18:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)VirtualMemory;
}
