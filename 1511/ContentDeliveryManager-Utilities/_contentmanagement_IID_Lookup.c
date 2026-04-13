/*
 * XREFs of _contentmanagement_IID_Lookup @ 0x180001010
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x180028222 (memcmp_0.c)
 */

__int64 __fastcall contentmanagement_IID_Lookup(void **Buf1, int *a2)
{
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  void **v9; // r8

  v3 = -1;
  v5 = memcmp_0(Buf1, *(&__x_ContentManagement_CICreativeEventReportedCacheProxyVtbl + 1), 0x10uLL);
  if ( v5 <= 0 )
  {
    if ( !v5 )
    {
      v3 = 8;
LABEL_12:
      *a2 = v3;
      return 1LL;
    }
  }
  else
  {
    v3 = 1;
  }
  v6 = memcmp_0(Buf1, contentmanagement_ProxyVtblList[v3 + 4][1], 0x10uLL);
  if ( v6 >= 0 )
  {
    v3 += 4;
    if ( !v6 )
      goto LABEL_12;
  }
  v7 = memcmp_0(Buf1, contentmanagement_ProxyVtblList[v3 + 2][1], 0x10uLL);
  if ( v7 >= 0 )
  {
    v3 += 2;
    if ( !v7 )
      goto LABEL_12;
  }
  v8 = memcmp_0(Buf1, contentmanagement_ProxyVtblList[v3 + 1][1], 0x10uLL);
  if ( v8 >= 0 )
  {
    ++v3;
    if ( !v8 )
      goto LABEL_12;
  }
  if ( ++v3 < 9 )
  {
    v9 = (void **)contentmanagement_ProxyVtblList[v3][1];
    if ( *Buf1 == *v9 && Buf1[1] == v9[1] )
      goto LABEL_12;
  }
  return 0LL;
}
