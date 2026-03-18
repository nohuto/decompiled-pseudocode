/*
 * XREFs of IopPnPDispatch @ 0x14055D5D4
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     IopPnPCompleteRequest @ 0x140131E2C (IopPnPCompleteRequest.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14045D048 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiGetDeviceRegProperty @ 0x1404E3234 (PiGetDeviceRegProperty.c)
 *     IopGetRootDevices @ 0x1404E7140 (IopGetRootDevices.c)
 */

__int64 __fastcall IopPnPDispatch(_QWORD *Object, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  WCHAR *Information; // rdi
  unsigned int MinorFunction; // r8d
  WCHAR *PoolWithTag; // rax
  WCHAR *v8; // rbx
  NTSTATUS RootDevices; // ebx
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  PIO_SECURITY_CONTEXT SecurityContext; // rbx
  __int64 v16; // rdx
  GUID *v17; // rcx
  GUID *v18; // rcx
  LARGE_INTEGER ByteOffset; // rax
  __int64 v20; // r13
  int Length; // eax
  __int64 v22; // rdx
  WCHAR *v23; // r12
  WCHAR *v24; // rcx
  unsigned int v25; // r8d
  WCHAR *v26; // rdx
  WCHAR v27; // ax
  LARGE_INTEGER v28; // rdx
  void *v29; // rax
  wchar_t *v30; // rax
  _WORD *v31; // r12
  int v32; // r13d
  __int16 *v33; // rcx
  __int16 v34; // ax
  __int64 v35; // rbx
  __int64 v36; // rdx
  int v37; // edx
  char v38; // r8
  int v39[2]; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  int v41; // [rsp+A0h] [rbp+50h] BYREF
  int v42; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_QWORD *)v39 = 0LL;
  Information = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 9 )
  {
    if ( MinorFunction == 9 )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      v16 = *(_QWORD *)(Object[39] + 40LL);
      LODWORD(SecurityContext->SecurityQos) = 65600;
      if ( Object == *(_QWORD **)(IopRootDeviceNode + 32) )
      {
        HIDWORD(SecurityContext->SecurityQos) |= 0x1C0u;
        HIDWORD(SecurityContext->AccessState) = 0;
      }
      SecurityContext->DesiredAccess = 0;
      SecurityContext->FullCreateOptions = 1;
      SecurityContext[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
      SecurityContext[1].AccessState = (PACCESS_STATE)0x400000004LL;
      SecurityContext[1].DesiredAccess = 4;
      if ( HIDWORD(SecurityContext->AccessState) == -1 )
      {
        LODWORD(NumberOfBytes) = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(v16 + 48),
                    0LL,
                    17,
                    (__int64)&v41,
                    (__int64)&v42,
                    (__int64)&NumberOfBytes) >= 0
          && v41 == 4
          && (_DWORD)NumberOfBytes == 4 )
        {
          HIDWORD(SecurityContext->AccessState) = v42;
        }
      }
      goto LABEL_10;
    }
    if ( CurrentStackLocation->MinorFunction < 4u )
    {
LABEL_10:
      RootDevices = 0;
      goto LABEL_11;
    }
    if ( CurrentStackLocation->MinorFunction > 5u )
    {
      if ( MinorFunction == 7 )
      {
        if ( Object == *(_QWORD **)(IopRootDeviceNode + 32) && !CurrentStackLocation->Parameters.Read.Length )
        {
          RootDevices = IopGetRootDevices(v39);
LABEL_55:
          Information = *(WCHAR **)v39;
          goto LABEL_11;
        }
        if ( CurrentStackLocation->Parameters.Read.Length == 4 )
        {
          PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x64647050u);
          v8 = PoolWithTag;
          if ( PoolWithTag )
          {
            *(_DWORD *)PoolWithTag = 1;
            *((_QWORD *)PoolWithTag + 1) = Object;
            ObfReferenceObject(Object);
            Information = v8;
            goto LABEL_10;
          }
LABEL_71:
          RootDevices = -1073741670;
          goto LABEL_11;
        }
LABEL_17:
        Information = (WCHAR *)a2->IoStatus.Information;
        RootDevices = a2->IoStatus.Status;
        goto LABEL_11;
      }
      if ( MinorFunction == 6 )
        goto LABEL_10;
      if ( MinorFunction != 8 )
        goto LABEL_17;
      RootDevices = a2->IoStatus.Status;
      if ( *(_QWORD *)(Object[39] + 40LL) != IopRootDeviceNode )
        goto LABEL_11;
      v17 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v17 != &GUID_ARBITER_INTERFACE_STANDARD
        && RtlCompareMemory(v17, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
      {
        v18 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( v18 == &GUID_TRANSLATOR_INTERFACE_STANDARD
          || RtlCompareMemory(v18, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
        {
          ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
          *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
          *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
          goto LABEL_10;
        }
        goto LABEL_11;
      }
      v28 = CurrentStackLocation->Parameters.Read.ByteOffset;
      RootDevices = 0;
      *(_QWORD *)(v28.QuadPart + 32) = ArbArbiterHandler;
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 1 )
      {
        v29 = &IopRootPortArbiter;
        goto LABEL_64;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 2 )
      {
        v29 = &IopRootIrqArbiter;
        goto LABEL_64;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 3 )
      {
        if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 4 )
        {
          v29 = &IopRootDmaArbiter;
LABEL_64:
          *(_QWORD *)(v28.QuadPart + 8) = v29;
          goto LABEL_11;
        }
        if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 6 )
        {
          v29 = &IopRootBusNumberArbiter;
          goto LABEL_64;
        }
        if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 7 )
        {
          RootDevices = -1073741811;
          goto LABEL_11;
        }
      }
      v29 = &IopRootMemArbiter;
      goto LABEL_64;
    }
LABEL_72:
    RootDevices = -1073741823;
    goto LABEL_11;
  }
  v11 = MinorFunction - 10;
  if ( !v11 )
  {
    v37 = 0;
    v38 = 4;
LABEL_110:
    RootDevices = PnpGetDeviceResourcesFromRegistry((__int64)Object, v37, v38, (void **)v39, &NumberOfBytes);
    if ( RootDevices != -1073741772 )
      goto LABEL_55;
    goto LABEL_10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v37 = 1;
    v38 = 2;
    goto LABEL_110;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 7;
    if ( v14 )
    {
      if ( v14 == 3 )
        goto LABEL_10;
      goto LABEL_17;
    }
    if ( Object == *(_QWORD **)(IopRootDeviceNode + 32) )
      goto LABEL_17;
    RootDevices = a2->IoStatus.Status;
    if ( RootDevices >= 0 )
    {
      if ( a2->IoStatus.Information )
        goto LABEL_17;
    }
    v20 = *(_QWORD *)(Object[39] + 40LL);
    Length = CurrentStackLocation->Parameters.Read.Length;
    *(_QWORD *)v39 = v20;
    if ( Length )
    {
      if ( Length <= 0 )
        goto LABEL_83;
      if ( Length <= 2 )
      {
        if ( RootDevices == -1073741637 )
        {
          LODWORD(NumberOfBytes) = 0;
          RootDevices = PiGetDeviceRegProperty(
                          *(_QWORD *)(v20 + 48),
                          (__int64)a2,
                          7,
                          (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                          0LL,
                          (PULONG)&NumberOfBytes);
          if ( RootDevices == -1073741789 )
          {
            v23 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
            if ( v23 )
            {
              RootDevices = PiGetDeviceRegProperty(
                              *(_QWORD *)(v20 + 48),
                              v22,
                              7,
                              (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                              v23,
                              (PULONG)&NumberOfBytes);
              v24 = v23;
              if ( RootDevices < 0 )
              {
                ExFreePoolWithTag(v23, 0);
              }
              else
              {
                v25 = NumberOfBytes;
                v26 = 0LL;
                if ( v23 < &v23[(unsigned __int64)(unsigned int)NumberOfBytes >> 1] )
                {
                  do
                  {
                    v27 = *v24;
                    if ( *v24 )
                    {
                      if ( v27 < 0x20u || v27 > 0x7Fu || v27 == 44 )
                      {
                        *v24 = 63;
                        v25 = NumberOfBytes;
                      }
                    }
                    else
                    {
                      if ( v26 && v24 == v26 + 1 )
                        break;
                      v26 = v24;
                    }
                    ++v24;
                  }
                  while ( v24 < &v23[(unsigned __int64)v25 >> 1] );
                }
                Information = v23;
              }
            }
            else
            {
              RootDevices = -1073741670;
            }
          }
          if ( RootDevices == -1073741275 )
          {
            Information = (WCHAR *)a2->IoStatus.Information;
            RootDevices = a2->IoStatus.Status;
          }
        }
        goto LABEL_11;
      }
      if ( Length != 3 )
      {
        if ( Length == 5 )
        {
          v30 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x64647050u);
          if ( v30 )
          {
            Information = v30;
            wcscpy(v30, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
            goto LABEL_10;
          }
          goto LABEL_71;
        }
LABEL_83:
        Information = (WCHAR *)a2->IoStatus.Information;
        goto LABEL_11;
      }
    }
    v31 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(v20 + 40), 0x64647050u);
    if ( !v31 )
      goto LABEL_71;
    v32 = 0;
    memset(v31, 0, *(unsigned __int16 *)(*(_QWORD *)v39 + 40LL));
    Information = v31;
    RootDevices = 0;
    v33 = *(__int16 **)(*(_QWORD *)v39 + 48LL);
    v34 = *v33;
    if ( CurrentStackLocation->Parameters.Read.Length )
    {
      if ( v34 )
      {
        while ( v34 != 92 || ++v32 != 2 )
        {
          v34 = *++v33;
          if ( !*v33 )
            goto LABEL_98;
        }
        ++v33;
LABEL_98:
        while ( *v33 )
          *v31++ = *v33++;
      }
    }
    else
    {
      while ( v34 )
      {
        if ( v34 == 92 && ++v32 == 2 )
          break;
        *v31++ = v34;
        v34 = *++v33;
      }
    }
  }
  else
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 1 || a2->IoStatus.Information )
      goto LABEL_17;
    v35 = *(_QWORD *)(Object[39] + 40LL);
    LODWORD(NumberOfBytes) = 0;
    PiGetDeviceRegProperty(*(_QWORD *)(v35 + 48), (__int64)a2, 1, 14, 0LL, (PULONG)&NumberOfBytes);
    if ( !(_DWORD)NumberOfBytes )
      goto LABEL_72;
    Information = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
    if ( !Information )
      goto LABEL_71;
    RootDevices = PiGetDeviceRegProperty(*(_QWORD *)(v35 + 48), v36, 1, 14, Information, (PULONG)&NumberOfBytes);
    if ( RootDevices < 0 )
    {
      if ( RootDevices == -1073741275 )
        RootDevices = -1073741772;
      ExFreePoolWithTag(Information, 0);
      Information = 0LL;
    }
  }
LABEL_11:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
