/*
 * XREFs of DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1406E12D8
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1404E5860 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     DrvDbFindDatabaseNode @ 0x1404B7D3C (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EFFC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x1406E118C (DrvDbGetCompositeMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x1406E2028 (DrvDbGetRegValueMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedPropertyKeys(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v6; // esi
  __int64 v9; // rdi
  int CompositeMappedPropertyKeys; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ecx
  const UNICODE_STRING *v15; // r15
  int v16; // ecx
  __int64 v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+28h] [rbp-38h]
  unsigned int v20; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v22; // [rsp+50h] [rbp-10h] BYREF
  const UNICODE_STRING *v23; // [rsp+58h] [rbp-8h] BYREF

  v6 = a5;
  v23 = 0LL;
  Handle = 0LL;
  v9 = a4;
  v22 = 0LL;
  v20 = 0;
  *a6 = 0;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(a1, (_OWORD **)off_1402F36F8, 5u, a4, a5, a6);
  if ( CompositeMappedPropertyKeys >= 0 )
  {
    v13 = *a6;
    if ( (_DWORD)v13 )
    {
      if ( v12 )
        v9 = v12 + 20 * v13;
      v6 = a5 - v13;
    }
    CompositeMappedPropertyKeys = DrvDbFindDatabaseNode(a1, a2, &v23);
    if ( CompositeMappedPropertyKeys >= 0 )
    {
      v15 = v23;
      if ( ((__int64)v23[3].Buffer & 0x10) != 0 )
      {
        LOBYTE(v19) = 0;
        LODWORD(v18) = 1;
        CompositeMappedPropertyKeys = DrvDbOpenObjectRegKey(
                                        (__int64 **)a1,
                                        *(const UNICODE_STRING **)(a1 + 32),
                                        1,
                                        a2,
                                        v18,
                                        v19,
                                        &v22,
                                        0LL);
        if ( CompositeMappedPropertyKeys < 0 )
          goto LABEL_20;
        CompositeMappedPropertyKeys = DrvDbGetRegValueMappedPropertyKeys(
                                        v16,
                                        (_DWORD)v22,
                                        (unsigned int)&off_14025D820,
                                        2,
                                        v9,
                                        v6,
                                        (__int64)&v20);
        if ( CompositeMappedPropertyKeys < 0 )
          goto LABEL_20;
        if ( v20 )
        {
          if ( v9 )
          {
            v14 = 5 * v20;
            v9 += 20LL * v20;
          }
          v6 -= v20;
        }
        if ( ((__int64)v15[3].Buffer & 4) != 0 )
        {
          CompositeMappedPropertyKeys = 0;
LABEL_20:
          if ( Handle )
            ZwClose(Handle);
          if ( v22 )
            ZwClose(v22);
          return (unsigned int)CompositeMappedPropertyKeys;
        }
      }
      if ( !a3 )
      {
        CompositeMappedPropertyKeys = DrvDbOpenDriverDatabaseRegKey((__int64 **)a1, a2, 1u, 0, (__int64)&Handle, 0LL);
        if ( CompositeMappedPropertyKeys < 0 )
          goto LABEL_20;
        LODWORD(a3) = (_DWORD)Handle;
      }
      CompositeMappedPropertyKeys = DrvDbGetRegValueMappedPropertyKeys(
                                      v14,
                                      a3,
                                      (unsigned int)&off_14025AEA0,
                                      7,
                                      v9,
                                      v6,
                                      (__int64)a6);
      goto LABEL_20;
    }
  }
  return (unsigned int)CompositeMappedPropertyKeys;
}
