/*
 * XREFs of PiDevCfgQueryResolveValue @ 0x1401FBF38
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140683C20 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14068CC44 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgQueryResolveValue(__int64 a1, void *a2, __int64 a3, _QWORD *a4)
{
  int RegistryValue; // esi
  const WCHAR *i; // rdi
  unsigned __int64 v8; // rcx
  WCHAR v9; // ax
  const void **v10; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rdi
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-30h] BYREF

  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2);
  if ( RegistryValue >= 0 )
  {
    *((_WORD *)P + 3) = 0;
    if ( !*(_QWORD *)(a1 + 16)
      || (unsigned int)(MEMORY[4] - 1) > 1
      || MEMORY[0xC] < 2u
      || *(_WORD *)(MEMORY[8] + 2 * ((unsigned __int64)MEMORY[0xC] >> 1) - 2) )
    {
      goto LABEL_20;
    }
    i = 0LL;
    if ( *(_WORD *)MEMORY[8] == 36 )
    {
      for ( i = (const WCHAR *)(MEMORY[8] + 2LL); ; ++i )
      {
        v9 = *i;
        if ( !*i )
          break;
        if ( v9 <= 0x3Fu )
        {
          v8 = 0x8000280200000000uLL;
          if ( _bittest64((const __int64 *)&v8, v9) )
            continue;
        }
        if ( *i == 36 )
          ++i;
        break;
      }
    }
    RtlInitUnicodeString(&DestinationString, i);
    if ( i )
    {
      RegistryValue = PiDevCfgResolveVariable(a1, DestinationString.Buffer, &P);
      if ( RegistryValue >= 0 )
      {
        v10 = (const void **)P;
        PoolWithTag = ExAllocatePoolWithTag(
                        PagedPool,
                        (unsigned int)(MEMORY[0x10] + 26 + *((_DWORD *)P + 9)),
                        0x63647050u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = MEMORY[0];
          PoolWithTag[4] = MEMORY[0x10];
          PoolWithTag[1] = *((_DWORD *)v10 + 8);
          PoolWithTag[3] = *((_DWORD *)v10 + 9);
          PoolWithTag[2] = MEMORY[0x10] + 22;
          memmove(PoolWithTag + 5, (const void *)0x14, MEMORY[0x10]);
          *(_WORD *)(2 * ((unsigned __int64)MEMORY[0x10] >> 1) + 0x14) = 0;
          memmove((char *)v12 + (unsigned int)v12[2], v10[5], *((unsigned int *)v10 + 9));
          *a4 = v12;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
LABEL_20:
      *a4 = 0LL;
    }
  }
  return (unsigned int)RegistryValue;
}
