/*
 * XREFs of StRtlIoStorInfoGetHybridWriteThrough @ 0x1C0009AD0
 * Callers:
 *     TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C000994C (TranslateScsiRequestBlockToIoInfoSrbExData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StRtlIoStorInfoGetHybridWriteThrough(__int64 a1, bool *a2)
{
  __int64 result; // rax
  char v4; // [rsp+38h] [rbp+10h] BYREF
  __int16 v5; // [rsp+39h] [rbp+11h]
  char v6; // [rsp+3Bh] [rbp+13h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  result = IoGetGenericIrpExtension(a1, &v4, 4LL);
  if ( (int)result >= 0 )
    *a2 = (v4 & 0x20) != 0;
  return result;
}
