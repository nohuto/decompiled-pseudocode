/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D8A80
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D5DAC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C02D8E24 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 */

__int64 __fastcall QueryTrueTypeOutlineRequest::CreateUsermodeParameters(
        QueryTrueTypeOutlineRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r14
  _QWORD *v11; // rax
  char *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17[13]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+20h] BYREF

  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v17,
          0x40u,
          &v16,
          *((_QWORD *)this + 6) != 0LL ? 0x40 : 0,
          &v18,
          *((_DWORD *)this + 14),
          &v19) )
    return 3221225495LL;
  v6 = v18;
  v7 = v18 + v19;
  if ( v18 + v19 < v18 )
    return 3221225495LL;
  v8 = v16;
  v9 = v7 + v16;
  if ( v7 + v16 < v16 )
    return 3221225495LL;
  v10 = v17[0];
  if ( v9 + v17[0] < v17[0] )
    return 3221225495LL;
  v11 = UmfdTls::CommitUMBuffer(a2, v9 + v17[0]);
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 10) = (char *)v11 + v10;
  v12 = (char *)v11 + v10 + v8;
  *((_QWORD *)this + 11) = v12;
  *((_QWORD *)this + 12) = (unsigned __int64)&v12[v6] & -(__int64)(*((_QWORD *)this + 8) != 0LL);
  *v11 = *((_QWORD *)this + 3);
  v13 = *((_QWORD *)this + 10);
  v14 = *((_QWORD *)this + 4);
  *(_OWORD *)v13 = *(_OWORD *)v14;
  *(_OWORD *)(v13 + 16) = *(_OWORD *)(v14 + 16);
  *(_OWORD *)(v13 + 32) = *(_OWORD *)(v14 + 32);
  *(_OWORD *)(v13 + 48) = *(_OWORD *)(v14 + 48);
  *(_QWORD *)(v13 + 48) = 0LL;
  *(_QWORD *)(v13 + 24) = **(_QWORD **)(v14 + 24);
  a2[4] = (UmfdUMBuffer *)v14;
  v11[1] = *((_QWORD *)this + 10);
  *((_DWORD *)v11 + 4) = *((_DWORD *)this + 10);
  *((_DWORD *)v11 + 5) = *((_DWORD *)this + 11);
  if ( *((_QWORD *)this + 6) )
    v11[3] = *((_QWORD *)this + 11);
  v11[5] = *((_QWORD *)this + 12);
  *((_DWORD *)v11 + 8) = *((_DWORD *)this + 14);
  *a3 = v11;
  return 0LL;
}
