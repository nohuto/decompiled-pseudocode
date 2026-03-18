/*
 * XREFs of ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8050
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D5DAC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall DestroyFontRequest::CreateUsermodeParameters(DestroyFontRequest *this, UmfdUMBuffer **a2, void **a3)
{
  char *v6; // rax
  __int64 v8; // rdx

  v6 = (char *)UmfdTls::CommitUMBuffer(a2, 0x48u);
  if ( !v6 )
    return 3221225495LL;
  *((_QWORD *)this + 4) = v6 + 8;
  v8 = *((_QWORD *)this + 3);
  *(_OWORD *)(v6 + 8) = *(_OWORD *)v8;
  *(_OWORD *)(v6 + 24) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)(v6 + 40) = *(_OWORD *)(v8 + 32);
  *(_OWORD *)(v6 + 56) = *(_OWORD *)(v8 + 48);
  *((_QWORD *)v6 + 7) = 0LL;
  *((_QWORD *)v6 + 4) = **(_QWORD **)(v8 + 24);
  a2[4] = (UmfdUMBuffer *)v8;
  *(_QWORD *)v6 = *((_QWORD *)this + 4);
  *a3 = v6;
  return 0LL;
}
