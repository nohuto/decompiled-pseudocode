/*
 * XREFs of ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x18006EAE0
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006DFA8 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Subtract(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3,
        const struct FastRegion::Internal::CStripe *a4)
{
  char *v5; // r9
  char *v6; // r10
  char *v7; // rdx
  char *v8; // rcx
  char *v9; // r8
  int v10; // eax
  _DWORD *v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  signed __int64 v16; // r9
  bool v17; // zf

  *(_DWORD *)this = *(_DWORD *)a4;
  v5 = (char *)a2 + *((int *)a2 + 1);
  v6 = (char *)a2 + *((int *)a2 + 3) + 8;
  v7 = (char *)a3 + *((int *)a3 + 1);
  v8 = (char *)this + *((int *)this + 1);
  v9 = (char *)a3 + *((int *)a3 + 3) + 8;
  if ( v5 != v6 && v7 != v9 )
  {
    do
    {
      v10 = *(_DWORD *)v5;
      if ( *(_DWORD *)v7 > *(_DWORD *)v5 )
      {
        *(_DWORD *)v8 = v10;
        v8 += 4;
        v5 += 4;
        while ( 1 )
        {
          v13 = *(_DWORD *)v5;
          if ( *(_DWORD *)v5 < *(_DWORD *)v7 )
          {
            *(_DWORD *)v8 = v13;
            v5 += 4;
            v8 += 4;
            v17 = v5 == v6;
            goto LABEL_30;
          }
          if ( *(_DWORD *)v7 >= v13 )
            break;
          *(_DWORD *)v8 = *(_DWORD *)v7;
          v8 += 4;
LABEL_12:
          v11 = v7 + 4;
LABEL_13:
          v12 = *v11;
          if ( *v11 > *(_DWORD *)v5 )
            goto LABEL_21;
          if ( v12 >= *(_DWORD *)v5 )
          {
            v5 += 4;
            v7 = (char *)(v11 + 1);
            if ( v5 != v6 )
              goto LABEL_34;
            goto LABEL_16;
          }
LABEL_27:
          *(_DWORD *)v8 = v12;
          v7 = (char *)(v11 + 1);
          v8 += 4;
          if ( v7 == v9 )
            goto LABEL_16;
        }
        *(_DWORD *)v8 = v13;
        v8 += 4;
        v11 = v7 + 4;
LABEL_21:
        v5 += 4;
        if ( v5 == v6 )
          break;
      }
      else
      {
        if ( *(_DWORD *)v7 >= v10 )
        {
          v5 += 4;
          goto LABEL_12;
        }
        v11 = v7 + 4;
      }
      v12 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 < *v11 )
      {
        v5 += 4;
        goto LABEL_13;
      }
      if ( *v11 >= v12 )
      {
        v5 += 4;
        goto LABEL_27;
      }
      v7 = (char *)(v11 + 1);
LABEL_34:
      v17 = v7 == v9;
LABEL_30:
      ;
    }
    while ( !v17 );
  }
LABEL_16:
  v14 = 0LL;
  v15 = (unsigned __int64)(v6 - v5 + 3) >> 2;
  if ( v5 > v6 )
    v15 = 0LL;
  if ( v15 )
  {
    v16 = v5 - v8;
    do
    {
      ++v14;
      *(_DWORD *)v8 = *(_DWORD *)&v8[v16];
      v8 += 4;
    }
    while ( v14 != v15 );
  }
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}
