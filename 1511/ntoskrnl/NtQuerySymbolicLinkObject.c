/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x1404A3BAC
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x14052F430 (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x14075363C (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x14076F68C (IopReassignSystemRoot.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySymbolicLinkObject(HANDLE SymLinkObjHandle, PUNICODE_STRING LinkTarget, PULONG DataWritten)
{
  KPROCESSOR_MODE PreviousMode; // di
  signed __int64 v7; // rbx
  _WORD *p_Length; // rcx
  _WORD *p_MaximumLength; // rcx
  _DWORD *v10; // rcx
  int v11; // r14d
  unsigned __int64 *v12; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int16 *v16; // rdi
  unsigned int v17; // eax
  signed __int64 v18; // rax
  unsigned __int64 v19; // rtt
  PVOID Object[2]; // [rsp+38h] [rbp-50h] BYREF
  __m128i v22; // [rsp+48h] [rbp-40h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = 0LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)LinkTarget & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    p_Length = &LinkTarget->Length;
    if ( (unsigned __int64)LinkTarget >= MmUserProbeAddress )
      p_Length = (_WORD *)MmUserProbeAddress;
    *p_Length = *p_Length;
    p_MaximumLength = &LinkTarget->MaximumLength;
    if ( (unsigned __int64)&LinkTarget->MaximumLength >= MmUserProbeAddress )
      p_MaximumLength = (_WORD *)MmUserProbeAddress;
    *p_MaximumLength = *p_MaximumLength;
    v22 = *(__m128i *)LinkTarget;
    ProbeForWrite((volatile void *)_mm_srli_si128(v22, 8).m128i_i64[0], v22.m128i_u16[1], 1u);
    if ( DataWritten )
    {
      v10 = DataWritten;
      if ( (unsigned __int64)DataWritten >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = *v10;
    }
  }
  else
  {
    v22 = *(__m128i *)LinkTarget;
  }
  v11 = ObReferenceObjectByHandle(SymLinkObjHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = (unsigned __int64 *)((char *)Object[0] - 48);
    Object[1] = (char *)Object[0] - 48;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = KeAbPreAcquire((ULONG_PTR)(v12 + 2), 0LL, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12 + 2, v14, (ULONG_PTR)(v12 + 2));
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = (unsigned __int16 *)Object[0];
    if ( DataWritten )
    {
      if ( *((_WORD *)Object[0] + 5) <= v22.m128i_i16[1] )
        goto LABEL_19;
      *DataWritten = *((unsigned __int16 *)Object[0] + 5);
    }
    else if ( *((_WORD *)Object[0] + 4) <= v22.m128i_i16[1] )
    {
LABEL_19:
      if ( DataWritten )
        v17 = *((unsigned __int16 *)Object[0] + 5);
      else
        v17 = *((unsigned __int16 *)Object[0] + 4);
      memmove((void *)v22.m128i_i64[1], *((const void **)Object[0] + 2), v17);
      LinkTarget->Length = v16[4];
      if ( DataWritten )
        *DataWritten = v16[5];
      goto LABEL_24;
    }
    v11 = -1073741789;
LABEL_24:
    _m_prefetchw(v12 + 2);
    v18 = v12[2];
    if ( (v18 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v7 = v18 - 16;
    if ( (v18 & 2) != 0
      || (v19 = v12[2], v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 2, v7, v18)) )
    {
      ExfReleasePushLock(v12 + 2);
    }
    KeAbPostRelease((ULONG_PTR)(v12 + 2));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object[0]);
  }
  return v11;
}
