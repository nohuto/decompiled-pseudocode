/*
 * XREFs of PpmUpdatePerfStates @ 0x14066DEC0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmCheckApplyPerfConstraints @ 0x140544D3C (PpmCheckApplyPerfConstraints.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 */

LONG __fastcall PpmUpdatePerfStates(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  LONG result; // eax
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  ULONG v7; // [rsp+50h] [rbp+8h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = 0;
  v5[1] = *(unsigned __int16 **)(a1 + 16);
  v6 = 0;
  v5[0] = (unsigned __int16 *)(a1 + 8);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v5) )
  {
    v3 = *(_QWORD *)(KeGetPrcb(v7) + 24176);
    if ( *(_DWORD *)(v3 + 304) != *(_DWORD *)a1 )
    {
      *(_DWORD *)(v3 + 304) = *(_DWORD *)a1;
      v2 = 1;
    }
  }
  if ( v2 )
    result = PpmCheckApplyPerfConstraints();
  else
    result = PpmReleaseLock(&PpmPerfPolicyLock);
  if ( (unsigned int)PpmPerfDomainCount > 1 )
  {
    LOWORD(v7) = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v7 |= 0x20u;
    return PpmReapplyPerfPolicy(&v7);
  }
  return result;
}
