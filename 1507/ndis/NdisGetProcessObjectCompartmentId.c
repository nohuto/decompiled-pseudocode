/*
 * XREFs of NdisGetProcessObjectCompartmentId @ 0x1C000DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00615B4 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     NdisGetJobObjectCompartmentId @ 0x1C0061670 (NdisGetJobObjectCompartmentId.c)
 */

__int64 __fastcall NdisGetProcessObjectCompartmentId(__int64 a1)
{
  __int64 ProcessJob; // rax
  unsigned int ProcessSessionId; // ebx
  __int64 result; // rax
  unsigned int v5; // edi
  KIRQL v6; // al

  ProcessJob = PsGetProcessJob();
  if ( !ProcessJob || (result = NdisGetJobObjectCompartmentId(ProcessJob), !(_DWORD)result) )
  {
    ProcessSessionId = PsGetProcessSessionId(a1);
    if ( ProcessSessionId == -1 )
      ProcessSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ProcessSessionId < ndisCmSessionCount )
    {
      v5 = 0;
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ProcessSessionId < ndisCmSessionCount )
        v5 = *((_DWORD *)ndisCmSession + 6 * ProcessSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v6);
      if ( !v5 )
        return 1;
      return v5;
    }
    else
    {
      return 1LL;
    }
  }
  return result;
}
