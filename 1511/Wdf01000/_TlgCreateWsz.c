/*
 * XREFs of _TlgCreateWsz @ 0x1C0067EC4
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0020270 (imp_WdfDriverCreate.c)
 *     LogDriverInfoStream @ 0x1C0072C70 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall TlgCreateWsz(_EVENT_DATA_DESCRIPTOR *pDesc, wchar_t *pwsz)
{
  __int64 *v2; // r8
  __int64 v3; // rax

  v2 = qword_1C0037770;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = (__int64 *)pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (unsigned __int64)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
