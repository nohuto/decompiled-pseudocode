/*
 * XREFs of WmipReceiveNotifications @ 0x1400AD93C
 * Callers:
 *     WmipIoControl @ 0x140473894 (WmipIoControl.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     WmipCompleteGuidIrpWithError @ 0x1400A05B8 (WmipCompleteGuidIrpWithError.c)
 *     WmipClearIrpObjectList @ 0x1400A0FAC (WmipClearIrpObjectList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     WmipCopyFromEventQueues @ 0x140543F24 (WmipCopyFromEventQueues.c)
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
  unsigned int v22; // r9d
  PVOID *v23; // rdx
  _QWORD *v24; // rax
  __int64 *v25; // rax
  __int64 **v26; // r8
  __int64 v27; // rax
  bool v28; // r14
  PVOID *v29; // rbx
  int v31; // eax
  __int64 v32; // rax
  unsigned int v33; // ebx
  unsigned int *v34; // rax
  __int64 *v35; // r15
  __int64 v36; // r13
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v38; // [rsp+44h] [rbp-BCh]
  unsigned int v39; // [rsp+48h] [rbp-B8h]
  int v40; // [rsp+4Ch] [rbp-B4h]
  int v41; // [rsp+50h] [rbp-B0h]
  int v42; // [rsp+54h] [rbp-ACh]
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int *v44; // [rsp+60h] [rbp-A0h]
  unsigned int *v45; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[256]; // [rsp+90h] [rbp-70h] BYREF

  v3 = *a1;
  v4 = *a2;
  v44 = a2;
  v6 = a1;
  v38 = -1073741811;
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
  v40 = 0;
  v39 = 0;
  LOBYTE(v7) = 0;
  LOBYTE(v11) = 0;
  LODWORD(v43) = v7;
  v12 = 0;
  v37 = v11;
  v41 = 0;
  if ( (_DWORD)v3 )
  {
    v13 = (HANDLE *)(v6 + 2);
    while ( 1 )
    {
      v38 = ObReferenceObjectByHandle(*v13, 4u, WmipGuidObjectType, 1, &Object, 0LL);
      if ( v38 < 0 )
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
        v9 = v40;
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
          LODWORD(v43) = v7;
        }
        if ( *((_QWORD *)v14 + 16) )
        {
          v31 = (unsigned __int8)v42;
          if ( v14[37] )
            v31 = 1;
          v42 = v31;
        }
        v9 = ((v14[29] + 7) & 0xFFFFFFF8) + v40;
        v18 = v14[37] + 7;
        v40 = v9;
        v12 = (v18 & 0xFFFFFFF8) + v41;
        v41 = v12;
      }
      v13 = (HANDLE *)(v45 + 2);
      ++v39;
      v45 += 2;
      if ( v39 >= (unsigned int)v3 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v19 = v12 + v9;
    v39 = v12 + v9;
    if ( (_BYTE)v11 == 1 && (_DWORD)v10 )
    {
      v35 = (__int64 *)PoolWithTag;
      v36 = (unsigned int)v10;
      do
      {
        if ( *(_QWORD *)(*v35 + 72) )
          WmipCompleteGuidIrpWithError(*v35);
        v35 += 2;
        --v36;
      }
      while ( v36 );
      v19 = v39;
      LOBYTE(v7) = v43;
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
        v43 = 0LL;
        if ( (_BYTE)v7 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v10, (_DWORD)v6, v12, (__int64)&v37, (__int64)&v43, 1);
          LODWORD(v6) = v37 + (_DWORD)v6;
          v32 = v43;
          v33 = v4 - v37;
        }
        if ( v20 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v10, (_DWORD)v6, v12, (__int64)&v37, (__int64)&v43, 0);
          v33 -= v37;
          v32 = v43;
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
          if ( *v26 != (__int64 *)v21 )
            __fastfail(3u);
          *v25 = v21;
          ++v22;
          v25[1] = (__int64)v26;
          v23 += 2;
          *v26 = v25;
          *(_QWORD *)(a3 + 128) = v25;
        }
        while ( v22 < (unsigned int)v10 );
      }
      v27 = *(_QWORD *)(a3 + 184);
      v38 = 259;
      v28 = 0;
      *(_BYTE *)(v27 + 3) |= 1u;
      KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)WmipNotificationIrpCancel);
      if ( *(_BYTE *)(a3 + 68) )
      {
        WmipClearIrpObjectList(a3);
        v38 = -1073741536;
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
  return (unsigned int)v38;
}
