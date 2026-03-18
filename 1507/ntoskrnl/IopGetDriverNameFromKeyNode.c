/*
 * XREFs of IopGetDriverNameFromKeyNode @ 0x1404E76EC
 * Callers:
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     PiGetDefaultMessageString @ 0x1405B298C (PiGetDefaultMessageString.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407B7FBC (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407BA5D4 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x1407E91B4 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryKey @ 0x14017F2B0 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 */

__int64 __fastcall IopGetDriverNameFromKeyNode(HANDLE KeyHandle, PUNICODE_STRING Destination)
{
  wchar_t *v4; // rdi
  _WORD *v5; // r10
  unsigned __int16 v6; // cx
  __int16 *v7; // r8
  int i; // r9d
  __int16 v9; // ax
  NTSTATUS v10; // ebx
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int16 *PoolWithTagPriority; // rax
  unsigned __int16 *v14; // rsi
  NTSTATUS v15; // eax
  unsigned __int16 *PoolWithTag; // rax
  unsigned int v17; // ebx
  wchar_t *v18; // rax
  const WCHAR *v19; // rdx
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+80h] [rbp+40h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h]

  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) > 2u && *((_DWORD *)P + 1) == 1 )
    {
      v5 = P;
      v6 = *((_WORD *)P + 6) - 2;
      Destination->Length = v6;
      Destination->MaximumLength = v4[6];
      v7 = (__int16 *)((char *)v4 + *((unsigned int *)v4 + 2));
      for ( i = v6 >> 1; i; --i )
      {
        v9 = *v7++;
        *v5++ = v9;
      }
      Destination->Buffer = v4;
      return 0LL;
    }
    v10 = -1073741472;
    goto LABEL_36;
  }
  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) )
    {
      v11 = *((unsigned int *)P + 2);
      *(_QWORD *)&Source.Length = L"\\Driver\\";
      LOWORD(P) = 16;
      v12 = *(_DWORD *)((char *)v4 + v11);
      if ( v12 == 2 || v12 == 8 )
      {
        LODWORD(P) = 24;
        *(_QWORD *)&Source.Length = L"\\FileSystem\\";
      }
      Length = 164;
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTagPriority = (unsigned __int16 *)ExAllocatePoolWithTagPriority(
                                                    NonPagedPoolNx,
                                                    0xA4uLL,
                                                    0x20206F49u,
                                                    (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTagPriority = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA4uLL, 0x20206F49u);
      v14 = PoolWithTagPriority;
      if ( !PoolWithTagPriority )
        goto LABEL_17;
      v15 = ZwQueryKey(KeyHandle, KeyBasicInformation, PoolWithTagPriority, Length, &Length);
      v10 = v15;
      if ( v15 == -2147483643 || v15 == -1073741789 )
      {
        ExFreePoolWithTag(v14, 0);
        if ( ViVerifierDriverAddedThunkListHead )
          PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTagPriority(
                                              NonPagedPoolNx,
                                              Length,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        else
          PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x20206F49u);
        v14 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_17;
        v10 = ZwQueryKey(KeyHandle, KeyBasicInformation, PoolWithTag, Length, &Length);
      }
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        goto LABEL_36;
      }
      v17 = (unsigned __int16)P + *((_DWORD *)v14 + 3);
      if ( v17 < (unsigned __int16)P )
      {
        ExFreePoolWithTag(v14, 0);
        v10 = -1073741675;
        goto LABEL_36;
      }
      if ( ViVerifierDriverAddedThunkListHead )
        v18 = (wchar_t *)ExAllocatePoolWithTagPriority(
                           NonPagedPoolNx,
                           (unsigned __int16)v17,
                           0x20206F49u,
                           (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        v18 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v17, 0x20206F49u);
      Destination->Buffer = v18;
      if ( v18 )
      {
        v19 = *(const WCHAR **)&Source.Length;
        Destination->Length = 0;
        Destination->MaximumLength = v17;
        RtlAppendUnicodeToString(Destination, v19);
        Source.Length = v14[6];
        Source.MaximumLength = Source.Length;
        Source.Buffer = v14 + 8;
        RtlAppendUnicodeStringToString(Destination, &Source);
        ExFreePoolWithTag(v14, 0);
        ExFreePoolWithTag(v4, 0);
        return 0LL;
      }
      ExFreePoolWithTag(v14, 0);
LABEL_17:
      v10 = -1073741670;
LABEL_36:
      ExFreePoolWithTag(v4, 0);
      return (unsigned int)v10;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221225824LL;
}
