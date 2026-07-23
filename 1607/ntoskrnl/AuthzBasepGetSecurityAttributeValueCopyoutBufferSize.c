/*
 * XREFs of AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x14000E5F0
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E0F0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v8; // r8
  __int64 *v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  __int64 *v12; // rdx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  __int64 *v15; // rdx
  unsigned __int64 v16; // r10

  v3 = *a2;
  if ( *(_WORD *)(a1 + 48) != 2 )
  {
    switch ( *(_WORD *)(a1 + 48) )
    {
      case 1:
      case 6:
        goto LABEL_2;
      case 3:
        v8 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v8 < v3 )
          return (unsigned int)-1073741675;
        if ( !is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          return (unsigned int)-1073741675;
        v5 = v8 + 16LL * *(unsigned int *)(a1 + 60);
        if ( v5 < v8 )
          return (unsigned int)-1073741675;
        v9 = *(__int64 **)(a1 + 72);
        if ( v9 == (__int64 *)(a1 + 72) )
          goto LABEL_5;
        while ( 1 )
        {
          v10 = v5 + *((unsigned __int16 *)v9 + 20);
          if ( v10 < v5 )
            break;
          v9 = (__int64 *)*v9;
          v5 = v10;
          if ( v9 == (__int64 *)(a1 + 72) )
          {
            *a2 = v10;
            return 0LL;
          }
        }
        return (unsigned int)-1073741675;
      case 4:
        v11 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v11 < v3 )
          return (unsigned int)-1073741675;
        if ( !is_mul_ok(0x18uLL, *(unsigned int *)(a1 + 60)) )
          return (unsigned int)-1073741675;
        v5 = v11 + 24LL * *(unsigned int *)(a1 + 60);
        if ( v5 < v11 )
          return (unsigned int)-1073741675;
        v12 = *(__int64 **)(a1 + 72);
        if ( v12 == (__int64 *)(a1 + 72) )
          goto LABEL_5;
        while ( 1 )
        {
          v13 = v5 + *((unsigned __int16 *)v12 + 24);
          if ( v13 < v5 )
            return (unsigned int)-1073741675;
          v12 = (__int64 *)*v12;
          v5 = v13;
          if ( v12 == (__int64 *)(a1 + 72) )
            goto LABEL_5;
        }
      case 5:
      case 0x10:
        v14 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v14 < v3 )
          return (unsigned int)-1073741675;
        if ( !is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          return (unsigned int)-1073741675;
        v5 = v14 + 16LL * *(unsigned int *)(a1 + 60);
        if ( v5 < v14 )
          return (unsigned int)-1073741675;
        v15 = *(__int64 **)(a1 + 72);
        if ( v15 == (__int64 *)(a1 + 72) )
          goto LABEL_5;
        break;
      default:
        return (unsigned int)-1073741811;
    }
    while ( 1 )
    {
      v16 = v5 + *((unsigned int *)v15 + 12);
      if ( v16 < v5 )
        return (unsigned int)-1073741675;
      v15 = (__int64 *)*v15;
      v5 = v16;
      if ( v15 == (__int64 *)(a1 + 72) )
        goto LABEL_5;
    }
  }
LABEL_2:
  v4 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v4 < v3 )
    return (unsigned int)-1073741675;
  if ( !is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) )
    return (unsigned int)-1073741675;
  v5 = v4 + 8LL * *(unsigned int *)(a1 + 60);
  if ( v5 < v4 )
    return (unsigned int)-1073741675;
LABEL_5:
  v6 = 0;
  *a2 = v5;
  return v6;
}
