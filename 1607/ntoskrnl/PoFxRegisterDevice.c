/*
 * XREFs of PoFxRegisterDevice @ 0x140566F90
 * Callers:
 *     <none>
 * Callees:
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopFxRegisterDevice @ 0x14056711C (PopFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140567D48 (PopFxConvertV1Components.c)
 */

__int64 __fastcall PoFxRegisterDevice(_QWORD *Object, __int64 a2, __int64 a3)
{
  void *v3; // rdi
  __int64 v4; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned int v10; // ebx
  _QWORD v12[7]; // [rsp+40h] [rbp-40h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( !Object )
    return (unsigned int)-1073741811;
  memset(v12, 0, sizeof(v12));
  if ( *(_DWORD *)a2 == 1 )
  {
    PopPrintEx(1u, "Device using PO_FX_VERSION_V1: devobj 0x%p", Object);
    PopPrintEx(1u, " - Driver: \"%wZ\"", Object[1] + 56LL);
    PopPrintEx(1u, "\n");
    v7 = 0LL;
    v8 = *(_QWORD *)(a2 + 56);
    v9 = *(unsigned int *)(a2 + 4);
    v12[0] = *(_QWORD *)(a2 + 8);
    v12[1] = *(_QWORD *)(a2 + 16);
    v12[2] = *(_QWORD *)(a2 + 24);
    v12[3] = *(_QWORD *)(a2 + 32);
    v12[4] = *(_QWORD *)(a2 + 40);
    v12[5] = *(_QWORD *)(a2 + 48);
    v3 = (void *)PopFxConvertV1Components(a2 + 64, v9);
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      v10 = -1073741811;
      goto LABEL_5;
    }
    v3 = (void *)(a2 + 80);
    v4 = a2;
    v8 = *(_QWORD *)(a2 + 64);
    v7 = *(_QWORD *)(a2 + 8);
    v12[0] = *(_QWORD *)(a2 + 16);
    v12[1] = *(_QWORD *)(a2 + 24);
    v12[2] = *(_QWORD *)(a2 + 32);
    v12[3] = *(_QWORD *)(a2 + 40);
    v12[4] = *(_QWORD *)(a2 + 48);
    v12[5] = *(_QWORD *)(a2 + 56);
  }
  v10 = PopFxRegisterDevice(Object, v8, v7, a3);
LABEL_5:
  if ( v3 && !v4 )
    ExFreePoolWithTag(v3, 0x4D584650u);
  return v10;
}
