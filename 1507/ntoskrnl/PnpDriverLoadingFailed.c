/*
 * XREFs of PnpDriverLoadingFailed @ 0x1405C1A3C
 * Callers:
 *     PnpDriverStarted @ 0x140571F30 (PnpDriverStarted.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x1400CFD80 (PipIsDevNodeDNStarted.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401808F0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PipOpenServiceEnumKeys @ 0x1404E6D00 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     IopReleaseDeviceResources @ 0x1405383A4 (IopReleaseDeviceResources.c)
 *     PoFxAbandonDevice @ 0x140538568 (PoFxAbandonDevice.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140571C48 (PipServiceInstanceToDeviceInstance.c)
 */

NTSTATUS __fastcall PnpDriverLoadingFailed(HANDLE Handle, UNICODE_STRING *a2)
{
  HANDLE v3; // rbx
  int v4; // r12d
  NTSTATUS result; // eax
  NTSTATUS RegistryValue; // edi
  unsigned int v7; // esi
  unsigned int i; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rbx
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  int v20; // r12d
  struct _KTHREAD *v21; // rax
  int v22; // r14d
  unsigned int j; // ebx
  signed __int64 v24; // rax
  unsigned int *v25; // rdi
  signed __int64 v26; // rax
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  __int64 v29; // [rsp+30h] [rbp-A9h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-81h] BYREF
  int v33; // [rsp+5Ch] [rbp-7Dh]
  HANDLE v34; // [rsp+60h] [rbp-79h] BYREF
  PVOID P; // [rsp+68h] [rbp-71h] BYREF
  int Data; // [rsp+70h] [rbp-69h] BYREF
  NTSTRSAFE_PWSTR v37; // [rsp+78h] [rbp-61h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+80h] [rbp-59h] BYREF
  UNICODE_STRING v39; // [rsp+88h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-41h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-11h] BYREF

  v34 = Handle;
  v33 = 0;
  v3 = Handle;
  v4 = 0;
  if ( Handle )
  {
    ObjectAttributes.RootDirectory = Handle;
    ValueName.Buffer = L"Enum";
    *(_DWORD *)&ValueName.Length = 655368;
    ObjectAttributes.ObjectName = &ValueName;
    KeyHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = PipOpenServiceEnumKeys(a2, 0x20019u, &v34, &KeyHandle, 0);
    v3 = v34;
    v4 = 1;
    v33 = 1;
  }
  if ( result >= 0 )
  {
    ValueName.Buffer = L"INITSTARTFAILED";
    *(_DWORD *)&ValueName.Length = 2097182;
    Data = 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    RegistryValue = IopGetRegistryValue(KeyHandle, L"Count", 0, &P);
    v7 = 0;
    if ( RegistryValue < 0 )
      goto LABEL_52;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
      v7 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
    if ( v7 )
    {
      v32 = v7;
      for ( i = 0; i < v7; ++i )
      {
        if ( PipServiceInstanceToDeviceInstance(v3, a2, i, &v39, 0LL, 0) >= 0 )
        {
          v12 = PnpDeviceObjectFromDeviceInstance((__int64)&v39, v9, v10, v11);
          v13 = v12;
          if ( v12 )
          {
            v14 = *(_QWORD *)(v12[39] + 40LL);
            if ( v14 )
            {
              if ( !PipIsDevNodeDNStarted(v14) )
                IopReleaseDeviceResources(v15, 1);
            }
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
          if ( v13 )
          {
            v17 = *(_QWORD *)(v13[39] + 40LL);
            if ( v17 && (*(_DWORD *)(v17 + 396) & 1) != 0 && (unsigned int)(*(_DWORD *)(v17 + 300) - 775) <= 1 )
            {
              PoFxAbandonDevice(v17);
              PipSetDevNodeState(v17, 786);
              PipSetDevNodeProblem(v17, 24, 0);
            }
            ObfDereferenceObject(v13);
          }
          ExFreePoolWithTag(v39.Buffer, 0);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          v18 = KeGetCurrentThread();
          v19 = v18->KernelApcDisable + 1;
          v18->KernelApcDisable = v19;
          if ( !v19
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
            && !v18->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v3 = v34;
        }
      }
      v20 = v33;
      if ( v32 != v7 )
      {
        v21 = KeGetCurrentThread();
        --v21->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( v32 )
        {
          v22 = 0;
          for ( j = 0; j < v7; ++j )
          {
            LODWORD(v29) = j;
            ppszDestEnd = pszDest;
            RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v29);
            ValueName.MaximumLength = 20;
            v24 = ppszDestEnd - pszDest;
            if ( (_DWORD)v24 == -1 )
              ValueName.Length = 20;
            else
              ValueName.Length = 2 * v24;
            ValueName.Buffer = pszDest;
            if ( IopGetRegistryValue(KeyHandle, pszDest, 0, &P) >= 0 )
            {
              v25 = (unsigned int *)P;
              if ( j != v22 )
              {
                ZwDeleteValueKey(KeyHandle, &ValueName);
                LODWORD(v29) = v22;
                v37 = pszDest;
                RtlStringCchPrintfExW(pszDest, 0xAuLL, &v37, 0LL, 0, L"%u", v29);
                ValueName.MaximumLength = 20;
                v26 = v37 - pszDest;
                if ( (_DWORD)v26 == -1 )
                  ValueName.Length = 20;
                else
                  ValueName.Length = 2 * v26;
                ValueName.Buffer = pszDest;
                ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)v25 + v25[2], v25[3]);
              }
              ExFreePoolWithTag(v25, 0);
              ++v22;
            }
          }
          v20 = v33;
        }
        ValueName.Buffer = L"Count";
        *(_DWORD *)&ValueName.Length = 786442;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v32, 4u);
        ValueName.Buffer = L"NextInstance";
        *(_DWORD *)&ValueName.Length = 1703960;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v32, 4u);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        v27 = KeGetCurrentThread();
        v28 = v27->KernelApcDisable + 1;
        v27->KernelApcDisable = v28;
        if ( !v28
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
          && !v27->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v3 = v34;
      }
      ZwClose(KeyHandle);
      if ( v20 )
        ZwClose(v3);
      return 0;
    }
    else
    {
LABEL_52:
      ZwClose(KeyHandle);
      if ( v4 )
        ZwClose(v3);
      return RegistryValue;
    }
  }
  return result;
}
