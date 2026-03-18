/*
 * XREFs of PiDevCfgResolveVariableConstant @ 0x140689ED0
 * Callers:
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgResolveVariableConstant(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // eax
  unsigned int *v5; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  unsigned int v8; // edx
  _WORD *v9; // rax
  unsigned __int64 v10; // rcx
  size_t v11; // r14
  PVOID PoolWithTag; // rax
  PVOID v13; // rsi
  bool v14; // zf
  unsigned int v15; // eax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Value", 0, &P);
  v5 = (unsigned int *)P;
  v6 = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_22;
  v7 = *((_DWORD *)P + 1);
  if ( v7 )
  {
    if ( v7 <= 2 )
    {
      v15 = *((_DWORD *)P + 3);
      if ( v15 < 2 )
        goto LABEL_18;
      v14 = *(_WORD *)((char *)P + 2 * ((unsigned __int64)v15 >> 1) + *((unsigned int *)P + 2) - 2) == 0;
    }
    else
    {
      if ( v7 != 4 )
      {
        if ( v7 != 7 )
          goto LABEL_11;
        v8 = *((_DWORD *)P + 3);
        v9 = (char *)P + *((unsigned int *)P + 2);
        if ( v8 >= 4 )
        {
          v10 = (unsigned __int64)v8 >> 1;
          if ( !v9[v10 - 1] && !v9[v10 - 2] )
            goto LABEL_11;
        }
        if ( v8 == 2 && !*v9 )
          goto LABEL_11;
LABEL_18:
        v6 = -1073741823;
        goto LABEL_22;
      }
      v14 = *((_DWORD *)P + 3) == 4;
    }
    if ( !v14 )
      goto LABEL_18;
  }
LABEL_11:
  v11 = *((unsigned int *)P + 3);
  if ( (_DWORD)v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x63647050u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_22;
    }
    memmove(PoolWithTag, (char *)v5 + v5[2], v11);
  }
  else
  {
    v13 = 0LL;
  }
  *(_DWORD *)(a3 + 32) = v7;
  *(_DWORD *)(a3 + 36) = v11;
  *(_QWORD *)(a3 + 40) = v13;
LABEL_22:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
