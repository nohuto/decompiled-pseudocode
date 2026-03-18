/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x1C00E28C0
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00E2A50 (DpiPdoAddPdo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     DpiIsValidEdid @ 0x1C000F900 (DpiIsValidEdid.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00E25D8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C00E2600 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00E2694 (DxgkAcquireAdapterDdiSync.c)
 *     DpiPdoPollChild @ 0x1C0172430 (DpiPdoPollChild.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 DeviceDescriptor; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v26; // rax
  __int64 (__fastcall *v27)(); // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // rax
  PVOID PoolWithTag; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _WORD *v49; // rax
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
        v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v44, v43, v45, v46);
        v27 = (__int64 (__fastcall *)())DpiPdoGetDeviceDescriptor;
        goto LABEL_14;
      }
      memset(PoolWithTag, 0, HIDWORD(Size[0]));
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 2544), 1);
      KeWaitForSingleObject(a2[13], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 2544), 1);
      DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(
                                v13,
                                *(_QWORD *)(v8 + 48),
                                *((unsigned int *)a2 + 6),
                                (unsigned int *)Size);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 2544));
      KeReleaseMutex((PRKMUTEX)a2[13], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 2544), 1);
      if ( (int)DeviceDescriptor >= 0 )
      {
        v49 = (_WORD *)Size[1];
        *(_WORD *)(Size[1] + 100) = 0;
        v49[101] = 0;
        v49[152] = 0;
        v49[203] = 0;
LABEL_6:
        *a8 = *(_OWORD *)Size;
        goto LABEL_7;
      }
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v48[3] = DpiPdoGetDeviceDescriptor;
      v48[4] = *(_QWORD *)(v13 + 216);
      v48[5] = DeviceDescriptor;
    }
    else
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v48 = (_QWORD *)WdLogNewEntry5_WdError(1LL);
      v48[3] = DpiPdoGetDeviceDescriptor;
      v48[4] = 0LL;
      v48[5] = *(int *)a2;
    }
    WdLogEvent5_WdError(v48);
    goto LABEL_7;
  }
  Size[0] = 0x10000000000LL;
  v15 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  Size[1] = (size_t)v15;
  if ( !v15 )
  {
    LODWORD(DeviceDescriptor) = -1073741801;
    v26 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    v27 = DpiPdoGetDeviceIdFromDescriptor;
LABEL_14:
    v26[3] = v27;
    v26[4] = ExAllocatePoolWithTag;
    v26[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v26);
    goto LABEL_8;
  }
  memset(v15, 0, HIDWORD(Size[0]));
  DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 2544), 1);
  KeWaitForSingleObject(a2[13], Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 2544), 1);
  DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(
                            v13,
                            *(_QWORD *)(v8 + 48),
                            *((unsigned int *)a2 + 6),
                            (unsigned int *)Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 2544));
  KeReleaseMutex((PRKMUTEX)a2[13], 0);
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 2544), 1);
  if ( (_DWORD)DeviceDescriptor == -1071774719 )
  {
    if ( IsInternalVideoOutput(*((_DWORD *)a2 + 1)) )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v32[3] = DpiPdoGetDeviceIdFromDescriptor;
      v32[4] = DpiDxgkDdiQueryDeviceDescriptor;
      v32[5] = -1071774719LL;
      WdLogEvent5_WdError(v32);
    }
    else
    {
      v33 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      *(_QWORD *)(v33 + 24) = DpiPdoGetDeviceIdFromDescriptor;
      *(_QWORD *)(v33 + 32) = DpiDxgkDdiQueryDeviceDescriptor;
      WdLogEvent5_WdWarning(v33);
    }
    goto LABEL_8;
  }
  if ( (int)DeviceDescriptor >= 0 )
  {
    if ( !DpiIsValidEdid(Size[1]) )
    {
      if ( IsInternalVideoOutput(*((_DWORD *)a2 + 1)) )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v37);
        v40[3] = DpiPdoGetDeviceIdFromDescriptor;
        v40[4] = DpiIsValidEdid;
        v40[5] = DeviceDescriptor;
        WdLogEvent5_WdError(v40);
      }
      else
      {
        v41 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
        *(_QWORD *)(v41 + 24) = DpiPdoGetDeviceIdFromDescriptor;
        *(_QWORD *)(v41 + 32) = DpiIsValidEdid;
        WdLogEvent5_WdWarning(v41);
      }
      LODWORD(DeviceDescriptor) = -1073741823;
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  v34 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
  *(_QWORD *)(v34 + 24) = DpiPdoGetDeviceDescriptor;
  *(_QWORD *)(v34 + 32) = *(_QWORD *)(v13 + 216);
  WdLogEvent5_WdWarning(v34);
  if ( a6 == 1 && *((_DWORD *)a2 + 8) < 3u )
  {
    KeWaitForSingleObject((PVOID)(v8 + 2080), Executive, 0, 0, 0LL);
    ++*((_DWORD *)a2 + 8);
    if ( !*((_BYTE *)a2 + 28) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 2336));
      *((_BYTE *)a2 + 28) = 1;
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 2080), 0);
    LOBYTE(v35) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(v10, *((_DWORD *)a2 + 6), a3, v35, a5, a7);
    if ( (int)DeviceDescriptor >= 0 )
      LODWORD(DeviceDescriptor) = 259;
  }
LABEL_7:
  if ( (_DWORD)DeviceDescriptor != 259 )
  {
LABEL_8:
    KeWaitForSingleObject((PVOID)(v8 + 2080), Executive, 0, 0, 0LL);
    *((_DWORD *)a2 + 8) = 0;
    KeReleaseMutex((PRKMUTEX)(v8 + 2080), 0);
  }
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
