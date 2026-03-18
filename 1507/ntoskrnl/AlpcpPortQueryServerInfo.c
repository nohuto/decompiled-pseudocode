/*
 * XREFs of AlpcpPortQueryServerInfo @ 0x140406B0C
 * Callers:
 *     NtAlpcQueryInformation @ 0x14051F860 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140406CC8 (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpGetPortNameInformation @ 0x14069FC58 (AlpcpGetPortNameInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpPortQueryServerInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        KPROCESSOR_MODE AccessMode)
{
  void *v6; // rcx
  NTSTATUS result; // eax
  int v8; // eax
  __int64 v9; // r9
  int PortNameInformation; // esi
  unsigned int v11; // ebx
  const void **v12; // r9
  ULONG_PTR v13; // r14
  unsigned __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbx
  signed __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // r9
  __int64 v22; // r13
  unsigned __int64 *v23; // rcx
  int v24; // r13d
  char v25; // cl
  signed __int64 v26; // rcx
  __int64 *v27; // r13
  __int64 v28; // r12
  unsigned __int64 *v29; // r14
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r9
  _QWORD *v33; // r13
  signed __int64 *v34; // rcx
  int v35; // r13d
  int v36; // r14d
  ULONG_PTR v37; // r13
  char v38; // cl
  signed __int64 v39; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-88h] BYREF
  int v41; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+40h] [rbp-78h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v44; // [rsp+58h] [rbp-60h]
  __int64 *v45; // [rsp+60h] [rbp-58h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  void *v47; // [rsp+70h] [rbp-48h]
  unsigned int v48; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v49; // [rsp+D0h] [rbp+18h]
  unsigned int *v50; // [rsp+D8h] [rbp+20h]

  v50 = a4;
  v49 = a3;
  if ( a1 || a3 < 8 )
    return -1073741811;
  if ( AccessMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *(void **)a2;
    v47 = *(void **)a2;
  }
  else
  {
    v6 = *(void **)a2;
    v47 = *(void **)a2;
  }
  result = ObReferenceObjectByHandle(v6, 0x40u, (POBJECT_TYPE)PsThreadType, AccessMode, &Object, 0LL);
  if ( result >= 0 )
  {
    P[0] = 0LL;
    v48 = 0;
    LOBYTE(v41) = 0;
    v46 = 0LL;
    v8 = AlpcpReferenceMessageByWaitingThread(Object, &BugCheckParameter2);
    PortNameInformation = v8;
    if ( v8 == -1073741275 )
    {
      BugCheckParameter2 = 0LL;
      PortNameInformation = 0;
      goto LABEL_10;
    }
    if ( v8 < 0 )
    {
      ObfDereferenceObject(Object);
      return PortNameInformation;
    }
    v13 = BugCheckParameter2;
    v14 = (unsigned __int64 *)(BugCheckParameter2 - 16);
    v15 = KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 0LL, v9);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      ExfAcquirePushLockExclusiveEx(v14, v15, (ULONG_PTR)v14, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    *(_BYTE *)(v13 - 32) |= 1u;
    v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
    if ( v18 <= 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, v18);
    --*(_WORD *)(v13 - 30);
    if ( BugCheckParameter2 != *((_QWORD *)Object + 218)
      || (v19 = *(_QWORD *)(BugCheckParameter2 + 24), (v44 = v19) == 0)
      || (v20 = *(__int64 **)(v19 + 16), (v45 = v20) == 0LL) )
    {
LABEL_10:
      if ( BugCheckParameter2 )
      {
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
        v36 = 0;
        v37 = BugCheckParameter2;
        v38 = *(_BYTE *)(BugCheckParameter2 - 32);
        if ( (v38 & 1) != 0 )
        {
          v36 = 0x10000 - *(__int16 *)(BugCheckParameter2 - 30);
          *(_BYTE *)(BugCheckParameter2 - 32) = v38 & 0xFE;
          *(_WORD *)(v37 - 30) = 0;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v37 - 16));
        KeAbPostRelease(v37 - 16);
        if ( v36 > 0 )
        {
          v39 = -v36 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 - 24), -v36);
          if ( v39 <= 0 )
          {
            if ( v39 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v39);
            AlpcpDestroyBlob(BugCheckParameter2);
          }
        }
      }
      ObfDereferenceObject(Object);
      v11 = 32;
      if ( P[0] )
      {
        v11 = *((unsigned __int16 *)P[0] + 1) + 32;
      }
      else if ( PortNameInformation == -1073741820 )
      {
        v11 = v48 + 16;
      }
      if ( v49 < v11 )
        PortNameInformation = -1073741820;
      if ( PortNameInformation >= 0 )
      {
        *(_BYTE *)a2 = v41;
        *(_QWORD *)(a2 + 8) = v46;
        v12 = (const void **)P[0];
        if ( P[0] )
        {
          *(_WORD *)(a2 + 16) = *(_WORD *)P[0];
          *(_WORD *)(a2 + 18) = *((_WORD *)v12 + 1);
          *(_QWORD *)(a2 + 24) = a2 + 32;
          memmove((void *)(a2 + 32), v12[1], *((unsigned __int16 *)v12 + 1));
        }
        else
        {
          *(_DWORD *)(a2 + 16) = 0;
          *(_QWORD *)(a2 + 24) = 0LL;
        }
      }
      if ( v50 && ((int)(PortNameInformation + 0x80000000) < 0 || PortNameInformation == -1073741820) )
        *v50 = v11;
      if ( P[0] )
        ExFreePoolWithTag(P[0], 0);
      return PortNameInformation;
    }
    v22 = KeAbPreAcquire((ULONG_PTR)(v20 - 2), 0LL, 0LL, v16);
    v23 = (unsigned __int64 *)(v45 - 2);
    if ( _InterlockedCompareExchange64(v45 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v23, v22, (ULONG_PTR)v23, v21);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
    v24 = 0;
    v25 = *(_BYTE *)(v13 - 32);
    if ( (v25 & 1) != 0 )
    {
      v24 = 0x10000 - *(__int16 *)(v13 - 30);
      *(_BYTE *)(v13 - 32) = v25 & 0xFE;
      *(_WORD *)(v13 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v13 - 16));
    KeAbPostRelease(v13 - 16);
    if ( v24 > 0 )
    {
      v26 = -v24 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), -v24);
      if ( v26 <= 0 )
      {
        if ( v26 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v26);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    BugCheckParameter2 = 0LL;
    v27 = v45;
    v28 = *v45;
    if ( !*v45
      || (v28 &= -(__int64)(ObReferenceObjectSafe(*v45) != 0)) == 0
      || (((*(_DWORD *)(v44 + 416) >> 1) & 3u) - 1 <= 1
        ? (v29 = (unsigned __int64 *)*v27)
        : (v29 = (unsigned __int64 *)v27[2]),
          v29 && v29 != (unsigned __int64 *)v28 && !ObReferenceObjectSafe((__int64)v29)) )
    {
      v29 = 0LL;
    }
    if ( _InterlockedCompareExchange64(v27 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v27 - 2);
    KeAbPostRelease((ULONG_PTR)(v27 - 2));
    if ( v29 )
    {
      if ( !v28 )
      {
LABEL_87:
        if ( v29 && v29 != (unsigned __int64 *)v28 )
          ObfDereferenceObject(v29);
        goto LABEL_10;
      }
      v31 = KeAbPreAcquire((ULONG_PTR)(v29 + 44), 0LL, 0LL, v30);
      v44 = v31;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v29 + 44, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v29 + 44, v31, (ULONG_PTR)(v29 + 44), v32);
        v31 = v44;
      }
      if ( v31 )
        *(_BYTE *)(v31 + 26) |= 1u;
      v33 = (_QWORD *)v29[3];
      if ( ((unsigned __int8)v33 & 1) != 0 )
        v33 = 0LL;
      if ( v33 )
        ObfReferenceObjectWithTag(v33, 0x63706C41u);
      v34 = (signed __int64 *)(v29 + 44);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v29 + 44, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v34);
        v34 = (signed __int64 *)(v29 + 44);
      }
      KeAbPostRelease((ULONG_PTR)v34);
      if ( v33 )
      {
        v46 = v33[93];
        ObfDereferenceObjectWithTag(v33, 0x63706C41u);
        if ( v49 > 0x10 )
          v48 = v49 - 16;
        PortNameInformation = AlpcpGetPortNameInformation(v28, P, &v48);
        v35 = (unsigned __int8)v41;
        if ( PortNameInformation >= 0 )
          v35 = 1;
        v41 = v35;
      }
    }
    if ( v28 )
      ObfDereferenceObject((PVOID)v28);
    goto LABEL_87;
  }
  return result;
}
