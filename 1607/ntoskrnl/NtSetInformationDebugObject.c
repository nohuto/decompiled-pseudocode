/*
 * XREFs of NtSetInformationDebugObject @ 0x140619D74
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationDebugObject(
        HANDLE DebugObject,
        DEBUGOBJECTINFOCLASS InformationClass,
        PVOID Information,
        ULONG InformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // bl
  PULONG v8; // rdx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  int v11; // edi
  char *v12; // rbx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v8 = ReturnLength;
LABEL_13:
    if ( v8 )
      *v8 = 0;
    goto LABEL_15;
  }
  if ( InformationLength )
  {
    if ( ((unsigned __int8)Information & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Information + InformationLength > 0x7FFFFFFF0000LL
      || (char *)Information + InformationLength < Information )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v8 = ReturnLength;
  if ( ReturnLength )
  {
    v9 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    goto LABEL_13;
  }
LABEL_15:
  if ( InformationClass != DebugObjectKillProcessOnExitInformation )
    return -1073741811;
  if ( InformationLength == 4 )
  {
    v11 = *(_DWORD *)Information;
    if ( (*(_DWORD *)Information & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      result = ObReferenceObjectByHandle(DebugObject, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
      if ( result >= 0 )
      {
        v12 = (char *)Object;
        ExAcquireFastMutex((PFAST_MUTEX)((char *)Object + 24));
        if ( (v11 & 1) != 0 )
          *((_DWORD *)v12 + 24) |= 2u;
        else
          *((_DWORD *)v12 + 24) &= ~2u;
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 24));
        ObfDereferenceObject(v12);
        return 0;
      }
    }
  }
  else
  {
    if ( v8 )
      *v8 = 4;
    return -1073741820;
  }
  return result;
}
