/*
 * XREFs of ReadMultiSzRegistryValueAndCompareId @ 0x1C000D71C
 * Callers:
 *     GetRegistrySettings @ 0x1C000D914 (GetRegistrySettings.c)
 * Callees:
 *     CompareId @ 0x1C000D58C (CompareId.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

char __fastcall ReadMultiSzRegistryValueAndCompareId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int *a5,
        unsigned int *a6,
        __int64 a7,
        unsigned int a8,
        unsigned int *a9)
{
  char v12; // al
  char v13; // bl
  __int64 RegistryBuffer; // rax
  void *v15; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  char *v19; // rdi
  int i; // ecx
  int v21; // eax
  unsigned int v22; // edx
  char *v23; // r8
  char *v24; // r9
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // edx

  v12 = StorPortRegistryRead(a1, a2, 1LL);
  v13 = 0;
  if ( v12 )
  {
LABEL_13:
    if ( v12 == 1 && *a6 >= 2 && *a5 >= 2 )
    {
      v19 = (char *)*a4;
      if ( *(_BYTE *)*a4 || v19[1] )
      {
        for ( i = 0; i < 2; ++i )
        {
          v21 = *a5 - i;
          v19[v21 - 1] = 0;
        }
        v22 = *a6;
        v23 = v19;
        v24 = v19;
        if ( v19 && v22 >= 4 )
        {
          v25 = 0;
          if ( v22 >> 1 != 1 )
          {
            do
            {
              if ( !*(_WORD *)v23 && !*((_WORD *)v23 + 1) )
                break;
              ++v25;
              *v24 = *v23;
              v23 += 2;
              ++v24;
            }
            while ( v25 < (v22 >> 1) - 1 );
          }
          if ( v22 > v25 )
          {
            v26 = v22 - v25;
            if ( (v26 & 3) != 0 )
            {
              if ( v26 )
                memset(v24, 0, v26);
            }
            else
            {
              v27 = v26 >> 2;
              if ( v27 )
                memset(v24, 0, 4LL * v27);
            }
          }
        }
        return CompareId(a7, a8, v19, *a6, a9);
      }
    }
    return v13;
  }
  if ( *a6 > *a5 )
  {
    StorPortFreeRegistryBuffer(a1, *a4);
    *a5 = *a6;
    RegistryBuffer = StorPortAllocateRegistryBuffer(a1, a6);
    *a4 = RegistryBuffer;
    v15 = (void *)RegistryBuffer;
    if ( !RegistryBuffer )
      return 0;
    v17 = *a5;
    if ( *a6 < *a5 )
    {
      StorPortFreeRegistryBuffer(a1, v15);
      *a4 = 0LL;
      return 0;
    }
    if ( (v17 & 3) != 0 )
    {
      if ( v17 )
        memset(v15, 0, *a5);
    }
    else
    {
      v18 = v17 >> 2;
      if ( v18 )
        memset(v15, 0, 4LL * v18);
    }
    v12 = StorPortRegistryRead(a1, a2, 1LL);
    goto LABEL_13;
  }
  return v13;
}
