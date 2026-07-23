/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x1404AC0F4
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1405705F8 (AdtpInitializeDriveLetters.c)
 *     IopStoreSystemPartitionInformation @ 0x140798C34 (IopStoreSystemPartitionInformation.c)
 *     IopReassignSystemRoot @ 0x1407B980C (IopReassignSystemRoot.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySymbolicLinkObject(HANDLE SymLinkObjHandle, PUNICODE_STRING LinkTarget, PULONG DataWritten)
{
  KPROCESSOR_MODE PreviousMode; // di
  signed __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 p_MaximumLength; // rcx
  __int64 v10; // rcx
  int v11; // r14d
  unsigned __int64 *v12; // r15
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v14; // rax
  _BYTE *v15; // rdi
  unsigned __int16 *v16; // rdi
  unsigned int v17; // eax
  signed __int64 v18; // rax
  unsigned __int64 v19; // rtt
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID Object[2]; // [rsp+38h] [rbp-50h] BYREF
  __m128i v25; // [rsp+48h] [rbp-40h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = 0LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)LinkTarget & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (__int64)LinkTarget;
    if ( (unsigned __int64)LinkTarget >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_WORD *)v8 = *(_WORD *)v8;
    p_MaximumLength = (__int64)&LinkTarget->MaximumLength;
    if ( (unsigned __int64)&LinkTarget->MaximumLength >= 0x7FFFFFFF0000LL )
      p_MaximumLength = 0x7FFFFFFF0000LL;
    *(_WORD *)p_MaximumLength = *(_WORD *)p_MaximumLength;
    v25 = *(__m128i *)LinkTarget;
    ProbeForWrite((volatile void *)_mm_srli_si128(v25, 8).m128i_i64[0], v25.m128i_u16[1], 1u);
    if ( DataWritten )
    {
      v10 = (__int64)DataWritten;
      if ( (unsigned __int64)DataWritten >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
  }
  else
  {
    v25 = *(__m128i *)LinkTarget;
  }
  v11 = ObReferenceObjectByHandle(SymLinkObjHandle, 1u, ObpSymbolicLinkObjectType, PreviousMode, Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = (unsigned __int64 *)((char *)Object[0] - 48);
    Object[1] = (char *)Object[0] - 48;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v12 + 2), 0LL, 0);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12 + 2, v14, (ULONG_PTR)(v12 + 2));
    if ( v15 )
      v15[26] |= 1u;
    v16 = (unsigned __int16 *)Object[0];
    if ( DataWritten )
    {
      if ( *((_WORD *)Object[0] + 5) <= v25.m128i_i16[1] )
        goto LABEL_19;
      *DataWritten = *((unsigned __int16 *)Object[0] + 5);
    }
    else if ( *((_WORD *)Object[0] + 4) <= v25.m128i_i16[1] )
    {
LABEL_19:
      if ( DataWritten )
        v17 = *((unsigned __int16 *)Object[0] + 5);
      else
        v17 = *((unsigned __int16 *)Object[0] + 4);
      memmove((void *)v25.m128i_i64[1], *((const void **)Object[0] + 2), v17);
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
    ObfDereferenceObject(Object[0]);
  }
  return v11;
}
