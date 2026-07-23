/*
 * XREFs of CmpFindMatchingDescriptorCell @ 0x1403FC348
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x140210CB0 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpSecConvKey @ 0x1403FC40C (CmpSecConvKey.c)
 */

char __fastcall CmpFindMatchingDescriptorCell(__int64 a1, const void *a2, int a3, _DWORD *a4, _QWORD *a5)
{
  size_t v9; // rsi
  int v10; // ebp
  _QWORD **v11; // r14
  _QWORD *i; // rdi
  _DWORD *v13; // rbx

  v9 = (unsigned int)RtlLengthSecurityDescriptorStrict();
  v10 = CmpSecConvKey(v9, a2);
  v11 = (_QWORD **)(16LL * (v10 & 0x3F) + a1 + 3064);
  for ( i = *v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
      return 0;
    v13 = i - 1;
    if ( *((_DWORD *)i - 1) == v10 && a3 == *v13 >> 31 && (_DWORD)v9 == v13[6] && !memcmp(a2, v13 + 8, v9) )
      break;
  }
  *a4 = *v13;
  if ( a5 )
    *a5 = v13;
  return 1;
}
