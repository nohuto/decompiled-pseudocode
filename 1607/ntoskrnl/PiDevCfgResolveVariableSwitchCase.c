/*
 * XREFs of PiDevCfgResolveVariableSwitchCase @ 0x140640E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PnpValidateRegistryString @ 0x1401CF3F4 (PnpValidateRegistryString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiDevCfgCopyVariableData @ 0x140637304 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgResolveVariableSwitchCase(__int64 a1, void *a2, __int64 a3)
{
  int RegistryValue; // ebx
  unsigned int *v7; // rdi
  int v8; // eax
  unsigned int v9; // eax
  wchar_t *Buffer; // rdx
  NTSTATUS v11; // eax
  const WCHAR *v12; // rdx
  NTSTATUS v13; // eax
  PVOID P; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING *v16; // [rsp+28h] [rbp-38h] BYREF
  UNICODE_STRING *v17; // [rsp+30h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+38h] [rbp-28h] BYREF

  P = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Switch", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_20;
  v7 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
  {
LABEL_3:
    RegistryValue = -1073741823;
    goto LABEL_21;
  }
  v8 = PiDevCfgResolveVariable(a1, (const WCHAR *)((char *)v7 + v7[2]), &v16);
  RegistryValue = v8;
  if ( v8 < 0 )
    goto LABEL_5;
  ExFreePoolWithTag(v7, 0);
  P = 0LL;
  v9 = *(_DWORD *)&v16[2].Length;
  if ( !v9 )
    goto LABEL_11;
  if ( v9 <= 2 )
  {
LABEL_26:
    Buffer = v16[2].Buffer;
LABEL_12:
    if ( !Buffer )
      goto LABEL_17;
    goto LABEL_13;
  }
  if ( v9 != 4 )
  {
    if ( v9 != 7 )
    {
LABEL_11:
      Buffer = 0LL;
      goto LABEL_12;
    }
    goto LABEL_26;
  }
  if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", *(unsigned int *)v16[2].Buffer) < 0 )
    goto LABEL_17;
  Buffer = pszDest;
LABEL_13:
  v11 = IopGetRegistryValue(a2, Buffer, 0, &P);
  RegistryValue = v11;
  if ( v11 != -1073741772 )
  {
    if ( v11 >= 0 )
    {
      v7 = (unsigned int *)P;
      if ( !PnpValidateRegistryString(P) )
        goto LABEL_3;
      v12 = (const WCHAR *)((char *)v7 + v7[2]);
      if ( v12 )
        goto LABEL_29;
      goto LABEL_17;
    }
LABEL_20:
    v7 = (unsigned int *)P;
    goto LABEL_21;
  }
LABEL_17:
  v13 = IopGetRegistryValue(a2, L"Default", 0, &P);
  RegistryValue = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -1073741772 )
      RegistryValue = -1073741823;
    goto LABEL_20;
  }
  v7 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_3;
  v12 = (const WCHAR *)((char *)v7 + v7[2]);
LABEL_29:
  v8 = PiDevCfgResolveVariable(a1, v12, &v17);
  RegistryValue = v8;
  if ( v8 >= 0 )
  {
    RegistryValue = PiDevCfgCopyVariableData(a3, (__int64)v17);
    goto LABEL_21;
  }
LABEL_5:
  if ( v8 == -1073741772 )
    goto LABEL_3;
LABEL_21:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
