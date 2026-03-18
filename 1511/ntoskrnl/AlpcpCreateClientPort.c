/*
 * XREFs of AlpcpCreateClientPort @ 0x14046D9C8
 * Callers:
 *     AlpcpConnectPort @ 0x14046D59C (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     SeCreateClientSecurity @ 0x14042CA10 (SeCreateClientSecurity.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x14046ACE4 (AlpcpCheckConnectionSecurity.c)
 *     AlpcpCreatePort @ 0x14046C4A4 (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x14046C500 (AlpcpInitializePort.c)
 *     AlpcpSetOwnerProcessPort @ 0x14046C6C4 (AlpcpSetOwnerProcessPort.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140479824 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x14047CF10 (AlpcpAllocateMessage.c)
 *     AlpcInitializeHandleTable @ 0x14047D5D0 (AlpcInitializeHandleTable.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        void *a8,
        void *a9,
        __int64 a10,
        char a11)
{
  char PreviousMode; // r12
  __int64 result; // rax
  unsigned __int64 *v13; // r14
  int v14; // ecx
  unsigned __int64 *v15; // r14
  __int64 v16; // rdi
  struct _KPROCESS *v17; // rsi
  int v18; // edi
  char v19; // al
  _DWORD *v20; // rdi
  int v21; // esi
  _DWORD *v22; // rsi
  unsigned __int64 **Blob; // rax
  unsigned __int64 **v24; // r12
  unsigned __int64 *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r13
  _QWORD *v31; // rcx
  __int64 v32; // rax
  unsigned __int64 *v33; // rdx
  unsigned __int64 v34; // rdi
  _QWORD *v35; // rbx
  ULONG_PTR *v36; // r12
  volatile signed __int32 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rsi
  PVOID v40; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  __int64 v42; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR *v43; // [rsp+58h] [rbp-8h]
  char v47; // [rsp+C0h] [rbp+60h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, (_DWORD)a2, 1, (_DWORD)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v40);
  else
    result = ObReferenceObjectByName(a4, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = (unsigned __int64 *)v40;
    v14 = *((_DWORD *)v40 + 104);
    if ( (v14 & 6) == 2 )
    {
      if ( !a11 && (v14 & 0x1000) != 0 )
      {
        v37 = (volatile signed __int32 *)((char *)v40 + 352);
        v38 = KeAbPreAcquire((ULONG_PTR)v40 + 352, 0LL, 0LL);
        v39 = v38;
        if ( _interlockedbittestandset64(v37, 0LL) )
          ExfAcquirePushLockExclusiveEx(v13 + 44, v38, (ULONG_PTR)(v13 + 44));
        if ( v39 )
          *(_BYTE *)(v39 + 26) |= 1u;
        *((_DWORD *)v13 + 104) &= ~0x2000u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v13 + 44);
        KeAbPostRelease((ULONG_PTR)(v13 + 44));
        v13 = (unsigned __int64 *)v40;
      }
      if ( !a9 && !a8 )
        goto LABEL_75;
      v15 = v13 + 44;
      v16 = KeAbPreAcquire((ULONG_PTR)v15, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v15, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v15, v16, (ULONG_PTR)v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      v17 = (struct _KPROCESS *)*((_QWORD *)v40 + 3);
      if ( ((unsigned __int8)v17 & 1) != 0 )
      {
        v17 = 0LL;
      }
      else if ( v17 )
      {
        ObfReferenceObjectWithTag(*((PVOID *)v40 + 3), 0x63706C41u);
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v15);
      KeAbPostRelease((ULONG_PTR)v15);
      if ( v17 )
      {
        v18 = AlpcpCheckConnectionSecurity(v17, PreviousMode, a9, a8);
        ObfDereferenceObjectWithTag(v17, 0x63706C41u);
      }
      else
      {
        v18 = -1073741152;
      }
      v13 = (unsigned __int64 *)v40;
      if ( v18 >= 0 )
      {
LABEL_75:
        v18 = AlpcpCreatePort(PreviousMode, a6, &Object);
        if ( v18 >= 0 )
        {
          if ( !a7 || (v19 = 1, (*a7 & 0x40000) == 0) )
            v19 = 0;
          v20 = Object;
          v47 = v19;
          v21 = AlpcpInitializePort((__int64)Object, 2, v19);
          if ( v21 >= 0 )
          {
            v22 = v20 + 104;
            v20[104] |= 8u;
            Blob = (unsigned __int64 **)AlpcpAllocateBlob(&AlpcConnectionType, 72LL);
            v24 = Blob;
            if ( Blob )
            {
              *((_QWORD *)v20 + 2) = Blob;
              Blob[1] = 0LL;
              *Blob = v13;
              Blob[2] = (unsigned __int64 *)v20;
              Blob[8] = 0LL;
              v25 = (unsigned __int64 *)(v13[2] - 16);
              v43 = (ULONG_PTR *)(Blob + 8);
              v26 = KeAbPreAcquire((ULONG_PTR)v25, 0LL, 0LL);
              v27 = v26;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
                ExfAcquirePushLockExclusiveEx(v25, v26, (ULONG_PTR)v25);
              if ( v27 )
                *(_BYTE *)(v27 + 26) |= 1u;
              v28 = (unsigned __int64 *)((char *)v40 + 352);
              v29 = KeAbPreAcquire((ULONG_PTR)v40 + 352, 0LL, 0LL);
              v30 = v29;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
                ExfAcquirePushLockExclusiveEx(v28, v29, (ULONG_PTR)v28);
              if ( v30 )
                *(_BYTE *)(v30 + 26) |= 1u;
              v31 = v24 + 3;
              v32 = v13[2] + 24;
              v33 = *(unsigned __int64 **)(v13[2] + 32);
              v24[3] = (unsigned __int64 *)v32;
              v24[4] = v33;
              if ( *v33 != v32 )
                __fastfail(3u);
              *v33 = (unsigned __int64)v31;
              *(_QWORD *)(v32 + 8) = v31;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v28);
              KeAbPostRelease((ULONG_PTR)v28);
              v34 = v13[2];
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v34 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v34 - 16));
              KeAbPostRelease(v34 - 16);
              LODWORD(result) = AlpcInitializeHandleTable(v24 + 5);
              v20 = Object;
              if ( (int)result >= 0 )
              {
                v35 = v40;
                LODWORD(result) = AlpcpValidateAndSetPortAttributes(
                                    (_DWORD)Object,
                                    (_DWORD)a7,
                                    (_DWORD)v40,
                                    a10,
                                    0,
                                    v47,
                                    a11);
                if ( (int)result >= 0 )
                {
                  v36 = v43;
                  LODWORD(result) = AlpcpAllocateMessage(v43, 48LL, 1LL);
                  if ( (int)result >= 0 )
                  {
                    ++*(_WORD *)(*v36 - 30);
                    *(_DWORD *)(*v36 + 248) |= 0x80000000;
                    AlpcpUnlockMessage(*v36);
                    if ( a11 )
                      *v22 |= 0x1000u;
                    if ( (a3 & 0x80000) != 0 )
                      *v22 |= 0x100u;
                    if ( *((_BYTE *)v20 + 268) == 1 )
                    {
                      *v22 |= 0x400u;
                      goto LABEL_49;
                    }
                    v20 = Object;
                    LODWORD(result) = SeCreateClientSecurity(
                                        KeGetCurrentThread(),
                                        (PSECURITY_QUALITY_OF_SERVICE)((char *)Object + 260),
                                        0,
                                        (PSECURITY_CLIENT_CONTEXT)((char *)Object + 64));
                    if ( (int)result >= 0 )
                    {
                      v35 = v40;
LABEL_49:
                      AlpcpSetOwnerProcessPort((__int64)v20, a7);
                      if ( (v35[32] & 0x1000000) != 0 )
                      {
                        v20[64] |= 0x1000000u;
                        *((_QWORD *)v20 + 34) = v35[34];
                      }
                      ObfReferenceObject(v20);
                      LODWORD(result) = ObInsertObjectEx(v20, 0LL, 2031617LL, 0, 0, 0LL, &v42);
                      if ( (int)result >= 0 )
                      {
                        *((_QWORD *)v20 + 7) = v42;
                        *a1 = v42;
                        *a2 = v20;
                        return (unsigned int)result;
                      }
                    }
                  }
                }
              }
              v21 = result;
LABEL_71:
              ObfDereferenceObject(v20);
              return (unsigned int)v21;
            }
            v21 = -1073741801;
          }
          ObfDereferenceObject(v13);
          goto LABEL_71;
        }
      }
    }
    else
    {
      v18 = -1073741758;
    }
    ObfDereferenceObject(v13);
    return (unsigned int)v18;
  }
  return result;
}
