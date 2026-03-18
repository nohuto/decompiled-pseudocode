/*
 * XREFs of SepSecureBootBuildRules @ 0x1407FBA74
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x1407DD14C (SeSecureBootRegisterPolicy.c)
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

  v0 = *((_WORD *)qword_14036CCD8 + 18);
  if ( v0 )
  {
    v1 = v0;
    qword_1403861D8 = (__int64)qword_14036CCD8 + *((unsigned int *)qword_14036CCD8 + 10) + 60;
    v2 = dword_1403861C4;
    v3 = qword_1403861D8 + 4;
    v4 = v1;
    do
    {
      v5 = *(_BYTE *)(v3 + 3);
      v3 += 12LL;
      v2 |= 1 << (v5 & 0xF);
      --v4;
    }
    while ( v4 );
    dword_1403861C4 = v2;
  }
  if ( *((_WORD *)qword_14036CCD8 + 19) )
    qword_1403861D0 = (__int64)qword_14036CCD8 + *((unsigned int *)qword_14036CCD8 + 11) + 60;
  return 0LL;
}
