/*
 * XREFs of MiReplaceWsleHash @ 0x1400FCEC4
 * Callers:
 *     MiExchangeWsle @ 0x1400AFDA8 (MiExchangeWsle.c)
 *     MiMoveValidWsle @ 0x1400FCC4C (MiMoveValidWsle.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiLocateIndirectHash @ 0x14004B690 (MiLocateIndirectHash.c)
 *     MiGetWsleHashVa @ 0x1400FCF54 (MiGetWsleHashVa.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReplaceWsleHash(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 IndirectHash; // rax
  ULONG_PTR v22; // rbx

  result = (__int64)MiGetSharedWorkingSetList(BugCheckParameter2);
  v12 = result;
  if ( (v9 & 4) != 0 )
  {
    v13 = *(_QWORD *)(result + 56);
    if ( !v13 || (v13 & 1) != 0 )
    {
      if ( (v9 & 0x800000000000LL) != 0 )
        v14 = a2 | 0xFFFF000000000000uLL;
      else
        v14 = a2 & 0xFFFFFFFFFFFFLL;
      result = MiGetWsleHashVa(result, v14, v10, v11);
      *(_QWORD *)result = v15;
    }
    else
    {
      v16 = v9 & 0x800000000000LL;
      if ( (v9 & 1) != 0 )
      {
        if ( v16 )
          v17 = v9 | 0xFFFF000000000000uLL;
        else
          v17 = v9 & 0xFFFFFFFFFFFFLL;
        if ( (v17 & 0x800000000000LL) != 0 )
        {
          if ( v16 )
            v18 = v9 | 0xFFFF000000000000uLL;
          else
            v18 = v9 & 0xFFFFFFFFFFFFLL;
          v19 = v18 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
        }
        else
        {
          if ( v16 )
            v20 = v9 | 0xFFFF000000000000uLL;
          else
            v20 = v9 & 0xFFFFFFFFFFFFLL;
          v19 = v20 & 0xFFFFFFFFF000LL | 1;
        }
      }
      else
      {
        v19 = 0LL;
      }
      IndirectHash = MiLocateIndirectHash(v12, v19, (unsigned __int8)(v19 >> 12));
      if ( IndirectHash == 0xFFFFFFFFFLL )
      {
        if ( v16 )
          v22 = a2 | 0xFFFF000000000000uLL;
        else
          v22 = a2 & 0xFFFFFFFFFFFFLL;
        KeBugCheckEx(0x1Au, 0x41282uLL, BugCheckParameter2, v22, a4);
      }
      result = 2 * IndirectHash;
      *(_QWORD *)(v13 + 8 * result + 8) = a3;
    }
  }
  return result;
}
