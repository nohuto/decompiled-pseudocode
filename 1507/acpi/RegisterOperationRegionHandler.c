/*
 * XREFs of RegisterOperationRegionHandler @ 0x1C0065B00
 * Callers:
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C0004540 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0006480 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C007A0C4 (ACPIEcInstallOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C007C330 (RegisterOpRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C0084000 (OSInitializeCallbacks.c)
 * Callees:
 *     AMLIRegEventHandler @ 0x1C0004604 (AMLIRegEventHandler.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0018924 (EnableDisableDeviceTreeRegionSpace.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall RegisterOperationRegionHandler(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int **a6)
{
  __int64 v8; // rsi
  int v9; // edx
  int v10; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v12; // rbx
  __int64 v13; // r15
  int v14; // edi
  __int64 v15; // rdi
  __int64 i; // rax
  unsigned int v17; // ecx
  unsigned int **v18; // rcx
  unsigned int *v19; // rax
  int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // edx
  int v24; // eax
  _QWORD v25[10]; // [rsp+40h] [rbp-68h] BYREF

  v8 = a3;
  *a6 = 0LL;
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 3221225712LL;
    v10 = 6;
  }
  else
  {
    v10 = 7;
  }
  if ( a3 > 9 && a3 - 128 > 0x7F )
    return 3221225713LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x4F706341u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
  *(_QWORD *)PoolWithTag = PoolWithTag;
  *((_QWORD *)PoolWithTag + 2) = a4;
  *((_QWORD *)PoolWithTag + 3) = a5;
  PoolWithTag[8] = v10;
  PoolWithTag[9] = v8;
  *((_BYTE *)PoolWithTag + 40) = 0;
  if ( v10 == 6 )
  {
    v13 = v8;
    v24 = AMLIRegEventHandler(6u, v8, InternalOpRegionHandler, PoolWithTag);
    if ( v24 )
      v24 = -1073741823;
    v14 = v24;
  }
  else
  {
    v13 = v8;
    v14 = AMLIRegEventHandler(7u, v8, InternalRawAccessOpRegionHandler, PoolWithTag);
    if ( v14 )
      v14 = -1073741823;
  }
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    return (unsigned int)v14;
  }
  else
  {
    *a6 = v12;
    v15 = 0LL;
    ExAcquireFastMutex(&AcpiOpRegionLock);
    for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
    {
      v17 = *(_DWORD *)(i + 36);
      v15 = i;
      if ( v17 >= (unsigned int)v8 && (v17 != (_DWORD)v8 || *(_DWORD *)(i + 32) == v10) )
        break;
    }
    v18 = *(unsigned int ***)(i + 8);
    v19 = *v18;
    *(_QWORD *)v12 = *v18;
    *((_QWORD *)v12 + 1) = v18;
    if ( *((unsigned int ***)v19 + 1) != v18 )
      __fastfail(3u);
    *((_QWORD *)v19 + 1) = v12;
    *v18 = v12;
    if ( v15 && *(_DWORD *)(v15 + 36) == (_DWORD)v8 )
    {
      ExReleaseFastMutex(&AcpiOpRegionLock);
    }
    else
    {
      if ( (unsigned int)v8 >= 0x1F )
        v20 = 0x80000000;
      else
        v20 = 1 << v8;
      AcpiRegisteredOpRegionMask |= v20;
      ExReleaseFastMutex(&AcpiOpRegionLock);
      v22 = v12[9];
      if ( v22 - 8 <= 1 )
      {
        LOBYTE(v21) = 1;
        EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v22, v21);
      }
      else if ( a1 )
      {
        if ( (int)AMLIGetNameSpaceObject("_REG") >= 0 )
        {
          memset(v25, 0, sizeof(v25));
          WORD1(v25[0]) = 1;
          v25[2] = v13;
          WORD1(v25[5]) = 1;
          v25[7] = 1LL;
          AMLIAsyncEvalObject(0LL, 0LL, 2u, v25, 0LL, 0LL);
          AMLIDereferenceHandleEx(0LL);
        }
      }
    }
    return 0LL;
  }
}
