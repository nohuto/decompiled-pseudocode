/*
 * XREFs of rimFinalizePointerFlags @ 0x1C00DD90C
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C00DBA60 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     rimPenButtonsPolicyApply @ 0x1C00DDC48 (rimPenButtonsPolicyApply.c)
 *     RIMCmGetButtonContact @ 0x1C00E12F8 (RIMCmGetButtonContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C00E130C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 */

__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r10d
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // r11
  int v8; // ecx

  v3 = a3[655];
  v5 = a3[601];
  if ( (a3[2] & 0x10) == 0 )
  {
    a3[601] = v5 | 0x4000;
    a3[8] |= 1u;
  }
  if ( (v5 & 4) != 0 && (v3 & 4) == 0 )
  {
    a3[601] |= 0x10000u;
  }
  else if ( (v5 & 4) == 0 && (v3 & 4) != 0 )
  {
    a3[601] |= 0x40000u;
  }
  else
  {
    a3[601] |= 0x20000u;
  }
  result = (unsigned int)a3[8];
  if ( (result & 8) != 0 && *(_QWORD *)(a1 + 608) == a2 )
    a3[601] |= 0x2000u;
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v8 = *(_DWORD *)(RIMCmGetButtonContact(v7) + 2404);
      if ( (v8 & 0x10) != 0 )
        a3[601] |= 0x10u;
      if ( (v8 & 0x20) != 0 )
        a3[601] |= 0x20u;
      if ( (v8 & 0x40) != 0 )
        a3[601] |= 0x40u;
    }
    result = (unsigned int)(*(_DWORD *)(v7 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      result = rimPenButtonsPolicyApply(v7, a3);
  }
  a3[601] &= ~0x400000u;
  return result;
}
