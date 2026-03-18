/*
 * XREFs of RtlUnalignedStringCbLengthW @ 0x140099BBC
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x14043CA58 (_PnpRegQueryValueIndirect.c)
 *     _PnpValidatePropertyData @ 0x14045C944 (_PnpValidatePropertyData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCbLengthW(STRSAFE_PCUNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  STRSAFE_PCUNZWCH v5; // r9
  size_t v6; // rax
  size_t v7; // r8
  NTSTATUS v8; // ecx

  v3 = cbMax >> 1;
  v5 = psz;
  v6 = 0LL;
  if ( !psz )
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
  if ( pcbLength )
  {
    if ( v8 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v6;
  }
  return v8;
}
