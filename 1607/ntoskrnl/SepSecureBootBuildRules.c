/*
 * XREFs of SepSecureBootBuildRules @ 0x1407D1520
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x1407B9CA8 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     <none>
 */

__int64 SepSecureBootBuildRules()
{
  unsigned __int16 v0; // dx
  unsigned int v1; // eax
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al

  v0 = *((_WORD *)qword_140341C48 + 18);
  if ( v0 )
  {
    v1 = v0;
    qword_1403581C0 = (__int64)qword_140341C48 + *((unsigned int *)qword_140341C48 + 10) + 60;
    v2 = dword_1403581B0;
    v3 = qword_1403581C0 + 4;
    v4 = v1;
    do
    {
      v5 = *(_BYTE *)(v3 + 3);
      v3 += 12LL;
      v2 |= 1 << (v5 & 0xF);
      --v4;
    }
    while ( v4 );
    dword_1403581B0 = v2;
  }
  if ( *((_WORD *)qword_140341C48 + 19) )
    qword_1403581B8 = (__int64)qword_140341C48 + *((unsigned int *)qword_140341C48 + 11) + 60;
  return 0LL;
}
