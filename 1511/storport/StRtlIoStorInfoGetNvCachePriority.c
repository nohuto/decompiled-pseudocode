/*
 * XREFs of StRtlIoStorInfoGetNvCachePriority @ 0x1C0006D30
 * Callers:
 *     TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C0006C14 (TranslateScsiRequestBlockToIoInfoSrbExData.c)
 *     StorEtwIORequestDispatch @ 0x1C0036E28 (StorEtwIORequestDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StRtlIoStorInfoGetNvCachePriority(__int64 a1, _BYTE *a2)
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
  {
    if ( (v4 & 0x10) != 0 )
      *a2 = v4 & 0xF;
    else
      return 3221226021LL;
  }
  return result;
}
