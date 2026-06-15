/*
 * XREFs of ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18002EEA4
 * Callers:
 *     ?IsAPOClsidRegistered@@YAHU_GUID@@@Z @ 0x18002EDEC (-IsAPOClsidRegistered@@YAHU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyExW(
        char *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // r8
  char *v8; // rdx
  __int16 v9; // ax
  unsigned __int16 *v10; // rcx

  v5 = 0;
  v6 = 75LL;
  v7 = 0LL;
  v8 = a1;
  do
  {
    if ( v6 == -2147483571 )
      break;
    v9 = *(_WORD *)&v8[(char *)L"AudioEngine\\AudioProcessingObjects\\" - a1];
    if ( !v9 )
      break;
    *(_WORD *)v8 = v9;
    ++v7;
    v8 += 2;
    --v6;
  }
  while ( v6 );
  if ( !v6 )
  {
    v8 -= 2;
    v5 = -2147024774;
    --v7;
  }
  *(_WORD *)v8 = 0;
  v10 = (unsigned __int16 *)&a1[2 * v7];
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -2147024774 )
  {
    if ( a4 )
      *a4 = v10;
    if ( a5 )
      *a5 = 75 - v7;
  }
  return v5;
}
