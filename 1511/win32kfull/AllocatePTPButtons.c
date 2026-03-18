/*
 * XREFs of AllocatePTPButtons @ 0x1C01D0754
 * Callers:
 *     GetDeviceButtons @ 0x1C01CC804 (GetDeviceButtons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocatePTPButtons(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  int v7; // r12d
  int v8; // ebp
  int v9; // edi
  int v10; // esi
  __int64 v11; // rax
  __int16 *v12; // rcx
  __int64 v13; // rdx
  __int16 v14; // ax
  __int16 v15; // ax

  v6 = -1073741668;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a1 + 308), 2019849045LL);
  *(_QWORD *)(a1 + 328) = v11;
  if ( v11 )
  {
    if ( !a3 )
      goto LABEL_19;
    v12 = (__int16 *)(a2 + 56);
    v13 = a3;
    do
    {
      v14 = *(v12 - 28);
      if ( v14 == 13 && *v12 == 71 )
        v10 = 1;
      if ( v14 == 9 )
      {
        v15 = *v12;
        if ( *v12 == 1 )
          v7 = 1;
        if ( v15 == 2 )
          v8 = 1;
        if ( v15 == 3 )
          v9 = 1;
      }
      v12 += 36;
      --v13;
    }
    while ( v13 );
    if ( !v10 )
      goto LABEL_19;
    if ( v7 )
    {
      if ( !v8 )
      {
        if ( v9 )
        {
LABEL_19:
          UserLogError(3221225720LL);
          return v6;
        }
        return 0;
      }
    }
    else if ( !v8 )
    {
      goto LABEL_19;
    }
    if ( !v9 )
      goto LABEL_19;
    return 0;
  }
  return v6;
}
