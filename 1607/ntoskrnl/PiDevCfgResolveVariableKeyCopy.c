/*
 * XREFs of PiDevCfgResolveVariableKeyCopy @ 0x140640424
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     PnpValidateRegistryValue @ 0x1401CF424 (PnpValidateRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140640500 (PiDevCfgResolveVariableKeyHandle.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyCopy(__int64 a1, void *a2, __int64 a3)
{
  int v5; // ebx
  int v6; // edi
  NTSTATUS RegistryValue; // eax
  unsigned int *v8; // r9
  HANDLE v9; // rbx
  HANDLE v10; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  P[0] = 0LL;
  v5 = 0;
  v6 = PiDevCfgResolveVariableKeyHandle(a1, a2, &Handle);
  if ( v6 < 0 )
  {
    v9 = Handle;
    goto LABEL_14;
  }
  RegistryValue = IopGetRegistryValue(a2, L"Delete", 0, P);
  v8 = (unsigned int *)P[0];
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryValue((_DWORD *)P[0]) )
    {
      if ( *(unsigned int *)((char *)v8 + v8[2]) )
        v5 = 0x100000;
      goto LABEL_10;
    }
    v6 = -1073741823;
LABEL_7:
    v9 = Handle;
    goto LABEL_11;
  }
  if ( RegistryValue != -1073741772 )
    goto LABEL_7;
  v6 = 0;
LABEL_10:
  *(_DWORD *)(a3 + 36) = 0;
  v10 = Handle;
  *(_DWORD *)(a3 + 32) = v5 | 0x8000;
  v9 = 0LL;
  *(_QWORD *)(a3 + 40) = v10;
LABEL_11:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_14:
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)v6;
}
