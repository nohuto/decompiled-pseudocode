/*
 * XREFs of PoFxRegisterPrimaryDevice @ 0x14066C53C
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopFxRegisterDevice @ 0x14056711C (PopFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140567D48 (PopFxConvertV1Components.c)
 */

__int64 __fastcall PoFxRegisterPrimaryDevice(struct _DEVICE_OBJECT *Object, __int64 a2, _QWORD *a3)
{
  char *v3; // rdi
  unsigned int v7; // ebx
  int v8; // r9d
  _QWORD v10[7]; // [rsp+40h] [rbp-48h] BYREF

  v3 = 0LL;
  if ( Object && a2 && *(_DWORD *)a2 == 1 )
  {
    v3 = PopFxConvertV1Components(a2 + 72, *(_DWORD *)(a2 + 4));
    if ( !v3 )
      return (unsigned int)-1073741670;
    memset(v10, 0, sizeof(v10));
    v8 = *(_DWORD *)(a2 + 4);
    v10[0] = *(_QWORD *)(a2 + 8);
    v10[1] = *(_QWORD *)(a2 + 16);
    v10[2] = *(_QWORD *)(a2 + 24);
    v10[3] = *(_QWORD *)(a2 + 32);
    v10[4] = *(_QWORD *)(a2 + 40);
    v10[5] = *(_QWORD *)(a2 + 48);
    v10[6] = *(_QWORD *)(a2 + 56);
    v7 = PopFxRegisterDevice(Object, (int)v10, (int)v3, v8, *(_QWORD *)(a2 + 64), 0LL, a3);
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4D584650u);
  return v7;
}
