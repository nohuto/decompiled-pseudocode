/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004A930
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C0013F30 (AMLIIsNamedChildPresent.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // esi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // esi
  const char *v9; // rax
  const char *v10; // rcx
  __int64 result; // rax
  _DWORD v12[3]; // [rsp+50h] [rbp-38h]
  _DWORD v13[5]; // [rsp+5Ch] [rbp-2Ch] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(int *)(a1 + 104);
  v12[0] = 0;
  v12[1] = 0;
  v4 = *(unsigned __int8 *)(a1 + 56);
  v13[3] = 0;
  v12[2] = 826951007;
  *(_DWORD *)(a1 + 212) = (v4 >> 5) & 4;
  qmemcpy(v13, "_EJ2_EJ3_EJ4", 12);
  v5 = v12[v3];
  if ( !AMLIIsNamedChildPresent(*(__int64 **)(v1 + 712), v5) )
    KeBugCheckEx(0xA3u, 1uLL, 0xC25B4uLL, 0LL, 0LL);
  v6 = ACPIGet((__int64 *)v1, v5, 546308096, 1LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  v7 = *(_QWORD *)(v1 + 8);
  v8 = v6;
  v9 = (const char *)qword_1C002C340;
  v10 = (const char *)qword_1C002C340;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v9 = *(const char **)(v1 + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x56u,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    v8,
    v1,
    v9,
    v10);
  result = 259LL;
  if ( v8 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v8, 0LL, a1);
    return 0LL;
  }
  return result;
}
