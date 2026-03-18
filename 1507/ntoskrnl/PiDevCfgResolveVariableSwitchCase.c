/*
 * XREFs of PiDevCfgResolveVariableSwitchCase @ 0x14068C9D8
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PiDevCfgCopyVariableData @ 0x1406857EC (PiDevCfgCopyVariableData.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgResolveVariableSwitchCase(__int64 a1, void *a2, __int64 a3)
{
  int RegistryValue; // ebx
  PVOID v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // eax
  wchar_t *Buffer; // rdx
  NTSTATUS v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  char *v16; // rdx
  NTSTATUS v17; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  PVOID P; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING *v22; // [rsp+28h] [rbp-38h] BYREF
  UNICODE_STRING *v23; // [rsp+30h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+38h] [rbp-28h] BYREF

  P = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Switch", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_23;
  v7 = P;
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_7;
  v8 = *((unsigned int *)P + 3);
  if ( (unsigned int)v8 < 2 )
    goto LABEL_7;
  v9 = *((unsigned int *)P + 2);
  if ( *(_WORD *)((char *)P + 2 * (v8 >> 1) + v9 - 2) )
    goto LABEL_7;
  v10 = PiDevCfgResolveVariable(a1, (__int64)P + v9, &v22);
  RegistryValue = v10;
  if ( v10 < 0 )
    goto LABEL_6;
  ExFreePoolWithTag(v7, 0);
  P = 0LL;
  v11 = *(_DWORD *)&v22[2].Length;
  if ( !v11 )
    goto LABEL_12;
  if ( v11 <= 2 )
  {
LABEL_29:
    Buffer = v22[2].Buffer;
LABEL_13:
    if ( !Buffer )
      goto LABEL_20;
    goto LABEL_14;
  }
  if ( v11 != 4 )
  {
    if ( v11 != 7 )
    {
LABEL_12:
      Buffer = 0LL;
      goto LABEL_13;
    }
    goto LABEL_29;
  }
  if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", *(unsigned int *)v22[2].Buffer) < 0 )
    goto LABEL_20;
  Buffer = pszDest;
LABEL_14:
  v13 = IopGetRegistryValue(a2, Buffer, 0, &P);
  RegistryValue = v13;
  if ( v13 == -1073741772 )
    goto LABEL_20;
  if ( v13 < 0 )
  {
LABEL_23:
    v7 = P;
    goto LABEL_24;
  }
  v7 = P;
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_7;
  v14 = *((unsigned int *)P + 3);
  if ( (unsigned int)v14 < 2 )
    goto LABEL_7;
  v15 = *((unsigned int *)P + 2);
  if ( *(_WORD *)((char *)P + 2 * (v14 >> 1) + v15 - 2) )
    goto LABEL_7;
  v16 = (char *)P + v15;
  if ( !((char *)P + v15) )
  {
LABEL_20:
    v17 = IopGetRegistryValue(a2, L"Default", 0, &P);
    RegistryValue = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1073741772 )
        RegistryValue = -1073741823;
      goto LABEL_23;
    }
    v7 = P;
    if ( *((_DWORD *)P + 1) == 1 )
    {
      v19 = *((unsigned int *)P + 3);
      if ( (unsigned int)v19 >= 2 )
      {
        v20 = *((unsigned int *)P + 2);
        if ( !*(_WORD *)((char *)P + 2 * (v19 >> 1) + v20 - 2) )
        {
          v16 = (char *)P + v20;
          goto LABEL_34;
        }
      }
    }
LABEL_7:
    RegistryValue = -1073741823;
    goto LABEL_24;
  }
LABEL_34:
  v10 = PiDevCfgResolveVariable(a1, (__int64)v16, &v23);
  RegistryValue = v10;
  if ( v10 < 0 )
  {
LABEL_6:
    if ( v10 != -1073741772 )
      goto LABEL_24;
    goto LABEL_7;
  }
  RegistryValue = PiDevCfgCopyVariableData(a3, (__int64)v23);
LABEL_24:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
