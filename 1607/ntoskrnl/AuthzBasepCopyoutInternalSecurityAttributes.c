/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405190E4
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x140518FD0 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x14010C0B0 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x1406CA460 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  int inserted; // ebx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned int *v10; // rax
  __int64 v11; // r15
  _QWORD *v12; // rsi
  wchar_t *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF

  inserted = 0;
  if ( !a2 || !a3 )
  {
    inserted = -1073741811;
    goto LABEL_18;
  }
  v7 = (unsigned __int64)a2 + a3;
  if ( v7 < (unsigned __int64)a2 )
  {
    inserted = -1073741811;
    goto LABEL_19;
  }
  memset(a2, 0, a3);
  if ( (unsigned __int64)(a2 + 12) > v7 )
    goto LABEL_6;
  *a2 = 0;
  *((_QWORD *)a2 + 2) = a2 + 2;
  *((_QWORD *)a2 + 1) = a2 + 2;
  a2[6] = 0;
  *((_QWORD *)a2 + 5) = a2 + 8;
  *((_QWORD *)a2 + 4) = a2 + 8;
  v8 = 112LL * *a1;
  if ( v8 <= 0xFFFFFFFF )
  {
    v9 = (unsigned __int64)a2 + (unsigned int)v8 + 48;
    if ( v9 > v7 )
    {
LABEL_6:
      inserted = -2147483643;
      goto LABEL_19;
    }
    v10 = a1 + 2;
    v11 = *((_QWORD *)a1 + 1);
    if ( (unsigned int *)v11 != v10 )
    {
      v12 = a2 + 38;
      do
      {
        inserted = AuthzBasepProbeAndInsertTailList(a2 + 2, v12 - 13);
        if ( inserted < 0 )
          goto LABEL_19;
        ++*a2;
        *((_WORD *)v12 - 28) = *(_WORD *)(v11 + 48);
        v13 = (wchar_t *)((v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
        *((_DWORD *)v12 - 13) = *(_DWORD *)(v11 + 52);
        *(v12 - 6) = 0LL;
        *((_DWORD *)v12 - 10) = 0;
        *(v12 - 3) = v12 - 4;
        *(v12 - 4) = v12 - 4;
        *((_DWORD *)v12 - 4) = 0;
        *v12 = v12 - 1;
        *(v12 - 1) = v12 - 1;
        v14 = *(unsigned __int16 *)(v11 + 32);
        v20 = v14;
        v15 = (unsigned int)v14;
        if ( (unsigned __int64)v13 + v14 > v7 )
          goto LABEL_6;
        DestinationString.MaximumLength = v14;
        DestinationString.Length = 0;
        DestinationString.Buffer = v13;
        RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 32));
        v16 = (unsigned __int64)v13 + v15;
        *(UNICODE_STRING *)(v12 - 9) = DestinationString;
        inserted = AuthzBasepCopyoutInternalSecurityAttributeValues(
                     v11,
                     (__int64)(v12 - 13),
                     v16,
                     (int)v7 - (int)v16,
                     &v20);
        if ( inserted < 0 )
          goto LABEL_19;
        v12 += 14;
        v11 = *(_QWORD *)v11;
        v9 = v20 + v16;
      }
      while ( (unsigned int *)v11 != a1 + 2 );
    }
LABEL_18:
    if ( inserted >= 0 )
      return (unsigned int)inserted;
    goto LABEL_19;
  }
  inserted = -1073741675;
LABEL_19:
  if ( a3 >= 0x30 )
    memset(a2, 0, 0x30uLL);
  return (unsigned int)inserted;
}
