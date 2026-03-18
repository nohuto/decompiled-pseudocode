/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000BF80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebp
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 v6; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_WORD *)(a1 + 218) = 1;
  if ( v3 == 1 || (v5 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 6;
  }
  else if ( (*(_QWORD *)v1 & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 5;
  }
  else
  {
    *(_DWORD *)(a1 + 212) = 4;
    if ( v3 == 4 )
    {
      v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1397310559LL);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v1 + 904) & 0x100LL) == 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 904LL), 0x100uLL);
          *(_DWORD *)(a1 + 56) |= 0x1000000u;
          v4 = AMLIAsyncEvalObject(v6, 0LL, 0LL, 0LL, ACPIDeviceCompleteGenericPhase, a1);
          AMLIDereferenceHandleEx(v6);
          result = 259LL;
          v6 = 0LL;
          if ( v4 == 259 )
            return result;
        }
      }
      else
      {
        _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 904LL), 0x100uLL);
      }
    }
  }
  ACPIDeviceCompleteGenericPhase(v6, v4, 0LL, a1);
  if ( v6 )
    AMLIDereferenceHandleEx(v6);
  return 0LL;
}
