/*
 * XREFs of WmipAllocateSingleInstanceWnode @ 0x14069D2AC
 * Callers:
 *     IoWMIExecuteMethod @ 0x14069CAD0 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x14069CDD4 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x14069CEDC (IoWMISetSingleItem.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipAllocateSingleInstanceWnode(
        unsigned int a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        _QWORD *a7)
{
  unsigned int v8; // edi
  unsigned int v9; // r10d
  unsigned int v10; // edx
  unsigned int v11; // r12d
  unsigned int v12; // r10d
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  unsigned int v15; // ebx
  PVOID PoolWithTag; // rax
  PVOID v17; // rsi

  v8 = -1073741670;
  if ( a1 + 1 >= a1 )
  {
    v9 = (a1 + 1) & 0xFFFFFFFE;
    v10 = *a2 + 2;
    v11 = v9;
    if ( v10 <= -1 - v9 )
    {
      v12 = v10 + v9;
      if ( v12 + 7 >= v12 )
      {
        v13 = (v12 + 7) & 0xFFFFFFF8;
        v14 = v13;
        if ( a3 <= -1 - v13 )
        {
          v15 = a3 + v13;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x70696D57u);
          v17 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v15);
            v8 = 0;
            *a4 = v11;
            *a5 = v14;
            *a6 = v15;
            *a7 = v17;
          }
        }
      }
    }
  }
  return v8;
}
