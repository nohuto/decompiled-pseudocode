/*
 * XREFs of PnpDriverLoadingFailed @ 0x14057FD04
 * Callers:
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     PnpDriverStarted @ 0x140538ADC (PnpDriverStarted.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x14000932C (PipIsDevNodeDNStarted.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14015BB50 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1404844F8 (IopReleaseDeviceResources.c)
 *     PoFxAbandonDevice @ 0x1404849B4 (PoFxAbandonDevice.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405388F0 (PipServiceInstanceToDeviceInstance.c)
 *     PipOpenServiceEnumKeys @ 0x140539324 (PipOpenServiceEnumKeys.c)
 */

NTSTATUS __fastcall PnpDriverLoadingFailed(HANDLE Handle, UNICODE_STRING *a2)
{
  int v2; // r15d
  HANDLE v4; // rbx
  NTSTATUS result; // eax
  unsigned int v6; // esi
  NTSTATUS RegistryValue; // edi
  unsigned int v8; // r14d
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r15d
  struct _KTHREAD *v19; // rax
  int v20; // r14d
  unsigned int i; // ebx
  signed __int64 v22; // rax
  unsigned int *v23; // rdi
  signed __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // [rsp+30h] [rbp-99h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-79h] BYREF
  unsigned int Data; // [rsp+58h] [rbp-71h] BYREF
  int v32; // [rsp+5Ch] [rbp-6Dh]
  HANDLE v33; // [rsp+60h] [rbp-69h] BYREF
  ULONG dwFlags; // [rsp+68h] [rbp-61h] BYREF
  PVOID P; // [rsp+70h] [rbp-59h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-51h] BYREF
  NTSTRSAFE_PWSTR v37; // [rsp+80h] [rbp-49h] BYREF
  UNICODE_STRING v38; // [rsp+88h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-1h] BYREF

  v2 = 0;
  v33 = Handle;
  v32 = 0;
  v4 = Handle;
  if ( Handle )
  {
    KeyHandle = 0LL;
    ValueName.Buffer = L"Enum";
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = &ValueName;
    *(_DWORD *)&ValueName.Length = 655368;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = PipOpenServiceEnumKeys(a2, 0x20019u, &v33, &KeyHandle, 0);
    v4 = v33;
    v2 = 1;
    v32 = 1;
  }
  if ( result >= 0 )
  {
    ValueName.Buffer = L"INITSTARTFAILED";
    *(_DWORD *)&ValueName.Length = 2097182;
    dwFlags = 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &dwFlags, 4u);
    v6 = 0;
    RegistryValue = IopGetRegistryValue(KeyHandle, L"Count", 0, &P);
    if ( RegistryValue < 0 )
      goto LABEL_44;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
      v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
    if ( v6 )
    {
      v8 = 0;
      Data = v6;
      do
      {
        if ( PipServiceInstanceToDeviceInstance(v4, (__int64)a2, v8, &v38, 0LL, 0) >= 0 )
        {
          v9 = PnpDeviceObjectFromDeviceInstance((__int64)&v38);
          v10 = v9;
          if ( v9 )
          {
            v11 = *(_QWORD *)(v9[39] + 40LL);
            if ( v11 )
            {
              if ( !PipIsDevNodeDNStarted(v11) )
                IopReleaseDeviceResources(v12, 1);
            }
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
          if ( v10 )
          {
            v14 = *(_QWORD *)(v10[39] + 40LL);
            if ( v14 && (*(_DWORD *)(v14 + 396) & 1) != 0 && (unsigned int)(*(_DWORD *)(v14 + 300) - 775) <= 1 )
            {
              PoFxAbandonDevice(v14);
              PipSetDevNodeState(v14, 786);
              PipSetDevNodeProblem(v14, 24, 0);
            }
            ObfDereferenceObject(v10);
          }
          ExFreePoolWithTag(v38.Buffer, 0);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
          v4 = v33;
        }
        ++v8;
      }
      while ( v8 < v6 );
      v18 = v32;
      if ( Data != v6 )
      {
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( Data )
        {
          v20 = 0;
          for ( i = 0; i < v6; ++i )
          {
            LODWORD(v28) = i;
            ppszDestEnd = pszDest;
            RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v28);
            ValueName.MaximumLength = 20;
            v22 = ppszDestEnd - pszDest;
            if ( (_DWORD)v22 == -1 )
              ValueName.Length = 20;
            else
              ValueName.Length = 2 * v22;
            ValueName.Buffer = pszDest;
            if ( IopGetRegistryValue(KeyHandle, pszDest, 0, &P) >= 0 )
            {
              v23 = (unsigned int *)P;
              if ( i != v20 )
              {
                ZwDeleteValueKey(KeyHandle, &ValueName);
                LODWORD(v28) = v20;
                v37 = pszDest;
                RtlStringCchPrintfExW(pszDest, 0xAuLL, &v37, 0LL, 0, L"%u", v28);
                ValueName.MaximumLength = 20;
                v24 = v37 - pszDest;
                if ( (_DWORD)v24 == -1 )
                  ValueName.Length = 20;
                else
                  ValueName.Length = 2 * v24;
                ValueName.Buffer = pszDest;
                ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)v23 + v23[2], v23[3]);
              }
              ExFreePoolWithTag(v23, 0);
              ++v20;
            }
          }
          v18 = v32;
        }
        ValueName.Buffer = L"Count";
        *(_DWORD *)&ValueName.Length = 786442;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
        ValueName.Buffer = L"NextInstance";
        *(_DWORD *)&ValueName.Length = 1703960;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
        v4 = v33;
      }
      ZwClose(KeyHandle);
      if ( v18 )
        ZwClose(v4);
      return 0;
    }
    else
    {
LABEL_44:
      ZwClose(KeyHandle);
      if ( v2 )
        ZwClose(v4);
      return RegistryValue;
    }
  }
  return result;
}
