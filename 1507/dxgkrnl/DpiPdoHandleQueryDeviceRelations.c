/*
 * XREFs of DpiPdoHandleQueryDeviceRelations @ 0x1C00B0D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoHandleQueryDeviceRelations(PVOID Object, __int64 a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  _QWORD *v9; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = Object;
      ObfReferenceObject(Object);
      v7 = 0;
      *(_QWORD *)(a2 + 56) = v6;
    }
    else
    {
      v7 = -1073741801;
      v9 = (_QWORD *)WdLogNewEntry5_WdLowResource(v5);
      v9[3] = DpiPdoHandleQueryDeviceRelations;
      v9[4] = ExAllocatePoolWithTag;
      v9[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v9);
    }
  }
  else
  {
    return *(unsigned int *)(a2 + 48);
  }
  return v7;
}
