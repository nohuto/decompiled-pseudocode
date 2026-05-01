/*
 * XREFs of RtlStringCbLengthW @ 0x1800068F0
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x180006030 (QueryTransientObjectSecurityDescriptor.c)
 *     GetNormalizedObjectPath @ 0x1800061C0 (GetNormalizedObjectPath.c)
 *     QuerySecurityDescriptorValue @ 0x180006390 (QuerySecurityDescriptorValue.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCbLengthW(_WORD *a1, unsigned __int64 a2, _QWORD *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  int v6; // r8d
  unsigned __int64 v7; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  v4 = 0LL;
  if ( !a1 )
    goto LABEL_6;
  if ( v3 > 0x7FFFFFFF )
    goto LABEL_6;
  v6 = 0;
  v7 = v3;
  if ( !v3 )
    goto LABEL_6;
  while ( *a1 )
  {
    ++a1;
    if ( !--v7 )
      goto LABEL_6;
  }
  if ( v7 )
    v4 = v3 - v7;
  else
LABEL_6:
    v6 = -1073741811;
  result = (unsigned int)v6;
  if ( a3 )
  {
    if ( v6 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v4;
  }
  return result;
}
