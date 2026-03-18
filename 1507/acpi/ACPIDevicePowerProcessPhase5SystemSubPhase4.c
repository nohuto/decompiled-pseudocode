/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0038590
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

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase4(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edi
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // r14
  int v6; // ebx
  __int64 *v7; // rsi
  __int64 result; // rax
  _QWORD v9[6]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 212) = 7;
  memset(v9, 0, 0x28uLL);
  WORD1(v9[0]) = 1;
  v4 = (volatile signed __int32 *)AMLIGetParent(*(_QWORD *)(v1 + 704));
  v5 = (volatile signed __int32 *)AMLIGetNamedChild((__int64)v4, 1598640991);
  AMLIDereferenceHandleEx(v4);
  v6 = 0;
  if ( v5 )
  {
    v7 = (__int64 *)AMLIGetNamedChild((__int64)v5, 1414746975);
    AMLIDereferenceHandleEx(v5);
    if ( v7 )
    {
      if ( v2 == 1 )
      {
        v9[2] = 1LL;
      }
      else
      {
        if ( v2 > 1 )
        {
          if ( v2 <= 4 )
          {
            v9[2] = 3LL;
            goto LABEL_11;
          }
          if ( v2 == 5 )
          {
            v9[2] = 4LL;
            goto LABEL_11;
          }
        }
        v9[2] = 0LL;
      }
LABEL_11:
      v6 = AMLIAsyncEvalObject(v7, 0LL, 1u, v9, ACPIDeviceCompleteGenericPhase, a1);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v7);
      result = 259LL;
      if ( v6 == 259 )
        return result;
    }
  }
  ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
  return 0LL;
}
