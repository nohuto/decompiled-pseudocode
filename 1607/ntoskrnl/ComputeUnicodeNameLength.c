/*
 * XREFs of ComputeUnicodeNameLength @ 0x1404AC840
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x1404AC45C (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x1404AC5B4 (RtlFindUnicodePrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeUnicodeNameLength(unsigned __int16 *a1)
{
  __int64 result; // rax
  int v2; // edx
  __int64 v3; // rdx
  _WORD *v4; // rcx

  result = 1LL;
  v2 = *a1 >> 1;
  if ( v2 )
  {
    v3 = (unsigned int)(v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = (_WORD *)*((_QWORD *)a1 + 1);
      do
      {
        if ( *v4 == 92 )
          result = (unsigned int)(result + 1);
        ++v4;
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
