/*
 * XREFs of RtlStringCbLengthW @ 0x18007053C
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F000 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpMuiRegConfigNodePopulate @ 0x18007041C (RtlpMuiRegConfigNodePopulate.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E1BD0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E1F30 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800E244C (RtlpIsAttributeAceInSacl.c)
 *     RtlpValidRelativeAttribute @ 0x1800E291C (RtlpValidRelativeAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbLengthW(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  _WORD *v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  int v8; // ecx

  v3 = a2 >> 1;
  v5 = a1;
  v6 = 0LL;
  if ( !a1 )
    goto LABEL_12;
  if ( v3 > 0x7FFFFFFF )
    goto LABEL_12;
  v7 = v3;
  v8 = 0;
  if ( !v3 )
    goto LABEL_12;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    v6 = v3 - v7;
  else
LABEL_12:
    v8 = -1073741811;
  if ( a3 )
  {
    if ( v8 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v6;
  }
  return (unsigned int)v8;
}
