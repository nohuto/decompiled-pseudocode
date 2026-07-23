/*
 * XREFs of IopGetDriverNameFromKeyNode @ 0x140517688
 * Callers:
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538F54 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     PiGetDefaultMessageString @ 0x140574B00 (PiGetDefaultMessageString.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x14079890C (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x14079A54C (PnpLoadBootFilterDriver.c)
 *     PipInitializeCoreDriversByGroup @ 0x14079AB28 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 */

__int64 __fastcall IopGetDriverNameFromKeyNode(HANDLE KeyHandle, PUNICODE_STRING Destination)
{
  wchar_t *v4; // rdi
  __int64 v5; // rax
  int v6; // ecx
  unsigned __int16 *PoolWithTagPriority; // rax
  unsigned __int16 *v8; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  unsigned int v11; // ebx
  wchar_t *v12; // rax
  const WCHAR *v13; // rdx
  _WORD *v15; // r10
  unsigned __int16 v16; // cx
  __int16 *v17; // r8
  int i; // r9d
  __int16 v19; // ax
  unsigned __int16 *PoolWithTag; // rax
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+80h] [rbp+40h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h]

  if ( (int)IopGetRegistryValue(KeyHandle) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) > 2u && *((_DWORD *)P + 1) == 1 )
    {
      v15 = P;
      v16 = *((_WORD *)P + 6) - 2;
      Destination->Length = v16;
      Destination->MaximumLength = v4[6];
      v17 = (__int16 *)((char *)v4 + *((unsigned int *)v4 + 2));
      for ( i = v16 >> 1; i; --i )
      {
        v19 = *v17++;
        *v15++ = v19;
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
      v5 = *((unsigned int *)P + 2);
      *(_QWORD *)&Source.Length = L"\\Driver\\";
      LOWORD(P) = 16;
      v6 = *(_DWORD *)((char *)v4 + v5);
      if ( v6 == 2 || v6 == 8 )
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
      v8 = PoolWithTagPriority;
      if ( !PoolWithTagPriority )
        goto LABEL_27;
      v9 = ZwQueryKey(KeyHandle, KeyBasicInformation, PoolWithTagPriority, Length, &Length);
      v10 = v9;
      if ( v9 == -2147483643 || v9 == -1073741789 )
      {
        ExFreePoolWithTag(v8, 0);
        if ( ViVerifierDriverAddedThunkListHead )
          PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTagPriority(
                                              NonPagedPoolNx,
                                              Length,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        else
          PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x20206F49u);
        v8 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_27;
        v10 = ZwQueryKey(KeyHandle, KeyBasicInformation, PoolWithTag, Length, &Length);
      }
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(v8, 0);
        goto LABEL_36;
      }
      v11 = (unsigned __int16)P + *((_DWORD *)v8 + 3);
      if ( v11 < (unsigned __int16)P )
      {
        ExFreePoolWithTag(v8, 0);
        v10 = -1073741675;
        goto LABEL_36;
      }
      if ( ViVerifierDriverAddedThunkListHead )
        v12 = (wchar_t *)ExAllocatePoolWithTagPriority(
                           NonPagedPoolNx,
                           (unsigned __int16)v11,
                           0x20206F49u,
                           (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        v12 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v11, 0x20206F49u);
      Destination->Buffer = v12;
      if ( v12 )
      {
        v13 = *(const WCHAR **)&Source.Length;
        Destination->Length = 0;
        Destination->MaximumLength = v11;
        RtlAppendUnicodeToString(Destination, v13);
        Source.Length = v8[6];
        Source.MaximumLength = Source.Length;
        Source.Buffer = v8 + 8;
        RtlAppendUnicodeStringToString(Destination, &Source);
        ExFreePoolWithTag(v8, 0);
        ExFreePoolWithTag(v4, 0);
        return 0LL;
      }
      ExFreePoolWithTag(v8, 0);
LABEL_27:
      v10 = -1073741670;
LABEL_36:
      ExFreePoolWithTag(v4, 0);
      return (unsigned int)v10;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221225824LL;
}
