/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004A3D0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase3(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rax
  __int64 v3; // rbp
  int v4; // r14d
  __int64 *v5; // rsi
  char v6; // r8
  const char *v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  _QWORD v15[6]; // [rsp+50h] [rbp-48h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)qword_1C002C340;
  v3 = *(unsigned int *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v8 = (const char *)qword_1C002C340;
  if ( v1 )
  {
    v9 = v1[1];
    v6 = (char)v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x52u,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    v6,
    v2,
    v8);
  *(_DWORD *)(a1 + 212) = 6;
  if ( (_DWORD)v3 == 1 )
    goto LABEL_11;
  memset(v15, 0, 0x28uLL);
  WORD1(v15[0]) = 1;
  v10 = (__int64 *)AMLIGetParent(v1[89]);
  v5 = AMLIGetNamedChild(v10, 1398034527);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v10, v11);
  if ( !v5 )
    goto LABEL_11;
  v12 = (unsigned int)v3 < 7 ? (unsigned int)AcpiSystemStateTranslation[v3] : 0xFFFFFFFFLL;
  v15[2] = v12;
  v4 = AMLIAsyncEvalObject(v5, 0LL, 1u, v15, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v5, v13);
  result = 259LL;
  v5 = 0LL;
  if ( v4 != 259 )
  {
LABEL_11:
    ACPIDeviceCompleteGenericPhase((__int64)v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
