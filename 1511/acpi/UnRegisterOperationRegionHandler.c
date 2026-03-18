/*
 * XREFs of UnRegisterOperationRegionHandler @ 0x1C007C56C
 * Callers:
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1C003D5F8 (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C007A254 (ACPIEcRemoveOpRegionHandler.c)
 *     DeRegisterOpRegionHandler @ 0x1C007C4E0 (DeRegisterOpRegionHandler.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIRegEventHandler @ 0x1C0004B14 (AMLIRegEventHandler.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000E05C (AMLIGetNameSpaceObject.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C001892C (EnableDisableDeviceTreeRegionSpace.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall UnRegisterOperationRegionHandler(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  char v7; // di
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 **v13; // rdx
  _QWORD v15[10]; // [rsp+20h] [rbp-68h] BYREF

  ExAcquireFastMutex(&AcpiOpRegionLock);
  v4 = (__int64 *)AcpiOpRegionHandlerList;
  if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList )
    goto LABEL_27;
  do
  {
    if ( v4 == a2 )
      break;
    v4 = (__int64 *)*v4;
  }
  while ( v4 != &AcpiOpRegionHandlerList );
  if ( v4 == &AcpiOpRegionHandlerList )
  {
LABEL_27:
    v5 = -1073741584;
    goto LABEL_28;
  }
  if ( *((_BYTE *)a2 + 40) )
  {
    v5 = -1073741738;
LABEL_28:
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return v5;
  }
  v6 = a2[1];
  v7 = 0;
  *((_BYTE *)a2 + 40) = 1;
  if ( ((__int64 *)v6 == &AcpiOpRegionHandlerList || *(_DWORD *)(v6 + 36) != *((_DWORD *)a2 + 9))
    && ((__int64 *)*a2 == &AcpiOpRegionHandlerList || *(_DWORD *)(*a2 + 36) != *((_DWORD *)a2 + 9)) )
  {
    v8 = *((_DWORD *)a2 + 9);
    if ( v8 < 0x1F )
    {
      AcpiRegisteredOpRegionMask &= ~(1 << v8);
    }
    else if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList
           || *(_DWORD *)(qword_1C0059608 + 36) < 0x1Fu )
    {
      AcpiRegisteredOpRegionMask &= ~0x80000000;
    }
  }
  else
  {
    v7 = 1;
  }
  ExReleaseFastMutex(&AcpiOpRegionLock);
  if ( !v7 )
  {
    v9 = *((_DWORD *)a2 + 9);
    if ( v9 - 8 > 1 )
    {
      if ( a1 && (int)AMLIGetNameSpaceObject("_REG") >= 0 )
      {
        memset(v15, 0, sizeof(v15));
        v10 = *((unsigned int *)a2 + 9);
        v15[7] = 0LL;
        WORD1(v15[0]) = 1;
        v15[2] = v10;
        WORD1(v15[5]) = 1;
        AMLIEvalNameSpaceObject(0LL, 0LL, 2u, v15);
        AMLIDereferenceHandleEx(0LL);
      }
    }
    else
    {
      EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v9, 0LL);
    }
  }
  v11 = (unsigned int)AMLIRegEventHandler(*((_DWORD *)a2 + 8), *((_DWORD *)a2 + 9), 0LL, 0LL) != 0 ? 0xC0000001 : 0;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  v12 = *a2;
  v13 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v13 != a2 )
    __fastfail(3u);
  *v13 = (__int64 *)v12;
  *(_QWORD *)(v12 + 8) = v13;
  a2[1] = (__int64)a2;
  *a2 = (__int64)a2;
  ExReleaseFastMutex(&AcpiOpRegionLock);
  ExFreePoolWithTag(a2, 0);
  return v11;
}
