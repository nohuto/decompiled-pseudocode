/*
 * XREFs of RIMStoreRawDataBlock @ 0x1C00C8B2C
 * Callers:
 *     RIMStoreFrameNodes @ 0x1C00C8970 (RIMStoreFrameNodes.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall RIMStoreRawDataBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, void *Src)
{
  size_t v6; // r14
  unsigned int v7; // esi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  void *v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax

  v6 = a4;
  if ( !Src )
    return 0LL;
  v7 = *(_DWORD *)(a3 + 40) + 1;
  if ( *(_DWORD *)(a3 + 40) == -1 )
    return 0LL;
  v8 = Win32AllocPoolZInit(0x18uLL);
  if ( !v8 )
    return 0LL;
  v9 = Win32AllocPool();
  v8[1] = v9;
  if ( !v9 )
  {
    Win32FreePool();
    v8 = 0LL;
  }
  if ( !v8 )
    return 0LL;
  v10 = (void *)v8[1];
  *(_DWORD *)v8 = v7;
  *((_DWORD *)v8 + 1) = v6;
  memmove(v10, Src, v6);
  v8[2] = 0LL;
  v11 = *(_QWORD *)(a3 + 56);
  if ( v11 )
    *(_QWORD *)(v11 + 16) = v8;
  else
    *(_QWORD *)(a3 + 48) = v8;
  *(_QWORD *)(a3 + 56) = v8;
  result = v7;
  *(_DWORD *)(a3 + 40) = v7;
  return result;
}
