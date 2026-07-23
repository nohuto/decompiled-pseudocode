/*
 * XREFs of EtwpRealtimeConnect @ 0x14049302C
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x140493540 (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x1404935C0 (EtwpOpenConsumer.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  signed __int64 v2; // rbx
  unsigned int v3; // r14d
  volatile void *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  SIZE_T v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // edi
  _WORD *v13; // rdi
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  NTSTATUS inserted; // r15d
  signed __int64 *v17; // rdi
  _BYTE *v18; // rax
  _BYTE *v19; // rsi
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v24; // [rsp+58h] [rbp-B0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v26; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v27; // [rsp+70h] [rbp-98h]
  PVOID v28; // [rsp+78h] [rbp-90h]
  PVOID v29; // [rsp+80h] [rbp-88h]
  unsigned __int64 v30; // [rsp+88h] [rbp-80h]
  volatile void *v31; // [rsp+90h] [rbp-78h]
  PVOID NewObject; // [rsp+98h] [rbp-70h] BYREF
  int v33; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int v36; // [rsp+B8h] [rbp-50h]
  __int128 v37; // [rsp+C0h] [rbp-48h]
  unsigned int v38; // [rsp+110h] [rbp+8h]
  unsigned int v39; // [rsp+118h] [rbp+10h]
  PVOID v40; // [rsp+120h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+20h] BYREF

  v2 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v3 = *(_DWORD *)a1;
  v38 = *(_DWORD *)a1;
  Handle = 0LL;
  v31 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v39 = *(_DWORD *)(a1 + 4);
  v30 = *(_QWORD *)(a1 + 48);
  v4 = *(volatile void **)(a1 + 40);
  v26 = *(_QWORD *)(a1 + 56);
  v27 = *(_QWORD *)(a1 + 64);
  ProbeForWrite(v31, (((v39 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v39, 4u);
  v5 = v30;
  if ( v30 >= 0x7FFFFFFF0000LL )
    v5 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  v6 = v26;
  if ( v26 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v27;
  if ( v27 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = 4LL;
  if ( !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    v8 = 8LL;
  ProbeForWrite(v4, v8, 4u);
  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
  v10 = EtwpAcquireLoggerContextByLoggerId(v9, v3, 1);
  v11 = v10;
  if ( !v10 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v10 + 12) & 0x100) != 0 )
  {
    v12 = EtwpCheckLoggerControlAccess(0x400u, v10);
    if ( v12 >= 0 )
    {
      v12 = EtwpOpenConsumer(&Handle);
      if ( v12 >= 0 )
      {
        v12 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v28 = Object;
        if ( v12 >= 0 )
        {
          v12 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 32), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v24, 0LL);
          v29 = v24;
          if ( v12 >= 0 )
          {
            v33 = 48;
            v34 = 0LL;
            v36 = 64;
            v35 = 0LL;
            v37 = 0LL;
            v12 = ObCreateObject(0, EtwpRealTimeConnectionObjectType, (__int64)&v33, 1, 0, 160, 0, 0, &v40);
            if ( v12 >= 0 )
            {
              v13 = v40;
              memset(v40, 0, 0xA0uLL);
              v13[44] = v38;
              *((_QWORD *)v13 + 2) = Handle;
              v14 = v40;
              *((_QWORD *)v40 + 3) = KeGetCurrentThread()->ApcState.Process;
              v14[6] = Object;
              v14[7] = v24;
              v14[8] = v30;
              v14[9] = v4;
              v14[14] = Address;
              *((_DWORD *)v14 + 30) = v39;
              v14[17] = v26;
              v14[18] = v27;
              v14[19] = v9;
              *((_DWORD *)v14 + 24) = v39 >> 12;
              v14[13] = v31;
              v15 = v40;
              *((_BYTE *)v40 + 90) ^= (*((_BYTE *)v40 + 90) ^ (16
                                                             * (KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] != 0))) & 0x10;
              v15[5] = a1;
              inserted = ObInsertObject(v15, 0LL, 0x400u, 1u, &NewObject, (PHANDLE)(a1 + 72));
              if ( inserted >= 0 )
              {
                v17 = (signed __int64 *)(v11 + 688);
                v18 = (_BYTE *)KeAbPreAcquire(v11 + 688, 0LL, 0);
                v19 = v18;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 688), 0LL) )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 688), v18, v11 + 688);
                if ( v19 )
                  v19[26] |= 1u;
                *(_QWORD *)(v11 + 352) = v40;
                _m_prefetchw(v17);
                v20 = *v17;
                if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
                  v2 = v20 - 16;
                if ( (v20 & 2) != 0 || (v21 = *v17, v21 != _InterlockedCompareExchange64(v17, v2, v20)) )
                  ExfReleasePushLock((_QWORD *)(v11 + 688));
                KeAbPostRelease(v11 + 688);
                EtwpSynchronizeWithLogger(v11, 32LL);
              }
              EtwpReleaseLoggerContext((unsigned int *)v11, 1);
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
  EtwpReleaseLoggerContext((unsigned int *)v11, 1);
  if ( Handle )
    ZwClose(Handle);
  if ( v28 )
    ObfDereferenceObject(v28);
  if ( v29 )
    ObfDereferenceObject(v29);
  return (unsigned int)v12;
}
