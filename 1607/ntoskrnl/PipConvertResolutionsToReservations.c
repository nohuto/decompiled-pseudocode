/*
 * XREFs of PipConvertResolutionsToReservations @ 0x14062B088
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404837DC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipDeleteAllDependencyRelations @ 0x14062B12C (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x14062B294 (PipDeleteBindingIds.c)
 *     PipSetDependency @ 0x14062B648 (PipSetDependency.c)
 */

__int64 __fastcall PipConvertResolutionsToReservations(__int64 a1)
{
  unsigned int v2; // ebp
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdx
  _DWORD *v8; // rdx
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  if ( a1 )
  {
    v2 = 0;
    PipDeleteBindingIds();
    v3 = (_QWORD *)(a1 + 32);
    v4 = *(_QWORD **)(a1 + 32);
    while ( v4 != v3 )
    {
      v5 = v4 - 2;
      v4 = (_QWORD *)*v4;
      if ( !*((_BYTE *)v5 + 72) )
      {
        v6 = (_QWORD *)v5[7];
        while ( v6 != v5 + 7 )
        {
          v7 = v6;
          v6 = (_QWORD *)*v6;
          v8 = v7 + 2;
          if ( *v8 == 1 )
          {
            v9 = v5[5];
            v11 = 0;
            v12 = *(_QWORD *)(v9 + 48);
            v2 = PipSetDependency(&v11, v8);
          }
        }
        *((_BYTE *)v5 + 72) = 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
