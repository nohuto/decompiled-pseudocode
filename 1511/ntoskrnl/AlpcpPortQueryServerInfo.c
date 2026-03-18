/*
 * XREFs of AlpcpPortQueryServerInfo @ 0x14050FEAC
 * Callers:
 *     NtAlpcQueryInformation @ 0x14048BF30 (NtAlpcQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x14051004C (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpGetPortNameInformation @ 0x14062071C (AlpcpGetPortNameInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  unsigned int v5; // r13d
  void *v7; // rcx
  NTSTATUS result; // eax
  const void **v9; // rdi
  int v10; // eax
  int PortNameInformation; // esi
  ULONG_PTR v12; // r14
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // r14
  unsigned __int64 *v18; // rdi
  __int64 v19; // r13
  _QWORD *v20; // r13
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
    v7 = *(void **)a2;
    v26 = *(void **)a2;
  }
  else
  {
    v7 = *(void **)a2;
    v26 = *(void **)a2;
  }
  result = ObReferenceObjectByHandle(v7, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = 0LL;
    v24 = 0LL;
    v28 = 0;
    v21 = 0;
    v25 = 0LL;
    v10 = AlpcpReferenceMessageByWaitingThread(Object, &BugCheckParameter2);
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
        v14 = *(_QWORD *)(v12 + 24);
        v27 = v14;
        if ( v14 )
        {
          v15 = *(__int64 **)(v14 + 16);
          if ( v15 )
          {
            v16 = KeAbPreAcquire((ULONG_PTR)(v15 - 2), 0LL, 0LL);
            if ( _InterlockedCompareExchange64(v15 - 2, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((unsigned __int64 *)v15 - 2, v16, (ULONG_PTR)(v15 - 2));
            if ( v16 )
              *(_BYTE *)(v16 + 26) |= 1u;
            AlpcpUnlockMessage(BugCheckParameter2);
            BugCheckParameter2 = 0LL;
            v17 = *v15;
            if ( !*v15
              || (v17 &= -(__int64)(ObReferenceObjectSafe(*v15) != 0)) == 0
              || (((*(_DWORD *)(v27 + 416) >> 1) & 3u) - 1 <= 1
                ? (v18 = (unsigned __int64 *)*v15)
                : (v18 = (unsigned __int64 *)v15[2]),
                  v18 && v18 != (unsigned __int64 *)v17 && !ObReferenceObjectSafe((__int64)v18)) )
            {
              v18 = 0LL;
            }
            if ( _InterlockedCompareExchange64(v15 - 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v15 - 2);
            KeAbPostRelease((ULONG_PTR)(v15 - 2));
            if ( !v18 || !v17 )
              goto LABEL_68;
            v19 = KeAbPreAcquire((ULONG_PTR)(v18 + 44), 0LL, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 44, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v18 + 44, v19, (ULONG_PTR)(v18 + 44));
            if ( v19 )
              *(_BYTE *)(v19 + 26) |= 1u;
            v20 = (_QWORD *)v18[3];
            if ( ((unsigned __int8)v20 & 1) != 0 )
              v20 = 0LL;
            if ( v20 )
              ObfReferenceObjectWithTag(v20, 0x63706C41u);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 44, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v18 + 44);
            KeAbPostRelease((ULONG_PTR)(v18 + 44));
            if ( v20 )
            {
              v25 = v20[93];
              ObfDereferenceObjectWithTag(v20, 0x63706C41u);
              v5 = v29;
              if ( v29 > 0x10 )
                v28 = v29 - 16;
              PortNameInformation = AlpcpGetPortNameInformation(v17, &v24, &v28);
              v21 = PortNameInformation >= 0;
            }
            else
            {
LABEL_68:
              v5 = v29;
            }
            if ( v17 )
              ObfDereferenceObject((PVOID)v17);
            if ( v18 && v18 != (unsigned __int64 *)v17 )
              ObfDereferenceObject(v18);
            v12 = BugCheckParameter2;
            v9 = v24;
          }
        }
      }
    }
    if ( v12 )
      AlpcpUnlockMessage(v12);
    ObfDereferenceObject(Object);
    v13 = 32;
    if ( v9 )
    {
      v13 = *((unsigned __int16 *)v9 + 1) + 32;
    }
    else if ( PortNameInformation == -1073741820 )
    {
      v13 = v28 + 16;
    }
    if ( v5 < v13 )
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
      *v30 = v13;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    return PortNameInformation;
  }
  return result;
}
