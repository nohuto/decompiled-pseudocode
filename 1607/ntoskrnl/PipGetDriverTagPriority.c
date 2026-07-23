/*
 * XREFs of PipGetDriverTagPriority @ 0x14079B090
 * Callers:
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x140539704 (PnpRegSzToString.c)
 *     IopOpenRegistryKeyEx @ 0x140550B8C (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PipGetDriverTagPriority(HANDLE KeyHandle)
{
  unsigned __int16 i; // di
  _WORD *v3; // rsi
  unsigned int v4; // edx
  int v5; // r14d
  NTSTATUS RegistryValue; // ebx
  NTSTATUS v8; // ebx
  unsigned __int64 v9; // r10
  unsigned int *v10; // rdx
  unsigned int v11; // r9d
  _DWORD *v12; // rdx
  UNICODE_STRING v13; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+40h] BYREF

  *(_DWORD *)&v13.Length = 8650882;
  v13.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GroupOrderList";
  i = -1;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v13, 0x20019u) < 0 )
    return i;
  if ( IopGetRegistryValue(KeyHandle, L"Group", 0, &P) < 0 )
  {
LABEL_8:
    ZwClose(Handle);
    return i;
  }
  v3 = P;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    v4 = *((_DWORD *)P + 3);
    if ( v4 )
    {
      PnpRegSzToString((char *)P + *((unsigned int *)P + 2), v4, &P);
      v13.Length = (unsigned __int16)P;
      v13.MaximumLength = v3[6];
      v13.Buffer = (_WORD *)((char *)v3 + *((unsigned int *)v3 + 2));
    }
  }
  v5 = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Tag", 80, &P);
  if ( RegistryValue < 0
    || (*((_DWORD *)P + 1) != 4 || *((_DWORD *)P + 3) != 4
      ? (RegistryValue = -1073741823)
      : (v5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2))),
        ExFreePoolWithTag(P, 0),
        RegistryValue < 0) )
  {
    ExFreePoolWithTag(v3, 0);
    goto LABEL_8;
  }
  v8 = IopGetRegistryValue(Handle, v13.Buffer, 80, &P);
  ExFreePoolWithTag(v3, 0);
  ZwClose(Handle);
  if ( v8 >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 3 )
    {
      v9 = *((unsigned int *)P + 3);
      if ( (unsigned int)v9 >= 4 )
      {
        v10 = (unsigned int *)((char *)P + *((unsigned int *)P + 2));
        v11 = *v10;
        if ( 4 * (unsigned __int64)(*v10 + 1) <= v9 )
        {
          v12 = v10 + 1;
          for ( i = 1; i <= v11; ++v12 )
          {
            if ( v5 == *v12 )
              break;
            ++i;
          }
        }
      }
    }
    ExFreePoolWithTag(P, 0);
  }
  return i;
}
