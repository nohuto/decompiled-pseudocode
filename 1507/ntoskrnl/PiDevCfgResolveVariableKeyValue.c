/*
 * XREFs of PiDevCfgResolveVariableKeyValue @ 0x14068C788
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyValue(_QWORD *a1, void *a2, __int64 a3)
{
  SIZE_T v3; // r12
  __int64 v4; // r13
  int v7; // ebx
  NTSTATUS RegistryValue; // eax
  PVOID v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  const WCHAR *v12; // rdi
  int v13; // eax
  unsigned int v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  _DWORD *v17; // rdi
  unsigned int v18; // esi
  unsigned int v19; // edx
  _WORD *v20; // rax
  unsigned __int64 v21; // rcx
  PVOID PoolWithTag; // rax
  PVOID v23; // r15
  bool v24; // zf
  unsigned int v25; // eax
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  PVOID v28; // [rsp+28h] [rbp-8h] BYREF
  PVOID P; // [rsp+88h] [rbp+58h] BYREF

  LODWORD(v3) = 0;
  v4 = a3;
  v28 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v7 = PiDevCfgResolveVariableKeyHandle(a1, a2, &Handle);
  if ( v7 < 0 )
    goto LABEL_45;
  RegistryValue = IopGetRegistryValue(a2, L"ValueName", 0, &v28);
  v9 = v28;
  v7 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( *((_DWORD *)v28 + 1) != 1
      || (v10 = *((unsigned int *)v28 + 3), (unsigned int)v10 < 2)
      || (v11 = *((unsigned int *)v28 + 2), *(_WORD *)((char *)v28 + 2 * (v10 >> 1) + v11 - 2)) )
    {
      v7 = -1073741823;
    }
    else
    {
      v12 = (const WCHAR *)((char *)v28 + v11);
      if ( *(_WORD *)((char *)v28 + v11) != 36 )
        goto LABEL_13;
      v28 = 0LL;
      v13 = PiDevCfgResolveVariable((__int64)a1, (__int64)(v12 + 1), (UNICODE_STRING **)&v28);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v14 = *((_DWORD *)v28 + 8);
        if ( v14 && (v14 <= 2 || v14 == 7) )
          v12 = (const WCHAR *)*((_QWORD *)v28 + 5);
LABEL_13:
        v15 = IopGetRegistryValue(Handle, v12, 0, &P);
        v7 = v15;
        if ( v15 < 0 )
        {
          if ( v15 != -1073741772 )
            goto LABEL_18;
          v16 = IopGetRegistryValue(a2, L"DefaultValue", 0, &P);
          v7 = v16;
          if ( v16 < 0 )
          {
            if ( v16 == -1073741772 )
            {
              v7 = 0;
              v17 = 0LL;
              goto LABEL_20;
            }
LABEL_18:
            v17 = P;
            goto LABEL_40;
          }
        }
        v17 = P;
LABEL_20:
        if ( !v17 )
        {
          v18 = 0;
          v23 = 0LL;
LABEL_39:
          *(_DWORD *)(v4 + 32) = v18;
          *(_DWORD *)(v4 + 36) = v3;
          *(_QWORD *)(v4 + 40) = v23;
LABEL_40:
          if ( v17 )
            ExFreePoolWithTag(v17, 0);
          goto LABEL_43;
        }
        v18 = v17[1];
        if ( v18 )
        {
          if ( v18 <= 2 )
          {
            v25 = v17[3];
            if ( v25 < 2 )
              goto LABEL_36;
            v24 = *(_WORD *)((char *)v17 + 2 * ((unsigned __int64)v25 >> 1) + (unsigned int)v17[2] - 2) == 0;
          }
          else
          {
            if ( v18 != 4 )
            {
              if ( v18 != 7 )
                goto LABEL_30;
              v19 = v17[3];
              v20 = (_WORD *)((char *)v17 + (unsigned int)v17[2]);
              if ( v19 >= 4 )
              {
                v21 = (unsigned __int64)v19 >> 1;
                if ( !v20[v21 - 1] && !v20[v21 - 2] )
                  goto LABEL_30;
              }
              if ( v19 == 2 && !*v20 )
                goto LABEL_30;
LABEL_36:
              v7 = -1073741823;
              goto LABEL_40;
            }
            v24 = v17[3] == 4;
          }
          if ( !v24 )
            goto LABEL_36;
        }
LABEL_30:
        v3 = (unsigned int)v17[3];
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x63647050u);
        v23 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v7 = -1073741670;
          goto LABEL_40;
        }
        memmove(PoolWithTag, (char *)v17 + (unsigned int)v17[2], v3);
        v4 = a3;
        goto LABEL_39;
      }
      if ( v13 == -1073741772 )
        goto LABEL_13;
    }
  }
LABEL_43:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_45:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v7;
}
