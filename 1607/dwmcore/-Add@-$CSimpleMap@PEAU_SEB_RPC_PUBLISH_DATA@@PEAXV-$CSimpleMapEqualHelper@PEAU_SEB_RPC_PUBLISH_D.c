/*
 * XREFs of ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x1800B8140
 * Callers:
 *     PubSebRegisterRpc @ 0x1800B8008 (PubSebRegisterRpc.c)
 * Callees:
 *     _recalloc @ 0x1800BE9B0 (_recalloc.c)
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v5; // rax
  char *v6; // rax
  char *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // r8
  char *v10; // rdx
  __int64 result; // rax

  v5 = _recalloc(Block, dword_1801F0210 + 1, 8uLL);
  if ( !v5 )
    return 0LL;
  Block = v5;
  v6 = (char *)_recalloc(*(&Block + 1), dword_1801F0210 + 1, 8uLL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v8 = dword_1801F0210;
  *(&Block + 1) = v6;
  v9 = (char *)Block + 8 * dword_1801F0210;
  if ( v9 )
  {
    *v9 = *a2;
    v7 = (char *)*(&Block + 1);
  }
  v10 = &v7[8 * v8];
  if ( v10 )
    *(_QWORD *)v10 = *a3;
  result = 1LL;
  ++dword_1801F0210;
  return result;
}
