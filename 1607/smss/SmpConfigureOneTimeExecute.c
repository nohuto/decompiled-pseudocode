/*
 * XREFs of SmpConfigureOneTimeExecute @ 0x1400087B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureOneTimeExecute(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  _WORD *v10; // rdx
  int v11; // eax
  __int64 v12; // rdx

  v7 = (unsigned __int64)a4 >> 1;
  v8 = 0LL;
  if ( a3 && v7 <= 0x7FFFFFFF )
  {
    v9 = (unsigned __int64)a4 >> 1;
    v10 = a3;
    v11 = 0;
    if ( v7 )
    {
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v9;
      }
      while ( v9 );
      if ( v9 )
      {
        v8 = v7 - v9;
        goto LABEL_8;
      }
    }
    v8 = 0LL;
  }
  v11 = -1073741811;
LABEL_8:
  if ( v11 < 0 )
    v12 = 0LL;
  else
    v12 = 2 * v8;
  if ( v11 >= 0 && v12 )
    return SmpSaveRegistryValue(a6, a3, 0LL, 1LL, 0LL);
  else
    return 0LL;
}
