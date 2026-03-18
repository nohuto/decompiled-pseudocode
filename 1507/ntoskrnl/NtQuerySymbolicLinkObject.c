/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x140529280
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140592FEC (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x1407B634C (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x1407E4D04 (IopReassignSystemRoot.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySymbolicLinkObject(HANDLE SymLinkObjHandle, PUNICODE_STRING LinkTarget, PULONG DataWritten)
{
  KPROCESSOR_MODE PreviousMode; // si
  _WORD *p_Length; // rcx
  _WORD *p_MaximumLength; // rcx
  _DWORD *v9; // rcx
  signed __int64 v10; // rbx
  __int64 v11; // r9
  int v12; // r15d
  unsigned __int64 *v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rsi
  unsigned __int16 *v19; // rsi
  unsigned int v20; // eax
  signed __int64 v21; // rax
  unsigned __int64 v22; // rtt
  struct _KTHREAD *v23; // rdx
  __int16 v24; // ax
  PVOID Object[2]; // [rsp+38h] [rbp-50h] BYREF
  __m128i v27; // [rsp+48h] [rbp-40h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
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
    v27 = *(__m128i *)LinkTarget;
    ProbeForWrite((volatile void *)_mm_srli_si128(v27, 8).m128i_i64[0], v27.m128i_u16[1], 1u);
    if ( DataWritten )
    {
      v9 = DataWritten;
      if ( (unsigned __int64)DataWritten >= MmUserProbeAddress )
        v9 = (_DWORD *)MmUserProbeAddress;
      *v9 = *v9;
    }
  }
  else
  {
    v27 = *(__m128i *)LinkTarget;
  }
  v10 = 0LL;
  v12 = ObReferenceObjectByHandle(SymLinkObjHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = (unsigned __int64 *)((char *)Object[0] - 48);
    Object[1] = (char *)Object[0] - 48;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)(v13 + 2), 0LL, 0LL, v11);
    v18 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13 + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13 + 2, v15, (ULONG_PTR)(v13 + 2), v17);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    v19 = (unsigned __int16 *)Object[0];
    if ( DataWritten )
    {
      if ( *((_WORD *)Object[0] + 5) <= v27.m128i_i16[1] )
      {
LABEL_19:
        if ( DataWritten )
          v20 = *((unsigned __int16 *)Object[0] + 5);
        else
          v20 = *((unsigned __int16 *)Object[0] + 4);
        memmove((void *)v27.m128i_i64[1], *((const void **)Object[0] + 2), v20);
        LinkTarget->Length = v19[4];
        if ( DataWritten )
          *DataWritten = v19[5];
        goto LABEL_24;
      }
      *DataWritten = *((unsigned __int16 *)Object[0] + 5);
    }
    else if ( *((_WORD *)Object[0] + 4) <= v27.m128i_i16[1] )
    {
      goto LABEL_19;
    }
    v12 = -1073741789;
LABEL_24:
    _m_prefetchw(v13 + 2);
    v21 = v13[2];
    if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v10 = v21 - 16;
    if ( (v21 & 2) != 0
      || (v22 = v13[2], v22 != _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 2, v10, v21)) )
    {
      ExfReleasePushLock(v13 + 2, v16);
    }
    KeAbPostRelease((ULONG_PTR)(v13 + 2));
    v23 = KeGetCurrentThread();
    v24 = v23->KernelApcDisable + 1;
    v23->KernelApcDisable = v24;
    if ( !v24
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(Object[0]);
  }
  return v12;
}
