/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8540
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D5DAC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C02D8E24 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 */

__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r15
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  char *v13; // rcx
  char *v14; // rdx
  __int64 v15; // r8
  unsigned int v17; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v18[3]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x30u,
          v18,
          0x40u,
          &v17,
          4 * *((_DWORD *)this + 16),
          &v19,
          2 * *((_DWORD *)this + 16),
          &v20) )
    return 3221225495LL;
  v6 = v19;
  v7 = v19 + v20;
  if ( v19 + v20 < v19 )
    return 3221225495LL;
  v8 = v17;
  v9 = v7 + v17;
  if ( v7 + v17 < v17 )
    return 3221225495LL;
  v10 = v18[0];
  if ( v9 + v18[0] < v18[0] )
    return 3221225495LL;
  v11 = UmfdTls::CommitUMBuffer(a2, v9 + v18[0]);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  v13 = (char *)v11 + v10;
  *((_QWORD *)this + 9) = (char *)v11 + v10;
  v14 = (char *)v11 + v10 + v8;
  *((_QWORD *)this + 10) = v14;
  *((_QWORD *)this + 11) = &v14[v6];
  v15 = *((_QWORD *)this + 4);
  *(_OWORD *)v13 = *(_OWORD *)v15;
  *((_OWORD *)v13 + 1) = *(_OWORD *)(v15 + 16);
  *((_OWORD *)v13 + 2) = *(_OWORD *)(v15 + 32);
  *((_OWORD *)v13 + 3) = *(_OWORD *)(v15 + 48);
  *((_QWORD *)v13 + 6) = 0LL;
  *((_QWORD *)v13 + 3) = **(_QWORD **)(v15 + 24);
  a2[4] = (UmfdUMBuffer *)v15;
  v11[1] = *((_QWORD *)this + 9);
  *v11 = *((_QWORD *)this + 3);
  *((_DWORD *)v11 + 4) = *((_DWORD *)this + 10);
  *((_DWORD *)v11 + 10) = *((_DWORD *)this + 16);
  v11[3] = *((_QWORD *)this + 10);
  memmove(*((void **)this + 10), *((const void **)this + 6), 4LL * *((unsigned int *)this + 16));
  v12[4] = *((_QWORD *)this + 11);
  *a3 = v12;
  return 0LL;
}
