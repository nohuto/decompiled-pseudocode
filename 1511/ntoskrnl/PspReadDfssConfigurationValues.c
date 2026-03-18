/*
 * XREFs of PspReadDfssConfigurationValues @ 0x14012F840
 * Callers:
 *     PspIsDfssEnabled @ 0x14051E420 (PspIsDfssEnabled.c)
 *     PspDfssConfigurationChangeHandler @ 0x14063E5A8 (PspDfssConfigurationChangeHandler.c)
 * Callees:
 *     KeUpdateGroupSchedulingConstants @ 0x1401404F0 (KeUpdateGroupSchedulingConstants.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwNotifyChangeKey @ 0x140152720 (ZwNotifyChangeKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlQueryImageFileKeyOption @ 0x1404B33FC (RtlQueryImageFileKeyOption.c)
 */

void PspReadDfssConfigurationValues()
{
  NTSTATUS v0; // ecx
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  struct _IO_STATUS_BLOCK *PoolWithTag; // rax
  HANDLE v4; // rcx
  struct _IO_STATUS_BLOCK *v5; // r8
  OBJECT_ATTRIBUTES v6; // [rsp+50h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+8h] BYREF

  if ( PspDfssConfigurationKey )
  {
    v0 = 0;
    KeyHandle = PspDfssConfigurationKey;
  }
  else
  {
    v6.Length = 48;
    v6.RootDirectory = 0LL;
    v6.Attributes = 576;
    v6.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    *(_OWORD *)&v6.SecurityDescriptor = 0LL;
    v0 = ZwOpenKey(&KeyHandle, 0x11u, &v6);
  }
  if ( v0 >= 0 )
  {
    v1 = &PspDfssConfigValues;
    v2 = 4LL;
    do
    {
      if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
      {
        if ( !**(_DWORD **)v1 )
          **(_DWORD **)v1 = 1;
      }
      else
      {
        **(_DWORD **)v1 = v1[4];
      }
      v1 += 6;
      --v2;
    }
    while ( v2 );
    if ( PspDfssConfigurationNotify )
    {
      KeUpdateGroupSchedulingConstants();
      v4 = PspDfssConfigurationKey;
      v5 = (struct _IO_STATUS_BLOCK *)PspDfssConfigurationNotify;
    }
    else
    {
      PoolWithTag = (struct _IO_STATUS_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73736644u);
      v4 = KeyHandle;
      v5 = PoolWithTag;
      PspDfssConfigurationNotify = PoolWithTag;
      if ( !PoolWithTag )
      {
        ZwClose(KeyHandle);
        return;
      }
      PspDfssConfigurationKey = KeyHandle;
    }
    v5[1].Information = 0LL;
    v5->Pointer = 0LL;
    v5[1].Pointer = PspDfssConfigurationChangeHandler;
    if ( ZwNotifyChangeKey(v4, 0LL, (PIO_APC_ROUTINE)v5, (PVOID)1, v5 + 2, 4u, 0, 0LL, 0, 1u) < 0 )
    {
      ZwClose(PspDfssConfigurationKey);
      PspDfssConfigurationKey = 0LL;
      ExFreePoolWithTag(PspDfssConfigurationNotify, 0x73736644u);
      PspDfssConfigurationNotify = 0LL;
    }
  }
}
