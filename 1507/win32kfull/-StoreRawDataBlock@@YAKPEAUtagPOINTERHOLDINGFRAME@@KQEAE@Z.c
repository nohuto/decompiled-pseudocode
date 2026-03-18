/*
 * XREFs of ?StoreRawDataBlock@@YAKPEAUtagPOINTERHOLDINGFRAME@@KQEAE@Z @ 0x1C0230568
 * Callers:
 *     ?StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z @ 0x1C0230400 (-StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall StoreRawDataBlock(struct tagPOINTERHOLDINGFRAME *a1, unsigned int a2, unsigned __int8 *const a3)
{
  size_t v4; // r14
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  v4 = a2;
  if ( !dword_1C032F110 )
    return 0LL;
  if ( !a3 )
    return 0LL;
  v6 = *((_DWORD *)a1 + 10) + 1;
  if ( *((_DWORD *)a1 + 10) == -1 )
    return 0LL;
  v7 = Win32AllocPoolZInit(32LL, 1685222229LL);
  if ( !v7 )
    return 0LL;
  v8 = Win32AllocPool((unsigned int)v4, 1685222229LL);
  *(_QWORD *)(v7 + 16) = v8;
  if ( !v8 )
  {
    Win32FreePool(v7);
    v7 = 0LL;
  }
  if ( !v7 )
    return 0LL;
  v9 = *(void **)(v7 + 16);
  *(_DWORD *)(v7 + 4) = v6;
  *(_DWORD *)(v7 + 8) = v4;
  memmove(v9, a3, v4);
  *(_QWORD *)(v7 + 24) = 0LL;
  v10 = *((_QWORD *)a1 + 7);
  if ( v10 )
    *(_QWORD *)(v10 + 24) = v7;
  else
    *((_QWORD *)a1 + 6) = v7;
  *((_QWORD *)a1 + 7) = v7;
  result = v6;
  *((_DWORD *)a1 + 10) = v6;
  return result;
}
