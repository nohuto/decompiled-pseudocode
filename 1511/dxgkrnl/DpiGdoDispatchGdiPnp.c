/*
 * XREFs of DpiGdoDispatchGdiPnp @ 0x1C000CA70
 * Callers:
 *     DpiDispatchPnp @ 0x1C00C2CE0 (DpiDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdoDispatchGdiPnp(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  v3 = -1073741637;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(v4 + 1) == 7 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = *(_QWORD *)(v5 + 152);
      ObfReferenceObject(*(PVOID *)(v5 + 152));
      v3 = 0;
      *(_QWORD *)(a2 + 56) = v11;
    }
    else
    {
      v3 = -1073741670;
      v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
      v14[3] = DpiGdoDispatchGdiPnp;
      v14[4] = ExAllocatePoolWithTag;
      v14[5] = -1073741670LL;
      WdLogEvent5_WdLowResource(v14);
    }
  }
  else if ( *(_BYTE *)(v4 + 1) != 8 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)*(unsigned __int8 *)(v4 + 1) - 7);
    v13[4] = 0LL;
    v13[3] = DpiGdoDispatchGdiPnp;
    v13[5] = *(unsigned __int8 *)(v4 + 1);
    WdLogEvent5_WdError(v13);
  }
  return v3;
}
