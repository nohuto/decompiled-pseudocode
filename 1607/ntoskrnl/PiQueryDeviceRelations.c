/*
 * XREFs of PiQueryDeviceRelations @ 0x14064B190
 * Callers:
 *     PiControlQueryDeviceRelations @ 0x14064ABA0 (PiControlQueryDeviceRelations.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpQueryDeviceRelations @ 0x1403F0A08 (PnpQueryDeviceRelations.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiQueryDeviceRelations(__int64 a1, int a2, int *a3, _WORD *a4)
{
  unsigned int v4; // ebp
  int v8; // ebx
  int v9; // r12d
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v14; // edi
  _QWORD *v15; // rax
  void *v16; // r14
  __int64 v17; // rsi
  _QWORD *v18; // rax
  unsigned int v19; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v21; // rdx
  __int64 **i; // rsi
  __int64 v23; // rdx
  int DeviceRelations; // eax
  unsigned int v25; // esi
  __int64 v26; // rdi
  _WORD *v27; // r15
  PVOID v28; // rcx
  int v29; // eax
  PVOID P[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  P[0] = 0LL;
  v8 = 0;
  v9 = 0;
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            return 3221225485LL;
          v14 = 6;
        }
        else
        {
          v14 = 0;
        }
      }
      else
      {
        v14 = 2;
      }
    }
    else
    {
      v14 = 3;
    }
  }
  else
  {
    v14 = 1;
  }
  PpDevNodeLockTree(0);
  v15 = PnpDeviceObjectFromDeviceInstance(a1);
  v16 = v15;
  if ( v15 && (v17 = *(_QWORD *)(v15[39] + 40LL), (unsigned int)(*(_DWORD *)(v17 + 300) - 787) > 1) )
  {
    if ( v14 )
    {
      DeviceRelations = PnpQueryDeviceRelations((__int64)v15, v14, 0LL, (__int64)P);
      v21 = P[0];
      v8 = DeviceRelations;
      if ( DeviceRelations < 0 )
        v21 = 0LL;
      P[0] = v21;
    }
    else
    {
      v18 = *(_QWORD **)(v17 + 8);
      v19 = 0;
      while ( v18 )
      {
        v18 = (_QWORD *)*v18;
        ++v19;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v19 + 16, 0x20207050u);
      P[0] = PoolWithTag;
      v21 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v19;
        for ( i = *(__int64 ***)(v17 + 8); i && v4 < v19; i = (__int64 **)*i )
        {
          ObfReferenceObject(i[4]);
          v23 = v4++;
          *((_QWORD *)P[0] + v23 + 1) = i[4];
        }
        v21 = P[0];
      }
      else
      {
        v8 = -1073741670;
      }
    }
    if ( v21 && *v21 )
    {
      v9 = 2;
      v25 = 0;
      do
      {
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v21[2 * v25 + 2] + 312LL) + 40LL);
        if ( v26 )
        {
          if ( a4 )
          {
            if ( (unsigned int)*a3 < (unsigned __int64)(v9 + (unsigned int)*(unsigned __int16 *)(v26 + 40)) + 2 )
            {
              v8 = -1073741789;
              goto LABEL_41;
            }
            memmove(a4, *(const void **)(v26 + 48), *(unsigned __int16 *)(v26 + 40));
            v27 = &a4[(unsigned __int64)*(unsigned __int16 *)(v26 + 40) >> 1];
            *v27 = 0;
            a4 = v27 + 1;
            v21 = P[0];
          }
          v9 += *(unsigned __int16 *)(v26 + 40) + 2;
        }
        ObfDereferenceObject(*(PVOID *)&v21[2 * v25 + 2]);
        v21 = P[0];
        ++v25;
      }
      while ( v25 < *(_DWORD *)P[0] );
      if ( a4 )
        *a4 = 0;
    }
  }
  else
  {
    v8 = -1073741810;
  }
LABEL_41:
  PpDevNodeUnlockTree(0);
  v28 = P[0];
  v29 = 0;
  if ( v8 >= 0 )
    v29 = v9;
  *a3 = v29;
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  if ( v16 )
    ObfDereferenceObject(v16);
  return (unsigned int)v8;
}
