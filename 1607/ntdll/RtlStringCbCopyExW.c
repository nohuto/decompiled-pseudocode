/*
 * XREFs of RtlStringCbCopyExW @ 0x18005C690
 * Callers:
 *     RtlFormatMessageEx @ 0x18005C720 (RtlFormatMessageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyExW(_WORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r8d
  __int64 v5; // r11
  __int64 v6; // r10
  _WORD *v7; // rdx
  __int16 v8; // ax

  v4 = 0;
  v5 = 0LL;
  v6 = 32LL;
  v7 = a1;
  do
  {
    if ( v6 == -2147483614 )
      break;
    v8 = *(_WORD *)((char *)v7 + (char *)L"%s" - (char *)a1);
    if ( !v8 )
      break;
    *v7 = v8;
    ++v5;
    ++v7;
    --v6;
  }
  while ( v6 );
  if ( !v6 )
  {
    --v7;
    v4 = -2147483643;
    --v5;
  }
  *v7 = 0;
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -2147483643 )
  {
    if ( a4 )
      *a4 = &a1[v5];
  }
  return v4;
}
