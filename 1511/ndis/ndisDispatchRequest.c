/*
 * XREFs of ndisDispatchRequest @ 0x1C0094420
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0004A28 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C003FC24 (ndisIfDereferenceCompartmentForUser.c)
 *     ndisCheckAccess @ 0x1C009431C (ndisCheckAccess.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDriverSystemDispatch @ 0x1C00AC9A4 (ndisDriverSystemDispatch.c)
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v4; // ebx
  __int64 v6; // rdx
  unsigned int v7; // eax
  BOOLEAN *PoolWithTag; // rax
  BOOLEAN *v10; // rsi
  void *FsContext; // rsi
  unsigned int *v12; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  a2->IoStatus.Status = 259;
  a2->IoStatus.Information = 0LL;
  ndisReferencePackage(&ndisPkgs);
  if ( CurrentStackLocation->MajorFunction )
  {
    switch ( CurrentStackLocation->MajorFunction )
    {
      case 2u:
LABEL_7:
        a2->IoStatus.Status = v4;
        IofCompleteRequest(a2, 2);
        goto LABEL_8;
      case 0xEu:
        v7 = ndisHandlePnPRequest(a2);
        break;
      case 0xFu:
        goto LABEL_7;
      case 0x12u:
        FsContext = CurrentStackLocation->FileObject->FsContext;
        ndisNicActiveHandleCleanup(
          (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
          v6,
          (unsigned int)CurrentStackLocation->MajorFunction - 18);
        v12 = (unsigned int *)*((_QWORD *)FsContext + 6);
        if ( v12 )
        {
          ndisIfDereferenceCompartmentForUser(v12);
          *((_QWORD *)FsContext + 6) = 0LL;
        }
        CurrentStackLocation->FileObject->FsContext = 0LL;
        ExFreePoolWithTag(FsContext, 0);
        _InterlockedDecrement(&dword_1C0083868);
        goto LABEL_7;
      case 0x17u:
        v7 = ndisDriverSystemDispatch(a1, a2);
        break;
      default:
        v4 = -1073741822;
        goto LABEL_7;
    }
    v4 = v7;
  }
  else
  {
    PoolWithTag = (BOOLEAN *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x636F444Eu);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_7;
    }
    memset(PoolWithTag, 0, 0x38uLL);
    *v10 = ndisCheckAccess((__int64)a2, (__int64)CurrentStackLocation, ndisSecurityDescriptor);
    v10[1] = ndisCheckAccess((__int64)a2, (__int64)CurrentStackLocation, &ndisPnpSecurityDescriptor);
    CurrentStackLocation->FileObject->FsContext = v10;
    _InterlockedIncrement(&dword_1C0083868);
  }
  if ( v4 != 259 )
    goto LABEL_7;
LABEL_8:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
