/*
 * XREFs of ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D7620
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D49CC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall QueryGlyphAttrsRequest::CreateUsermodeParameters(
        QueryGlyphAttrsRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  char *v6; // rax
  __int64 v8; // rdx

  v6 = (char *)UmfdTls::CommitUMBuffer(a2, 0x58u);
  if ( !v6 )
    return 3221225495LL;
  *((_QWORD *)this + 6) = v6 + 24;
  v8 = *((_QWORD *)this + 3);
  *(_OWORD *)(v6 + 24) = *(_OWORD *)v8;
  *(_OWORD *)(v6 + 40) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)(v6 + 56) = *(_OWORD *)(v8 + 32);
  *(_OWORD *)(v6 + 72) = *(_OWORD *)(v8 + 48);
  *((_QWORD *)v6 + 9) = 0LL;
  *((_QWORD *)v6 + 6) = **(_QWORD **)(v8 + 24);
  a2[4] = (UmfdUMBuffer *)v8;
  *(_QWORD *)v6 = *((_QWORD *)this + 6);
  *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
  *a3 = v6;
  return 0LL;
}
