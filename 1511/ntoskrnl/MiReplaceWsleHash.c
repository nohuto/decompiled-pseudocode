/*
 * XREFs of MiReplaceWsleHash @ 0x1400E5794
 * Callers:
 *     MiMoveValidWsle @ 0x1400B8B14 (MiMoveValidWsle.c)
 *     MiExchangeWsle @ 0x140106588 (MiExchangeWsle.c)
 * Callees:
 *     MiLocateIndirectHash @ 0x1400C8250 (MiLocateIndirectHash.c)
 *     MI_WSLE_HASH_VA @ 0x1400E5824 (MI_WSLE_HASH_VA.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall MiReplaceWsleHash(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  __int64 v4; // r10
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 IndirectHash; // rax
  ULONG_PTR v19; // rbx

  if ( (a2 & 4) != 0 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 184);
    v9 = *(_QWORD *)(v4 + 88);
    if ( !v9 || (v9 & 1) != 0 )
    {
      if ( (a2 & 0x800000000000LL) != 0 )
        v10 = a2 | 0xFFFF000000000000uLL;
      else
        v10 = a2 & 0xFFFFFFFFFFFFLL;
      v11 = (_QWORD *)MI_WSLE_HASH_VA(v4, v10, a3);
      *v11 = v12;
    }
    else
    {
      v13 = a2 & 0x800000000000LL;
      if ( (a2 & 1) != 0 )
      {
        if ( v13 )
          v14 = a2 | 0xFFFF000000000000uLL;
        else
          v14 = a2 & 0xFFFFFFFFFFFFLL;
        if ( (v14 & 0x800000000000LL) != 0 )
        {
          if ( v13 )
            v15 = a2 | 0xFFFF000000000000uLL;
          else
            v15 = a2 & 0xFFFFFFFFFFFFLL;
          v16 = v15 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
        }
        else
        {
          if ( v13 )
            v17 = a2 | 0xFFFF000000000000uLL;
          else
            v17 = a2 & 0xFFFFFFFFFFFFLL;
          v16 = v17 & 0xFFFFFFFFF000LL | 1;
        }
      }
      else
      {
        v16 = 0LL;
      }
      IndirectHash = MiLocateIndirectHash(v4, v16, (unsigned __int8)(v16 >> 12));
      if ( IndirectHash == 0xFFFFFFFFFLL )
      {
        if ( v13 )
          v19 = a2 | 0xFFFF000000000000uLL;
        else
          v19 = a2 & 0xFFFFFFFFFFFFLL;
        KeBugCheckEx(0x1Au, 0x41282uLL, BugCheckParameter2, v19, a4);
      }
      *(_QWORD *)(v9 + 16 * IndirectHash + 8) = a3;
    }
  }
}
