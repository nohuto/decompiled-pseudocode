/*
 * XREFs of IopGetRootDevices @ 0x1403B9DD4
 * Callers:
 *     IopPnPDispatch @ 0x1404E2670 (IopPnPDispatch.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1404B9370 (_CmGetMatchingFilteredDeviceList.c)
 */

__int64 __fastcall IopGetRootDevices(_QWORD *a1)
{
  _WORD *PoolWithTag; // rsi
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS inited; // ebx
  unsigned int v5; // edi
  int MatchingFilteredDeviceList; // eax
  const WCHAR *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  void *v12; // rdx
  PVOID *v14; // r14
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  NTSTATUS v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+64h] [rbp-1Ch]
  void *Src; // [rsp+70h] [rbp-10h]
  unsigned int v19; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 0LL;
  PoolWithTag = 0LL;
  Src = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x64647050u);
  if ( !Src )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v17 = 128LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v19 = 2048;
  inited = -1073741789;
  v5 = 0;
  while ( v5 < 5 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v19, 0x64647050u);
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
                                   v19,
                                   (__int64)&v19);
    ++v5;
    inited = MatchingFilteredDeviceList;
    if ( MatchingFilteredDeviceList != -1073741789 )
    {
      if ( MatchingFilteredDeviceList < 0 )
        break;
      inited = 0;
      v7 = PoolWithTag;
      v16 = 0;
      if ( *PoolWithTag )
      {
        while ( 1 )
        {
          inited = CmOpenDeviceRegKey(PiPnpRtlCtx, (_DWORD)v7, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
          if ( inited < 0 )
            break;
          inited = RtlInitUnicodeStringEx(&DestinationString, v7);
          if ( inited >= 0 && !(unsigned int)IopInitializeDeviceInstanceKey(Handle, &DestinationString) )
          {
            ZwClose(Handle);
LABEL_17:
            inited = v16;
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
LABEL_32:
        v9 = HIDWORD(v17);
        if ( !HIDWORD(v17) )
          goto LABEL_33;
LABEL_22:
        if ( inited >= 0 )
          break;
      }
      else
      {
LABEL_18:
        if ( inited < 0 )
          goto LABEL_32;
        v9 = HIDWORD(v17);
        if ( !HIDWORD(v17) )
        {
LABEL_33:
          inited = -1073741823;
          goto LABEL_22;
        }
        v10 = ExAllocatePoolWithTag(PagedPool, 8LL * HIDWORD(v17) + 16, 0x64647050u);
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
        v14 = (PVOID *)Src;
        do
        {
          ObfDereferenceObject(*v14++);
          --v9;
        }
        while ( v9 );
      }
      break;
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(Src, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)inited;
}
