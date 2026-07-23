/*
 * XREFs of KiOp_Div @ 0x1401DB480
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x1401DB32C (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_Div(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // r9d
  unsigned int v4; // ecx
  unsigned int *v5; // rdx
  unsigned __int64 v6; // r8
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  __int64 v9; // rax
  char v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  _DWORD *v13; // [rsp+50h] [rbp+18h]

  v2 = *(_DWORD **)(a1 + 24);
  v13 = v2;
  if ( *v2 == -1073741676 )
  {
    v3 = KiOpRetrieveRegMemAddress(a1, (__int64 *)&v12, &v11, 0LL);
    if ( v3 >= 0 )
    {
      if ( *(_BYTE *)(a1 + 48) == 0xF6 )
      {
        v4 = 1;
      }
      else if ( (*(_DWORD *)(a1 + 40) & 0x40) != 0 )
      {
        v4 = 2;
      }
      else
      {
        v4 = (*(_BYTE *)(a1 + 56) & 8) != 0 ? 8 : 4;
      }
      if ( v11 == 1 )
      {
        v5 = (unsigned int *)v12;
        v6 = v12 + v4;
        if ( v6 > 0x7FFFFFFF0000LL || v6 < v12 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v5 = (unsigned int *)v12;
      }
      v7 = v4 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 2 )
            v9 = *v5;
          else
            v9 = *(_QWORD *)v5;
        }
        else
        {
          v9 = *(unsigned __int16 *)v5;
        }
      }
      else
      {
        v9 = *(unsigned __int8 *)v5;
      }
      if ( v9 )
        *v2 = -1073741675;
    }
  }
  return 0LL;
}
