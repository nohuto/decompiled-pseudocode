/*
 * XREFs of DpiPdoHandleQueryDeviceRelations @ 0x1C00C51B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoHandleQueryDeviceRelations(PVOID Object, __int64 a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rsi
  unsigned int v10; // ebx
  _QWORD *v12; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = Object;
      ObfReferenceObject(Object);
      v10 = 0;
      *(_QWORD *)(a2 + 56) = v9;
    }
    else
    {
      v10 = -1073741801;
      v12 = (_QWORD *)WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
      v12[3] = DpiPdoHandleQueryDeviceRelations;
      v12[4] = ExAllocatePoolWithTag;
      v12[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v12);
    }
  }
  else
  {
    return *(unsigned int *)(a2 + 48);
  }
  return v10;
}
