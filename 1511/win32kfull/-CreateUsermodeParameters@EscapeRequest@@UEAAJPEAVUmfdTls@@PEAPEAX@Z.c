/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D80F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D5DAC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0@Z @ 0x1C02D8DEC (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0@Z.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, struct UmfdTls *a2, void **a3)
{
  UmfdUMBuffer **v5; // r10
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // r14
  char *v9; // rax
  _DWORD *v10; // rdi
  const void *v11; // rdx
  unsigned int v13[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+20h] BYREF

  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x30u, v13, *((_DWORD *)this + 9), &v14, *((_DWORD *)this + 12), &v15) )
    return 3221225495LL;
  v6 = v14;
  v7 = v14 + v15;
  if ( v14 + v15 < v14 )
    return 3221225495LL;
  v8 = v13[0];
  if ( v7 + v13[0] < v13[0] )
    return 3221225495LL;
  v9 = (char *)UmfdTls::CommitUMBuffer(v5, v7 + v13[0]);
  v10 = v9;
  if ( !v9 )
    return 3221225495LL;
  *((_QWORD *)this + 9) = &v9[v8];
  *((_QWORD *)this + 10) = &v9[v8 + v6];
  v11 = (const void *)*((_QWORD *)this + 5);
  if ( v11 )
    memmove(*((void **)this + 9), v11, *((unsigned int *)this + 9));
  else
    *((_QWORD *)this + 9) = 0LL;
  if ( !*((_QWORD *)this + 7) )
    *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)v10 = 0LL;
  v10[2] = *((_DWORD *)this + 8);
  v10[3] = *((_DWORD *)this + 9);
  *((_QWORD *)v10 + 2) = *((_QWORD *)this + 9);
  v10[6] = *((_DWORD *)this + 12);
  *((_QWORD *)v10 + 4) = *((_QWORD *)this + 10);
  *a3 = v10;
  return 0LL;
}
