/*
 * XREFs of ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C00C4A24
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C00C5D18 (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEInjectionIndexToLinkIndex(struct RIMDEV *a1, int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  unsigned int v8; // r10d
  __int64 v9; // r11
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  _DWORD *v14; // r8
  __int64 v15; // rbx
  unsigned int v16; // eax
  _DWORD *i; // rcx
  unsigned int v18; // ecx
  unsigned __int16 *v19; // r8

  v4 = *((_QWORD *)a1 + 52);
  v8 = *(_DWORD *)(v4 + 704);
  if ( *(_DWORD *)(v4 + 24) == 8 )
    --v8;
  v9 = *(_QWORD *)(v4 + 696);
  v10 = 0;
  v11 = *((_QWORD *)a1 + 47);
  *a3 = 0;
  v12 = *(_QWORD *)(v11 + 72);
  if ( v9 && a2 )
  {
    if ( a4 )
    {
      v13 = *(_WORD *)(v9 + 16);
      if ( v8 )
      {
        v14 = (_DWORD *)(v12 + 4);
        v15 = v8;
        do
        {
          *((_WORD *)v14 - 1) = v13;
          v13 = *(_WORD *)(*(_QWORD *)(v9 + 24) + 8LL * v13 + 4);
          *v14 = 0;
          v14 += 2;
          --v15;
        }
        while ( v15 );
      }
    }
    else
    {
      v18 = 0;
      if ( v8 )
      {
        v19 = *(unsigned __int16 **)(v11 + 72);
        while ( *v19 != a2 || !*((_DWORD *)v19 + 1) )
        {
          ++v18;
          v19 += 4;
          if ( v18 >= v8 )
            goto LABEL_9;
        }
        *a3 = *(_WORD *)(v12 + 8LL * v18 + 2);
        return 1;
      }
    }
LABEL_9:
    v16 = 0;
    if ( !v8 )
      return v10;
    for ( i = (_DWORD *)(v12 + 4); *i; i += 2 )
    {
      if ( ++v16 >= v8 )
        return v10;
    }
    *a3 = *(_WORD *)(v12 + 8LL * v16 + 2);
    *(_WORD *)(v12 + 8LL * v16) = a2;
    *(_DWORD *)(v12 + 8LL * v16 + 4) = 1;
    return 1;
  }
  return 1LL;
}
