/*
 * XREFs of DpiGdoDispatchGdiPnp @ 0x1C000F100
 * Callers:
 *     DpiDispatchPnp @ 0x1C00AF270 (DpiDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdoDispatchGdiPnp(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v3 = -1073741637;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(v4 + 1) == 7 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = *(_QWORD *)(v5 + 152);
      ObfReferenceObject(*(PVOID *)(v5 + 152));
      v3 = 0;
      *(_QWORD *)(a2 + 56) = v8;
    }
    else
    {
      v3 = -1073741670;
      v11 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7);
      v11[3] = DpiGdoDispatchGdiPnp;
      v11[4] = ExAllocatePoolWithTag;
      v11[5] = -1073741670LL;
      WdLogEvent5_WdLowResource(v11);
    }
  }
  else if ( *(_BYTE *)(v4 + 1) != 8 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)*(unsigned __int8 *)(v4 + 1) - 7);
    v10[4] = 0LL;
    v10[3] = DpiGdoDispatchGdiPnp;
    v10[5] = *(unsigned __int8 *)(v4 + 1);
    WdLogEvent5_WdError(v10);
  }
  return v3;
}
