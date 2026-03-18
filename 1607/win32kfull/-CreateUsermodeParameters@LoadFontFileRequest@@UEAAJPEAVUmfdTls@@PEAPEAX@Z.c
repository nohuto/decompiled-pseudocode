/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DB520
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D8E4C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall LoadFontFileRequest::CreateUsermodeParameters(
        LoadFontFileRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  char *v5; // rax
  char *v6; // r9
  __int64 i; // r8
  __int64 v8; // rax

  if ( (unsigned int)(*((_DWORD *)this + 6) - 1) > 2 )
    return 3221225495LL;
  v5 = (char *)UmfdTls::CommitUMBuffer(a2, 0xC0u);
  v6 = v5;
  if ( !v5 )
    return 3221225495LL;
  *((_QWORD *)v5 + 1) = v5 + 16;
  *((_QWORD *)v5 + 5) = v5 + 48;
  *((_QWORD *)v5 + 9) = v5 + 80;
  *(_DWORD *)v5 = *((_DWORD *)this + 6);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    *(_QWORD *)(*((_QWORD *)v5 + 1) + 8 * i) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8 * i) + 64LL);
    *(_QWORD *)(*((_QWORD *)v5 + 5) + 8 * i) = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    *(_DWORD *)(*((_QWORD *)v5 + 9) + 4 * i) = *(_DWORD *)(*((_QWORD *)this + 12) + 4 * i);
  }
  if ( *((_QWORD *)this + 17) )
  {
    *((_QWORD *)v5 + 14) = v5 + 120;
    v8 = *((_QWORD *)this + 17);
    *(_OWORD *)(v6 + 120) = *(_OWORD *)v8;
    *(_OWORD *)(v6 + 136) = *(_OWORD *)(v8 + 16);
    *(_OWORD *)(v6 + 152) = *(_OWORD *)(v8 + 32);
    *(_OWORD *)(v6 + 168) = *(_OWORD *)(v8 + 48);
    *((_QWORD *)v6 + 23) = *(_QWORD *)(v8 + 64);
  }
  *((_DWORD *)v6 + 23) = *((_DWORD *)this + 29);
  *((_DWORD *)v6 + 24) = *((_DWORD *)this + 30);
  *a3 = v6;
  return 0LL;
}
