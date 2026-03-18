/*
 * XREFs of PiDevCfgQueryResolveValue @ 0x1401C0680
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140513FDC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140515CB0 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     PnpValidateStringData @ 0x14012C378 (PnpValidateStringData.c)
 *     PiDevCfgParseVariableName @ 0x14012C8F0 (PiDevCfgParseVariableName.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x1405156FC (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgQueryResolveValue(__int64 a1, void *a2, __int64 a3, _QWORD *a4)
{
  int RegistryValue; // edi
  _WORD *v7; // rcx
  const void **v8; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING v13; // [rsp+28h] [rbp-30h] BYREF

  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2);
  if ( RegistryValue >= 0 )
  {
    *((_WORD *)P + 3) = 0;
    if ( *(_QWORD *)(a1 + 16)
      && (unsigned int)(MEMORY[4] - 1) <= 1
      && PnpValidateStringData(MEMORY[8], MEMORY[0xC])
      && PiDevCfgParseVariableName(v7, &v13, &P) )
    {
      RegistryValue = PiDevCfgResolveVariable(a1, v13.Buffer, &P);
      if ( RegistryValue >= 0 )
      {
        v8 = (const void **)P;
        PoolWithTag = ExAllocatePoolWithTag(
                        PagedPool,
                        (unsigned int)(MEMORY[0x10] + 26 + *((_DWORD *)P + 9)),
                        0x63647050u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = MEMORY[0];
          PoolWithTag[4] = MEMORY[0x10];
          PoolWithTag[1] = *((_DWORD *)v8 + 8);
          PoolWithTag[3] = *((_DWORD *)v8 + 9);
          PoolWithTag[2] = MEMORY[0x10] + 22;
          memmove(PoolWithTag + 5, (const void *)0x14, MEMORY[0x10]);
          *(_WORD *)(2 * ((unsigned __int64)MEMORY[0x10] >> 1) + 0x14) = 0;
          memmove((char *)v10 + (unsigned int)v10[2], v8[5], *((unsigned int *)v8 + 9));
          *a4 = v10;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      *a4 = 0LL;
    }
  }
  return (unsigned int)RegistryValue;
}
