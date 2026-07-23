/*
 * XREFs of RtlpGenerateInheritAcl @ 0x1404722A0
 * Callers:
 *     RtlpInheritAcl2 @ 0x140471430 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x14009DDA0 (RtlFindAceByType.c)
 *     RtlpGenerateInheritedAce @ 0x140472470 (RtlpGenerateInheritedAce.c)
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
  unsigned __int16 *v16; // rbx
  int v17; // esi
  char v18; // r12
  unsigned int v20; // r14d
  unsigned int v21; // edi
  int v22; // r15d
  __int64 result; // rax
  __int64 v24[11]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+8h] BYREF
  char v26; // [rsp+D8h] [rbp+10h]
  char v27; // [rsp+E0h] [rbp+18h]
  __int64 v28; // [rsp+E8h] [rbp+20h]

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v15 = a15;
  v16 = (unsigned __int16 *)(a1 + 8);
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  *a15 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v22 = a11;
    while ( 1 )
    {
      if ( *(_BYTE *)v16 == 17 )
      {
        if ( v22 == 3 )
        {
          if ( RtlFindAceByType(Acl, 0x11u, 0LL) )
          {
LABEL_13:
            if ( !v18 )
              break;
LABEL_21:
            result = 3221225507LL;
            *a13 = v20 + v17;
            return result;
          }
LABEL_5:
          result = RtlpGenerateInheritedAce(
                     v16,
                     a5,
                     a6,
                     a7,
                     a8,
                     a9,
                     a10,
                     (__int64)&v25,
                     (__int64)Acl,
                     (__int64)v24,
                     (__int64)&a15);
          if ( (_DWORD)result == -1073741789 )
          {
            v18 = 1;
          }
          else if ( (int)result < 0 )
          {
            return result;
          }
          if ( (_BYTE)a15 )
            *v15 = 1;
          v17 += v25;
          if ( (unsigned int)v25 > v20 || (v20 -= v25, v20 <= LODWORD(v24[0])) )
            v20 = v24[0];
        }
      }
      else if ( v22 != 3 )
      {
        goto LABEL_5;
      }
      ++v21;
      v16 = (unsigned __int16 *)((char *)v16 + v16[1]);
      if ( v21 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
  }
  if ( a12 )
    goto LABEL_21;
  *a13 = v17;
  return 0LL;
}
