/*
 * XREFs of WheapSetPolicyValue @ 0x1406BAF0C
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x140231760 (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapSetPolicyValue(unsigned int a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  int *v4; // r9
  int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  bool v11; // zf
  int v12; // eax

  if ( a1 < 7 )
  {
    v2 = *a2;
    v3 = a1;
    if ( *a2 >= dword_1406EA610[6 * a1] && v2 <= dword_1406EA614[6 * a1] )
    {
      _mm_lfence();
      v4 = (&off_1406EA608)[3 * a1];
      if ( *v4 == -1 )
      {
        v5 = 0;
        if ( a1 )
        {
          v6 = a1 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                v9 = v8 - 1;
                if ( v9 )
                {
                  v10 = v9 - 1;
                  if ( v10 )
                  {
                    if ( v10 != 1 )
                      goto LABEL_23;
                    v11 = v2 == WheaRegPolicyIgnoreDummyWrite;
                  }
                  else
                  {
                    v11 = v2 == (unsigned int)(WheapPolicyMemPfaTimeout / 0x989680uLL);
                  }
                }
                else
                {
                  v11 = v2 == WheapPolicyMemPfaThreshold;
                }
              }
              else
              {
                v11 = v2 == WheapPolicyMemPfaPageCount;
              }
LABEL_20:
              if ( v11 )
                return 0LL;
LABEL_23:
              *v4 = v2;
              WheaRegPolicyTableChanged[v3] = 1;
              return 0LL;
            }
            v12 = (unsigned __int8)WheapPolicyMemPfaDisable;
          }
          else
          {
            v12 = (unsigned __int8)WheapPolicyMemPersistOffline;
          }
        }
        else
        {
          v12 = (unsigned __int8)WheapPolicyDisableOffline;
        }
        LOBYTE(v5) = v2 != 0;
        v11 = v5 == v12;
        goto LABEL_20;
      }
      v11 = *v4 == v2;
      goto LABEL_20;
    }
  }
  return 3221225485LL;
}
