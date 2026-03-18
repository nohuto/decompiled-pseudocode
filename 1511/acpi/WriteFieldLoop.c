/*
 * XREFs of WriteFieldLoop @ 0x1C0014710
 * Callers:
 *     <none>
 * Callees:
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 *     PushAccFieldObj @ 0x1C00131C0 (PushAccFieldObj.c)
 */

__int64 __fastcall WriteFieldLoop(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx

  v3 = a3;
  if ( a3 )
    v6 = 1;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    if ( v6 != 1 )
      return v3;
    goto LABEL_10;
  }
  v7 = *(_DWORD *)(a2 + 56);
  if ( !v7 )
  {
    ++*(_DWORD *)(a2 + 16);
LABEL_10:
    v11 = *(_QWORD *)(a1 + 416);
    v12 = v11 - 16;
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v11 + 8);
    *(_DWORD *)(v11 - 16) = 0;
    byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v12 + 8), v12);
    KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
    return v3;
  }
  v8 = *(_DWORD *)(a2 + 60);
  if ( v8 > v7 )
    v8 = *(_DWORD *)(a2 + 56);
  v9 = PushAccFieldObj(
         a1,
         (__int64)WriteFieldObj,
         *(_QWORD *)(a2 + 32),
         *(_DWORD **)(a2 + 40),
         *(_QWORD *)(a2 + 48),
         v8);
  *(_DWORD *)(a2 + 56) -= v8;
  v3 = v9;
  *(_QWORD *)(a2 + 48) += v8;
  return v3;
}
