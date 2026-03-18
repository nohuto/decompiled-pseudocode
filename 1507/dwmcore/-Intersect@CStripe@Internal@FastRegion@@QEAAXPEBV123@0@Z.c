/*
 * XREFs of ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180151498
 * Callers:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18015124C (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
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
  int *v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // r10d
  bool v15; // zf

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (int *)((char *)a2 + *((int *)a2 + 1));
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (int *)((char *)a3 + *((int *)a3 + 1));
  v7 = (int *)((char *)this + *((int *)this + 1));
  v8 = (char *)a3 + *((int *)a3 + 3) + 8;
  if ( v4 == (int *)v5 || v6 == (int *)v8 )
    goto LABEL_28;
  while ( 1 )
  {
    v9 = *v4;
    if ( *v6 <= *v4 )
      break;
    v10 = v4 + 1;
LABEL_5:
    v9 = *v6;
    if ( *v10 >= *v6 )
    {
      if ( v9 >= *v10 )
      {
        v11 = v6 + 1;
        goto LABEL_8;
      }
      goto LABEL_17;
    }
    v4 = v10 + 1;
    v15 = v4 == (int *)v5;
LABEL_27:
    if ( v15 )
      goto LABEL_28;
  }
  if ( *v6 >= v9 )
  {
    v10 = v4 + 1;
LABEL_17:
    *v7 = v9;
    v12 = v7 + 1;
    v11 = v6 + 1;
    goto LABEL_18;
  }
  v11 = v6 + 1;
  while ( 1 )
  {
    if ( *v4 >= *v11 )
    {
      if ( *v11 >= *v4 )
      {
        v10 = v4 + 1;
        goto LABEL_12;
      }
      v6 = v11 + 1;
LABEL_24:
      v15 = v6 == (int *)v8;
      goto LABEL_27;
    }
    *v7 = *v4;
    v12 = v7 + 1;
    v10 = v4 + 1;
LABEL_18:
    v13 = *v10;
    v14 = *v11;
    if ( *v11 <= *v10 )
      break;
    *v12 = v13;
    v7 = v12 + 1;
LABEL_8:
    v4 = v10 + 1;
    if ( v4 == (int *)v5 )
      goto LABEL_28;
  }
  if ( v14 >= v13 )
  {
    *v12 = v13;
    v4 = v10 + 1;
    v7 = v12 + 1;
    v6 = v11 + 1;
    if ( v4 == (int *)v5 )
      goto LABEL_28;
    goto LABEL_24;
  }
  *v12 = v14;
  v7 = v12 + 1;
LABEL_12:
  v6 = v11 + 1;
  if ( v6 != (int *)v8 )
    goto LABEL_5;
LABEL_28:
  *((_DWORD *)this + 3) = (_DWORD)v7 - ((_DWORD)this + 8);
}
