/*
 * XREFs of ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x180072304
 * Callers:
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x180070A70 (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x18008FB70 (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCatW(unsigned __int16 *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // r10
  int v4; // r9d
  unsigned __int16 *v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  char *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r10
  signed __int64 v12; // r11
  __int16 v13; // ax

  v3 = a2 >> 1;
  v4 = 0;
  v6 = a1;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 >= 0 )
  {
    v7 = a2 >> 1;
    v4 = 0;
    if ( v3 )
    {
      do
      {
        if ( !*a1 )
          break;
        ++a1;
        --v7;
      }
      while ( v7 );
      if ( v7 )
      {
        v8 = v3 - v7;
        goto LABEL_11;
      }
    }
    v4 = -2147024809;
  }
  v8 = 0LL;
LABEL_11:
  if ( v4 >= 0 )
  {
    v9 = (char *)&v6[v8];
    v4 = 0;
    v10 = v3 - v8;
    if ( v3 == v8 )
      goto LABEL_18;
    v11 = 2147483646LL;
    v12 = a3 - v9;
    do
    {
      if ( !v11 )
        break;
      v13 = *(_WORD *)&v9[v12];
      if ( !v13 )
        break;
      *(_WORD *)v9 = v13;
      --v11;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    if ( !v10 )
    {
LABEL_18:
      v9 -= 2;
      v4 = -2147024774;
    }
    *(_WORD *)v9 = 0;
  }
  return (unsigned int)v4;
}
