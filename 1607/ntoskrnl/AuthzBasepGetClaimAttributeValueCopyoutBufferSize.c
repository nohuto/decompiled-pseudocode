/*
 * XREFs of AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x1406CA230
 * Callers:
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x1406CA3C8 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetClaimAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  unsigned __int64 v4; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 ***v10; // r11
  __int64 **v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  __int64 ***v15; // r11
  __int64 **j; // rdx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  __int64 ***v20; // r11
  __int64 **i; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  __int64 v24; // rax

  v2 = *(unsigned __int16 *)(a1 + 48);
  v3 = 0;
  v4 = *a2;
  if ( !*(_WORD *)(a1 + 48) )
    return (unsigned int)-1073741811;
  if ( *(unsigned __int16 *)(a1 + 48) > 2u )
  {
    switch ( v2 )
    {
      case 3:
        v18 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v18 >= v4 )
        {
          v19 = 8LL * *(unsigned int *)(a1 + 60);
          if ( is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v19 + v18;
            if ( v19 + v18 >= v18 )
            {
              v20 = (__int64 ***)(a1 + 72);
              for ( i = *v20; i != (__int64 **)v20; i = (__int64 **)*i )
              {
                v22 = v9 + *((unsigned __int16 *)i + 20);
                if ( v22 < v9 )
                  return (unsigned int)-1073741675;
                v9 = v22 + 2;
                if ( v22 + 2 < v22 )
                  return (unsigned int)-1073741675;
              }
              goto LABEL_38;
            }
          }
        }
        return (unsigned int)-1073741675;
      case 4:
        v13 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v13 >= v4 )
        {
          v14 = 16LL * *(unsigned int *)(a1 + 60);
          if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v14 + v13;
            if ( v14 + v13 >= v13 )
            {
              v15 = (__int64 ***)(a1 + 72);
              for ( j = *v15; j != (__int64 **)v15; j = (__int64 **)*j )
              {
                v17 = v9 + *((unsigned __int16 *)j + 24);
                if ( v17 < v9 )
                  return (unsigned int)-1073741675;
                v9 = v17 + 2;
                if ( v17 + 2 < v17 )
                  return (unsigned int)-1073741675;
              }
              goto LABEL_38;
            }
          }
        }
        return (unsigned int)-1073741675;
      case 5:
        goto LABEL_8;
    }
    if ( v2 != 6 )
    {
      if ( v2 == 16 )
      {
LABEL_8:
        v7 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v7 >= v4 )
        {
          v8 = 16LL * *(unsigned int *)(a1 + 60);
          if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          {
            v9 = v8 + v7;
            if ( v8 + v7 >= v7 )
            {
              v10 = (__int64 ***)(a1 + 72);
              v11 = *v10;
              while ( v11 != (__int64 **)v10 )
              {
                v12 = v9 + *((unsigned int *)v11 + 12);
                if ( v12 < v9 )
                  return (unsigned int)-1073741675;
                v11 = (__int64 **)*v11;
                v9 = v12;
              }
              goto LABEL_38;
            }
          }
        }
        return (unsigned int)-1073741675;
      }
      return (unsigned int)-1073741811;
    }
  }
  v23 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v23 >= v4 )
  {
    v24 = 8LL * *(unsigned int *)(a1 + 60);
    if ( is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) )
    {
      v9 = v24 + v23;
      if ( v24 + v23 >= v23 )
      {
LABEL_38:
        *a2 = v9;
        return v3;
      }
    }
  }
  return (unsigned int)-1073741675;
}
