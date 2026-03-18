/*
 * XREFs of UsbhFdoGetMsDescriptorPdo @ 0x1C0029164
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     memmove @ 0x1C00295C0 (memmove.c)
 */

__int64 __fastcall UsbhFdoGetMsDescriptorPdo(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  PDEVICE_OBJECT *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // esi
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v21; // rcx
  unsigned __int16 *v22; // rdx
  unsigned int AccessState_high; // ebx
  __int64 v24; // r8
  __int64 v25; // r9

  v6 = (PDEVICE_OBJECT *)FdoExt(a1, a2, (__int64)a3, a4);
  v10 = PdoExt(a2, v7, v8, v9);
  v11 = v10;
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( WORD2(SecurityContext[5].AccessState) == 7 )
  {
    if ( (v10[700] & 2) == 0 )
    {
      HIDWORD(SecurityContext->SecurityQos) = -1073738240;
      a3->IoStatus.Status = -1073741637;
      IofCompleteRequest(a3, 0);
      UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v13, v14);
      return 3221225659LL;
    }
    SecurityQos = SecurityContext[2].SecurityQos;
    v19 = 0;
    if ( SecurityQos )
    {
      if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
        v21 = *(PVOID *)&SecurityQos[2].Length;
      else
        v21 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
    }
    else
    {
      v21 = *(PVOID *)&SecurityContext[1].DesiredAccess;
    }
    if ( v21 )
    {
      v22 = (unsigned __int16 *)*((_QWORD *)v11 + 352);
      AccessState_high = HIDWORD(SecurityContext[1].AccessState);
      if ( v22[4] < AccessState_high )
        AccessState_high = v22[4];
      memmove(v21, v22, AccessState_high);
      HIDWORD(SecurityContext[1].AccessState) = AccessState_high;
      HIDWORD(SecurityContext->SecurityQos) = 0;
    }
    else
    {
      v19 = -1073741811;
      HIDWORD(SecurityContext->SecurityQos) = -2147482880;
    }
    a3->IoStatus.Status = v19;
    IofCompleteRequest(a3, 0);
    goto LABEL_19;
  }
  v16 = v10[356];
  if ( (v16 & 0x400) != 0 )
  {
    BYTE1(SecurityContext[5].AccessState) = v16;
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v19 = IofCallDriver(v6[152], a3);
LABEL_19:
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v24, v25);
    return v19;
  }
  HIDWORD(SecurityContext->SecurityQos) = -1073738240;
  a3->IoStatus.Status = -1073741637;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3, v17, v18);
  return (unsigned int)-1073741637;
}
