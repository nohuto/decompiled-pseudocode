/*
 * XREFs of PspRegisterResource @ 0x140149038
 * Callers:
 *     PsInitializeQuotaSystem @ 0x1407B6714 (PsInitializeQuotaSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRegisterResource(int a1, char a2, int a3)
{
  __int64 result; // rax

  PspResourceFlags[8 * a1] = a2;
  dword_1403AA764[2 * a1] = a3;
  if ( (a2 & 2) != 0 )
  {
    result = PspDefaultResourceLimits[a1] & 0xFFFFFF80 | 0x64;
    PspDefaultResourceLimits[a1] = result;
  }
  else
  {
    PspDefaultResourceLimits[a1] = -1;
  }
  return result;
}
