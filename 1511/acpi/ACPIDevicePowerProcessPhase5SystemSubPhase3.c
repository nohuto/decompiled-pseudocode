/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0039070
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetParent @ 0x1C000B95C (AMLIGetParent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C790 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase3(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // r14d
  __int64 v3; // rbx
  __int64 *v4; // rbp
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  _QWORD v9[6]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(unsigned int *)(a1 + 104);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0LL;
  *(_DWORD *)(a1 + 212) = 6;
  if ( (_DWORD)v1 == 1 )
    goto LABEL_7;
  memset(v9, 0, 0x28uLL);
  WORD1(v9[0]) = 1;
  v6 = (volatile signed __int32 *)AMLIGetParent(*(_QWORD *)(v3 + 704));
  v4 = (__int64 *)AMLIGetNamedChild((__int64)v6, 1398034527);
  AMLIDereferenceHandleEx(v6);
  if ( !v4 )
    goto LABEL_7;
  v7 = (unsigned int)v1 < 7 ? AcpiSystemStateTranslation[v1] : 0xFFFFFFFFLL;
  v9[2] = v7;
  v2 = AMLIAsyncEvalObject(v4, 0LL, 1u, v9, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
  result = 259LL;
  v4 = 0LL;
  if ( v2 != 259 )
  {
LABEL_7:
    ACPIDeviceCompleteGenericPhase((__int64)v4, v2, 0LL, a1);
    return 0LL;
  }
  return result;
}
