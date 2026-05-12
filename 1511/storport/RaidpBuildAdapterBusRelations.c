/*
 * XREFs of RaidpBuildAdapterBusRelations @ 0x1C000B970
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000B7E8 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidUnitSetEnumerated @ 0x1C000BB80 (RaidUnitSetEnumerated.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 *     WPP_SF_DD @ 0x1C00277D0 (WPP_SF_DD.c)
 *     WPP_SF_q @ 0x1C002786C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0027BDC (WPP_SF_qD.c)
 */

__int64 __fastcall RaidpBuildAdapterBusRelations(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // r9
  _DWORD *Pool; // r12
  unsigned int v8; // r15d
  PDEVICE_OBJECT v9; // rcx
  _QWORD *i; // rsi
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  void *v15; // rcx
  PVOID v16; // rax
  PDEVICE_OBJECT v17; // r10
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  _QWORD *v21; // rcx
  PDEVICE_OBJECT v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  SIZE_T Size; // [rsp+A0h] [rbp+8h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 40LL, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, a1);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &v25);
  v3 = (unsigned int)(*(_DWORD *)(a1 + 136) + *(_DWORD *)(a1 + 216));
  Size = 8 * v3 + 16;
  v4 = 0;
  Pool = RaidAllocatePool(NonPagedPoolNx, Size, 0x52446152u, *(_QWORD *)(a1 + 8));
  if ( !Pool )
  {
    KeReleaseInStackQueuedSpinLock(&v25);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v4 = -1073741801;
    goto LABEL_21;
  }
  v8 = 0;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 41LL, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, v6);
    v9 = WPP_GLOBAL_Control;
  }
  for ( i = *(_QWORD **)(a1 + 120); i != (_QWORD *)(a1 + 120); i = (_QWORD *)*i )
  {
    v11 = i - 6;
    v12 = i - 6;
    if ( (i[12] & 4) != 0 )
    {
      LOBYTE(v5) = 1;
      RaidUnitSetEnumerated(v12, v5);
      ObfReferenceObject((PVOID)v11[1]);
      if ( v8 > (unsigned int)v3 )
      {
        v9 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          goto LABEL_15;
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
        {
          WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 43LL, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, v8, v3);
          v9 = WPP_GLOBAL_Control;
        }
        break;
      }
      v13 = v8++;
      *(_QWORD *)&Pool[2 * v13 + 2] = v11[1];
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        v19 = 44LL;
        goto LABEL_36;
      }
    }
    else
    {
      RaidUnitSetEnumerated(v12, 0LL);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        v19 = 42LL;
LABEL_36:
        WPP_SF_q(v9->AttachedDevice, v19, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, i - 6);
        v9 = WPP_GLOBAL_Control;
        continue;
      }
    }
  }
  if ( v9 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v9->Timer) & 0x4000) != 0 && BYTE1(v9->Timer) >= 5u )
    WPP_SF_(v9->AttachedDevice, 45LL, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, v6);
LABEL_15:
  v14 = *(_QWORD **)(a1 + 200);
  while ( 2 )
  {
    if ( v14 != (_QWORD *)(a1 + 200) )
    {
      v20 = v14 - 6;
      v21 = v14 - 6;
      if ( (v14[12] & 4) != 0 )
      {
        LOBYTE(v5) = 1;
        RaidUnitSetEnumerated(v21, v5);
        ObfReferenceObject((PVOID)v20[1]);
        if ( v8 > (unsigned int)v3 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
          {
            WPP_SF_DD(
              WPP_GLOBAL_Control->AttachedDevice,
              47LL,
              &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
              v8,
              v3);
          }
          break;
        }
        v24 = v8++;
        *(_QWORD *)&Pool[2 * v24 + 2] = v20[1];
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
        {
          goto LABEL_54;
        }
        v23 = 48LL;
      }
      else
      {
        RaidUnitSetEnumerated(v21, 0LL);
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
        {
          goto LABEL_54;
        }
        v23 = 46LL;
      }
      WPP_SF_q(v22->AttachedDevice, v23, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, v14 - 6);
LABEL_54:
      v14 = (_QWORD *)*v14;
      continue;
    }
    break;
  }
  KeReleaseInStackQueuedSpinLock(&v25);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *Pool = v8;
  v15 = *(void **)(a1 + 4456);
  *a2 = Pool;
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a1 + 4456) = 0LL;
  }
  v16 = RaidAllocatePool(NonPagedPoolNx, Size, 0x52446152u, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 4456) = v16;
  if ( v16 )
  {
    memmove(v16, Pool, Size);
    goto LABEL_21;
  }
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 49LL, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, a1);
LABEL_21:
      v17 = WPP_GLOBAL_Control;
    }
    if ( v17 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v17->Timer) & 0x4000) != 0 && BYTE1(v17->Timer) >= 5u )
      WPP_SF_qD(v17->AttachedDevice, 50LL, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, a1, v4);
  }
  return v4;
}
