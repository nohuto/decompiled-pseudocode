/*
 * XREFs of MiDbgReleaseAddress @ 0x140223080
 * Callers:
 *     MiDbgCopyMemory @ 0x140222AD0 (MiDbgCopyMemory.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x14014A648 (KeFlushSingleCurrentTb.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x140225AFC (MiGetLeafVa.c)
 *     MiRealVaToFlushType @ 0x140225F80 (MiRealVaToFlushType.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  char v5; // di
  _QWORD *v7; // rcx
  __int64 LeafVa; // rax
  int v9; // edx

  v4 = *a2;
  v5 = a3;
  if ( v4 )
  {
    v7 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    _InterlockedIncrement(&dword_14034F2D4);
    *v7 = v4;
    if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v7, v4);
    _InterlockedDecrement(&dword_14034F2D4);
    LeafVa = MiGetLeafVa(a1, v4, a3, a4);
    v9 = MiRealVaToFlushType(LeafVa);
    if ( (v5 & 4) != 0 )
      KeFlushSingleCurrentTb(a1, v9);
    else
      KeFlushSingleTb(a1, v9, 2);
  }
}
