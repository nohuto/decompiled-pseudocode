/*
 * XREFs of UnRegisterOperationRegionHandler @ 0x1C009D98C
 * Callers:
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1C0050DC0 (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C009AFE4 (ACPIEcRemoveOpRegionHandler.c)
 *     DeRegisterOpRegionHandler @ 0x1C009D900 (DeRegisterOpRegionHandler.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002056C (EnableDisableDeviceTreeRegionSpace.c)
 *     AMLIRegEventHandler @ 0x1C00228D4 (AMLIRegEventHandler.c)
 *     memset @ 0x1C002C1C0 (memset.c)
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
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 **v14; // rdx
  _QWORD v16[10]; // [rsp+20h] [rbp-68h] BYREF

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
           || *(_DWORD *)(qword_1C00739E8 + 36) < 0x1Fu )
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
        memset(v16, 0, sizeof(v16));
        v10 = *((unsigned int *)a2 + 9);
        v16[7] = 0LL;
        WORD1(v16[0]) = 1;
        v16[2] = v10;
        WORD1(v16[5]) = 1;
        AMLIEvalNameSpaceObject(0LL, 0LL, 2u, v16);
        AMLIDereferenceHandleEx(0LL, v11);
      }
    }
    else
    {
      EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v9, 0LL);
    }
  }
  v12 = (unsigned int)AMLIRegEventHandler(*((_DWORD *)a2 + 8), *((_DWORD *)a2 + 9), 0LL, 0LL) != 0 ? 0xC0000001 : 0;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  v13 = *a2;
  v14 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v14 != a2 )
    __fastfail(3u);
  *v14 = (__int64 *)v13;
  *(_QWORD *)(v13 + 8) = v14;
  a2[1] = (__int64)a2;
  *a2 = (__int64)a2;
  ExReleaseFastMutex(&AcpiOpRegionLock);
  ExFreePoolWithTag(a2, 0);
  return v12;
}
