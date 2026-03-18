/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140004C40
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1403C2188 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rbp
  int v7; // r14d
  unsigned __int64 v9; // r9
  __int64 v10; // rax
  __int64 *v11; // rsi
  char *v12; // r9
  unsigned __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // rcx
  const UNICODE_STRING *v18; // rdx
  __int64 v19; // r8
  char *v20; // r15
  UNICODE_STRING *v21; // rcx
  size_t v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax

  v5 = 0;
  v6 = a3 + a4;
  v7 = a3;
  if ( v6 < a3 )
    return (unsigned int)-2147483643;
  v9 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  *a5 = 0;
  v10 = (unsigned int)(*(_DWORD *)(a1 + 60) << 6);
  if ( v9 + v10 > v6 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    v11 = *(__int64 **)(a1 + 72);
    v12 = (char *)(v10 + v9);
    if ( v11 != (__int64 *)(a1 + 72) )
    {
      v13 = ((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 48;
      do
      {
        *(_DWORD *)(v13 - 16) = 0;
        v14 = *(unsigned __int16 *)(a1 + 48);
        if ( !*(_WORD *)(a1 + 48) )
          return (unsigned int)-1073741811;
        if ( *(unsigned __int16 *)(a1 + 48) > 2u )
        {
          switch ( v14 )
          {
            case 3:
              v18 = (const UNICODE_STRING *)(v11 + 5);
              v19 = *((unsigned __int16 *)v11 + 20);
              v20 = &v12[v19];
              if ( (unsigned __int64)&v12[v19] > v6 )
                return (unsigned int)-2147483643;
              v21 = (UNICODE_STRING *)(v13 - 8);
              *(_WORD *)(v13 - 6) = v19;
              *(_WORD *)(v13 - 8) = 0;
              *(_QWORD *)v13 = v12;
LABEL_15:
              RtlCopyUnicodeString(v21, v18);
              goto LABEL_16;
            case 4:
              v18 = (const UNICODE_STRING *)(v11 + 6);
              v23 = *((unsigned __int16 *)v11 + 24);
              v20 = &v12[v23];
              if ( (unsigned __int64)&v12[v23] > v6 )
                return (unsigned int)-2147483643;
              v24 = v11[5];
              *(_WORD *)(v13 + 2) = v23;
              v21 = (UNICODE_STRING *)v13;
              *(_QWORD *)(v13 - 8) = v24;
              *(_WORD *)v13 = 0;
              *(_QWORD *)(v13 + 8) = v12;
              goto LABEL_15;
            case 5:
              goto LABEL_22;
          }
          if ( v14 != 6 )
          {
            if ( v14 != 16 )
              return (unsigned int)-1073741811;
LABEL_22:
            v22 = *((unsigned int *)v11 + 12);
            v20 = &v12[v22];
            if ( (unsigned __int64)&v12[v22] > v6 )
              return (unsigned int)-2147483643;
            *(_DWORD *)v13 = v22;
            *(_QWORD *)(v13 - 8) = v12;
            memmove(v12, (const void *)v11[5], v22);
LABEL_16:
            v12 = v20;
            goto LABEL_8;
          }
        }
        *(_QWORD *)(v13 - 8) = v11[5];
LABEL_8:
        v15 = v13 - 48;
        v16 = *(unsigned __int64 **)(a2 + 80);
        *(_QWORD *)(v13 - 48) = a2 + 72;
        *(_QWORD *)(v13 - 40) = v16;
        if ( *v16 != a2 + 72 )
          __fastfail(3u);
        *v16 = v15;
        v13 += 64LL;
        *(_QWORD *)(a2 + 80) = v15;
        ++*(_DWORD *)(a2 + 60);
        v11 = (__int64 *)*v11;
      }
      while ( v11 != (__int64 *)(a1 + 72) );
    }
    *a5 = (_DWORD)v12 - v7;
  }
  return v5;
}
