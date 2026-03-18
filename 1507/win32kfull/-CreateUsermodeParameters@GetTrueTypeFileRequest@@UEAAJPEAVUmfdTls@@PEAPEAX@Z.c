/*
 * XREFs of ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D7010
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D49CC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall GetTrueTypeFileRequest::CreateUsermodeParameters(
        GetTrueTypeFileRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  char *v8; // rax

  v5 = UmfdTls::CommitUMBuffer(a2, 0x20u);
  v6 = v5;
  if ( !v5 )
    return 3221225495LL;
  v8 = (char *)(v5 + 3);
  *((_QWORD *)this + 6) = v8;
  v6[1] = v8;
  *v6 = **((_QWORD **)this + 3);
  *a3 = v6;
  return 0LL;
}
