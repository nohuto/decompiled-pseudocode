/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C00380B0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetParent @ 0x1C000B88C (AMLIGetParent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase1(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  int v4; // r15d
  __int64 *v5; // rbp
  signed __int32 v6; // r12d
  char v7; // di
  __int64 *v8; // r10
  __int64 *v9; // rdx
  __int64 *v10; // r8
  __int64 *v11; // rax
  bool v12; // al
  __int64 v13; // rax
  __int64 v14; // rdi
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 result; // rax
  _QWORD v18[6]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(int *)(a1 + 104);
  v2 = *(int *)(a1 + 108);
  *(_DWORD *)(a1 + 212) = 4;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( (_DWORD)v1 != 6 || (v7 = 1, (_DWORD)v2 != 5) )
    v7 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v8 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    while ( 1 )
    {
      v9 = v8;
      v8 = (__int64 *)*v8;
      v10 = (__int64 *)v9[6];
      while ( v10 != v9 + 6 )
      {
        v11 = v10 - 5;
        v10 = (__int64 *)*v10;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v11[4] + 680), 0, 0);
        if ( v6 )
          goto LABEL_10;
      }
      if ( !v6 )
      {
        _InterlockedAnd64(v9 + 2, 0xFFFFFFFFFFFDFFFFuLL);
        goto LABEL_11;
      }
LABEL_10:
      _InterlockedOr64(v9 + 2, 0x20000uLL);
LABEL_11:
      v12 = v1 == 5 || v2 == 3;
      if ( v6 && v12 || v7 == 1 )
      {
        if ( (v9[2] & 0x40) != 0 )
          goto LABEL_19;
      }
      else
      {
        if ( *((_DWORD *)v9 + 11) < (int)v1 )
        {
          if ( (v9[2] & 0x200) == 0 )
            _InterlockedOr64(v9 + 2, 0x40uLL);
          goto LABEL_25;
        }
        v13 = v9[2];
        if ( (v13 & 0x40) != 0 )
        {
LABEL_19:
          _InterlockedAnd64(v9 + 2, 0xFFFFFFFFFFFFFFBFuLL);
LABEL_25:
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v9 + 16, 3, 0) == 1 )
            *((_DWORD *)v9 + 17) = 3;
          goto LABEL_27;
        }
        if ( (v13 & 0x2000) != 0 )
          goto LABEL_25;
      }
LABEL_27:
      if ( v8 == &AcpiPowerNodeList )
      {
        v4 = 0;
        break;
      }
    }
  }
  v14 = (unsigned int)AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( (_DWORD)v1 != 1 )
    goto LABEL_35;
  v15 = (volatile signed __int32 *)AMLIGetParent(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 704LL));
  v5 = (__int64 *)AMLIGetNamedChild((__int64)v15, 1262573407);
  AMLIDereferenceHandleEx(v15);
  if ( !v5 )
    goto LABEL_35;
  memset(v18, 0, 0x28uLL);
  WORD1(v18[0]) = 1;
  v16 = (unsigned int)v14 < 7 ? AcpiSystemStateTranslation[v14] : 0xFFFFFFFFLL;
  v18[2] = v16;
  v4 = AMLIAsyncEvalObject(v5, 0LL, 1u, v18, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
  result = 259LL;
  v5 = 0LL;
  if ( v4 != 259 )
  {
LABEL_35:
    ACPIDeviceCompleteGenericPhase((__int64)v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
