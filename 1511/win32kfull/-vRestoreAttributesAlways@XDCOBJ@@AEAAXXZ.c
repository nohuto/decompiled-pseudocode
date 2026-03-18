/*
 * XREFs of ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0268CE8
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0267A20 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@K@Z @ 0x1C0267D78 (-bEndDocInternal@@YAHPEAUHDC__@@K@Z.c)
 *     NtGdiEndPage @ 0x1C0269A00 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C026A420 (NtGdiStartPage.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vRestoreAttributesAlways(XDCOBJ *this)
{
  __int64 v2; // rcx
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int64 v5; // r8

  v2 = *(_QWORD *)this;
  v3 = (_OWORD *)(v2 + 960);
  if ( *(_QWORD *)(v2 + 80) == v2 + 960 )
  {
    v4 = *(_OWORD **)(v2 + 952);
    v5 = 3LL;
    do
    {
      *v4 = *v3;
      v4[1] = v3[1];
      v4[2] = v3[2];
      v4[3] = v3[3];
      v4[4] = v3[4];
      v4[5] = v3[5];
      v4[6] = v3[6];
      v4 += 8;
      *(v4 - 1) = v3[7];
      v3 += 8;
      --v5;
    }
    while ( v5 );
    *v4 = *v3;
    v4[1] = v3[1];
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 952LL);
    *((_DWORD *)this + 2) = 0;
  }
}
