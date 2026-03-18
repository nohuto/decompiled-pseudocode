/*
 * XREFs of IopGetRootDevices @ 0x1404E7140
 * Callers:
 *     IopPnPDispatch @ 0x14055D5D4 (IopPnPDispatch.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140550CA8 (_CmGetMatchingFilteredDeviceList.c)
 */

__int64 __fastcall IopGetRootDevices(_QWORD *a1)
{
  _WORD *PoolWithTag; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int inited; // ebx
  unsigned int v5; // edi
  int MatchingFilteredDeviceList; // eax
  const WCHAR *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  void *v12; // rdx
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  PVOID *v16; // r14
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+64h] [rbp-1Ch]
  void *Src; // [rsp+70h] [rbp-10h]
  unsigned int v21; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 0LL;
  PoolWithTag = 0LL;
  Src = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x64647050u);
  if ( !Src )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v19 = 128LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v21 = 2048;
  inited = -1073741789;
  v5 = 0;
  while ( v5 < 5 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v21, 0x64647050u);
    if ( !PoolWithTag )
    {
      inited = -1073741670;
      break;
    }
    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                   PiPnpRtlCtx,
                                   (unsigned int)L"Root",
                                   1,
                                   0,
                                   0LL,
                                   (__int64)PoolWithTag,
                                   v21,
                                   (__int64)&v21);
    ++v5;
    inited = MatchingFilteredDeviceList;
    if ( MatchingFilteredDeviceList != -1073741789 )
    {
      if ( MatchingFilteredDeviceList < 0 )
        break;
      inited = 0;
      v7 = PoolWithTag;
      v18 = 0;
      if ( *PoolWithTag )
      {
        while ( 1 )
        {
          inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v7, 0x10u, 0, 983103, 0, (__int64)&Handle, 0LL);
          if ( inited < 0 )
            break;
          inited = RtlInitUnicodeStringEx(&DestinationString, v7);
          if ( inited >= 0 && !(unsigned int)IopInitializeDeviceInstanceKey(Handle, &DestinationString) )
          {
            ZwClose(Handle);
LABEL_17:
            inited = v18;
            goto LABEL_18;
          }
          ZwClose(Handle);
          if ( inited < 0 )
            break;
          v8 = -1LL;
          do
            ++v8;
          while ( v7[v8] );
          v7 += v8 + 1;
          if ( !*v7 )
            goto LABEL_17;
        }
LABEL_33:
        v9 = HIDWORD(v19);
        if ( !HIDWORD(v19) )
          goto LABEL_34;
LABEL_22:
        if ( inited >= 0 )
          break;
      }
      else
      {
LABEL_18:
        if ( inited < 0 )
          goto LABEL_33;
        v9 = HIDWORD(v19);
        if ( !HIDWORD(v19) )
        {
LABEL_34:
          inited = -1073741823;
          goto LABEL_22;
        }
        v10 = ExAllocatePoolWithTag(PagedPool, 8LL * HIDWORD(v19) + 16, 0x64647050u);
        v11 = v10;
        if ( v10 )
        {
          v12 = Src;
          *v10 = v9;
          memmove(v10 + 2, v12, 8LL * (unsigned int)v9);
          *a1 = v11;
          goto LABEL_22;
        }
        inited = -1073741670;
      }
      if ( (_DWORD)v9 )
      {
        v16 = (PVOID *)Src;
        do
        {
          ObfDereferenceObject(*v16++);
          --v9;
        }
        while ( v9 );
      }
      break;
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  ExFreePoolWithTag(Src, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)inited;
}
