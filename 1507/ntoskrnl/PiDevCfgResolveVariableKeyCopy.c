/*
 * XREFs of PiDevCfgResolveVariableKeyCopy @ 0x14068BE74
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyCopy(__int64 a1, void *a2, __int64 a3)
{
  int v4; // ebx
  int v6; // edi
  NTSTATUS RegistryValue; // eax
  PVOID v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // edx
  _WORD *v11; // rax
  unsigned __int64 v12; // rcx
  void *v13; // rax
  void *v14; // rbx
  bool v15; // zf
  unsigned int v16; // eax
  PVOID P[5]; // [rsp+20h] [rbp-28h] BYREF
  void *v19; // [rsp+68h] [rbp+20h] BYREF

  v19 = 0LL;
  P[0] = 0LL;
  v4 = 0;
  v6 = PiDevCfgResolveVariableKeyHandle(a1, a2, &v19);
  if ( v6 < 0 )
  {
    v14 = v19;
    goto LABEL_26;
  }
  RegistryValue = IopGetRegistryValue(a2, L"Delete", 0, P);
  v8 = P[0];
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    v9 = *((_DWORD *)P[0] + 1);
    if ( !v9 )
      goto LABEL_14;
    if ( v9 <= 2 )
    {
      v16 = *((_DWORD *)P[0] + 3);
      if ( v16 < 2 )
        goto LABEL_23;
      v15 = *(_WORD *)((char *)P[0] + 2 * ((unsigned __int64)v16 >> 1) + *((unsigned int *)P[0] + 2) - 2) == 0;
    }
    else
    {
      if ( v9 != 4 )
      {
        if ( v9 != 7
          || (v10 = *((_DWORD *)P[0] + 3), v11 = (char *)P[0] + *((unsigned int *)P[0] + 2), v10 >= 4)
          && (v12 = (unsigned __int64)v10 >> 1, !v11[v12 - 1])
          && !v11[v12 - 2]
          || v10 == 2 && !*v11 )
        {
LABEL_14:
          if ( *(_DWORD *)((char *)P[0] + *((unsigned int *)P[0] + 2)) )
            v4 = 0x100000;
          goto LABEL_16;
        }
LABEL_23:
        v6 = -1073741823;
        goto LABEL_24;
      }
      v15 = *((_DWORD *)P[0] + 3) == 4;
    }
    if ( v15 )
      goto LABEL_14;
    goto LABEL_23;
  }
  if ( RegistryValue == -1073741772 )
  {
    v6 = 0;
LABEL_16:
    v13 = v19;
    *(_DWORD *)(a3 + 32) = v4 | 0x8000;
    v14 = 0LL;
    *(_DWORD *)(a3 + 36) = 0;
    *(_QWORD *)(a3 + 40) = v13;
    goto LABEL_17;
  }
LABEL_24:
  v14 = v19;
LABEL_17:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_26:
  if ( v14 )
    ZwClose(v14);
  return (unsigned int)v6;
}
