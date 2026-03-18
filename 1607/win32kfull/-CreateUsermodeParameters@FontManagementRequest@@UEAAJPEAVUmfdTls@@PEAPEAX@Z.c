/*
 * XREFs of ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DB2E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D8E4C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C02DBF14 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 */

__int64 __fastcall FontManagementRequest::CreateUsermodeParameters(
        FontManagementRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r15
  char *v11; // rax
  _QWORD *v12; // rdi
  char *v13; // rdx
  const void *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v18; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v19[3]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+20h] BYREF

  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v19,
          0x40u,
          &v18,
          *((_DWORD *)this + 11),
          &v20,
          *((_DWORD *)this + 14),
          &v21) )
    return 3221225495LL;
  v6 = v20;
  v7 = v20 + v21;
  if ( v20 + v21 < v20 )
    return 3221225495LL;
  v8 = v18;
  v9 = v7 + v18;
  if ( v7 + v18 < v18 )
    return 3221225495LL;
  v10 = v19[0];
  if ( v9 + v19[0] < v19[0] )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v9 + v19[0]);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 10) = &v11[v10];
  v13 = &v11[v10 + v8];
  *((_QWORD *)this + 11) = v13;
  *((_QWORD *)this + 12) = &v13[v6];
  v14 = (const void *)*((_QWORD *)this + 6);
  if ( v14 )
    memmove(*((void **)this + 11), v14, *((unsigned int *)this + 11));
  else
    *((_QWORD *)this + 11) = 0LL;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  v15 = *((_QWORD *)this + 4);
  if ( v15 )
  {
    v16 = *((_QWORD *)this + 10);
    *(_OWORD *)v16 = *(_OWORD *)v15;
    *(_OWORD *)(v16 + 16) = *(_OWORD *)(v15 + 16);
    *(_OWORD *)(v16 + 32) = *(_OWORD *)(v15 + 32);
    *(_OWORD *)(v16 + 48) = *(_OWORD *)(v15 + 48);
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_QWORD *)(v16 + 24) = **(_QWORD **)(v15 + 24);
    a2[4] = (UmfdUMBuffer *)v15;
    v12[1] = *((_QWORD *)this + 10);
  }
  *v12 = 0LL;
  *((_DWORD *)v12 + 4) = *((_DWORD *)this + 10);
  *((_DWORD *)v12 + 5) = *((_DWORD *)this + 11);
  v12[3] = *((_QWORD *)this + 11);
  *((_DWORD *)v12 + 8) = *((_DWORD *)this + 14);
  v12[5] = *((_QWORD *)this + 12);
  *a3 = v12;
  return 0LL;
}
