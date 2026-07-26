/*
 * XREFs of ndisOidPostEthMulticastList @ 0x1C0013830
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostOpenSetMulticastList @ 0x1C0013918 (ndisPostOpenSetMulticastList.c)
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C00139C0 (ndisIfGetRcvAddressFromMiniport.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 */

__int64 __fastcall ndisOidPostEthMulticastList(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  const void *v7; // rdx
  unsigned int v8; // esi

  v1 = a1[4];
  result = 0LL;
  v3 = *a1;
  v5 = a1[3];
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    if ( v3 )
    {
      v6 = *(_QWORD *)(v3 + 400);
      if ( (*(_BYTE *)(v1 + 90) & 1) != 0 )
        *((_DWORD *)a1 + 10) = 0;
      if ( *((_DWORD *)a1 + 10) )
      {
        v8 = *(_DWORD *)(v6 + 400);
        v7 = *(const void **)(v6 + 392);
      }
      else
      {
        v7 = *(const void **)(v1 + 40);
        v8 = *(_DWORD *)(v1 + 48) / 6u;
      }
      memmove(*(void **)(v6 + 376), v7, 6 * v8);
      *(_DWORD *)(v6 + 400) = 0;
      *(_DWORD *)(v6 + 384) = v8;
      ndisIfGetRcvAddressFromMiniport(v3);
      result = v3;
    }
    if ( v5 )
    {
      ndisPostOpenSetMulticastList(v5, v1, *((unsigned int *)a1 + 10));
      result = *(_QWORD *)(v5 + 16);
    }
    if ( !result )
      result = *(_QWORD *)(a1[2] + 32);
    if ( *(_UNKNOWN **)(v1 + 104) == &ndisIntReqRestore )
    {
      result = *(_QWORD *)(result + 400);
      *(_DWORD *)(result + 372) = 0;
    }
  }
  return result;
}
