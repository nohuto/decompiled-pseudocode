/*
 * XREFs of PiQueryDeviceRelations @ 0x140695374
 * Callers:
 *     PiControlQueryDeviceRelations @ 0x140694D0C (PiControlQueryDeviceRelations.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpQueryDeviceRelations @ 0x140461830 (PnpQueryDeviceRelations.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  void *v19; // r14
  __int64 v20; // rsi
  _QWORD *v21; // rax
  unsigned int v22; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v24; // rdx
  __int64 **i; // rsi
  __int64 v26; // rdx
  int DeviceRelations; // eax
  unsigned int v28; // esi
  __int64 v29; // rdi
  _WORD *v30; // r15
  PVOID v31; // rcx
  int v32; // eax
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
  v18 = PnpDeviceObjectFromDeviceInstance(a1, v15, v16, v17);
  v19 = v18;
  if ( v18 && (v20 = *(_QWORD *)(v18[39] + 40LL), (unsigned int)(*(_DWORD *)(v20 + 300) - 787) > 1) )
  {
    if ( v14 )
    {
      DeviceRelations = PnpQueryDeviceRelations((__int64)v18, v14, 0LL, (__int64)P);
      v24 = P[0];
      v8 = DeviceRelations;
      if ( DeviceRelations < 0 )
        v24 = 0LL;
      P[0] = v24;
    }
    else
    {
      v21 = *(_QWORD **)(v20 + 8);
      v22 = 0;
      while ( v21 )
      {
        v21 = (_QWORD *)*v21;
        ++v22;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v22 + 16, 0x20207050u);
      P[0] = PoolWithTag;
      v24 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v22;
        for ( i = *(__int64 ***)(v20 + 8); i && v4 < v22; i = (__int64 **)*i )
        {
          ObfReferenceObject(i[4]);
          v26 = v4++;
          *((_QWORD *)P[0] + v26 + 1) = i[4];
        }
        v24 = P[0];
      }
      else
      {
        v8 = -1073741670;
      }
    }
    if ( v24 && *v24 )
    {
      v9 = 2;
      v28 = 0;
      do
      {
        v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v24[2 * v28 + 2] + 312LL) + 40LL);
        if ( v29 )
        {
          if ( a4 )
          {
            if ( (unsigned int)*a3 < (unsigned __int64)(v9 + (unsigned int)*(unsigned __int16 *)(v29 + 40)) + 2 )
            {
              v8 = -1073741789;
              goto LABEL_41;
            }
            memmove(a4, *(const void **)(v29 + 48), *(unsigned __int16 *)(v29 + 40));
            v30 = &a4[(unsigned __int64)*(unsigned __int16 *)(v29 + 40) >> 1];
            *v30 = 0;
            a4 = v30 + 1;
            v24 = P[0];
          }
          v9 += *(unsigned __int16 *)(v29 + 40) + 2;
        }
        ObfDereferenceObject(*(PVOID *)&v24[2 * v28 + 2]);
        v24 = P[0];
        ++v28;
      }
      while ( v28 < *(_DWORD *)P[0] );
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
  v31 = P[0];
  v32 = 0;
  if ( v8 >= 0 )
    v32 = v9;
  *a3 = v32;
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  if ( v19 )
    ObfDereferenceObject(v19);
  return (unsigned int)v8;
}
