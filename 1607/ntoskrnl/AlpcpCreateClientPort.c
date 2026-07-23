/*
 * XREFs of AlpcpCreateClientPort @ 0x14040735C
 * Callers:
 *     AlpcpConnectPort @ 0x140406F90 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x14049C42C (NtSecureConnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x1403FF660 (AlpcpCheckConnectionSecurity.c)
 *     ObReferenceObjectByName @ 0x140404AA0 (ObReferenceObjectByName.c)
 *     AlpcpSetOwnerProcessPort @ 0x140407830 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateMessage @ 0x14040A24C (AlpcpAllocateMessage.c)
 *     AlpcpAllocateBlob @ 0x14040C4E4 (AlpcpAllocateBlob.c)
 *     SeCreateClientSecurity @ 0x14040DF28 (SeCreateClientSecurity.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     AlpcInitializeHandleTable @ 0x14049DD44 (AlpcInitializeHandleTable.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x14049FA94 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x14049FCA0 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x14049FE60 (AlpcpCreatePort.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        _QWORD *a1,
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
  __int64 v14; // rcx
  unsigned __int64 *v15; // r14
  __int64 v16; // rdi
  struct _KPROCESS *v17; // rsi
  int v18; // edi
  __int64 v19; // r8
  char v20; // al
  _DWORD *v21; // rdi
  int v22; // esi
  _DWORD *v23; // rsi
  unsigned __int64 **Blob; // rax
  unsigned __int64 **v25; // r12
  unsigned __int64 *v26; // r13
  _BYTE *v27; // rax
  _BYTE *v28; // rdi
  unsigned __int64 *v29; // rdi
  _BYTE *v30; // rax
  _BYTE *v31; // r13
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 **v34; // rdx
  unsigned __int64 v35; // rdi
  NTSTATUS Message; // eax
  _QWORD *v37; // rbx
  ULONG_PTR *v38; // r12
  unsigned int v39; // ecx
  HANDLE v40; // rax
  volatile signed __int32 *v41; // rdi
  _BYTE *v42; // rax
  _BYTE *v43; // rsi
  PVOID v44; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR *v46; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF
  char v51; // [rsp+C0h] [rbp+60h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, (__int64)a2, 1u, (__int64)AlpcPortObjectType, PreviousMode, 0LL, &v44);
  else
    result = ObReferenceObjectByName(a4, 0LL, 0LL, 1u, (__int64)AlpcPortObjectType, PreviousMode, 0LL, &v44);
  if ( (int)result >= 0 )
  {
    v13 = (unsigned __int64 *)v44;
    v14 = *((unsigned int *)v44 + 104);
    if ( (*((_DWORD *)v44 + 104) & 6) == 2 )
    {
      if ( !a11 && (v14 & 0x1000) != 0 )
      {
        v41 = (volatile signed __int32 *)((char *)v44 + 352);
        v42 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v44 + 352, 0LL, 0);
        v43 = v42;
        if ( _interlockedbittestandset64(v41, 0LL) )
          ExfAcquirePushLockExclusiveEx(v13 + 44, v42, (ULONG_PTR)(v13 + 44));
        if ( v43 )
          v43[26] |= 1u;
        *((_DWORD *)v13 + 104) &= ~0x2000u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v13 + 44);
        KeAbPostRelease((ULONG_PTR)(v13 + 44));
        v13 = (unsigned __int64 *)v44;
      }
      if ( !a9 && !a8 )
        goto LABEL_75;
      v15 = v13 + 44;
      v16 = KeAbPreAcquire((ULONG_PTR)v15, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v15, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v15, v16, (ULONG_PTR)v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      v17 = (struct _KPROCESS *)*((_QWORD *)v44 + 3);
      if ( ((unsigned __int8)v17 & 1) != 0 )
      {
        v17 = 0LL;
      }
      else if ( v17 )
      {
        ObfReferenceObjectWithTag(*((PVOID *)v44 + 3), 0x63706C41u);
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
      v13 = (unsigned __int64 *)v44;
      if ( v18 >= 0 )
      {
LABEL_75:
        LOBYTE(v14) = PreviousMode;
        v18 = AlpcpCreatePort(v14, a6, &Object);
        if ( v18 >= 0 )
        {
          if ( !a7 || (v20 = 1, (*a7 & 0x40000) == 0) )
            v20 = 0;
          v21 = Object;
          LOBYTE(v19) = v20;
          v51 = v20;
          v22 = AlpcpInitializePort(Object, 2LL, v19);
          if ( v22 >= 0 )
          {
            v23 = v21 + 104;
            v21[104] |= 8u;
            Blob = (unsigned __int64 **)AlpcpAllocateBlob(&AlpcConnectionType, 80LL, 1LL);
            v25 = Blob;
            if ( Blob )
            {
              *((_QWORD *)v21 + 2) = Blob;
              Blob[1] = 0LL;
              *Blob = v13;
              Blob[2] = (unsigned __int64 *)v21;
              Blob[9] = 0LL;
              v26 = (unsigned __int64 *)(v13[2] - 16);
              v46 = (ULONG_PTR *)(Blob + 9);
              v27 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v26, 0LL, 0);
              v28 = v27;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
                ExfAcquirePushLockExclusiveEx(v26, v27, (ULONG_PTR)v26);
              if ( v28 )
                v28[26] |= 1u;
              v29 = (unsigned __int64 *)((char *)v44 + 352);
              v30 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v44 + 352, 0LL, 0);
              v31 = v30;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
                ExfAcquirePushLockExclusiveEx(v29, v30, (ULONG_PTR)v29);
              if ( v31 )
                v31[26] |= 1u;
              v32 = (__int64 *)(v25 + 3);
              v33 = v13[2] + 24;
              v34 = *(__int64 ***)(v13[2] + 32);
              if ( *v34 != (__int64 *)v33 )
                __fastfail(3u);
              *v32 = v33;
              v25[4] = (unsigned __int64 *)v34;
              *v34 = v32;
              *(_QWORD *)(v33 + 8) = v32;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v29);
              KeAbPostRelease((ULONG_PTR)v29);
              v35 = v13[2];
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v35 - 16));
              KeAbPostRelease(v35 - 16);
              Message = AlpcInitializeHandleTable(v25 + 5);
              v21 = Object;
              if ( Message >= 0 )
              {
                v37 = v44;
                Message = AlpcpValidateAndSetPortAttributes((_DWORD)Object, (_DWORD)a7, (_DWORD)v44, a10, 0, v51, a11);
                if ( Message >= 0 )
                {
                  v38 = v46;
                  Message = AlpcpAllocateMessage(v46, 48LL, 1LL);
                  if ( Message >= 0 )
                  {
                    ++*(_WORD *)(*v38 - 30);
                    *(_DWORD *)(*v38 + 256) |= 0x80000000;
                    AlpcpUnlockMessage(*v38);
                    if ( a11 )
                      *v23 |= 0x1000u;
                    if ( (a3 & 0x80000) != 0 )
                      *v23 |= 0x100u;
                    if ( *((_BYTE *)v21 + 268) == 1 )
                    {
                      *v23 |= 0x400u;
                      goto LABEL_49;
                    }
                    v21 = Object;
                    Message = SeCreateClientSecurity(
                                KeGetCurrentThread(),
                                (PSECURITY_QUALITY_OF_SERVICE)((char *)Object + 260),
                                0,
                                (PSECURITY_CLIENT_CONTEXT)((char *)Object + 64));
                    if ( Message >= 0 )
                    {
                      v37 = v44;
LABEL_49:
                      AlpcpSetOwnerProcessPort(v21, a7);
                      if ( (v37[32] & 0x1000000) != 0 )
                      {
                        v21[64] |= 0x1000000u;
                        *((_QWORD *)v21 + 34) = v37[34];
                      }
                      ObfReferenceObject(v21);
                      Message = ObInsertObject(v21, 0LL, 0x1F0001u, 0, 0LL, &Handle);
                      v39 = Message;
                      if ( Message >= 0 )
                      {
                        v40 = Handle;
                        *((_QWORD *)v21 + 7) = Handle;
                        *a1 = v40;
                        *a2 = v21;
                        return v39;
                      }
                    }
                  }
                }
              }
              v22 = Message;
              goto LABEL_72;
            }
            v22 = -1073741801;
          }
          ObfDereferenceObject(v13);
LABEL_72:
          ObfDereferenceObject(v21);
          return (unsigned int)v22;
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
