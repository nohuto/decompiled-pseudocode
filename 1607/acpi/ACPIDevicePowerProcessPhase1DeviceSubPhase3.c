/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0029600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLdqss @ 0x1C0010524 (WPP_RECORDER_SF_qLdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbp
  __int64 *v4; // rcx
  __int64 *v5; // rax
  unsigned int v6; // esi
  volatile signed __int32 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  const char *v10; // rax
  __int64 v11; // r8
  const char *v12; // rcx
  int v14; // [rsp+20h] [rbp-48h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 6;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  if ( (v1[1] & 0x200000000000000LL) != 0 )
    v4 = *(__int64 **)(v1[23] + 712LL);
  else
    v4 = (__int64 *)v1[89];
  v5 = AMLIGetNamedChild(v4, 1096045407);
  v6 = 0;
  v7 = (volatile signed __int32 *)v5;
  if ( v5 )
  {
    if ( *(_WORD *)(*v5 + 66) == 8 )
      *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v6 = AMLIAsyncEvalObject(v5, (_SLIST_ENTRY *)v2, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
    AMLIDereferenceHandleEx(v7, v8);
  }
  else
  {
    *(_WORD *)(v2 + 2) = 1;
    *(_QWORD *)(v2 + 16) = 1LL;
  }
  v9 = v1[1];
  v10 = (const char *)qword_1C002C340;
  v11 = 0x200000000000LL;
  v12 = (const char *)qword_1C002C340;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = (const char *)v1[70];
    v11 = 0x400000000000LL;
    if ( (v9 & 0x400000000000LL) != 0 )
      v12 = (const char *)v1[71];
  }
  WPP_RECORDER_SF_qLdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v9,
    v11,
    0x3Au,
    v14,
    a1,
    v6,
    *(_DWORD *)(a1 + 212),
    (char)v1,
    v10,
    v12);
  if ( v6 != 259 )
    ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
  return v6;
}
