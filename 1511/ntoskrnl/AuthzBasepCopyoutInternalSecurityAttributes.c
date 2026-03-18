/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x1403C2188
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1403C2104 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140004C40 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v6; // r12
  _DWORD *v7; // r14
  unsigned __int64 v8; // rcx
  int v9; // ebx
  unsigned __int64 v10; // r15
  unsigned int *v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  unsigned __int64 v16; // r15
  unsigned __int16 v17; // r8
  unsigned __int64 v18; // r15
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h]

  if ( !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_13;
  }
  v6 = (unsigned __int64)a2 + a3;
  if ( v6 < (unsigned __int64)a2 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  memset(a2, 0, a3);
  if ( (unsigned __int64)(a2 + 12) <= v6 )
  {
    *a2 = 0;
    v7 = a2 + 2;
    *((_QWORD *)a2 + 2) = a2 + 2;
    *((_QWORD *)a2 + 1) = a2 + 2;
    a2[6] = 0;
    *((_QWORD *)a2 + 5) = a2 + 8;
    *((_QWORD *)a2 + 4) = a2 + 8;
    v8 = 112LL * *a1;
    if ( v8 > 0xFFFFFFFF )
    {
      v9 = -1073741675;
      goto LABEL_17;
    }
    v9 = 0;
    v10 = (unsigned __int64)a2 + (unsigned int)v8 + 48;
    if ( v10 <= v6 )
    {
      v11 = a1 + 2;
      v12 = *((_QWORD *)a1 + 1);
      if ( (unsigned int *)v12 != v11 )
      {
        v13 = a2 + 38;
        do
        {
          v14 = (_QWORD *)*((_QWORD *)a2 + 2);
          v15 = v13 - 13;
          *(v13 - 13) = v7;
          *(v13 - 12) = v14;
          if ( (_DWORD *)*v14 != v7 )
            __fastfail(3u);
          *v14 = v15;
          *((_QWORD *)a2 + 2) = v15;
          ++*a2;
          *((_WORD *)v13 - 28) = *(_WORD *)(v12 + 48);
          v16 = (v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          *((_DWORD *)v13 - 13) = *(_DWORD *)(v12 + 52);
          *(v13 - 6) = 0LL;
          *((_DWORD *)v13 - 10) = 0;
          *(v13 - 3) = v13 - 4;
          *(v13 - 4) = v13 - 4;
          *((_DWORD *)v13 - 4) = 0;
          *v13 = v13 - 1;
          *(v13 - 1) = v13 - 1;
          v17 = *(_WORD *)(v12 + 32);
          v21 = v17;
          v22 = v17;
          if ( v16 + v17 > v6 )
            goto LABEL_19;
          *((_WORD *)v13 - 35) = v17;
          *((_WORD *)v13 - 36) = 0;
          *(v13 - 8) = v16;
          RtlCopyUnicodeString((PUNICODE_STRING)(v13 - 9), (PCUNICODE_STRING)(v12 + 32));
          v18 = v22 + v16;
          v9 = AuthzBasepCopyoutInternalSecurityAttributeValues(v12, (__int64)(v13 - 13), v18, (int)v6 - (int)v18, &v21);
          if ( v9 < 0 )
            goto LABEL_17;
          v13 += 14;
          v10 = v21 + v18;
          v12 = *(_QWORD *)v12;
        }
        while ( (unsigned int *)v12 != a1 + 2 );
      }
LABEL_13:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_17;
    }
  }
LABEL_19:
  v9 = -2147483643;
LABEL_17:
  if ( a3 >= 0x30 )
    memset(a2, 0, 0x30uLL);
  return (unsigned int)v9;
}
