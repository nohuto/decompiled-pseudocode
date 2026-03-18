/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035200
 * Callers:
 *     <none>
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C0008ED4 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001E4C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildCompleteGeneric @ 0x1C001F8A0 (ACPIBuildCompleteGeneric.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSetupOnOff(__int64 a1)
{
  __int64 v1; // rdi
  _SLIST_ENTRY *v2; // rbp
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // r14
  volatile signed __int32 *v12; // rcx
  __int64 *v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (_SLIST_ENTRY *)(a1 + 80);
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 6;
  if ( *(_WORD *)(a1 + 82) )
  {
    ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 32), (__int64)v2, (_QWORD *)(v1 + 96));
    _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 0x1000uLL);
  }
  memset(v2, 0, 0x28uLL);
  v5 = AMLIGetNamedChild(*(_QWORD *)(v1 + 32), 1179012959);
  if ( !v5 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x46464F5FuLL, 0LL);
  v6 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v1 + 80) = v5;
  v7 = AMLIGetNamedChild(v6, 1598967647);
  if ( !v7 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x5F4E4F5FuLL, 0LL);
  v8 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v1 + 72) = v7;
  v9 = AMLIGetNamedChild(v8, 1414746719);
  v10 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v1 + 88) = v9;
  v11 = (volatile signed __int32 *)AMLIGetNamedChild(v10, 1096045407);
  if ( !v11 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x4154535FuLL, 0LL);
  memset(v2, 0, 0x28uLL);
  if ( (*(_DWORD *)(v1 + 16) & 0x1000LL) != 0 )
    goto LABEL_13;
  v12 = *(volatile signed __int32 **)(a1 + 56);
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v11;
  AMLIReferenceHandleEx((__int64)v11);
  v3 = AMLIAsyncEvalObject(v13, v2, 0, 0LL, ACPIBuildCompleteGeneric, a1);
  if ( v3 != 259 )
LABEL_13:
    ACPIBuildCompleteGeneric((__int64)v11, v3, (__int64)v2, a1);
  AMLIDereferenceHandleEx(v11);
  return v3;
}
