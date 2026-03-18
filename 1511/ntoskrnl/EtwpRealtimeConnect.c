/*
 * XREFs of EtwpRealtimeConnect @ 0x1404B615C
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x1404B666C (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x1404B66EC (EtwpOpenConsumer.c)
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
  unsigned int *v10; // rax
  unsigned int *v11; // r14
  int v12; // edi
  _WORD *v13; // rdi
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  NTSTATUS inserted; // r15d
  signed __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  PVOID v23; // [rsp+50h] [rbp-B8h]
  PVOID v24; // [rsp+58h] [rbp-B0h]
  volatile void *Address; // [rsp+60h] [rbp-A8h]
  PVOID v26; // [rsp+68h] [rbp-A0h] BYREF
  ULONG64 v27; // [rsp+70h] [rbp-98h]
  ULONG64 v28; // [rsp+78h] [rbp-90h]
  ULONG64 v29; // [rsp+80h] [rbp-88h]
  volatile void *v30; // [rsp+88h] [rbp-80h]
  PVOID NewObject; // [rsp+90h] [rbp-78h] BYREF
  int v32; // [rsp+98h] [rbp-70h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+B0h] [rbp-58h]
  __int128 v36; // [rsp+B8h] [rbp-50h]
  unsigned int v37; // [rsp+110h] [rbp+8h]
  PVOID v38; // [rsp+118h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+120h] [rbp+18h] BYREF
  PVOID Object; // [rsp+128h] [rbp+20h] BYREF

  v2 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v3 = *(_DWORD *)a1;
  v37 = *(_DWORD *)a1;
  Handle = 0LL;
  v30 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 4);
  v29 = *(_QWORD *)(a1 + 48);
  v5 = *(volatile void **)(a1 + 40);
  v28 = *(_QWORD *)(a1 + 56);
  v27 = *(_QWORD *)(a1 + 64);
  ProbeForWrite(v30, (((v4 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v4, 4u);
  v6 = (_DWORD *)v29;
  if ( v29 >= MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  *v6 = *v6;
  v7 = (_DWORD *)v28;
  if ( v28 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v8 = (_DWORD *)v27;
  if ( v27 >= MmUserProbeAddress )
    v8 = (_DWORD *)MmUserProbeAddress;
  *v8 = *v8;
  if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    v9 = 4LL;
  else
    v9 = 8LL;
  ProbeForWrite(v5, v9, 4u);
  v10 = EtwpAcquireLoggerContextByLoggerId(0LL, v3, 1);
  v11 = v10;
  if ( !v10 )
    return 3221225485LL;
  if ( (v10[3] & 0x100) != 0 )
  {
    v12 = EtwpCheckLoggerControlAccess(0x400u, (__int64)v10);
    if ( v12 >= 0 )
    {
      v12 = EtwpOpenConsumer(&Handle);
      if ( v12 >= 0 )
      {
        v12 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v23 = Object;
        if ( v12 >= 0 )
        {
          v12 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 32), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v26, 0LL);
          v24 = v26;
          if ( v12 >= 0 )
          {
            v32 = 48;
            v33 = 0LL;
            v35 = 64;
            v34 = 0LL;
            v36 = 0LL;
            v12 = ObCreateObject(0, EtwpRealTimeConnectionObjectType, (__int64)&v32, 1, 0, 152, 0, 0, &v38);
            if ( v12 >= 0 )
            {
              v13 = v38;
              memset(v38, 0, 0x98uLL);
              v13[44] = v37;
              *((_QWORD *)v13 + 2) = Handle;
              v14 = v38;
              *((_QWORD *)v38 + 3) = KeGetCurrentThread()->ApcState.Process;
              v14[6] = Object;
              v14[7] = v26;
              v14[8] = v29;
              v14[9] = v5;
              v14[14] = Address;
              *((_DWORD *)v14 + 30) = v4;
              v14[17] = v28;
              v14[18] = v27;
              *((_DWORD *)v14 + 24) = v4 >> 12;
              v14[13] = v30;
              v15 = v38;
              *((_BYTE *)v38 + 90) ^= (*((_BYTE *)v38 + 90) ^ (16
                                                             * (KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] != 0))) & 0x10;
              v15[5] = a1;
              inserted = ObInsertObject(v15, 0LL, 0x400u, 1u, &NewObject, (PHANDLE)(a1 + 72));
              if ( inserted >= 0 )
              {
                v17 = (signed __int64 *)(v11 + 176);
                v18 = KeAbPreAcquire((ULONG_PTR)(v11 + 176), 0LL, 0LL);
                v19 = v18;
                if ( _interlockedbittestandset64((volatile signed __int32 *)v11 + 176, 0LL) )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v11 + 88, v18, (ULONG_PTR)(v11 + 176));
                if ( v19 )
                  *(_BYTE *)(v19 + 26) |= 1u;
                *((_QWORD *)v11 + 46) = v38;
                _m_prefetchw(v17);
                v20 = *v17;
                if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
                  v2 = v20 - 16;
                if ( (v20 & 2) != 0 || (v21 = *v17, v21 != _InterlockedCompareExchange64(v17, v2, v20)) )
                  ExfReleasePushLock((_QWORD *)v11 + 88);
                KeAbPostRelease((ULONG_PTR)(v11 + 176));
                EtwpSynchronizeWithLogger(v11, 32LL);
              }
              EtwpReleaseLoggerContext(0LL, v11, 1);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
  EtwpReleaseLoggerContext(0LL, v11, 1);
  if ( Handle )
    ZwClose(Handle);
  if ( v23 )
    ObfDereferenceObject(v23);
  if ( v24 )
    ObfDereferenceObject(v24);
  return (unsigned int)v12;
}
