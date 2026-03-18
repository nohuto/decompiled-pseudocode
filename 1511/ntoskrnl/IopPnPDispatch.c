/*
 * XREFs of IopPnPDispatch @ 0x1404E2670
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IopPnPCompleteRequest @ 0x140102D80 (IopPnPCompleteRequest.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetRootDevices @ 0x1403B9DD4 (IopGetRootDevices.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     PiGetDeviceRegProperty @ 0x140459C20 (PiGetDeviceRegProperty.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404EF738 (PnpGetDeviceResourcesFromRegistry.c)
 */

__int64 __fastcall IopPnPDispatch(_QWORD *Object, __int64 a2)
{
  __int64 v2; // r15
  WCHAR *PoolWithTag; // rdi
  unsigned int v6; // r8d
  int DeviceRegProperty; // ebx
  GUID *v8; // rcx
  GUID *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  __int64 v16; // rbx
  __int64 v17; // rdx
  WCHAR *v18; // rax
  WCHAR *v19; // rbx
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // rdx
  WCHAR *Src; // r12
  WCHAR *v24; // rcx
  unsigned int v25; // r8d
  WCHAR *v26; // rdx
  WCHAR v27; // ax
  __int64 v28; // rdx
  void *v29; // rax
  WCHAR *v30; // rax
  _WORD *v31; // r12
  int v32; // r13d
  __int16 *v33; // rcx
  __int16 v34; // ax
  __int64 v35; // rbx
  __int64 v36; // rdx
  int v37; // edx
  int v38; // r8d
  int v39[2]; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  int v41; // [rsp+A0h] [rbp+50h] BYREF
  int v42; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)v39 = 0LL;
  PoolWithTag = 0LL;
  v6 = *(unsigned __int8 *)(v2 + 1);
  if ( v6 > 9 )
  {
    v11 = v6 - 10;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          if ( *(_DWORD *)(v2 + 8) != 1 || *(_QWORD *)(a2 + 56) )
            goto LABEL_19;
          v35 = *(_QWORD *)(Object[39] + 40LL);
          LODWORD(NumberOfBytes) = 0;
          PiGetDeviceRegProperty(*(_QWORD *)(v35 + 48), a2, 1, 14, 0LL, (PULONG)&NumberOfBytes);
          if ( (_DWORD)NumberOfBytes )
          {
            PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
            if ( PoolWithTag )
            {
              DeviceRegProperty = PiGetDeviceRegProperty(
                                    *(_QWORD *)(v35 + 48),
                                    v36,
                                    1,
                                    14,
                                    PoolWithTag,
                                    (PULONG)&NumberOfBytes);
              if ( DeviceRegProperty < 0 )
              {
                if ( DeviceRegProperty == -1073741275 )
                  DeviceRegProperty = -1073741772;
                ExFreePoolWithTag(PoolWithTag, 0);
                PoolWithTag = 0LL;
              }
              goto LABEL_20;
            }
            goto LABEL_70;
          }
LABEL_71:
          DeviceRegProperty = -1073741823;
          goto LABEL_20;
        }
        v14 = v13 - 7;
        if ( v14 )
        {
          if ( v14 == 3 )
            goto LABEL_25;
          goto LABEL_19;
        }
        if ( Object == *(_QWORD **)(IopRootDeviceNode + 32)
          || (DeviceRegProperty = *(_DWORD *)(a2 + 48), DeviceRegProperty >= 0) && *(_QWORD *)(a2 + 56) )
        {
LABEL_19:
          PoolWithTag = *(WCHAR **)(a2 + 56);
          DeviceRegProperty = *(_DWORD *)(a2 + 48);
          goto LABEL_20;
        }
        v20 = *(_QWORD *)(Object[39] + 40LL);
        v21 = *(_DWORD *)(v2 + 8);
        *(_QWORD *)v39 = v20;
        if ( v21 )
        {
          if ( v21 <= 0 )
            goto LABEL_82;
          if ( v21 <= 2 )
          {
            if ( DeviceRegProperty == -1073741637 )
            {
              LODWORD(NumberOfBytes) = 0;
              DeviceRegProperty = PiGetDeviceRegProperty(
                                    *(_QWORD *)(v20 + 48),
                                    a2,
                                    7,
                                    (unsigned int)(*(_DWORD *)(v2 + 8) != 1) + 2,
                                    0LL,
                                    (PULONG)&NumberOfBytes);
              if ( DeviceRegProperty == -1073741789 )
              {
                Src = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
                if ( Src )
                {
                  DeviceRegProperty = PiGetDeviceRegProperty(
                                        *(_QWORD *)(v20 + 48),
                                        v22,
                                        7,
                                        (unsigned int)(*(_DWORD *)(v2 + 8) != 1) + 2,
                                        Src,
                                        (PULONG)&NumberOfBytes);
                  v24 = Src;
                  if ( DeviceRegProperty < 0 )
                  {
                    ExFreePoolWithTag(Src, 0);
                  }
                  else
                  {
                    v25 = NumberOfBytes;
                    v26 = 0LL;
                    if ( Src < &Src[(unsigned __int64)(unsigned int)NumberOfBytes >> 1] )
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
                      while ( v24 < &Src[(unsigned __int64)v25 >> 1] );
                    }
                    PoolWithTag = Src;
                  }
                }
                else
                {
                  DeviceRegProperty = -1073741670;
                }
              }
              if ( DeviceRegProperty == -1073741275 )
              {
                PoolWithTag = *(WCHAR **)(a2 + 56);
                DeviceRegProperty = *(_DWORD *)(a2 + 48);
              }
            }
            goto LABEL_20;
          }
          if ( v21 != 3 )
          {
            if ( v21 == 5 )
            {
              v30 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x64647050u);
              if ( v30 )
              {
                PoolWithTag = v30;
                *(_OWORD *)v30 = *(_OWORD *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
                *((_OWORD *)v30 + 1) = *(_OWORD *)L"0-0000-0000-FFFF-FFFFFFFFFFFF}";
                *((_OWORD *)v30 + 2) = *(_OWORD *)L"000-FFFF-FFFFFFFFFFFF}";
                *((_OWORD *)v30 + 3) = *(_OWORD *)L"-FFFFFFFFFFFF}";
                *((_QWORD *)v30 + 8) = *(_QWORD *)L"FFFFF}";
                *((_DWORD *)v30 + 18) = *(_DWORD *)L"F}";
                v30[38] = a00000000000000[38];
                goto LABEL_25;
              }
              goto LABEL_70;
            }
LABEL_82:
            PoolWithTag = *(WCHAR **)(a2 + 56);
            goto LABEL_20;
          }
        }
        v31 = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(v20 + 40), 0x64647050u);
        if ( v31 )
        {
          v32 = 0;
          memset(v31, 0, *(unsigned __int16 *)(*(_QWORD *)v39 + 40LL));
          PoolWithTag = v31;
          DeviceRegProperty = 0;
          v33 = *(__int16 **)(*(_QWORD *)v39 + 48LL);
          v34 = *v33;
          if ( *(_DWORD *)(v2 + 8) )
          {
            if ( v34 )
            {
              while ( v34 != 92 || ++v32 != 2 )
              {
                v34 = *++v33;
                if ( !*v33 )
                  goto LABEL_97;
              }
              ++v33;
LABEL_97:
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
          goto LABEL_20;
        }
        goto LABEL_70;
      }
      v37 = 1;
      v38 = 2;
    }
    else
    {
      v37 = 0;
      v38 = 4;
    }
    DeviceRegProperty = PnpGetDeviceResourcesFromRegistry((int)Object, v37, v38, (int)v39, &NumberOfBytes);
    if ( DeviceRegProperty == -1073741772 )
      goto LABEL_25;
LABEL_54:
    PoolWithTag = *(WCHAR **)v39;
    goto LABEL_20;
  }
  if ( v6 == 9 )
  {
    v16 = *(_QWORD *)(v2 + 8);
    v17 = *(_QWORD *)(Object[39] + 40LL);
    *(_DWORD *)v16 = 65600;
    if ( Object == *(_QWORD **)(IopRootDeviceNode + 32) )
    {
      *(_DWORD *)(v16 + 4) |= 0x1C0u;
      *(_DWORD *)(v16 + 12) = 0;
    }
    *(_DWORD *)(v16 + 16) = 0;
    *(_DWORD *)(v16 + 20) = 1;
    *(_QWORD *)(v16 + 24) = 0x400000004LL;
    *(_QWORD *)(v16 + 32) = 0x400000004LL;
    *(_DWORD *)(v16 + 40) = 4;
    if ( *(_DWORD *)(v16 + 12) == -1 )
    {
      LODWORD(NumberOfBytes) = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v17 + 48),
                  0LL,
                  17,
                  (__int64)&v41,
                  (__int64)&v42,
                  (__int64)&NumberOfBytes) >= 0
        && v41 == 4
        && (_DWORD)NumberOfBytes == 4 )
      {
        *(_DWORD *)(v16 + 12) = v42;
      }
    }
    goto LABEL_25;
  }
  if ( *(unsigned __int8 *)(v2 + 1) < 4u )
  {
LABEL_25:
    DeviceRegProperty = 0;
    goto LABEL_20;
  }
  if ( *(unsigned __int8 *)(v2 + 1) <= 5u )
    goto LABEL_71;
  if ( v6 == 7 )
  {
    if ( Object == *(_QWORD **)(IopRootDeviceNode + 32) && !*(_DWORD *)(v2 + 8) )
    {
      DeviceRegProperty = IopGetRootDevices(v39);
      goto LABEL_54;
    }
    if ( *(_DWORD *)(v2 + 8) != 4 )
      goto LABEL_19;
    v18 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x64647050u);
    v19 = v18;
    if ( v18 )
    {
      *(_DWORD *)v18 = 1;
      *((_QWORD *)v18 + 1) = Object;
      ObfReferenceObject(Object);
      PoolWithTag = v19;
      goto LABEL_25;
    }
LABEL_70:
    DeviceRegProperty = -1073741670;
    goto LABEL_20;
  }
  if ( v6 == 6 )
    goto LABEL_25;
  if ( v6 != 8 )
    goto LABEL_19;
  DeviceRegProperty = *(_DWORD *)(a2 + 48);
  if ( *(_QWORD *)(Object[39] + 40LL) != IopRootDeviceNode )
    goto LABEL_20;
  v8 = *(GUID **)(v2 + 8);
  if ( v8 == &GUID_ARBITER_INTERFACE_STANDARD || RtlCompareMemory(v8, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v28 = *(_QWORD *)(v2 + 24);
    DeviceRegProperty = 0;
    *(_QWORD *)(v28 + 32) = ArbArbiterHandler;
    if ( *(_BYTE *)(v2 + 32) == 1 )
    {
      v29 = &IopRootPortArbiter;
      goto LABEL_63;
    }
    if ( *(_BYTE *)(v2 + 32) == 2 )
    {
      v29 = &IopRootIrqArbiter;
      goto LABEL_63;
    }
    if ( *(_BYTE *)(v2 + 32) != 3 )
    {
      if ( *(_BYTE *)(v2 + 32) == 4 )
      {
        v29 = &IopRootDmaArbiter;
LABEL_63:
        *(_QWORD *)(v28 + 8) = v29;
        goto LABEL_20;
      }
      if ( *(_BYTE *)(v2 + 32) == 6 )
      {
        v29 = &IopRootBusNumberArbiter;
        goto LABEL_63;
      }
      if ( *(_BYTE *)(v2 + 32) != 7 )
      {
        DeviceRegProperty = -1073741811;
        goto LABEL_20;
      }
    }
    v29 = &IopRootMemArbiter;
    goto LABEL_63;
  }
  v9 = *(GUID **)(v2 + 8);
  if ( v9 == &GUID_TRANSLATOR_INTERFACE_STANDARD
    || RtlCompareMemory(v9, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v10 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v10 + 32) = IopTranslatorHandlerCm;
    *(_QWORD *)(v10 + 40) = IopTranslatorHandlerIo;
    goto LABEL_25;
  }
LABEL_20:
  IopPnPCompleteRequest(a2, DeviceRegProperty, (__int64)PoolWithTag);
  return (unsigned int)DeviceRegProperty;
}
