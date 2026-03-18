/*
 * XREFs of sfac_LoadCriticalSfntMetrics @ 0x1C001EADC
 * Callers:
 *     fs_NewSfnt @ 0x1C001D7E0 (fs_NewSfnt.c)
 * Callees:
 *     sfac_ReadNumLongVertMetrics @ 0x1C001DA9C (sfac_ReadNumLongVertMetrics.c)
 *     InvokeReleaseSfntFrag @ 0x1C001EDA8 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C001EDBC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_LoadCriticalSfntMetrics(__int64 a1, _WORD *a2, int *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int16 v10; // ax
  _WORD *v11; // rsi
  __int16 v12; // ax
  __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _WORD *v17; // rcx
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // cx
  int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-10h] BYREF

  result = sfac_GetDataPtr(a1, 0, -1, 0, 1, (__int64)&v21);
  if ( !(_DWORD)result )
  {
    result = sfac_GetDataPtr(a1, 0, -1, 1, 1, (__int64)v22);
    if ( !(_DWORD)result )
    {
      v9 = v21;
      if ( _byteswap_ulong(*(_DWORD *)(v21 + 12)) == 1594834165 )
      {
        v10 = __ROR2__(*(_WORD *)(v21 + 18), 8);
        *a2 = v10;
        if ( (unsigned __int16)(v10 - 16) > 0x3FF0u )
        {
          return 5134LL;
        }
        else
        {
          v11 = (_WORD *)v22[0];
          *a3 = ((unsigned __int8)__ROR2__(*(_WORD *)(v9 + 16), 8) >> 3) & 1;
          v12 = __ROR2__(v11[17], 8);
          *(_WORD *)(a1 + 200) = v12;
          if ( v12 )
          {
            *(_WORD *)(a1 + 16) = __ROR2__(*(_WORD *)(v9 + 50), 8);
            result = sfac_GetDataPtr(a1, 0, 78, 14, 0, (__int64)v22);
            if ( !(_DWORD)result )
            {
              v13 = v22[0];
              if ( v22[0] )
              {
                *(_WORD *)(a1 + 224) = __ROR2__(*(_WORD *)(v22[0] + 68LL), 8);
                v14 = *(_WORD *)(v13 + 70);
                v15 = *(unsigned int *)(a1 + 12);
                *(_WORD *)(a1 + 226) = __ROR2__(v14, 8);
                InvokeReleaseSfntFrag(v15);
              }
              else
              {
                *(_WORD *)(a1 + 224) = __ROR2__(v11[2], 8);
                *(_WORD *)(a1 + 226) = __ROR2__(v11[3], 8);
              }
              v16 = *(unsigned int *)(a1 + 12);
              *(_WORD *)(a1 + 228) = __ROR2__(v11[3], 8);
              InvokeReleaseSfntFrag(v16);
              InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
              result = sfac_GetDataPtr(a1, 0, -1, 3, 1, (__int64)v22);
              if ( !(_DWORD)result )
              {
                v17 = (_WORD *)v22[0];
                *(_DWORD *)a4 = _byteswap_ulong(*(_DWORD *)v22[0]);
                *(_WORD *)(a4 + 4) = __ROR2__(v17[2], 8);
                *(_WORD *)(a4 + 6) = __ROR2__(v17[3], 8);
                *(_WORD *)(a4 + 8) = __ROR2__(v17[4], 8);
                *(_WORD *)(a4 + 10) = __ROR2__(v17[5], 8);
                *(_WORD *)(a4 + 12) = __ROR2__(v17[6], 8);
                *(_WORD *)(a4 + 14) = __ROR2__(v17[7], 8);
                *(_WORD *)(a4 + 16) = __ROR2__(v17[8], 8);
                *(_WORD *)(a4 + 18) = __ROR2__(v17[9], 8);
                *(_WORD *)(a4 + 20) = __ROR2__(v17[10], 8);
                *(_WORD *)(a4 + 22) = __ROR2__(v17[11], 8);
                *(_WORD *)(a4 + 24) = __ROR2__(v17[12], 8);
                *(_WORD *)(a4 + 26) = __ROR2__(v17[13], 8);
                *(_WORD *)(a4 + 28) = __ROR2__(v17[14], 8);
                *(_WORD *)(a4 + 30) = __ROR2__(v17[15], 8);
                InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
                v18 = *(_WORD *)(a4 + 6);
                v19 = *(_WORD *)(a4 + 10);
                v20 = v18;
                if ( v18 <= v19 )
                  v20 = v19;
                if ( v20 > 65526 )
                {
                  return 5131LL;
                }
                else
                {
                  if ( v18 > 0x7FF6u )
                    *(_WORD *)(a4 + 6) = 32758;
                  if ( v19 > 0x7FF6u )
                    *(_WORD *)(a4 + 10) = 32758;
                  if ( *(_WORD *)(a4 + 16) > 0x7FFFu )
                    *(_WORD *)(a4 + 16) = 0x7FFF;
                  return sfac_ReadNumLongVertMetrics(a1, (_WORD *)(a1 + 202), (_DWORD *)(a1 + 204));
                }
              }
            }
          }
          else
          {
            return 5135LL;
          }
        }
      }
      else
      {
        return 5125LL;
      }
    }
  }
  return result;
}
