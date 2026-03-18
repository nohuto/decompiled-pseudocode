/*
 * XREFs of EtwpRealtimeConnect @ 0x14054D23C
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x14054D790 (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x14054D81C (EtwpOpenConsumer.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  signed __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // r13d
  volatile void *v5; // r12
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  SIZE_T v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  int v13; // edi
  int v14; // r9d
  __int64 v15; // r9
  NTSTATUS inserted; // r15d
  signed __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rsi
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  PVOID v24; // [rsp+50h] [rbp-B8h]
  PVOID v25; // [rsp+58h] [rbp-B0h]
  volatile void *Address; // [rsp+60h] [rbp-A8h]
  PVOID v27; // [rsp+68h] [rbp-A0h] BYREF
  ULONG64 v28; // [rsp+70h] [rbp-98h]
  ULONG64 v29; // [rsp+78h] [rbp-90h]
  ULONG64 v30; // [rsp+80h] [rbp-88h]
  volatile void *v31; // [rsp+88h] [rbp-80h]
  PVOID NewObject; // [rsp+90h] [rbp-78h] BYREF
  int v33; // [rsp+98h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-68h]
  __int64 v35; // [rsp+A8h] [rbp-60h]
  int v36; // [rsp+B0h] [rbp-58h]
  __int128 v37; // [rsp+B8h] [rbp-50h]
  unsigned int v38; // [rsp+110h] [rbp+8h]
  PVOID v39; // [rsp+118h] [rbp+10h]
  HANDLE Handle; // [rsp+120h] [rbp+18h] BYREF
  PVOID Object; // [rsp+128h] [rbp+20h] BYREF

  v2 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v3 = *(_DWORD *)a1;
  v38 = *(_DWORD *)a1;
  Handle = 0LL;
  v31 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 4);
  v30 = *(_QWORD *)(a1 + 48);
  v5 = *(volatile void **)(a1 + 40);
  v29 = *(_QWORD *)(a1 + 56);
  v28 = *(_QWORD *)(a1 + 64);
  ProbeForWrite(v31, (((v4 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v4, 4u);
  v6 = (_DWORD *)v30;
  if ( v30 >= MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  *v6 = *v6;
  v7 = (_DWORD *)v29;
  if ( v29 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v8 = (_DWORD *)v28;
  if ( v28 >= MmUserProbeAddress )
    v8 = (_DWORD *)MmUserProbeAddress;
  *v8 = *v8;
  if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    v9 = 4LL;
  else
    v9 = 8LL;
  ProbeForWrite(v5, v9, 4u);
  v10 = EtwpAcquireLoggerContextByLoggerId(v3, 1);
  v11 = v10;
  if ( !v10 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v10 + 12) & 0x100) == 0 )
  {
    v13 = -1073741811;
LABEL_31:
    EtwpReleaseLoggerContext((unsigned int *)v11, 1);
    if ( Handle )
      ZwClose(Handle);
    if ( v24 )
      ObfDereferenceObject(v24);
    if ( v25 )
      ObfDereferenceObject(v25);
    return (unsigned int)v13;
  }
  v13 = EtwpCheckLoggerControlAccess(0x400u, v10);
  if ( v13 < 0 )
    goto LABEL_31;
  v13 = EtwpOpenConsumer(&Handle);
  if ( v13 < 0 )
    goto LABEL_31;
  v13 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v24 = Object;
  if ( v13 < 0 )
    goto LABEL_31;
  v13 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 32), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v27, 0LL);
  v25 = v27;
  if ( v13 < 0 )
    goto LABEL_31;
  v33 = 48;
  v34 = 0LL;
  v36 = 64;
  v35 = 0LL;
  v37 = 0LL;
  LOBYTE(v14) = 1;
  v13 = ObCreateObject(0, (int)EtwpRealTimeConnectionObjectType, (int)&v33, v14);
  if ( v13 < 0 )
    goto LABEL_31;
  memset(v39, 0, 0x98uLL);
  *((_WORD *)v39 + 44) = v38;
  *((_QWORD *)v39 + 2) = Handle;
  *((_QWORD *)v39 + 3) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)v39 + 6) = Object;
  *((_QWORD *)v39 + 7) = v27;
  *((_QWORD *)v39 + 8) = v30;
  *((_QWORD *)v39 + 9) = v5;
  *((_QWORD *)v39 + 14) = Address;
  *((_DWORD *)v39 + 30) = v4;
  *((_QWORD *)v39 + 17) = v29;
  *((_QWORD *)v39 + 18) = v28;
  *((_DWORD *)v39 + 24) = v4 >> 12;
  *((_QWORD *)v39 + 13) = v31;
  *((_BYTE *)v39 + 90) ^= (*((_BYTE *)v39 + 90) ^ (16
                                                 * (KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] != 0))) & 0x10;
  *((_QWORD *)v39 + 5) = a1;
  inserted = ObInsertObject(v39, 0LL, 0x400u, 1u, &NewObject, (PHANDLE)(a1 + 72));
  if ( inserted >= 0 )
  {
    v17 = (signed __int64 *)(v11 + 704);
    v18 = KeAbPreAcquire(v11 + 704, 0LL, 0LL, v15);
    v21 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 704), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 704), v18, v11 + 704, v20);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    *(_QWORD *)(v11 + 368) = v39;
    _m_prefetchw(v17);
    v22 = *v17;
    if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v2 = v22 - 16;
    if ( (v22 & 2) != 0 || (v23 = *v17, v23 != _InterlockedCompareExchange64(v17, v2, v22)) )
      ExfReleasePushLock((_QWORD *)(v11 + 704), v19);
    KeAbPostRelease(v11 + 704);
    EtwpSynchronizeWithLogger(v11, 32LL);
  }
  EtwpReleaseLoggerContext((unsigned int *)v11, 1);
  return (unsigned int)inserted;
}
