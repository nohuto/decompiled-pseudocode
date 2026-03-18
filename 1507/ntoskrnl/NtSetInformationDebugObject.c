/*
 * XREFs of NtSetInformationDebugObject @ 0x140668B74
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationDebugObject(
        HANDLE DebugObject,
        DEBUGOBJECTINFOCLASS InformationClass,
        PVOID Information,
        ULONG InformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r11
  char *v8; // rcx
  PULONG v9; // rdx
  _DWORD *v10; // rcx
  NTSTATUS result; // eax
  __int64 v12; // r9
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v17; // di
  signed __int32 v18; // eax
  int v19; // [rsp+34h] [rbp-24h]
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v9 = ReturnLength;
LABEL_13:
    if ( v9 )
      *v9 = 0;
    goto LABEL_15;
  }
  if ( InformationLength )
  {
    if ( ((unsigned __int8)Information & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)Information + InformationLength;
    if ( (unsigned __int64)v8 > MmUserProbeAddress || v8 < Information )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v9 = ReturnLength;
  if ( ReturnLength )
  {
    v10 = ReturnLength;
    if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    goto LABEL_13;
  }
LABEL_15:
  if ( InformationClass != DebugObjectKillProcessOnExitInformation )
    return -1073741811;
  if ( InformationLength == 4 )
  {
    v19 = *(_DWORD *)Information;
    if ( (*(_DWORD *)Information & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      result = ObReferenceObjectByHandle(DebugObject, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
      if ( result >= 0 )
      {
        v13 = (volatile signed __int32 *)((char *)Object + 24);
        v14 = KeAbPreAcquire((ULONG_PTR)Object + 24, 0LL, 0LL, v12);
        v15 = v14;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset(v13, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)v13, v14);
        if ( v15 )
          *(_BYTE *)(v15 + 26) |= 1u;
        *((_QWORD *)v13 + 1) = KeGetCurrentThread();
        *((_DWORD *)v13 + 12) = CurrentIrql;
        if ( (v19 & 1) != 0 )
          *((_DWORD *)Object + 24) |= 2u;
        else
          *((_DWORD *)Object + 24) &= ~2u;
        *((_QWORD *)v13 + 1) = 0LL;
        v17 = *((_BYTE *)v13 + 48);
        v18 = _InterlockedCompareExchange(v13, 1, 0);
        if ( v18 )
          ExpReleaseFastMutexContended(v13, v18);
        __writecr8(v17);
        KeAbPostRelease((ULONG_PTR)v13);
        ObfDereferenceObject(Object);
        return 0;
      }
    }
  }
  else
  {
    if ( v9 )
      *v9 = 4;
    return -1073741820;
  }
  return result;
}
