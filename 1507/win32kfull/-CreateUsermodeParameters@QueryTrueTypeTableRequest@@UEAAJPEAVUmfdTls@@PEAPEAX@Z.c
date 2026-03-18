/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D7840
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D49CC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C02D7A64 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 */

__int64 __fastcall QueryTrueTypeTableRequest::CreateUsermodeParameters(
        QueryTrueTypeTableRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r14
  _DWORD *v11; // rax
  char *v12; // rcx
  unsigned int v14; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15[13]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+20h] BYREF

  if ( !UmfdTls::TryComputeAlignedFieldSizes(0x38u, v15, *((_DWORD *)this + 11), &v14, 8u, &v16, 4u, &v17) )
    return 3221225495LL;
  v6 = v16;
  v7 = v16 + v17;
  if ( v16 + v17 < v16 )
    return 3221225495LL;
  v8 = v14;
  v9 = v7 + v14;
  if ( v7 + v14 < v14 )
    return 3221225495LL;
  v10 = v15[0];
  if ( v9 + v15[0] < v15[0] )
    return 3221225495LL;
  v11 = UmfdTls::CommitUMBuffer(a2, v9 + v15[0]);
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 10) = (char *)v11 + v10;
  v12 = (char *)v11 + v10 + v8;
  *((_QWORD *)this + 11) = v12;
  *((_QWORD *)this + 12) = &v12[v6];
  if ( !*((_QWORD *)this + 6) )
    *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)v11 = **((_QWORD **)this + 3);
  v11[2] = *((_DWORD *)this + 8);
  v11[3] = *((_DWORD *)this + 9);
  v11[4] = *((_DWORD *)this + 10);
  *((_QWORD *)v11 + 3) = *((_QWORD *)this + 10);
  v11[5] = *((_DWORD *)this + 11);
  if ( *((_QWORD *)this + 7) )
    *((_QWORD *)v11 + 4) = *((_QWORD *)this + 11);
  if ( *((_QWORD *)this + 8) )
    *((_QWORD *)v11 + 5) = *((_QWORD *)this + 12);
  *a3 = v11;
  return 0LL;
}
