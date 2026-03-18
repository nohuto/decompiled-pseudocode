/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x1406D6CC0
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1406D68C4 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BcdDeleteElement @ 0x14056F1C8 (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootGetPolicyDefaultValue @ 0x1406D6B64 (SepSecureBootGetPolicyDefaultValue.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1406D6E14 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v3; // rsi
  void *v6; // rdi
  int PolicyDefaultValue; // ebx
  unsigned int v8; // edx
  char *v9; // r15
  int ElementDataWithFlags; // eax
  __int64 v11; // rdx
  PVOID PoolWithTag; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+8h] BYREF
  char v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_WORD *)(qword_1403861E0 + *(unsigned int *)(a1 + 8));
  v6 = 0LL;
  PolicyDefaultValue = 0;
  if ( (*(_BYTE *)v3 & 0x1F) == 8 )
  {
    if ( !v3[1] )
    {
      PolicyDefaultValue = BcdDeleteElement(a2, *(_DWORD *)(a1 + 4));
      if ( PolicyDefaultValue == -1073741275 )
        return 0;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 4);
    LODWORD(NumberOfBytes) = 8;
    v9 = &v17;
    ElementDataWithFlags = BcdGetElementDataWithFlags(a2, v8, a3, (__int64)&v17, &NumberOfBytes);
    PolicyDefaultValue = ElementDataWithFlags;
    if ( ElementDataWithFlags != -1073741789 && ElementDataWithFlags != -2147483643 )
      goto LABEL_19;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x62536553u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v9 = (char *)PoolWithTag;
    PolicyDefaultValue = BcdGetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v13, (__int64)PoolWithTag, &NumberOfBytes);
    if ( PolicyDefaultValue >= 0 )
    {
LABEL_19:
      if ( PolicyDefaultValue < 0
        || (PolicyDefaultValue = SepSecureBootValidateBcdDataAgainstBcdRule(a1, v9, (unsigned int)NumberOfBytes),
            PolicyDefaultValue < 0) )
      {
        PolicyDefaultValue = SepSecureBootGetPolicyDefaultValue(v3, v11, &v18, &NumberOfBytes);
        if ( PolicyDefaultValue >= 0 )
          PolicyDefaultValue = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v14, v18, NumberOfBytes);
      }
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x62536553u);
  }
  return (unsigned int)PolicyDefaultValue;
}
