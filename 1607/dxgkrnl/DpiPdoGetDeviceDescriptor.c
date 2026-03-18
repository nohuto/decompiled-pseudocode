/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x1C00EF834
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00EF39C (DpiPdoAddPdo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     DpiIsValidEdid @ 0x1C000F7D8 (DpiIsValidEdid.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00DF65C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00DF68C (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C00EFC40 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoPollChild @ 0x1C019C0B0 (DpiPdoPollChild.c)
 */

__int64 __fastcall DpiPdoGetDeviceDescriptor(
        __int64 a1,
        PVOID *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        _OWORD *a8)
{
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // eax
  __int64 v13; // r14
  PVOID v15; // rax
  __int64 v16; // rcx
  __int64 DeviceDescriptor; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  PVOID PoolWithTag; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  _WORD *v42; // rax
  size_t Size[2]; // [rsp+30h] [rbp-10h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  *(size_t *)((char *)Size + 4) = 0LL;
  HIDWORD(Size[1]) = 0;
  v9 = a1;
  v10 = *(_DWORD *)a2;
  LODWORD(Size[0]) = 0;
  v13 = *(_QWORD *)(v8 + 40);
  if ( v10 != 1 )
  {
    if ( v10 == 2 )
    {
      Size[0] = 0x19800000000LL;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x198uLL, 0x74727044u);
      Size[1] = (size_t)PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_12;
      memset(PoolWithTag, 0, HIDWORD(Size[0]));
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 3688), 1);
      KeWaitForSingleObject(a2[13], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3688), 1);
      DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(
                                v13,
                                *(_QWORD *)(v8 + 48),
                                *((unsigned int *)a2 + 6),
                                Size);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3688));
      KeReleaseMutex((PRKMUTEX)a2[13], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 3688), 1);
      if ( (int)DeviceDescriptor >= 0 )
      {
        v42 = (_WORD *)Size[1];
        *(_WORD *)(Size[1] + 100) = 0;
        v42[101] = 0;
        v42[152] = 0;
        v42[203] = 0;
LABEL_6:
        *a8 = *(_OWORD *)Size;
        goto LABEL_7;
      }
      v40 = WdLogNewEntry5_WdError(v39);
      v41 = *(_QWORD *)(v13 + 216);
      *(_QWORD *)(v40 + 32) = DeviceDescriptor;
    }
    else
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v40 = WdLogNewEntry5_WdError(1LL);
      v41 = *(int *)a2;
    }
    *(_QWORD *)(v40 + 24) = v41;
    WdLogEvent5_WdError(v40);
    goto LABEL_7;
  }
  Size[0] = 0x10000000000LL;
  v15 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  Size[1] = (size_t)v15;
  if ( !v15 )
  {
LABEL_12:
    LODWORD(DeviceDescriptor) = -1073741801;
    v23 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v23 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    goto LABEL_8;
  }
  memset(v15, 0, HIDWORD(Size[0]));
  DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 3688), 1);
  KeWaitForSingleObject(a2[13], Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3688), 1);
  DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(v13, *(_QWORD *)(v8 + 48), *((unsigned int *)a2 + 6), Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3688));
  KeReleaseMutex((PRKMUTEX)a2[13], 0);
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 3688), 1);
  if ( (_DWORD)DeviceDescriptor == -1071774719 )
  {
    if ( IsInternalVideoOutput(*((_DWORD *)a2 + 1)) )
    {
      v29 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v29 + 24) = DpiDxgkDdiQueryDeviceDescriptor;
      *(_QWORD *)(v29 + 32) = -1071774719LL;
      WdLogEvent5_WdError(v29);
    }
    else
    {
      v30 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      *(_QWORD *)(v30 + 24) = -1071774719LL;
      WdLogEvent5_WdWarning(v30);
    }
    goto LABEL_8;
  }
  if ( (int)DeviceDescriptor >= 0 )
  {
    if ( !DpiIsValidEdid(Size[1]) )
    {
      if ( IsInternalVideoOutput(*((_DWORD *)a2 + 1)) )
      {
        v37 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v37 + 24) = DeviceDescriptor;
        WdLogEvent5_WdError(v37);
      }
      else
      {
        v24 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
        *(_QWORD *)(v24 + 24) = DeviceDescriptor;
        WdLogEvent5_WdWarning(v24);
      }
      LODWORD(DeviceDescriptor) = -1073741823;
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  v31 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
  *(_QWORD *)(v31 + 24) = *(_QWORD *)(v13 + 216);
  WdLogEvent5_WdWarning(v31);
  if ( a6 == 1 && *((_DWORD *)a2 + 8) < 3u )
  {
    KeWaitForSingleObject((PVOID)(v8 + 3224), Executive, 0, 0, 0LL);
    ++*((_DWORD *)a2 + 8);
    if ( !*((_BYTE *)a2 + 28) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 3480));
      *((_BYTE *)a2 + 28) = 1;
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 3224), 0);
    LOBYTE(v32) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(v9, *((_DWORD *)a2 + 6), a3, v32, a5);
    if ( (int)DeviceDescriptor >= 0 )
      LODWORD(DeviceDescriptor) = 259;
  }
LABEL_7:
  if ( (_DWORD)DeviceDescriptor != 259 )
  {
LABEL_8:
    KeWaitForSingleObject((PVOID)(v8 + 3224), Executive, 0, 0, 0LL);
    *((_DWORD *)a2 + 8) = 0;
    KeReleaseMutex((PRKMUTEX)(v8 + 3224), 0);
  }
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
