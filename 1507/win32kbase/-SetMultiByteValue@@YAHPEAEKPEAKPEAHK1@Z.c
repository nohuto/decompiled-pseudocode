/*
 * XREFs of ?SetMultiByteValue@@YAHPEAEKPEAKPEAHK1@Z @ 0x1C00C7838
 * Callers:
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C00C6FF8 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetMultiByteValue(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int *a3,
        int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v6; // eax
  unsigned int v7; // r11d
  __int64 v8; // r10
  int *v9; // rdi
  char v11; // bl
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 v14; // r10
  __int64 v15; // rdx
  unsigned __int8 v16; // al

  v6 = *a4;
  v7 = 0;
  v8 = *a3;
  v9 = a4;
  v11 = 0;
  if ( (unsigned int)*a4 <= 1 )
  {
    v12 = 1;
LABEL_5:
    v13 = 1;
    goto LABEL_9;
  }
  if ( v6 <= 127 )
  {
    v12 = 8;
    goto LABEL_5;
  }
  if ( v6 > 0x7FFF )
  {
    v11 = 2;
    v12 = 32;
    v13 = 4;
  }
  else
  {
    v12 = 16;
    v11 = 1;
    v13 = 2;
  }
LABEL_9:
  if ( v13 + (_DWORD)v8 + 1 < a2 )
  {
    a1[v8] = v11 + g_HIDCodes[a5];
    v14 = (unsigned int)(v8 + 1);
    v15 = v13;
    do
    {
      v16 = *(_BYTE *)v9;
      v9 = (int *)((char *)v9 + 1);
      a1[v14] = v16;
      v14 = (unsigned int)(v14 + 1);
      --v15;
    }
    while ( v15 );
    if ( a6 )
      *a6 = v12;
    *a3 = v14;
    return 1;
  }
  return v7;
}
