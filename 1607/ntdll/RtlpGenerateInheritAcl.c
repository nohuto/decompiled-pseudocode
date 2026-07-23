/*
 * XREFs of RtlpGenerateInheritAcl @ 0x18003F9C0
 * Callers:
 *     RtlpInheritAcl2 @ 0x180040628 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlpGenerateInheritedAce @ 0x18003FB94 (RtlpGenerateInheritedAce.c)
 *     RtlFindAceByType @ 0x18007A430 (RtlFindAceByType.c)
 */

__int64 __fastcall RtlpGenerateInheritAcl(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING a8,
        __int64 a9,
        int a10,
        int a11,
        char a12,
        _DWORD *a13,
        PACL Acl,
        _BYTE *a15)
{
  _BYTE *v15; // r13
  char v17; // r14
  int v18; // edi
  unsigned int v19; // ebx
  unsigned int v20; // r12d
  unsigned __int16 *v21; // rsi
  __int64 result; // rax
  __int64 v23[9]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+8h] BYREF
  char v25; // [rsp+C8h] [rbp+10h]
  char v26; // [rsp+D0h] [rbp+18h]
  __int64 v27; // [rsp+D8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v15 = a15;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = (unsigned __int16 *)(a1 + 8);
  *a15 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)v21 == 17 )
      {
        if ( a11 == 3 )
        {
          if ( RtlFindAceByType(Acl, 0x11u, 0LL) )
          {
LABEL_13:
            if ( !v17 )
              break;
LABEL_20:
            result = 3221225507LL;
            *a13 = v19 + v18;
            return result;
          }
LABEL_4:
          result = RtlpGenerateInheritedAce(
                     v21,
                     a5,
                     a6,
                     a7,
                     a8,
                     a9,
                     a10,
                     (__int64)v23,
                     (__int64)Acl,
                     (__int64)&v24,
                     (__int64)&a15);
          if ( (_DWORD)result == -1073741789 )
          {
            v17 = 1;
            result = 0LL;
          }
          if ( (int)result < 0 )
            return result;
          if ( (_BYTE)a15 )
            *v15 = 1;
          v18 += LODWORD(v23[0]);
          if ( LODWORD(v23[0]) > v19 || (v19 -= LODWORD(v23[0]), v19 <= (unsigned int)v24) )
            v19 = v24;
        }
      }
      else if ( a11 != 3 )
      {
        goto LABEL_4;
      }
      ++v20;
      v21 = (unsigned __int16 *)((char *)v21 + v21[1]);
      if ( v20 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
  }
  if ( a12 )
    goto LABEL_20;
  *a13 = v18;
  return 0LL;
}
