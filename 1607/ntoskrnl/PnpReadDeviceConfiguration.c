/*
 * XREFs of PnpReadDeviceConfiguration @ 0x140570E5C
 * Callers:
 *     PnpGetDeviceResourcesFromRegistry @ 0x14050F164 (PnpGetDeviceResourcesFromRegistry.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpReadDeviceConfiguration(void *a1, int a2, void **a3, _DWORD *a4)
{
  int v6; // edx
  int v7; // edx
  const WCHAR *v8; // rdx
  NTSTATUS RegistryValue; // ebx
  unsigned int *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  PVOID PoolWithTag; // rax
  unsigned int *v15; // r11
  unsigned int v16; // r8d
  int *v17; // rax
  int v18; // r10d
  unsigned int v19; // edx
  int *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return 3221225712LL;
      v8 = L"BootConfig";
    }
    else
    {
      v8 = L"ForcedConfig";
    }
  }
  else
  {
    v8 = L"AllocConfig";
  }
  RegistryValue = IopGetRegistryValue(a1, v8, 0, &P);
  if ( RegistryValue >= 0 )
  {
    v11 = (unsigned int *)P;
    v12 = *((_DWORD *)P + 1);
    if ( v12 == 8 && (v13 = *((_DWORD *)P + 3)) != 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x75737050u);
      *a3 = PoolWithTag;
      if ( PoolWithTag )
      {
        *a4 = v11[3];
        memmove(*a3, (char *)v11 + v11[2], v11[3]);
        v15 = (unsigned int *)*a3;
        v16 = 0;
        v17 = (int *)((char *)*a3 + 4);
        if ( *(_DWORD *)*a3 )
        {
          v18 = PnpDefaultInterfaceType;
          do
          {
            if ( *v17 == -1 )
            {
              v17[1] = 0;
              *v17 = v18;
            }
            v19 = v17[3];
            v20 = v17 + 4;
            if ( v19 )
            {
              v21 = v19;
              do
              {
                v22 = 0LL;
                if ( *(_BYTE *)v20 == 5 )
                  v22 = (unsigned int)v20[1];
                v20 = (int *)((char *)v20 + v22 + 20);
                --v21;
              }
              while ( v21 );
            }
            ++v16;
            v17 = v20;
          }
          while ( v16 < *v15 );
        }
      }
      else
      {
        RegistryValue = -1073741670;
      }
    }
    else if ( v12 != 8 )
    {
      RegistryValue = -1073741823;
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)RegistryValue;
}
