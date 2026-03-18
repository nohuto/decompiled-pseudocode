/*
 * XREFs of PoFxRegisterCoreDevice @ 0x1405AC5B0
 * Callers:
 *     PoFxRegisterDebugger @ 0x1407E8DD4 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxInsertDevice @ 0x140166B1C (PopFxInsertDevice.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 *     PopFxConvertV1Components @ 0x1405AD664 (PopFxConvertV1Components.c)
 */

__int64 __fastcall PoFxRegisterCoreDevice(__int64 a1, __int64 a2, ULONG_PTR **a3)
{
  ULONG_PTR *v3; // rbx
  void *v4; // rsi
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r9
  _QWORD v13[7]; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR *v14; // [rsp+B0h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v7 = a1;
  if ( a1 && *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 24) )
  {
    v4 = (void *)PopFxConvertV1Components(a2 + 48, *(unsigned int *)(a2 + 4));
    if ( !v4 )
    {
      v10 = -1073741670;
      goto LABEL_9;
    }
    memset(v13, 0, sizeof(v13));
    v13[0] = *(_QWORD *)(a2 + 8);
    v13[1] = *(_QWORD *)(a2 + 16);
    v13[2] = *(_QWORD *)(a2 + 32);
    v13[6] = *(_QWORD *)(a2 + 24);
    v10 = PopFxRegisterDeviceWorker(
            0,
            v7,
            (unsigned int)v13,
            (_DWORD)v4,
            *(_DWORD *)(a2 + 4),
            *(_QWORD *)(a2 + 40),
            0,
            0LL,
            (__int64)&v14);
    if ( v10 >= 0 )
    {
      v3 = v14;
      PopFxInsertDevice(v9, v8, v14, v11);
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4D584650u);
LABEL_9:
  *a3 = v3;
  return (unsigned int)v10;
}
