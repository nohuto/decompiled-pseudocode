/*
 * XREFs of MiInitializeSystemChannelOrdering @ 0x1407D1208
 * Callers:
 *     MiInitializeNuma @ 0x14054F834 (MiInitializeNuma.c)
 * Callees:
 *     MiPageToChannel @ 0x14001B5C0 (MiPageToChannel.c)
 */

void __fastcall MiInitializeSystemChannelOrdering(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r10
  unsigned __int64 *v4; // rcx
  unsigned int v5; // eax
  __int64 i; // rcx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // edx
  _BYTE *v11; // r9
  unsigned int v12; // edx
  _BYTE *v13; // r9
  unsigned int v14; // edx
  _BYTE *v15; // r9

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 48) + 2184LL * a2;
  v4 = (unsigned __int64 *)MxFreeDescriptor[a2];
  if ( v4[1] )
  {
    v5 = MiPageToChannel(*v4);
    *(_BYTE *)(v5 + v3 + 2169) = 2;
  }
  for ( i = qword_140326A10; *(_QWORD *)i != -1LL; i += 16LL )
  {
    if ( *(unsigned __int16 *)(i + 10) == v2 )
    {
      v7 = *(unsigned __int16 *)(i + 12);
      if ( *(_BYTE *)(i + 14) )
      {
        if ( *(_BYTE *)(v7 + v3 + 2169) != 2 )
          *(_BYTE *)(v7 + v3 + 2169) = 1;
      }
      else
      {
        *(_BYTE *)(v7 + v3 + 2169) = 2;
      }
    }
  }
  v8 = MmNumberOfChannels;
  v9 = 0LL;
  v10 = 0;
  if ( MmNumberOfChannels )
  {
    v11 = (_BYTE *)(v3 + 2169);
    do
    {
      if ( *v11 == 2 )
      {
        *(_BYTE *)(v9 + v3 + 2161) = v10;
        *(_BYTE *)(v9 + v3 + 2165) = v10;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v10;
      ++v11;
    }
    while ( v10 < v8 );
  }
  v12 = 0;
  if ( v8 )
  {
    v13 = (_BYTE *)(v3 + 2169);
    do
    {
      if ( *v13 == 1 )
      {
        *(_BYTE *)(v9 + v3 + 2161) = v12;
        *(_BYTE *)(v9 + v3 + 2165) = v12;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < v8 );
  }
  v14 = 0;
  if ( v8 )
  {
    v15 = (_BYTE *)(v3 + 2169);
    do
    {
      if ( !*v15 )
      {
        *(_BYTE *)(v9 + v3 + 2161) = v14;
        *(_BYTE *)(v9 + v3 + 2165) = v14;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v14;
      ++v15;
    }
    while ( v14 < v8 );
  }
}
