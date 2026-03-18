/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004B650 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase1(__int64 a1)
{
  int v2; // r15d
  __int64 *v3; // rbp
  signed __int32 v4; // r12d
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 *v7; // r10
  __int64 *v8; // rdx
  __int64 *v9; // r8
  __int64 *v10; // rax
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // edx
  __int64 result; // rax
  _QWORD v20[6]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  *(_DWORD *)(a1 + 212) = 4;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    61,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    4);
  v5 = *(int *)(a1 + 104);
  v6 = *(int *)(a1 + 108);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v7 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList == &AcpiPowerNodeList )
    goto LABEL_25;
  do
  {
    v8 = v7;
    v7 = (__int64 *)*v7;
    v9 = (__int64 *)v8[6];
    if ( v9 != v8 + 6 )
    {
      while ( 1 )
      {
        v10 = v9 - 5;
        v9 = (__int64 *)*v9;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v10[4] + 688), 0, 0);
        if ( v4 )
          break;
        if ( v9 == v8 + 6 )
          goto LABEL_5;
      }
LABEL_7:
      _InterlockedOr64(v8 + 2, 0x20000uLL);
      goto LABEL_8;
    }
LABEL_5:
    if ( v4 )
      goto LABEL_7;
    _InterlockedAnd64(v8 + 2, 0xFFFFFFFFFFFDFFFFuLL);
LABEL_8:
    if ( v5 == 5 || (v11 = 0, v6 == 3) )
      v11 = 1;
    if ( v4 && v11 == 1 || __PAIR64__(v6, v5) == 0x500000006LL )
    {
      if ( (v8[2] & 0x40) == 0 )
        continue;
    }
    else
    {
      if ( *((_DWORD *)v8 + 11) < (int)v5 )
      {
        if ( (v8[2] & 0x200) == 0 )
          _InterlockedOr64(v8 + 2, 0x40uLL);
        goto LABEL_21;
      }
      v12 = v8[2];
      if ( (v12 & 0x40) == 0 )
      {
        if ( (v12 & 0x2000) == 0 )
          continue;
        goto LABEL_21;
      }
    }
    _InterlockedAnd64(v8 + 2, 0xFFFFFFFFFFFFFFBFuLL);
LABEL_21:
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v8 + 16, 3, 0) == 1 )
      *((_DWORD *)v8 + 17) = 3;
  }
  while ( v7 != &AcpiPowerNodeList );
  v2 = 0;
LABEL_25:
  v13 = (unsigned int)AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( (_DWORD)v5 != 1 )
    goto LABEL_31;
  v14 = (__int64 *)AMLIGetParent(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 712LL));
  v3 = AMLIGetNamedChild(v14, 1262573407);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v14, v15);
  if ( !v3 )
    goto LABEL_31;
  memset(v20, 0, 0x28uLL);
  WORD1(v20[0]) = 1;
  v16 = (unsigned int)v13 < 7 ? (unsigned int)AcpiSystemStateTranslation[v13] : 0xFFFFFFFFLL;
  v20[2] = v16;
  v2 = AMLIAsyncEvalObject(v3, 0LL, 1u, v20, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v3, v17);
  v3 = 0LL;
  LOBYTE(v18) = 4;
  WPP_RECORDER_SF_qD(
    WPP_GLOBAL_Control->DeviceExtension,
    v18,
    10,
    62,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    v2);
  result = 259LL;
  if ( v2 != 259 )
  {
LABEL_31:
    ACPIDeviceCompleteGenericPhase((__int64)v3, v2, 0LL, a1);
    return 0LL;
  }
  return result;
}
