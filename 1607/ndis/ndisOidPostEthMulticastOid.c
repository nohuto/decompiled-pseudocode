/*
 * XREFs of ndisOidPostEthMulticastOid @ 0x1C00464A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostOpenSetMulticastList @ 0x1C0013918 (ndisPostOpenSetMulticastList.c)
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C00139C0 (ndisIfGetRcvAddressFromMiniport.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 */

__int64 __fastcall ndisOidPostEthMulticastOid(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  int v7; // r8d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = *(_DWORD **)(a1 + 32);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v2[1] == 1 && (!v4 || !*(_DWORD *)(v4 + 464)) )
  {
    if ( !v5 || (result = *(_QWORD *)(v5 + 16), !*(_DWORD *)(result + 464)) )
    {
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 464) && *(_DWORD *)(a1 + 40) )
        {
          v6 = *(_QWORD *)(v4 + 400);
          memmove(*(void **)(v6 + 376), *(const void **)(v6 + 392), (unsigned int)(6 * *(_DWORD *)(v6 + 400)));
          *(_DWORD *)(v6 + 384) = *(_DWORD *)(v6 + 400);
        }
        result = ndisIfGetRcvAddressFromMiniport(v4);
      }
      if ( v5 )
      {
        result = *(_QWORD *)(v5 + 16);
        if ( !*(_DWORD *)(result + 464) )
        {
          v7 = *(_DWORD *)(a1 + 40);
          if ( v7 != -1073741637 )
          {
            result = ndisPostOpenSetMulticastList(v5, (__int64)v2, v7);
            if ( v2[8] == 16843011 )
            {
              result = (unsigned int)v2[36];
              v2[8] = result;
              v2[36] = 0;
            }
          }
        }
      }
    }
  }
  return result;
}
