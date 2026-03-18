/*
 * XREFs of PoFxRegisterPrimaryDevice @ 0x140634050
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopFxRegisterDevice @ 0x14051B960 (PopFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x14051C610 (PopFxConvertV1Components.c)
 */

__int64 __fastcall PoFxRegisterPrimaryDevice(struct _DEVICE_OBJECT *Object, __int64 a2, ULONG_PTR **a3)
{
  char *v3; // rdi
  char *v7; // rax
  unsigned int v8; // ebx
  int v9; // r9d
  _QWORD v11[8]; // [rsp+40h] [rbp-48h] BYREF

  v3 = 0LL;
  if ( Object && a2 && *(_DWORD *)a2 == 1 )
  {
    v7 = PopFxConvertV1Components(a2 + 72, *(_DWORD *)(a2 + 4));
    v3 = v7;
    if ( !v7 )
      return (unsigned int)-1073741670;
    v9 = *(_DWORD *)(a2 + 4);
    v11[0] = *(_QWORD *)(a2 + 8);
    v11[1] = *(_QWORD *)(a2 + 16);
    v11[2] = *(_QWORD *)(a2 + 24);
    v11[3] = *(_QWORD *)(a2 + 32);
    v11[4] = *(_QWORD *)(a2 + 40);
    v11[5] = *(_QWORD *)(a2 + 48);
    v11[6] = *(_QWORD *)(a2 + 56);
    v8 = PopFxRegisterDevice(Object, (int)v11, (int)v7, v9, *(_QWORD *)(a2 + 64), 0LL, a3);
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4D584650u);
  return v8;
}
