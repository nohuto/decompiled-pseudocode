/*
 * XREFs of ?NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x14021C4B0
 * Callers:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14021C364 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 * Callees:
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140115008 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14012049C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 */

void __fastcall NP_CONTEXT::NpiLeafPageIn(struct NP_CONTEXT *a1, struct NP_CONTEXT::NP_CTX *a2, union _NP_LEAF_PTR *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi

  v6 = NP_CONTEXT::NpNodeAllocate(a2, (__int64)a2, 3);
  v7 = v6;
  if ( v6 )
  {
    if ( (*((int (__fastcall **)(struct NP_CONTEXT::NP_CTX *, _QWORD *, _QWORD))a1 + 3))(a2, v6, *(_QWORD *)a3) >= 0 )
    {
      ++*((_DWORD *)a1 + 21);
      --*((_DWORD *)a1 + 11);
      ++*((_DWORD *)a1 + 12);
      *(_QWORD *)(((unsigned __int64)v7 + 11) & 0xFFFFFFFFFFFFFFF8uLL) = *(_QWORD *)a3;
      *(_QWORD *)a3 = v7;
      *(_DWORD *)a3 |= 1u;
      v7 = 0LL;
    }
    else
    {
      ++*((_DWORD *)a1 + 23);
    }
    if ( v7 )
      NP_CONTEXT::NpNodeFree(a2, v7, 1);
  }
  else
  {
    ++*((_DWORD *)a1 + 23);
  }
}
