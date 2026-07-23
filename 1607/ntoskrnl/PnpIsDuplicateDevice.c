/*
 * XREFs of PnpIsDuplicateDevice @ 0x14062D930
 * Callers:
 *     IopIsReportedAlready @ 0x1405556E8 (IopIsReportedAlready.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIsDuplicateDevice(_DWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  _DWORD *v8; // rsi
  unsigned int v9; // edx
  _DWORD *v10; // r15
  unsigned int v11; // r12d
  _DWORD *v12; // r13
  bool v13; // zf
  char v14; // dl
  LARGE_INTEGER v15; // rdi
  LARGE_INTEGER v16; // rbx
  unsigned int v17; // [rsp+30h] [rbp-30h]
  int v18; // [rsp+34h] [rbp-2Ch]
  __int64 v19; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h]
  LARGE_INTEGER v21; // [rsp+48h] [rbp-18h]
  LARGE_INTEGER v22; // [rsp+50h] [rbp-10h]
  _DWORD *v23; // [rsp+A0h] [rbp+40h]
  __int64 AddressSpace; // [rsp+B0h] [rbp+50h]
  __int64 v25; // [rsp+B8h] [rbp+58h]

  v25 = a4;
  AddressSpace = a3;
  v23 = a1;
  v4 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  result = 0LL;
  v20 = 0LL;
  v8 = a2;
  v18 = 0;
  if ( *v4 && *a2 )
  {
    while ( 1 )
    {
      v9 = 0;
      v10 = v4 + 5;
      v17 = 0;
      if ( v4[4] )
        break;
LABEL_15:
      if ( (_DWORD)result )
        return 1LL;
      v19 = v6;
      v23 = v8;
      v8 = v4;
      v4 = v23;
      result = v5;
      v5 = v6;
      v20 = result;
      v6 = result;
      LODWORD(result) = 1;
      v18 = 1;
    }
    while ( 1 )
    {
      if ( ((*(_BYTE *)v10 - 1) & 0xF9) == 0 && *(_BYTE *)v10 != 5 )
      {
        v11 = 0;
        v12 = v8 + 5;
        v13 = v8[4] == 0;
        if ( v8[4] )
        {
          do
          {
            v14 = *(_BYTE *)v12;
            if ( *(_BYTE *)v10 == *(_BYTE *)v12 )
            {
              v15 = *(LARGE_INTEGER *)(v10 + 1);
              v16 = *(LARGE_INTEGER *)(v12 + 1);
              LODWORD(AddressSpace) = *(_BYTE *)v10 == 1;
              LODWORD(v25) = v14 == 1;
              v22 = v15;
              v5 = v19;
              v21 = v16;
              if ( v22.QuadPart == v16.QuadPart && (_DWORD)AddressSpace == (_DWORD)v25 )
                break;
            }
            ++v11;
            v12 += 5;
          }
          while ( v11 < v8[4] );
          v4 = v23;
          v9 = v17;
          v13 = v11 == v8[4];
        }
        if ( v13 )
          return 0LL;
      }
      ++v9;
      v10 += 5;
      v17 = v9;
      if ( v9 >= v4[4] )
      {
        v6 = v20;
        LODWORD(result) = v18;
        goto LABEL_15;
      }
    }
  }
  return result;
}
