/*
 * XREFs of ?Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z @ 0x18001D34C
 * Callers:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18001D2C4 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::Intersects(
        const struct FastRegion::Internal::CStripe *a1,
        const struct FastRegion::Internal::CStripe *a2)
{
  char *v2; // r8
  char *v3; // r9
  char *v4; // rcx
  char *v5; // rdx
  _DWORD *v7; // r8
  int *v8; // rcx
  int v9; // eax
  bool v10; // zf

  v2 = (char *)a1 + *((int *)a1 + 1);
  v3 = (char *)a1 + *((int *)a1 + 3) + 8;
  v4 = (char *)a2 + *((int *)a2 + 1);
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  if ( v2 == v3 || v4 == v5 )
    return 0;
  while ( *(_DWORD *)v4 > *(_DWORD *)v2 )
  {
    v7 = v2 + 4;
    while ( 1 )
    {
      if ( *v7 < *(_DWORD *)v4 )
      {
        v2 = (char *)(v7 + 1);
        v10 = v2 == v3;
        goto LABEL_20;
      }
      if ( *(_DWORD *)v4 < *v7 )
        return 1;
      v2 = (char *)(v7 + 1);
      v8 = (int *)(v4 + 4);
      if ( v2 == v3 )
        return 0;
LABEL_12:
      v9 = *v8;
      if ( *(_DWORD *)v2 < *v8 )
        return 1;
      v4 = (char *)(v8 + 1);
      if ( v9 < *(_DWORD *)v2 )
        break;
      v7 = v2 + 4;
      if ( v4 == v5 )
        return 0;
    }
    v10 = v4 == v5;
LABEL_20:
    if ( v10 )
      return 0;
  }
  if ( *(_DWORD *)v4 < *(_DWORD *)v2 )
  {
    v8 = (int *)(v4 + 4);
    goto LABEL_12;
  }
  return 1;
}
