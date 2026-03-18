/*
 * XREFs of ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C0027290
 * Callers:
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0027108 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0027ADC (-flFontType@PFEOBJ@@QEAAKXZ.c)
 */

void __fastcall FHOBJ::vDeletePFELink(FHOBJ *this, struct _HASHBUCKET *a2, __int64 a3, struct PFEOBJ *a4)
{
  __int64 *v5; // rcx
  __int64 v7; // rbp
  struct _HASHBUCKET *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _HASHBUCKET **v18; // rcx
  struct _HASHBUCKET *i; // rax
  __int64 v20; // rax
  unsigned int v21; // r8d
  struct _HASHBUCKET *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rax

  if ( a2 )
  {
    v5 = (__int64 *)*((_QWORD *)a2 + 1);
    v7 = (unsigned int)a3;
    v8 = a2;
    if ( v5[1] == *(_QWORD *)a4 )
    {
      v9 = *v5;
      *((_QWORD *)a2 + 1) = *v5;
      if ( !v9 )
        *((_QWORD *)a2 + 2) = 0LL;
    }
    else
    {
      a2 = (struct _HASHBUCKET *)*((_QWORD *)a2 + 1);
      if ( !*v5 )
        return;
      while ( 1 )
      {
        v28 = *(_QWORD **)a2;
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == *(_QWORD *)a4 )
          break;
        a2 = *(struct _HASHBUCKET **)a2;
        if ( !*v28 )
          return;
      }
      v5 = *(__int64 **)a2;
      *(_QWORD *)a2 = *v28;
      if ( !*v5 )
        *((_QWORD *)v8 + 2) = a2;
    }
    if ( v5 )
    {
      Win32FreePool(v5, a2, a3);
      if ( (PFEOBJ::flFontType(a4) & 4) != 0 )
        --*((_DWORD *)v8 + 6);
      if ( (PFEOBJ::flFontType(a4) & 1) != 0 )
        *((_DWORD *)v8 + 7) += v12;
      v13 = *((_QWORD *)v8 + 1);
      if ( v13 )
      {
        v21 = *(_DWORD *)(*(_QWORD *)(v13 + 8) + 88LL);
        if ( *((_DWORD *)v8 + 14) != v21 )
        {
          *((_DWORD *)v8 + 14) = v21;
          v22 = v8;
          v23 = *((_QWORD *)v8 + 6);
          if ( v23 )
          {
            v24 = *((_QWORD *)v8 + 6);
            do
            {
              if ( *(_DWORD *)(v24 + 56) >= v21 )
                break;
              v22 = (struct _HASHBUCKET *)v24;
              v24 = *(_QWORD *)(v24 + 48);
            }
            while ( v24 );
            if ( v22 != v8 )
            {
              v25 = *((_QWORD *)v8 + 5);
              if ( v25 )
                *(_QWORD *)(v25 + 48) = v23;
              else
                *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v23;
              v26 = *((_QWORD *)v8 + 6);
              if ( v26 )
                *(_QWORD *)(v26 + 40) = *((_QWORD *)v8 + 5);
              *((_QWORD *)v8 + 5) = v22;
              *((_QWORD *)v8 + 6) = *((_QWORD *)v22 + 6);
              *((_QWORD *)v22 + 6) = v8;
              v27 = *((_QWORD *)v8 + 6);
              if ( v27 )
                *(_QWORD *)(v27 + 40) = v8;
              else
                *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v8;
            }
          }
        }
      }
      else
      {
        v14 = *((_QWORD *)v8 + 5);
        v15 = *((_QWORD *)v8 + 6);
        if ( v14 )
          *(_QWORD *)(v14 + 48) = v15;
        else
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v15;
        v16 = *((_QWORD *)v8 + 6);
        v17 = *((_QWORD *)v8 + 5);
        if ( v16 )
          *(_QWORD *)(v16 + 40) = v17;
        else
          *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v17;
        v18 = (struct _HASHBUCKET **)(*((_QWORD *)this + 1) + 40LL + 8 * v7);
        for ( i = *v18; i != v8; i = *(struct _HASHBUCKET **)i )
          v18 = (struct _HASHBUCKET **)i;
        *v18 = *(struct _HASHBUCKET **)v8;
        *(_DWORD *)(*((_QWORD *)this + 1) + 12LL) += v12;
        v20 = *((_QWORD *)this + 1);
        if ( *(_QWORD *)(v20 + 8 * v7 + 40) )
          *(_DWORD *)(v20 + 16) += v12;
        Win32FreePool(v8, v10, v11);
      }
    }
  }
}
