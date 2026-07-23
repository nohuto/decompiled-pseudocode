/*
 * XREFs of WheapGetPolicyValue @ 0x1406BAE88
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x140231760 (WheapWmiExecutePolicyManagementMethod.c)
 *     WheapGetAllPolicyValues @ 0x1406BAE48 (WheapGetAllPolicyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapGetPolicyValue(unsigned int a1, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  bool v9; // zf

  if ( a1 >= 7 )
    return 3221225485LL;
  v3 = 0;
  if ( !a1 )
  {
    v9 = WheapPolicyDisableOffline == 0;
    goto LABEL_17;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    v9 = WheapPolicyMemPersistOffline == 0;
    goto LABEL_17;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = WheapPolicyMemPfaDisable == 0;
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v3 = WheapPolicyMemPfaPageCount;
    goto LABEL_18;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v3 = WheapPolicyMemPfaThreshold;
LABEL_18:
    *a2 = v3;
    return 0LL;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v9 = WheaRegPolicyIgnoreDummyWrite == 0;
LABEL_17:
      LOBYTE(v3) = !v9;
      goto LABEL_18;
    }
  }
  else
  {
    *a2 = WheapPolicyMemPfaTimeout / 0x989680uLL;
  }
  return 0LL;
}
