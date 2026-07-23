/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x140654E48
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140654A4C (SepSecureBootCorrectBcd.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootGetPolicyDefaultValue @ 0x140654CEC (SepSecureBootGetPolicyDefaultValue.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140654F9C (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, void *a2, BCD_FLAGS a3)
{
  _WORD *v3; // rsi
  void *v6; // rdi
  int PolicyDefaultValue; // ebx
  ULONG v8; // edx
  char *p_Buffer; // r15
  NTSTATUS ElementDataWithFlags; // eax
  __int64 v11; // rdx
  PVOID PoolWithTag; // rax
  BCD_FLAGS v13; // r8d
  BCD_FLAGS v14; // r8d
  ULONG BufferSize; // [rsp+70h] [rbp+8h] BYREF
  char Buffer; // [rsp+80h] [rbp+18h] BYREF
  PVOID v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_WORD *)(qword_1403351D8 + *(unsigned int *)(a1 + 8));
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
    BufferSize = 8;
    p_Buffer = &Buffer;
    ElementDataWithFlags = BcdGetElementDataWithFlags(a2, v8, a3, &Buffer, &BufferSize);
    PolicyDefaultValue = ElementDataWithFlags;
    if ( ElementDataWithFlags != -1073741789 && ElementDataWithFlags != -2147483643 )
      goto LABEL_19;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferSize, 0x62536553u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    p_Buffer = (char *)PoolWithTag;
    PolicyDefaultValue = BcdGetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v13, PoolWithTag, &BufferSize);
    if ( PolicyDefaultValue >= 0 )
    {
LABEL_19:
      if ( PolicyDefaultValue < 0
        || (PolicyDefaultValue = SepSecureBootValidateBcdDataAgainstBcdRule(a1, p_Buffer, BufferSize),
            PolicyDefaultValue < 0) )
      {
        PolicyDefaultValue = SepSecureBootGetPolicyDefaultValue(v3, v11, &v18, &BufferSize);
        if ( PolicyDefaultValue >= 0 )
          PolicyDefaultValue = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v14, v18, BufferSize);
      }
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x62536553u);
  }
  return (unsigned int)PolicyDefaultValue;
}
