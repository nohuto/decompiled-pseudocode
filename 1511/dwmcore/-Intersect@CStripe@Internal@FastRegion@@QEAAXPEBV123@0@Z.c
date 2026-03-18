/*
 * XREFs of ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800197DC
 * Callers:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180019658 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Intersect(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  int *v4; // r9
  char *v5; // r11
  int *v6; // rdx
  int *v7; // rcx
  char *v8; // r8
  int v9; // eax
  int *v10; // r9
  _DWORD *v11; // rcx
  int *v12; // rdx
  int v13; // eax
  int v14; // r10d
  bool v15; // zf

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (int *)((char *)a2 + *((int *)a2 + 1));
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (int *)((char *)a3 + *((int *)a3 + 1));
  v7 = (int *)((char *)this + *((int *)this + 1));
  v8 = (char *)a3 + *((int *)a3 + 3) + 8;
  if ( v4 != (int *)v5 && v6 != (int *)v8 )
  {
    do
    {
      v9 = *v4;
      if ( *v6 > *v4 )
      {
        v10 = v4 + 1;
        while ( 1 )
        {
          v9 = *v6;
          if ( *v10 < *v6 )
            break;
          if ( v9 < *v10 )
            goto LABEL_6;
          v12 = v6 + 1;
LABEL_20:
          v4 = v10 + 1;
          if ( v4 == (int *)v5 )
            goto LABEL_10;
LABEL_21:
          if ( *v4 < *v12 )
          {
            *v7 = *v4;
            v11 = v7 + 1;
            v10 = v4 + 1;
            goto LABEL_7;
          }
          if ( *v12 < *v4 )
          {
            v6 = v12 + 1;
            goto LABEL_26;
          }
          v10 = v4 + 1;
LABEL_12:
          v6 = v12 + 1;
          if ( v6 == (int *)v8 )
            goto LABEL_10;
        }
        v4 = v10 + 1;
        v15 = v4 == (int *)v5;
      }
      else
      {
        if ( *v6 < v9 )
        {
          v12 = v6 + 1;
          goto LABEL_21;
        }
        v10 = v4 + 1;
LABEL_6:
        *v7 = v9;
        v11 = v7 + 1;
        v12 = v6 + 1;
LABEL_7:
        v13 = *v10;
        v14 = *v12;
        if ( *v12 < *v10 )
        {
          *v11 = v14;
          v7 = v11 + 1;
          goto LABEL_12;
        }
        if ( v14 > v13 )
        {
          *v11 = v13;
          v7 = v11 + 1;
          goto LABEL_20;
        }
        *v11 = v13;
        v4 = v10 + 1;
        v7 = v11 + 1;
        v6 = v12 + 1;
        if ( v4 == (int *)v5 )
          break;
LABEL_26:
        v15 = v6 == (int *)v8;
      }
    }
    while ( !v15 );
  }
LABEL_10:
  *((_DWORD *)this + 3) = (_DWORD)v7 - ((_DWORD)this + 8);
}
