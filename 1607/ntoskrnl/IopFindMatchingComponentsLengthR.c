/*
 * XREFs of IopFindMatchingComponentsLengthR @ 0x140624450
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopFindMatchingComponentsLengthR(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // rbx
  unsigned __int64 v5; // r11
  _WORD *v6; // rdx
  _WORD *v7; // r8
  _WORD *v8; // rcx

  v2 = *((_QWORD *)a1 + 1);
  v3 = *a1;
  v4 = *a2;
  v5 = *((_QWORD *)a2 + 1);
  v6 = 0LL;
  v7 = (_WORD *)(v2 + v3);
  if ( v2 + v3 < v2 )
    return 0LL;
  v8 = (_WORD *)(v4 + v5);
  do
  {
    if ( (unsigned __int64)v8 < v5 || *v7 != *v8 )
      break;
    if ( *v7 == 92 )
      v6 = v7;
    --v7;
    --v8;
  }
  while ( (unsigned __int64)v7 >= v2 );
  if ( v6 )
    return (__int64)(v2 + v3 - (_QWORD)v6) >> 1;
  else
    return 0LL;
}
