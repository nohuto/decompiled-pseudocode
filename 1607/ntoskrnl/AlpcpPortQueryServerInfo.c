/*
 * XREFs of AlpcpPortQueryServerInfo @ 0x140656014
 * Callers:
 *     NtAlpcQueryInformation @ 0x140475C40 (NtAlpcQueryInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140655B6C (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpGetPortNameInformation @ 0x140655F60 (AlpcpGetPortNameInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  unsigned int v5; // r13d
  NTSTATUS result; // eax
  void *v8; // rcx
  const void **v9; // rdi
  int v10; // eax
  int PortNameInformation; // esi
  ULONG_PTR v12; // r14
  __int64 v13; // rax
  __int64 *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // r14
  unsigned __int64 *v17; // rdi
  __int64 v18; // r13
  _QWORD *v19; // r13
  unsigned int v20; // r14d
  bool v21; // [rsp+30h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  const void **v24; // [rsp+48h] [rbp-60h] BYREF
  __int64 v25; // [rsp+50h] [rbp-58h]
  void *v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+60h] [rbp-48h]
  unsigned int v28; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+18h]
  unsigned int *v30; // [rsp+C8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v5 = a3;
  if ( a1 || a3 < 8 )
    return -1073741811;
  if ( AccessMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = *(void **)a2;
    v26 = *(void **)a2;
  }
  else
  {
    v8 = *(void **)a2;
    v26 = *(void **)a2;
  }
  result = ObReferenceObjectByHandle(v8, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = 0LL;
    v24 = 0LL;
    v28 = 0;
    v21 = 0;
    v25 = 0LL;
    v10 = AlpcpReferenceMessageByWaitingThread((__int64)Object, (__int64 *)&BugCheckParameter2);
    PortNameInformation = v10;
    if ( v10 == -1073741275 )
    {
      v12 = 0LL;
      PortNameInformation = 0;
    }
    else
    {
      if ( v10 < 0 )
      {
        ObfDereferenceObject(Object);
        return PortNameInformation;
      }
      v12 = BugCheckParameter2;
      AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
      --*(_WORD *)(v12 - 30);
      if ( v12 == *((_QWORD *)Object + 218) )
      {
        v13 = *(_QWORD *)(v12 + 24);
        v27 = v13;
        if ( v13 )
        {
          v14 = *(__int64 **)(v13 + 16);
          if ( v14 )
          {
            v15 = KeAbPreAcquire((ULONG_PTR)(v14 - 2), 0LL, 0);
            if ( _InterlockedCompareExchange64(v14 - 2, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((unsigned __int64 *)v14 - 2, v15, (ULONG_PTR)(v14 - 2));
            if ( v15 )
              *(_BYTE *)(v15 + 26) |= 1u;
            AlpcpUnlockMessage(BugCheckParameter2);
            BugCheckParameter2 = 0LL;
            v16 = *v14;
            if ( !*v14
              || (v16 &= -(__int64)(ObReferenceObjectSafe(*v14) != 0)) == 0
              || (((*(_DWORD *)(v27 + 416) >> 1) & 3u) - 1 <= 1
                ? (v17 = (unsigned __int64 *)*v14)
                : (v17 = (unsigned __int64 *)v14[2]),
                  v17 && v17 != (unsigned __int64 *)v16 && !ObReferenceObjectSafe((__int64)v17)) )
            {
              v17 = 0LL;
            }
            if ( _InterlockedCompareExchange64(v14 - 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v14 - 2);
            KeAbPostRelease((ULONG_PTR)(v14 - 2));
            if ( !v17 || !v16 )
              goto LABEL_48;
            v18 = KeAbPreAcquire((ULONG_PTR)(v17 + 44), 0LL, 0);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 44, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v17 + 44, v18, (ULONG_PTR)(v17 + 44));
            if ( v18 )
              *(_BYTE *)(v18 + 26) |= 1u;
            v19 = (_QWORD *)v17[3];
            if ( ((unsigned __int8)v19 & 1) != 0 )
              v19 = 0LL;
            if ( v19 )
              ObfReferenceObjectWithTag(v19, 0x63706C41u);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 44, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v17 + 44);
            KeAbPostRelease((ULONG_PTR)(v17 + 44));
            if ( v19 )
            {
              v25 = v19[93];
              ObfDereferenceObjectWithTag(v19, 0x63706C41u);
              v5 = v29;
              if ( v29 > 0x10 )
                v28 = v29 - 16;
              PortNameInformation = AlpcpGetPortNameInformation((char *)v16, &v24, &v28);
              v21 = PortNameInformation >= 0;
            }
            else
            {
LABEL_48:
              v5 = v29;
            }
            if ( v16 )
              ObfDereferenceObject((PVOID)v16);
            if ( v17 && v17 != (unsigned __int64 *)v16 )
              ObfDereferenceObject(v17);
            v12 = BugCheckParameter2;
            v9 = v24;
          }
        }
      }
    }
    if ( v12 )
      AlpcpUnlockMessage(v12);
    ObfDereferenceObject(Object);
    v20 = 32;
    if ( v9 )
    {
      v20 = *((unsigned __int16 *)v9 + 1) + 32;
    }
    else if ( PortNameInformation == -1073741820 )
    {
      v20 = v28 + 16;
    }
    if ( v5 < v20 )
      PortNameInformation = -1073741820;
    if ( PortNameInformation >= 0 )
    {
      *(_BYTE *)a2 = v21;
      *(_QWORD *)(a2 + 8) = v25;
      if ( v9 )
      {
        *(_WORD *)(a2 + 16) = *(_WORD *)v9;
        *(_WORD *)(a2 + 18) = *((_WORD *)v9 + 1);
        *(_QWORD *)(a2 + 24) = a2 + 32;
        memmove((void *)(a2 + 32), v9[1], *((unsigned __int16 *)v9 + 1));
      }
      else
      {
        *(_DWORD *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
    }
    if ( v30 && ((int)(PortNameInformation + 0x80000000) < 0 || PortNameInformation == -1073741820) )
      *v30 = v20;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return PortNameInformation;
  }
  return result;
}
