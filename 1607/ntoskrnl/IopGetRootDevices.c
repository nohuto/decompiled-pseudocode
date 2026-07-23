/*
 * XREFs of IopGetRootDevices @ 0x14051604C
 * Callers:
 *     IopPnPDispatch @ 0x1404C9D24 (IopPnPDispatch.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1404C08A4 (_CmGetMatchingFilteredDeviceList.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID *v17; // r14
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+64h] [rbp-1Ch]
  void *Src; // [rsp+70h] [rbp-10h]
  unsigned int v22; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 0LL;
  PoolWithTag = 0LL;
  Src = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x64647050u);
  if ( !Src )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v20 = 128LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v22 = 2048;
  inited = -1073741789;
  v5 = 0;
  while ( v5 < 5 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v22, 0x64647050u);
    if ( !PoolWithTag )
    {
      inited = -1073741670;
      break;
    }
    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"Root",
                                   1,
                                   0LL,
                                   0LL,
                                   (__int64)PoolWithTag,
                                   v22,
                                   (__int64)&v22);
    ++v5;
    inited = MatchingFilteredDeviceList;
    if ( MatchingFilteredDeviceList != -1073741789 )
    {
      if ( MatchingFilteredDeviceList < 0 )
        break;
      inited = 0;
      v7 = PoolWithTag;
      v19 = 0;
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
            inited = v19;
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
        v9 = HIDWORD(v20);
        if ( !HIDWORD(v20) )
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
        v9 = HIDWORD(v20);
        if ( !HIDWORD(v20) )
        {
LABEL_33:
          inited = -1073741823;
          goto LABEL_22;
        }
        v10 = ExAllocatePoolWithTag(PagedPool, 8LL * HIDWORD(v20) + 16, 0x64647050u);
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
        v17 = (PVOID *)Src;
        do
        {
          ObfDereferenceObject(*v17++);
          --v9;
        }
        while ( v9 );
      }
      break;
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  ExFreePoolWithTag(Src, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)inited;
}
