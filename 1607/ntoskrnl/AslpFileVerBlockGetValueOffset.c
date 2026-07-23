/*
 * XREFs of AslpFileVerBlockGetValueOffset @ 0x1402339C8
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1406C89A0 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x1406C91EC (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x1406C93DC (AslpFileVerStringBlockGetValue.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 */

NTSTATUS __fastcall AslpFileVerBlockGetValueOffset(size_t *a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return -1073741811;
  result = RtlStringCbLengthW((STRSAFE_PCNZWCH)(a2 + 6), a3 - 6, &pcbLength);
  if ( result >= 0 )
  {
    if ( pcbLength + 8 < pcbLength )
    {
      return -1073741675;
    }
    else
    {
      *a1 = (pcbLength + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0;
    }
  }
  return result;
}
