/*
 * XREFs of ExQueryFastCacheAppOrigin @ 0x1406EBA8C
 * Callers:
 *     sub_1406FF044 @ 0x1406FF044 (sub_1406FF044.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     towlower @ 0x140173AA0 (towlower.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     sub_140587464 @ 0x140587464 (sub_140587464.c)
 */

__int64 __fastcall ExQueryFastCacheAppOrigin(unsigned __int16 *a1, _DWORD *a2)
{
  _WORD *PoolWithTag; // rdi
  int v6; // ebx
  unsigned int v7; // esi
  wint_t v8; // cx
  unsigned int v9; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v10[4]; // [rsp+44h] [rbp-84h] BYREF
  _BYTE v11[4]; // [rsp+48h] [rbp-80h] BYREF
  int v12; // [rsp+4Ch] [rbp-7Ch]
  _BYTE v13[64]; // [rsp+50h] [rbp-78h] BYREF

  if ( !a1 || !*a1 || !a2 )
    return 3221225485LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a1 + 2LL, 0x20534C53u);
  if ( PoolWithTag )
  {
    v7 = 0;
    if ( (*a1 & 0xFFFE) != 0 )
    {
      do
      {
        v8 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v7);
        if ( !v8 )
          break;
        PoolWithTag[v7++] = towlower(v8);
      }
      while ( v7 < *a1 >> 1 );
    }
    PoolWithTag[v7] = 0;
    if ( qword_14032C150 )
    {
      v6 = qword_14032C150(32780LL, PoolWithTag, 2 * v7, v13, v10);
      if ( v6 >= 0 )
      {
        v6 = sub_140587464(0, (int)v13, (__int64)PoolWithTag, 0, 8, v11, &v9);
        if ( v6 >= 0 )
        {
          if ( v9 == 8 )
            *a2 = v12;
          else
            v6 = -1073700221;
        }
      }
    }
    else
    {
      v6 = -1073741822;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
