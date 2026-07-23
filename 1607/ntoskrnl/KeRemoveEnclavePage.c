/*
 * XREFs of KeRemoveEnclavePage @ 0x1406E60E0
 * Callers:
 *     MiDeleteEnclavePage @ 0x1401F0108 (MiDeleteEnclavePage.c)
 * Callees:
 *     KiEncls @ 0x14015EA70 (KiEncls.c)
 */

__int64 KeRemoveEnclavePage()
{
  int v0; // eax
  unsigned int v1; // ecx
  int v2; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  v1 = 0;
  if ( v0 )
  {
    v2 = v0 - 13;
    if ( v2 )
    {
      if ( v2 == 1 )
        return (unsigned int)-1073741798;
      else
        return (unsigned int)-1073741823;
    }
    else
    {
      return (unsigned int)-1073741800;
    }
  }
  return v1;
}
