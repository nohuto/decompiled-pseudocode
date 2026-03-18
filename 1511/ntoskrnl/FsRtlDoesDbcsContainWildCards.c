/*
 * XREFs of FsRtlDoesDbcsContainWildCards @ 0x1405F49A8
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x1404AD4C8 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlIsDbcsInExpression @ 0x1405F4A18 (FsRtlIsDbcsInExpression.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlDoesDbcsContainWildCards(PANSI_STRING Name)
{
  unsigned int Length; // r8d
  int v2; // edx
  char *Buffer; // r10
  char v4; // cl

  Length = Name->Length;
  v2 = 0;
  if ( !Name->Length )
    return 0;
  Buffer = Name->Buffer;
  while ( 1 )
  {
    v4 = Buffer[v2];
    if ( (unsigned __int8)v4 < 0x80u || !(_BYTE)NlsMbOemCodePageTag || !NlsOemLeadByteInfoTable[(unsigned __int8)v4] )
      break;
    ++v2;
LABEL_9:
    if ( ++v2 >= Length )
      return 0;
  }
  if ( v4 < 0 || (byte_1402453B0[v4] & 8) == 0 )
    goto LABEL_9;
  return 1;
}
