/*
 * XREFs of AlpcpCreateClientPort @ 0x140472CA0
 * Callers:
 *     AlpcpConnectPort @ 0x140472880 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     AlpcpInitializePort @ 0x140472328 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x1404724E8 (AlpcInitializeHandleTable.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140472674 (AlpcpValidateAndSetPortAttributes.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     AlpcpSetOwnerProcessPort @ 0x14047324C (AlpcpSetOwnerProcessPort.c)
 *     AlpcpAllocateMessage @ 0x140474B20 (AlpcpAllocateMessage.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     SeCreateClientSecurity @ 0x1404819F0 (SeCreateClientSecurity.c)
 *     ObReferenceObjectByName @ 0x1404CF06C (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x14050BAF0 (AlpcpCheckConnectionSecurity.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        HANDLE *a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  char PreviousMode; // r12
  __int64 result; // rax
  __int64 v13; // r9
  unsigned __int64 *v14; // r14
  int v15; // ecx
  unsigned __int64 *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // r9
  struct _KPROCESS *v19; // rsi
  int v20; // edi
  _DWORD *v21; // rdi
  __int64 v22; // r9
  char v23; // al
  int v24; // esi
  _DWORD *v25; // rsi
  unsigned __int64 **Blob; // rax
  __int64 v27; // r9
  unsigned __int64 *v28; // r12
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdi
  unsigned __int64 *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // r13
  unsigned __int64 **v36; // r12
  __int64 v37; // rax
  _QWORD *v38; // rdx
  _QWORD *v39; // rcx
  unsigned __int64 v40; // rdi
  ULONG_PTR *v41; // r14
  ULONG_PTR v42; // rdi
  char v43; // cl
  int v44; // r14d
  signed __int64 v45; // rcx
  _QWORD *v46; // rcx
  volatile signed __int32 *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rsi
  PVOID v51; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 **v54; // [rsp+68h] [rbp-8h]
  char v58; // [rsp+D0h] [rbp+60h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, 0, 1, (_DWORD)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v51);
  else
    result = ObReferenceObjectByName(a4, 0, 0, 1, (__int64)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v51);
  if ( (int)result >= 0 )
  {
    v14 = (unsigned __int64 *)v51;
    v15 = *((_DWORD *)v51 + 104);
    if ( (v15 & 6) == 2 )
    {
      if ( !a11 && (v15 & 0x1000) != 0 )
      {
        v47 = (volatile signed __int32 *)((char *)v51 + 352);
        v48 = KeAbPreAcquire((ULONG_PTR)v51 + 352, 0LL, 0LL, v13);
        v50 = v48;
        if ( _interlockedbittestandset64(v47, 0LL) )
          ExfAcquirePushLockExclusiveEx(v14 + 44, v48, (ULONG_PTR)(v14 + 44), v49);
        if ( v50 )
          *(_BYTE *)(v50 + 26) |= 1u;
        *((_DWORD *)v14 + 104) &= ~0x2000u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v47, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v14 + 44);
        KeAbPostRelease((ULONG_PTR)(v14 + 44));
        v14 = (unsigned __int64 *)v51;
      }
      if ( !a9 && !a8 )
        goto LABEL_85;
      v16 = v14 + 44;
      v17 = KeAbPreAcquire((ULONG_PTR)v16, 0LL, 0LL, v13);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v16, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v16, v17, (ULONG_PTR)v16, v18);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      v19 = (struct _KPROCESS *)*((_QWORD *)v51 + 3);
      if ( ((unsigned __int8)v19 & 1) != 0 )
      {
        v19 = 0LL;
      }
      else if ( v19 )
      {
        ObfReferenceObjectWithTag(*((PVOID *)v51 + 3), 0x63706C41u);
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v16);
      KeAbPostRelease((ULONG_PTR)v16);
      if ( v19 )
      {
        v20 = AlpcpCheckConnectionSecurity(v19);
        ObfDereferenceObjectWithTag(v19, 0x63706C41u);
      }
      else
      {
        v20 = -1073741152;
      }
      v14 = (unsigned __int64 *)v51;
      if ( v20 >= 0 )
      {
LABEL_85:
        LOBYTE(v13) = PreviousMode;
        LOBYTE(v15) = PreviousMode;
        v20 = ObCreateObject(v15, (_DWORD)AlpcPortObjectType, a6, v13, 0, 472, 0, 0, (__int64)&Object);
        if ( v20 >= 0 )
        {
          v21 = Object;
          memset(Object, 0, 0x1D8uLL);
          if ( !a7 || (v23 = 1, (*a7 & 0x40000) == 0) )
            v23 = 0;
          v58 = v23;
          v24 = AlpcpInitializePort((__int64)v21, 2, v23, v22);
          if ( v24 >= 0 )
          {
            v25 = v21 + 104;
            v21[104] |= 8u;
            Blob = (unsigned __int64 **)AlpcpAllocateBlob(&AlpcConnectionType, 80LL, 1LL);
            v54 = Blob;
            if ( Blob )
            {
              *((_QWORD *)v21 + 2) = Blob;
              *Blob = v14;
              Blob[2] = (unsigned __int64 *)v21;
              Blob[1] = 0LL;
              Blob[9] = 0LL;
              v28 = (unsigned __int64 *)(v14[2] - 16);
              v29 = KeAbPreAcquire((ULONG_PTR)v28, 0LL, 0LL, v27);
              v31 = v29;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
                ExfAcquirePushLockExclusiveEx(v28, v29, (ULONG_PTR)v28, v30);
              if ( v31 )
                *(_BYTE *)(v31 + 26) |= 1u;
              v32 = (unsigned __int64 *)((char *)v51 + 352);
              v33 = KeAbPreAcquire((ULONG_PTR)v51 + 352, 0LL, 0LL, v30);
              v35 = v33;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
                ExfAcquirePushLockExclusiveEx(v32, v33, (ULONG_PTR)v32, v34);
              if ( v35 )
                *(_BYTE *)(v35 + 26) |= 1u;
              v36 = v54;
              v37 = v14[2] + 24;
              v38 = *(_QWORD **)(v14[2] + 32);
              v39 = v54 + 3;
              v54[3] = (unsigned __int64 *)v37;
              v39[1] = v38;
              if ( *v38 != v37 )
                __fastfail(3u);
              *v38 = v39;
              *(_QWORD *)(v37 + 8) = v39;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v32);
              KeAbPostRelease((ULONG_PTR)v32);
              v40 = v14[2];
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v40 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v40 - 16));
              KeAbPostRelease(v40 - 16);
              LODWORD(result) = AlpcInitializeHandleTable((__int64)(v36 + 5));
              v21 = Object;
              if ( (int)result >= 0 )
              {
                LODWORD(result) = AlpcpValidateAndSetPortAttributes((__int64)Object, a7, (__int64)v51, a10, 0, v58, a11);
                if ( (int)result >= 0 )
                {
                  v41 = (ULONG_PTR *)(v36 + 9);
                  LODWORD(result) = AlpcpAllocateMessage(v36 + 9, 48LL, 1LL);
                  if ( (int)result >= 0 )
                  {
                    ++*(_WORD *)(*v41 - 30);
                    *(_DWORD *)(*v41 + 248) |= 0x80000000;
                    v42 = *v41;
                    if ( AlpcpMessageLogEnabled )
                      AlpcpEnterStateChangeEventMessageLog(*v41);
                    v43 = *(_BYTE *)(v42 - 32);
                    v44 = 0;
                    if ( (v43 & 1) != 0 )
                    {
                      v44 = 0x10000 - *(__int16 *)(v42 - 30);
                      *(_WORD *)(v42 - 30) = 0;
                      *(_BYTE *)(v42 - 32) = v43 & 0xFE;
                    }
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v42 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v42 - 16));
                    KeAbPostRelease(v42 - 16);
                    if ( v44 > 0 )
                    {
                      v45 = -v44 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 - 24), -v44);
                      if ( v45 <= 0 )
                      {
                        if ( v45 )
                          KeBugCheckEx(0x18u, 0LL, v42, 0x28uLL, v45);
                        AlpcpDestroyBlob(v42);
                      }
                    }
                    if ( a11 )
                      *v25 |= 0x1000u;
                    if ( (a3 & 0x80000) != 0 )
                      *v25 |= 0x100u;
                    v21 = Object;
                    if ( *((_BYTE *)Object + 268) == 1 )
                    {
                      *v25 |= 0x400u;
                      goto LABEL_57;
                    }
                    v21 = Object;
                    LODWORD(result) = SeCreateClientSecurity(
                                        KeGetCurrentThread(),
                                        (PSECURITY_QUALITY_OF_SERVICE)((char *)Object + 260),
                                        0,
                                        (PSECURITY_CLIENT_CONTEXT)((char *)Object + 64));
                    if ( (int)result >= 0 )
                    {
LABEL_57:
                      AlpcpSetOwnerProcessPort(v21, a7);
                      v46 = v51;
                      if ( (*((_DWORD *)v51 + 64) & 0x1000000) != 0 )
                      {
                        v21[64] |= 0x1000000u;
                        *((_QWORD *)v21 + 34) = v46[34];
                      }
                      ObfReferenceObject(v21);
                      LODWORD(result) = ObInsertObject(v21, 0LL, 0x1F0001u, 0, 0LL, &Handle);
                      if ( (int)result >= 0 )
                      {
                        *((_QWORD *)v21 + 7) = Handle;
                        *a1 = Handle;
                        *a2 = v21;
                        return (unsigned int)result;
                      }
                    }
                  }
                }
              }
              v24 = result;
LABEL_78:
              ObfDereferenceObject(v21);
              return (unsigned int)v24;
            }
            v24 = -1073741801;
          }
          ObfDereferenceObject(v14);
          goto LABEL_78;
        }
      }
    }
    else
    {
      v20 = -1073741758;
    }
    ObfDereferenceObject(v14);
    return (unsigned int)v20;
  }
  return result;
}
