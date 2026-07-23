/*
 * XREFs of PoFxRegisterCoreDevice @ 0x140566E7C
 * Callers:
 *     PoFxRegisterDebugger @ 0x1407B21AC (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxInsertDevice @ 0x140142344 (PopFxInsertDevice.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopFxRegisterDeviceWorker @ 0x140567268 (PopFxRegisterDeviceWorker.c)
 *     PopFxConvertV1Components @ 0x140567D48 (PopFxConvertV1Components.c)
 */

__int64 __fastcall PoFxRegisterCoreDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  void *v4; // rsi
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  _QWORD v12[7]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v13; // [rsp+B0h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  v7 = a1;
  if ( a1 && *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 24) )
  {
    v4 = (void *)PopFxConvertV1Components(a2 + 48, *(unsigned int *)(a2 + 4));
    if ( !v4 )
    {
      v10 = -1073741670;
      goto LABEL_9;
    }
    memset(v12, 0, sizeof(v12));
    v12[0] = *(_QWORD *)(a2 + 8);
    v12[1] = *(_QWORD *)(a2 + 16);
    v12[2] = *(_QWORD *)(a2 + 32);
    v12[6] = *(_QWORD *)(a2 + 24);
    v10 = PopFxRegisterDeviceWorker(
            0,
            v7,
            (unsigned int)v12,
            (_DWORD)v4,
            *(_DWORD *)(a2 + 4),
            *(_QWORD *)(a2 + 40),
            0,
            0LL,
            (__int64)&v13);
    if ( v10 >= 0 )
    {
      v3 = v13;
      PopFxInsertDevice(v9, v8, v13);
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
