/*
 * XREFs of PiDevCfgResolveVariableKeyValue @ 0x140640CAC
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PnpValidateRegistryString @ 0x1401CF3F4 (PnpValidateRegistryString.c)
 *     PnpValidateRegistryValue @ 0x1401CF424 (PnpValidateRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140640500 (PiDevCfgResolveVariableKeyHandle.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyValue(_QWORD *a1, void *a2, __int64 a3)
{
  __int64 v3; // r13
  int v6; // ebx
  NTSTATUS RegistryValue; // eax
  unsigned int *v8; // rsi
  const WCHAR *v9; // rdi
  int v10; // eax
  unsigned int v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  _DWORD *v14; // rdi
  SIZE_T v15; // r15
  int v16; // r12d
  PVOID PoolWithTag; // rax
  PVOID v18; // r14
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  PVOID v21; // [rsp+28h] [rbp-8h] BYREF
  PVOID P; // [rsp+88h] [rbp+58h] BYREF

  v21 = 0LL;
  v3 = a3;
  P = 0LL;
  Handle = 0LL;
  v6 = PiDevCfgResolveVariableKeyHandle(a1, a2, &Handle);
  if ( v6 < 0 )
    goto LABEL_31;
  RegistryValue = IopGetRegistryValue(a2, L"ValueName", 0, &v21);
  v8 = (unsigned int *)v21;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryString(v21) )
    {
      v6 = -1073741823;
      goto LABEL_29;
    }
    v9 = (const WCHAR *)((char *)v8 + v8[2]);
    if ( *v9 != 36 )
    {
LABEL_12:
      v12 = IopGetRegistryValue(Handle, v9, 0, &P);
      v6 = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -1073741772 )
          goto LABEL_17;
        v13 = IopGetRegistryValue(a2, L"DefaultValue", 0, &P);
        v6 = v13;
        if ( v13 < 0 )
        {
          if ( v13 == -1073741772 )
          {
            v6 = 0;
            v14 = 0LL;
            goto LABEL_19;
          }
LABEL_17:
          v14 = P;
          goto LABEL_27;
        }
      }
      v14 = P;
LABEL_19:
      if ( v14 )
      {
        if ( !PnpValidateRegistryValue(v14) )
        {
          v6 = -1073741823;
          goto LABEL_27;
        }
        v15 = (unsigned int)v14[3];
        v16 = v14[1];
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x63647050u);
        v18 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v6 = -1073741670;
          goto LABEL_27;
        }
        memmove(PoolWithTag, (char *)v14 + (unsigned int)v14[2], v15);
        v3 = a3;
      }
      else
      {
        v16 = 0;
        LODWORD(v15) = 0;
        v18 = 0LL;
      }
      *(_DWORD *)(v3 + 32) = v16;
      *(_DWORD *)(v3 + 36) = v15;
      *(_QWORD *)(v3 + 40) = v18;
LABEL_27:
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      goto LABEL_29;
    }
    v21 = 0LL;
    v10 = PiDevCfgResolveVariable((__int64)a1, v9 + 1, (UNICODE_STRING **)&v21);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v11 = *((_DWORD *)v21 + 8);
      if ( v11 && (v11 <= 2 || v11 == 7) )
        v9 = (const WCHAR *)*((_QWORD *)v21 + 5);
      goto LABEL_12;
    }
    if ( v10 == -1073741772 )
      goto LABEL_12;
  }
LABEL_29:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
