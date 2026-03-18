/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x1C00C7AA0
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00C75F0 (DpiPdoAddPdo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     DpiIsValidEdid @ 0x1C000D600 (DpiIsValidEdid.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00BBA54 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C00C80C0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoPollChild @ 0x1C016DC00 (DpiPdoPollChild.c)
 */

__int64 __fastcall DpiPdoGetDeviceDescriptor(
        __int64 a1,
        PVOID *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        _OWORD *a8)
{
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r15d
  __int64 v13; // r14
  PVOID v15; // rax
  __int64 v16; // rcx
  __int64 DeviceDescriptor; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v23; // rax
  __int64 (__fastcall *v24)(_QWORD, _QWORD); // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 v38; // rax
  PVOID PoolWithTag; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _WORD *v43; // rax
  size_t Size[2]; // [rsp+30h] [rbp-10h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(_DWORD *)a2;
  v10 = a1;
  Size[0] = 0LL;
  Size[1] = 0LL;
  v13 = *(_QWORD *)(v8 + 40);
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      Size[0] = 0x19800000000LL;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x198uLL, 0x74727044u);
      Size[1] = (size_t)PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(DeviceDescriptor) = -1073741801;
        v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v40);
        v24 = (__int64 (__fastcall *)(_QWORD, _QWORD))DpiPdoGetDeviceDescriptor;
        goto LABEL_14;
      }
      memset(PoolWithTag, 0, HIDWORD(Size[0]));
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 2504), 1);
      KeWaitForSingleObject(a2[13], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 2504), 1);
      DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(
                                v13,
                                *(_QWORD *)(v8 + 48),
                                *((unsigned int *)a2 + 6),
                                Size);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 2504));
      KeReleaseMutex((PRKMUTEX)a2[13], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 2504));
      if ( (int)DeviceDescriptor >= 0 )
      {
        v43 = (_WORD *)Size[1];
        *(_WORD *)(Size[1] + 100) = 0;
        v43[101] = 0;
        v43[152] = 0;
        v43[203] = 0;
LABEL_6:
        *a8 = *(_OWORD *)Size;
        goto LABEL_7;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v42[3] = DpiPdoGetDeviceDescriptor;
      v42[4] = *(_QWORD *)(v13 + 216);
      v42[5] = DeviceDescriptor;
    }
    else
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v42 = (_QWORD *)WdLogNewEntry5_WdError(1LL);
      v42[3] = DpiPdoGetDeviceDescriptor;
      v42[4] = 0LL;
      v42[5] = *(int *)a2;
    }
    WdLogEvent5_WdError(v42);
    goto LABEL_7;
  }
  Size[0] = 0x10000000000LL;
  v15 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  Size[1] = (size_t)v15;
  if ( !v15 )
  {
    LODWORD(DeviceDescriptor) = -1073741801;
    v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16);
    v24 = DpiPdoGetDeviceIdFromDescriptor;
LABEL_14:
    v23[3] = v24;
    v23[4] = ExAllocatePoolWithTag;
    v23[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    goto LABEL_8;
  }
  memset(v15, 0, HIDWORD(Size[0]));
  DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 2504), 1);
  KeWaitForSingleObject(a2[13], Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 2504), 1);
  DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(v13, *(_QWORD *)(v8 + 48), *((unsigned int *)a2 + 6), Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 2504));
  KeReleaseMutex((PRKMUTEX)a2[13], 0);
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 2504));
  if ( (_DWORD)DeviceDescriptor == -1071774719 )
  {
    if ( IsInternalVideoOutput(*((_DWORD *)a2 + 1)) )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v29[3] = DpiPdoGetDeviceIdFromDescriptor;
      v29[4] = DpiDxgkDdiQueryDeviceDescriptor;
      v29[5] = -1071774719LL;
      WdLogEvent5_WdError(v29);
    }
    else
    {
      v30 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      *(_QWORD *)(v30 + 24) = DpiPdoGetDeviceIdFromDescriptor;
      *(_QWORD *)(v30 + 32) = DpiDxgkDdiQueryDeviceDescriptor;
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
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v37[3] = DpiPdoGetDeviceIdFromDescriptor;
        v37[4] = DpiIsValidEdid;
        v37[5] = DeviceDescriptor;
        WdLogEvent5_WdError(v37);
      }
      else
      {
        v38 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
        *(_QWORD *)(v38 + 24) = DpiPdoGetDeviceIdFromDescriptor;
        *(_QWORD *)(v38 + 32) = DpiIsValidEdid;
        WdLogEvent5_WdWarning(v38);
      }
      LODWORD(DeviceDescriptor) = -1073741823;
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  v31 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
  *(_QWORD *)(v31 + 24) = DpiPdoGetDeviceDescriptor;
  *(_QWORD *)(v31 + 32) = *(_QWORD *)(v13 + 216);
  WdLogEvent5_WdWarning(v31);
  if ( a6 == 1 && *((_DWORD *)a2 + 8) < 3u )
  {
    KeWaitForSingleObject((PVOID)(v8 + 2040), Executive, 0, 0, 0LL);
    ++*((_DWORD *)a2 + 8);
    if ( !*((_BYTE *)a2 + 28) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 2296));
      *((_BYTE *)a2 + 28) = 1;
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 2040), 0);
    LOBYTE(v32) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(v10, *((_DWORD *)a2 + 6), a3, v32, a5, a7);
    if ( (int)DeviceDescriptor >= 0 )
      LODWORD(DeviceDescriptor) = 259;
  }
LABEL_7:
  if ( (_DWORD)DeviceDescriptor != 259 )
  {
LABEL_8:
    KeWaitForSingleObject((PVOID)(v8 + 2040), Executive, 0, 0, 0LL);
    *((_DWORD *)a2 + 8) = 0;
    KeReleaseMutex((PRKMUTEX)(v8 + 2040), 0);
  }
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
