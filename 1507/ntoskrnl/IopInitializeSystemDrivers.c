/*
 * XREFs of IopInitializeSystemDrivers @ 0x1407B82F0
 * Callers:
 *     IoInitSystem @ 0x1407D0850 (IoInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     IopReferenceDriverObjectByName @ 0x1405727F4 (IopReferenceDriverObjectByName.c)
 *     ExIsManufacturingModeEnabled @ 0x140572944 (ExIsManufacturingModeEnabled.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     IopOpenRegistryKeyEx @ 0x14058F9E4 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForDevicesToStart @ 0x1407B7E64 (PnpWaitForDevicesToStart.c)
 *     InbvIndicateProgress @ 0x1407B9620 (InbvIndicateProgress.c)
 *     PipCheckDependencies @ 0x1407B98BC (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x1407B9904 (PipLookupGroupName.c)
 *     PipFreeGroupTree @ 0x1407BA724 (PipFreeGroupTree.c)
 *     CmGetSystemDriverList @ 0x1407BA76C (CmGetSystemDriverList.c)
 */

__int64 IopInitializeSystemDrivers()
{
  REGHANDLE v0; // rbx
  char IsManufacturingModeEnabled; // al
  void **SystemDriverList; // rax
  void **v3; // rbx
  void **v4; // r14
  void *v5; // rax
  PVOID v6; // rdi
  PVOID v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  void *v10; // rcx
  REGHANDLE v11; // rbx
  int v13; // edi
  UNICODE_STRING v14; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  v0 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_SystemStart_Start) )
    EtwWrite(v0, &KMPnPEvt_SystemStart_Start, 0LL, 0, 0LL);
  IsManufacturingModeEnabled = ExIsManufacturingModeEnabled();
  SystemDriverList = (void **)CmGetSystemDriverList((unsigned __int64)qword_1403254B0 & -(__int64)(IsManufacturingModeEnabled != 0));
  v3 = SystemDriverList;
  if ( SystemDriverList )
  {
    v4 = SystemDriverList;
    v5 = *SystemDriverList;
    if ( v5 )
    {
      do
      {
        if ( (int)IopGetDriverNameFromKeyNode(v5, &UnicodeString) >= 0
          && (v6 = IopReferenceDriverObjectByName(&UnicodeString), RtlFreeAnsiString(&UnicodeString), v6) )
        {
          ObfDereferenceObjectWithTag(v6, 0x746C6644u);
        }
        else
        {
          *(_DWORD *)&v14.Length = 655368;
          v14.Buffer = L"Enum";
          if ( IopOpenRegistryKeyEx(&Handle, *v3, &v14, 0x20019u) < 0 )
            goto LABEL_9;
          v13 = 0;
          if ( IopGetRegistryValue(Handle, L"INITSTARTFAILED", 0, &P) >= 0 )
          {
            if ( *((_DWORD *)P + 3) == 4 )
              v13 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
          ZwClose(Handle);
          if ( !v13 )
          {
LABEL_9:
            if ( IopGetRegistryValue(*v3, L"Group", 0, &P) < 0 )
            {
              v8 = 0LL;
            }
            else
            {
              v7 = P;
              if ( *((_DWORD *)P + 3) )
              {
                String1.Length = *((_WORD *)P + 6);
                String1.MaximumLength = String1.Length;
                String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
                v8 = PipLookupGroupName(&String1);
              }
              else
              {
                v8 = 0LL;
              }
              ExFreePoolWithTag(v7, 0);
            }
            v9 = PipCheckDependencies(*v3);
            v10 = *v3;
            if ( v9 )
            {
              if ( (int)IopLoadDriver(v10, 1, 0, &v17) >= 0 && v8 )
                ++*(_DWORD *)(v8 + 28);
            }
            else
            {
              ZwClose(v10);
            }
            InbvIndicateProgress();
            goto LABEL_18;
          }
        }
        ZwClose(*v3);
LABEL_18:
        v5 = *++v3;
      }
      while ( *v3 );
    }
    ExFreePoolWithTag(v4, 0);
  }
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 17, 0, 0LL, 0LL, 0LL);
  if ( !PnpBootOptions )
    PnpWaitForDevicesToStart();
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 18, 0, 0LL, 0LL, 0LL);
  if ( IopGroupListHead )
    PipFreeGroupTree();
  v11 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_SystemStart_Stop) )
    EtwWrite(v11, &KMPnPEvt_SystemStart_Stop, 0LL, 0, 0LL);
  return 1LL;
}
