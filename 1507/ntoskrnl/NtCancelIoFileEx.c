/*
 * XREFs of NtCancelIoFileEx @ 0x1404A83A4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x140074834 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14042027C (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall NtCancelIoFileEx(void *a1, __int64 a2, ULONG64 a3)
{
  KPROCESSOR_MODE PreviousMode; // r9
  _DWORD *v6; // rdx
  NTSTATUS v7; // edi
  _DWORD *v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v10; // rdi
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // ebx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v16; // rbx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = (_DWORD *)a3;
    if ( a3 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
  }
  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v8 )
    {
      if ( (*v8 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v16 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v16, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v16);
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v7 = -1073739504;
        }
      }
    }
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2E64u);
  v10 = Object;
  v11 = IopCancelIrpsInFileObjectList((__int64)Object, (int)KeGetCurrentThread()->ApcState.Process, a2, 0, 0, 0);
  v12 = v11;
  if ( !a2 || !v11 )
    v12 = IopCancelIrpsInThreadListForCurrentProcess((__int64)v10, a2) | v11;
  v13 = v12 == 0 ? 0xC0000225 : 0;
  LODWORD(TokenInformation) = v13;
  *(_DWORD *)a3 = v13;
  *(_QWORD *)(a3 + 8) = 0LL;
  ObfDereferenceObject(v10);
  return v13;
}
