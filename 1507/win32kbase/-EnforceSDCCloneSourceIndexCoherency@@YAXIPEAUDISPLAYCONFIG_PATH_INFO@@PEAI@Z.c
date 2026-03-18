/*
 * XREFs of ?EnforceSDCCloneSourceIndexCoherency@@YAXIPEAUDISPLAYCONFIG_PATH_INFO@@PEAI@Z @ 0x1C00BA118
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C0086040 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

void __fastcall EnforceSDCCloneSourceIndexCoherency(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        unsigned int *a3)
{
  _DWORD *v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r10
  _DWORD *v7; // rcx
  __int64 v8; // rdx

  *a3 = -1;
  if ( a1 )
  {
    v4 = (_DWORD *)((char *)a2 + 68);
    v5 = a1;
    v6 = a1;
    do
    {
      if ( (*v4 & 1) != 0 && *(v4 - 14) == -1 )
      {
        v7 = (_DWORD *)((char *)a2 + 12);
        v8 = v5;
        do
        {
          if ( *(v7 - 1) == *(v4 - 15) && *(v7 - 3) == *(v4 - 17) && *(v7 - 2) == *(v4 - 16) && *v7 != -1 )
          {
            *v7 = -1;
            if ( *a3 == -1 )
              *a3 = *(v4 - 15);
          }
          v7 += 18;
          --v8;
        }
        while ( v8 );
      }
      v4 += 18;
      --v6;
    }
    while ( v6 );
  }
}
