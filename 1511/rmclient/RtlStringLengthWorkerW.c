/*
 * XREFs of RtlStringLengthWorkerW @ 0x1800068A0
 * Callers:
 *     GetNormalizedObjectPath @ 0x1800061C0 (GetNormalizedObjectPath.c)
 *     QuerySecurityDescriptorValue @ 0x180006390 (QuerySecurityDescriptorValue.c)
 *     RtlStringCbCatW @ 0x180011E38 (RtlStringCbCatW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringLengthWorkerW(_WORD *a1, __int64 a2, _QWORD *a3)
{
  int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = a2;
  if ( a2 )
  {
    while ( *a1 )
    {
      ++a1;
      if ( !--a2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v3 = -1073741811;
  }
  if ( a3 )
  {
    if ( v3 < 0 )
      *a3 = 0LL;
    else
      *a3 = v4 - a2;
  }
  return (unsigned int)v3;
}
