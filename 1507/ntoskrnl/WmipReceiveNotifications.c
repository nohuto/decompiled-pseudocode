/*
 * XREFs of WmipReceiveNotifications @ 0x140074DAC
 * Callers:
 *     WmipIoControl @ 0x1404A915C (WmipIoControl.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     WmipClearIrpObjectList @ 0x140074C14 (WmipClearIrpObjectList.c)
 *     WmipCompleteGuidIrpWithError @ 0x14012EB88 (WmipCompleteGuidIrpWithError.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     WmipCopyFromEventQueues @ 0x140581224 (WmipCopyFromEventQueues.c)
 */

__int64 __fastcall WmipReceiveNotifications(unsigned int *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // r12d
  _DWORD *v6; // r14
  int v7; // r13d
  PVOID *PoolWithTag; // rdi
  int v9; // r8d
  __int64 v10; // rsi
  int v11; // edx
  int v12; // r9d
  HANDLE *v13; // rcx
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  PVOID *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  char v20; // r15
  __int64 v21; // rcx
  unsigned int v22; // r8d
  PVOID *v23; // rdx
  _QWORD *v24; // rax
  __int64 *v25; // rax
  __int64 **v26; // r9
  __int64 v27; // rax
  bool v28; // r14
  PVOID *v29; // rbx
  int v31; // eax
  __int64 v32; // rax
  unsigned int v33; // ebx
  unsigned int *v34; // rax
  PVOID *v35; // r15
  __int64 v36; // r13
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-BCh]
  NTSTATUS v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  int v43; // [rsp+60h] [rbp-A0h]
  unsigned int *v44; // [rsp+68h] [rbp-98h]
  unsigned int *v45; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-80h] BYREF
  _BYTE P[256]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = *a1;
  v4 = *a2;
  v44 = a2;
  v6 = a1;
  v39 = -1073741811;
  v7 = 1;
  v45 = a1 + 2;
  if ( (unsigned int)v3 > 0x10 )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 16 * v3, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = (PVOID *)P;
  }
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v9 = 0;
  LOBYTE(v42) = 0;
  v10 = 0LL;
  v43 = 0;
  v38 = 0;
  LOBYTE(v7) = 0;
  LOBYTE(v11) = 0;
  LODWORD(v40) = v7;
  v12 = 0;
  v37 = v11;
  v41 = 0;
  if ( (_DWORD)v3 )
  {
    v13 = (HANDLE *)(v6 + 2);
    while ( 1 )
    {
      v39 = ObReferenceObjectByHandle(*v13, 4u, WmipGuidObjectType, 1, &Object, 0LL);
      if ( v39 < 0 )
        break;
      v14 = Object;
      v15 = 0;
      if ( (_DWORD)v10 )
      {
        v16 = PoolWithTag;
        while ( Object != *v16 )
        {
          ++v15;
          v16 += 2;
          if ( v15 >= (unsigned int)v10 )
            goto LABEL_10;
        }
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        LOBYTE(v11) = v37;
        v9 = v43;
        v12 = v41;
      }
      else
      {
LABEL_10:
        v11 = (unsigned __int8)v37;
        if ( *((_QWORD *)Object + 9) )
          v11 = 1;
        v17 = 2LL * (unsigned int)v10;
        v10 = (unsigned int)(v10 + 1);
        v37 = v11;
        PoolWithTag[v17] = Object;
        if ( *((_QWORD *)v14 + 12) )
        {
          v7 = (unsigned __int8)v7;
          if ( v14[29] )
            v7 = 1;
          LODWORD(v40) = v7;
        }
        if ( *((_QWORD *)v14 + 16) )
        {
          v31 = (unsigned __int8)v42;
          if ( v14[37] )
            v31 = 1;
          v42 = v31;
        }
        v9 = ((v14[29] + 7) & 0xFFFFFFF8) + v43;
        v18 = v14[37] + 7;
        v43 = v9;
        v12 = (v18 & 0xFFFFFFF8) + v41;
        v41 = v12;
      }
      v13 = (HANDLE *)(v45 + 2);
      ++v38;
      v45 += 2;
      if ( v38 >= (unsigned int)v3 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v19 = v12 + v9;
    v38 = v12 + v9;
    if ( (_BYTE)v11 == 1 && (_DWORD)v10 )
    {
      v35 = PoolWithTag;
      v36 = (unsigned int)v10;
      do
      {
        if ( *((_QWORD *)*v35 + 9) )
          WmipCompleteGuidIrpWithError();
        v35 += 2;
        --v36;
      }
      while ( v36 );
      v19 = v38;
      LOBYTE(v7) = v40;
    }
    v20 = v42;
    if ( (unsigned __int8)v42 | (unsigned __int8)v7 )
    {
      if ( v19 > v4 )
      {
        v34 = v44;
        *v6 = 56;
        v6[11] = 32;
        v6[12] = v19;
        *v34 = 56;
      }
      else
      {
        v32 = 0LL;
        v33 = v4;
        v40 = 0LL;
        if ( (_BYTE)v7 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v10, (_DWORD)v6, v12, (__int64)&v37, (__int64)&v40, 1);
          LODWORD(v6) = v37 + (_DWORD)v6;
          v32 = v40;
          v33 = v4 - v37;
        }
        if ( v20 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v10, (_DWORD)v6, v12, (__int64)&v37, (__int64)&v40, 0);
          v33 -= v37;
          v32 = v40;
        }
        if ( v32 )
          *(_DWORD *)(v32 + 12) = 0;
        *v44 = v4 - v33;
      }
    }
    else
    {
      v21 = a3 + 120;
      v22 = 0;
      *(_QWORD *)(a3 + 128) = a3 + 120;
      *(_QWORD *)(a3 + 120) = a3 + 120;
      if ( (_DWORD)v10 )
      {
        v23 = PoolWithTag;
        do
        {
          v24 = *v23;
          v24[9] = a3;
          v25 = v24 + 10;
          v26 = *(__int64 ***)(a3 + 128);
          *v25 = v21;
          v25[1] = (__int64)v26;
          if ( *v26 != (__int64 *)v21 )
            __fastfail(3u);
          ++v22;
          *v26 = v25;
          v23 += 2;
          *(_QWORD *)(a3 + 128) = v25;
        }
        while ( v22 < (unsigned int)v10 );
      }
      v27 = *(_QWORD *)(a3 + 184);
      v39 = 259;
      v28 = 0;
      *(_BYTE *)(v27 + 3) |= 1u;
      KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)WmipNotificationIrpCancel);
      if ( *(_BYTE *)(a3 + 68) )
      {
        WmipClearIrpObjectList(a3);
        v39 = -1073741536;
        v28 = _InterlockedExchange64((volatile __int64 *)(a3 + 104), 0LL) != 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v28 )
      {
        *(_QWORD *)(a3 + 56) = 0LL;
        *(_DWORD *)(a3 + 48) = -1073741536;
        pIofCompleteRequest((PIRP)a3, 0);
      }
      *v44 = 0;
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v10 )
  {
    v29 = PoolWithTag;
    do
    {
      ObfDereferenceObjectWithTag(*v29, 0x746C6644u);
      v29 += 2;
      --v10;
    }
    while ( v10 );
  }
  if ( PoolWithTag != (PVOID *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v39;
}
