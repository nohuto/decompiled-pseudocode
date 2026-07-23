/*
 * XREFs of ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x14021C548
 * Callers:
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14012049C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z @ 0x14021C440 (-NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021F4D0 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140115008 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 */

__int64 __fastcall NP_CONTEXT::NpiPerformPageOut(struct NP_CONTEXT *a1, struct NP_CONTEXT::NP_CTX *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // r14
  _QWORD *v6; // rbp
  __int64 v7; // rax

  v4 = 0;
  while ( 1 )
  {
    *((_QWORD *)a1 + 7) = 0LL;
    (*((void (__fastcall **)(struct NP_CONTEXT::NP_CTX *, __int64 (__fastcall *)(void *, void *, unsigned __int64 *), struct NP_CONTEXT *))a1
     + 1))(
      a2,
      NP_CONTEXT::NpiTreeWalkCallback,
      a1);
    v5 = (__int64 *)*((_QWORD *)a1 + 7);
    v6 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFF000uLL);
    v7 = *(_QWORD *)(((unsigned __int64)v6 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7 || (v7 & 2) != 0 )
      break;
    --*((_DWORD *)a1 + 12);
LABEL_7:
    ++*((_DWORD *)a1 + 11);
    *v5 = v7;
    NP_CONTEXT::NpNodeFree(a2, v6, 1);
    if ( *((_DWORD *)a1 + 10) <= *(_DWORD *)a1 )
      return v4;
  }
  v7 = (*((__int64 (__fastcall **)(struct NP_CONTEXT::NP_CTX *))a1 + 2))(a2);
  if ( v7 )
  {
    ++*((_DWORD *)a1 + 20);
    goto LABEL_7;
  }
  ++*((_DWORD *)a1 + 22);
  return (unsigned int)-1073741435;
}
