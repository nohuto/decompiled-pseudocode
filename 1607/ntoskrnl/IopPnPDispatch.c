/*
 * XREFs of IopPnPDispatch @ 0x1404C9D24
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x140085F2C (IoInvalidateDeviceRelations.c)
 *     IopPnPCompleteRequest @ 0x1400AEE68 (IopPnPCompleteRequest.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiGetDeviceRegProperty @ 0x1404DC820 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14050F164 (PnpGetDeviceResourcesFromRegistry.c)
 *     IopGetRootDevices @ 0x14051604C (IopGetRootDevices.c)
 */

__int64 __fastcall IopPnPDispatch(PVOID Object, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  PVOID Information; // rdi
  unsigned int MinorFunction; // r8d
  NTSTATUS RootDevices; // ebx
  _QWORD *PoolWithTag; // rax
  PVOID v9; // rbx
  GUID *SecurityContext; // rcx
  GUID *v11; // rcx
  LARGE_INTEGER ByteOffset; // rax
  LARGE_INTEGER v13; // rdx
  void *v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  __int64 v20; // r13
  int Length; // eax
  _OWORD *v22; // rax
  int v23; // edx
  char *Src; // r12
  char *v25; // rcx
  unsigned int v26; // r8d
  char *v27; // rdx
  unsigned __int16 v28; // ax
  _WORD *v29; // r12
  int v30; // r13d
  __int16 *v31; // rcx
  __int16 v32; // ax
  __int64 v33; // rbx
  int v34; // edx
  int v35; // edx
  int v36; // r8d
  PIO_SECURITY_CONTEXT v37; // rbx
  __int64 v38; // rdx
  int v40[2]; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  int v42; // [rsp+A0h] [rbp+50h] BYREF
  int v43; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_QWORD *)v40 = 0LL;
  Information = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 8 )
  {
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction < 2 )
        goto LABEL_111;
      if ( MinorFunction == 2 )
      {
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(IopRootDeviceNode + 32), SingleBusRelations);
        goto LABEL_111;
      }
      if ( MinorFunction == 3 )
      {
LABEL_111:
        RootDevices = 0;
        goto LABEL_112;
      }
      if ( CurrentStackLocation->MinorFunction > 5u )
      {
        if ( MinorFunction != 6 )
        {
          if ( MinorFunction == 7 )
          {
            if ( Object == *(PVOID *)(IopRootDeviceNode + 32) && !CurrentStackLocation->Parameters.Read.Length )
            {
              RootDevices = IopGetRootDevices(v40);
LABEL_12:
              Information = *(PVOID *)v40;
              goto LABEL_112;
            }
            if ( CurrentStackLocation->Parameters.Read.Length == 4 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x64647050u);
              v9 = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_15:
                RootDevices = -1073741670;
                goto LABEL_112;
              }
              *(_DWORD *)PoolWithTag = 1;
              PoolWithTag[1] = Object;
              ObfReferenceObject(Object);
              Information = v9;
LABEL_25:
              RootDevices = 0;
              goto LABEL_112;
            }
          }
LABEL_45:
          Information = (PVOID)a2->IoStatus.Information;
          RootDevices = a2->IoStatus.Status;
          goto LABEL_112;
        }
        goto LABEL_111;
      }
LABEL_17:
      RootDevices = -1073741823;
      goto LABEL_112;
    }
    RootDevices = a2->IoStatus.Status;
    if ( *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL) != IopRootDeviceNode )
      goto LABEL_112;
    SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      v11 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v11 == &GUID_TRANSLATOR_INTERFACE_STANDARD
        || RtlCompareMemory(v11, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
        *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
        *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
        goto LABEL_25;
      }
      goto LABEL_112;
    }
    v13 = CurrentStackLocation->Parameters.Read.ByteOffset;
    RootDevices = 0;
    *(_QWORD *)(v13.QuadPart + 32) = ArbArbiterHandler;
    switch ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists )
    {
      case 1u:
        v14 = &IopRootPortArbiter;
        break;
      case 2u:
        v14 = &IopRootIrqArbiter;
        break;
      case 3u:
        goto LABEL_35;
      case 4u:
        v14 = &IopRootDmaArbiter;
        break;
      case 6u:
        v14 = &IopRootBusNumberArbiter;
        break;
      case 7u:
LABEL_35:
        v14 = &IopRootMemArbiter;
        break;
      default:
        RootDevices = -1073741811;
        goto LABEL_112;
    }
    *(_QWORD *)(v13.QuadPart + 8) = v14;
    goto LABEL_112;
  }
  v15 = MinorFunction - 9;
  if ( !v15 )
  {
    v37 = CurrentStackLocation->Parameters.Create.SecurityContext;
    v38 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
    LODWORD(v37->SecurityQos) = 65600;
    if ( Object == *(PVOID *)(IopRootDeviceNode + 32) )
    {
      HIDWORD(v37->SecurityQos) |= 0x1C0u;
      HIDWORD(v37->AccessState) = 0;
    }
    v37->DesiredAccess = 0;
    v37->FullCreateOptions = 1;
    v37[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
    v37[1].AccessState = (PACCESS_STATE)0x400000004LL;
    v37[1].DesiredAccess = 4;
    if ( HIDWORD(v37->AccessState) == -1 )
    {
      LODWORD(NumberOfBytes) = 4;
      if ( (int)CmGetDeviceRegProp(
                  PiPnpRtlCtx,
                  *(_QWORD *)(v38 + 48),
                  0,
                  17,
                  (__int64)&v42,
                  (__int64)&v43,
                  (__int64)&NumberOfBytes,
                  0) >= 0
        && v42 == 4
        && (_DWORD)NumberOfBytes == 4 )
      {
        HIDWORD(v37->AccessState) = v43;
      }
    }
    goto LABEL_111;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v35 = 0;
    v36 = 4;
LABEL_101:
    RootDevices = PnpGetDeviceResourcesFromRegistry((int)Object, v35, v36, (int)v40, &NumberOfBytes);
    if ( RootDevices != -1073741772 )
      goto LABEL_12;
    goto LABEL_111;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v35 = 1;
    v36 = 2;
    goto LABEL_101;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 7;
    if ( v19 )
    {
      if ( v19 != 3 )
        goto LABEL_45;
      goto LABEL_111;
    }
    if ( Object == *(PVOID *)(IopRootDeviceNode + 32) )
      goto LABEL_45;
    RootDevices = a2->IoStatus.Status;
    if ( RootDevices >= 0 )
    {
      if ( a2->IoStatus.Information )
        goto LABEL_45;
    }
    v20 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
    Length = CurrentStackLocation->Parameters.Read.Length;
    *(_QWORD *)v40 = v20;
    if ( Length )
    {
      if ( Length <= 0 )
        goto LABEL_75;
      if ( Length <= 2 )
      {
        if ( RootDevices == -1073741637 )
        {
          LODWORD(NumberOfBytes) = 0;
          RootDevices = PiGetDeviceRegProperty(
                          *(_QWORD *)(v20 + 48),
                          (int)a2,
                          7,
                          (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                          0LL,
                          (PULONG)&NumberOfBytes);
          if ( RootDevices == -1073741789 )
          {
            Src = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
            if ( Src )
            {
              RootDevices = PiGetDeviceRegProperty(
                              *(_QWORD *)(v20 + 48),
                              v23,
                              7,
                              (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                              Src,
                              (PULONG)&NumberOfBytes);
              v25 = Src;
              if ( RootDevices >= 0 )
              {
                v26 = NumberOfBytes;
                v27 = 0LL;
                if ( Src < &Src[2 * ((unsigned __int64)(unsigned int)NumberOfBytes >> 1)] )
                {
                  do
                  {
                    v28 = *(_WORD *)v25;
                    if ( *(_WORD *)v25 )
                    {
                      if ( v28 < 0x20u || v28 > 0x7Fu || v28 == 44 )
                      {
                        *(_WORD *)v25 = 63;
                        v26 = NumberOfBytes;
                      }
                    }
                    else
                    {
                      if ( v27 && v25 == v27 + 2 )
                        break;
                      v27 = v25;
                    }
                    v25 += 2;
                  }
                  while ( v25 < &Src[2 * ((unsigned __int64)v26 >> 1)] );
                }
                Information = Src;
              }
              else
              {
                ExFreePoolWithTag(Src, 0);
              }
            }
            else
            {
              RootDevices = -1073741670;
            }
          }
          if ( RootDevices == -1073741275 )
          {
            Information = (PVOID)a2->IoStatus.Information;
            RootDevices = a2->IoStatus.Status;
          }
        }
        goto LABEL_112;
      }
      if ( Length != 3 )
      {
        if ( Length == 5 )
        {
          v22 = ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x64647050u);
          if ( !v22 )
            goto LABEL_15;
          Information = v22;
          *v22 = *(_OWORD *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
          v22[1] = *(_OWORD *)L"0-0000-0000-FFFF-FFFFFFFFFFFF}";
          v22[2] = *(_OWORD *)L"000-FFFF-FFFFFFFFFFFF}";
          v22[3] = *(_OWORD *)L"-FFFFFFFFFFFF}";
          *((_QWORD *)v22 + 8) = *(_QWORD *)L"FFFFF}";
          *((_DWORD *)v22 + 18) = *(_DWORD *)L"F}";
          *((_WORD *)v22 + 38) = a00000000000000[38];
          goto LABEL_111;
        }
LABEL_75:
        Information = (PVOID)a2->IoStatus.Information;
        goto LABEL_112;
      }
    }
    v29 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(v20 + 40), 0x64647050u);
    if ( !v29 )
      goto LABEL_15;
    v30 = 0;
    memset(v29, 0, *(unsigned __int16 *)(*(_QWORD *)v40 + 40LL));
    Information = v29;
    RootDevices = 0;
    v31 = *(__int16 **)(*(_QWORD *)v40 + 48LL);
    v32 = *v31;
    if ( CurrentStackLocation->Parameters.Read.Length )
    {
      if ( v32 )
      {
        while ( v32 != 92 || ++v30 != 2 )
        {
          v32 = *++v31;
          if ( !*v31 )
            goto LABEL_90;
        }
        ++v31;
LABEL_90:
        while ( *v31 )
          *v29++ = *v31++;
      }
    }
    else
    {
      while ( v32 )
      {
        if ( v32 == 92 && ++v30 == 2 )
          break;
        *v29++ = v32;
        v32 = *++v31;
      }
    }
    goto LABEL_112;
  }
  if ( CurrentStackLocation->Parameters.Read.Length != 1 || a2->IoStatus.Information )
    goto LABEL_45;
  v33 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  LODWORD(NumberOfBytes) = 0;
  PiGetDeviceRegProperty(*(_QWORD *)(v33 + 48), (int)a2, 1, 14, 0LL, (PULONG)&NumberOfBytes);
  if ( !(_DWORD)NumberOfBytes )
    goto LABEL_17;
  Information = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
  if ( !Information )
    goto LABEL_15;
  RootDevices = PiGetDeviceRegProperty(*(_QWORD *)(v33 + 48), v34, 1, 14, Information, (PULONG)&NumberOfBytes);
  if ( RootDevices < 0 )
  {
    if ( RootDevices == -1073741275 )
      RootDevices = -1073741772;
    ExFreePoolWithTag(Information, 0);
    Information = 0LL;
  }
LABEL_112:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
