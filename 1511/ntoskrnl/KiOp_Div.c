/*
 * XREFs of KiOp_Div @ 0x1401418F8
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x1401419E4 (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_Div(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // r9d
  unsigned int v4; // ecx
  unsigned int *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  __int64 v8; // rax
  ULONG64 v9; // r8
  char v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v12; // [rsp+48h] [rbp+10h] BYREF
  _DWORD *v13; // [rsp+50h] [rbp+18h]

  v2 = *(_DWORD **)(a1 + 24);
  v13 = v2;
  if ( *v2 == -1073741676 )
  {
    v3 = KiOpRetrieveRegMemAddress(a1, &v12, &v11, 0LL);
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
        v5 = v12;
        v9 = (ULONG64)v12 + v4;
        if ( v9 > MmUserProbeAddress || v9 < (unsigned __int64)v12 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      else
      {
        v5 = v12;
      }
      v6 = v4 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 2 )
            v8 = *v5;
          else
            v8 = *(_QWORD *)v5;
        }
        else
        {
          v8 = *(unsigned __int16 *)v5;
        }
      }
      else
      {
        v8 = *(unsigned __int8 *)v5;
      }
      if ( v8 )
        *v2 = -1073741675;
    }
  }
  return 0LL;
}
