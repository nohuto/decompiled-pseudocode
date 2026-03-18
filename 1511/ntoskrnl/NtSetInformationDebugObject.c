/*
 * XREFs of NtSetInformationDebugObject @ 0x1405F00C8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  int v12; // edi
  char *v13; // rbx
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
    v12 = *(_DWORD *)Information;
    if ( (*(_DWORD *)Information & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      result = ObReferenceObjectByHandle(DebugObject, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
      if ( result >= 0 )
      {
        v13 = (char *)Object;
        ExAcquireFastMutex((PFAST_MUTEX)((char *)Object + 24));
        if ( (v12 & 1) != 0 )
          *((_DWORD *)v13 + 24) |= 2u;
        else
          *((_DWORD *)v13 + 24) &= ~2u;
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v13 + 24));
        ObfDereferenceObject(v13);
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
