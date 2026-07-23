/*
 * XREFs of PiSwValidateCreateData @ 0x1404878E8
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     SeValidSecurityDescriptor @ 0x140486C5C (SeValidSecurityDescriptor.c)
 *     PiSwIsValidPnpId @ 0x140487B6C (PiSwIsValidPnpId.c)
 *     PiSwValidatePropertyArray @ 0x140511A1C (PiSwValidatePropertyArray.c)
 *     PnpValidateMultiSz @ 0x14051B314 (PnpValidateMultiSz.c)
 */

__int64 __fastcall PiSwValidateCreateData(__int64 a1)
{
  unsigned int v2; // esi
  _WORD *v3; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  _WORD *v7; // r8
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _WORD *i; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  _WORD *j; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rdx
  ULONG v28; // ecx
  __int64 v29; // rcx
  unsigned __int64 v31; // rax

  v2 = -1073741811;
  if ( a1 )
  {
    v3 = *(_WORD **)(a1 + 8);
    if ( v3 )
    {
      if ( *v3 )
      {
        v4 = -1LL;
        v5 = -1LL;
        do
          ++v5;
        while ( v3[v5] );
        if ( v5 <= 0xC7 )
        {
          if ( *(_QWORD *)a1 )
          {
            if ( **(_WORD **)a1 )
            {
              if ( (unsigned __int8)PiSwIsValidPnpId(*(_QWORD *)a1, 0LL) )
              {
                v7 = *(_WORD **)(a1 + 16);
                if ( v7 )
                {
                  if ( *v7 )
                  {
                    if ( (unsigned __int8)PiSwIsValidPnpId(*(_QWORD *)(a1 + 16), v6) )
                    {
                      v11 = -1LL;
                      do
                        ++v11;
                      while ( *(_WORD *)(v8 + 2 * v11) );
                      v12 = -1LL;
                      do
                        ++v12;
                      while ( *(_WORD *)(v9 + 2 * v12) );
                      if ( v11 + v12 + 5 <= v10 && (*(_DWORD *)(a1 + 64) & 0xFFFFFFF0) == 0 )
                      {
                        v13 = *(_DWORD *)(a1 + 24);
                        if ( v13 <= 0x3FF && (v13 || !*(_QWORD *)(a1 + 32)) )
                        {
                          v14 = *(_QWORD *)(a1 + 32);
                          if ( v14 )
                          {
                            if ( (int)PnpValidateMultiSz(v14, *(unsigned int *)(a1 + 24)) < 0 )
                              return v2;
                            for ( i = *(_WORD **)(a1 + 32); *i; i = (_WORD *)(v18 + 2 * v17 + 2) )
                            {
                              LOBYTE(v15) = 1;
                              if ( !(unsigned __int8)PiSwIsValidPnpId(i, v15) )
                                return v2;
                              v17 = -1LL;
                              do
                                ++v17;
                              while ( *(_WORD *)(v18 + 2 * v17) );
                            }
                          }
                          else if ( v13 )
                          {
                            return v2;
                          }
                          v19 = *(_DWORD *)(a1 + 40);
                          if ( v19 <= 0x3FF && (v19 || !*(_QWORD *)(a1 + 48)) )
                          {
                            v20 = *(_QWORD *)(a1 + 48);
                            if ( v20 )
                            {
                              if ( (int)PnpValidateMultiSz(v20, *(unsigned int *)(a1 + 40)) < 0 )
                                return v2;
                              for ( j = *(_WORD **)(a1 + 48); *j; j = (_WORD *)(v24 + 2 * v23 + 2) )
                              {
                                LOBYTE(v21) = 1;
                                if ( !(unsigned __int8)PiSwIsValidPnpId(j, v21) )
                                  return v2;
                                v23 = -1LL;
                                do
                                  ++v23;
                                while ( *(_WORD *)(v24 + 2 * v23) );
                              }
                            }
                            else if ( v19 )
                            {
                              return v2;
                            }
                            v25 = *(_QWORD *)(a1 + 72);
                            if ( !v25 )
                              goto LABEL_44;
                            v31 = -1LL;
                            do
                              ++v31;
                            while ( *(_WORD *)(v25 + 2 * v31) );
                            if ( v31 <= 0x7FFE )
                            {
LABEL_44:
                              v26 = *(_QWORD *)(a1 + 80);
                              if ( !v26 )
                                goto LABEL_45;
                              do
                                ++v4;
                              while ( *(_WORD *)(v26 + 2 * v4) );
                              if ( v4 <= 0x7FFE )
                              {
LABEL_45:
                                v27 = *(void **)(a1 + 96);
                                if ( v27 || !*(_DWORD *)(a1 + 88) )
                                {
                                  v28 = *(_DWORD *)(a1 + 88);
                                  if ( (v28 || !v27)
                                    && (!v27 || SeValidSecurityDescriptor(v28, v27))
                                    && ((*(_DWORD *)(a1 + 64) & 8) == 0 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 48)) )
                                  {
                                    v29 = *(_QWORD *)(a1 + 112);
                                    if ( (v29 || !*(_DWORD *)(a1 + 104)) && (*(_DWORD *)(a1 + 104) || !v29) )
                                      return (unsigned int)PiSwValidatePropertyArray(v29);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
