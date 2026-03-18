/*
 * XREFs of ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02D86B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C02D5DAC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C02D8E24 (-TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z.c)
 */

__int64 __fastcall QueryFontDataRequest::CreateUsermodeParameters(
        QueryFontDataRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  char *v15; // rcx
  char *v16; // rdx
  __int64 v17; // r8
  const void *v18; // rdx
  unsigned int v20; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v21[3]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+20h] BYREF

  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    v7 = *((_DWORD *)this + 8) - 2;
    if ( v7 )
    {
      if ( v7 == 1 )
        *((_DWORD *)this + 16) = 124;
    }
    else
    {
      *((_QWORD *)a2 + 5) = v6;
      *((_DWORD *)this + 16) = 8;
    }
  }
  else
  {
    *((_DWORD *)this + 16) = 0;
  }
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x30u,
          v21,
          0x40u,
          &v20,
          *((_QWORD *)this + 6) != 0LL ? 0x40 : 0,
          &v22,
          *((_DWORD *)this + 16),
          &v23) )
    return 3221225495LL;
  v8 = v22;
  v9 = v22 + v23;
  if ( v22 + v23 < v22 )
    return 3221225495LL;
  v10 = v20;
  v11 = v9 + v20;
  if ( v9 + v20 < v20 )
    return 3221225495LL;
  v12 = v21[0];
  if ( v11 + v21[0] < v21[0] )
    return 3221225495LL;
  v13 = UmfdTls::CommitUMBuffer((UmfdUMBuffer **)a2, v11 + v21[0]);
  v14 = v13;
  if ( !v13 )
    return 3221225495LL;
  v15 = (char *)v13 + v12;
  *((_QWORD *)this + 9) = (char *)v13 + v12;
  v16 = (char *)v13 + v12 + v10;
  *((_QWORD *)this + 10) = v16;
  *((_QWORD *)this + 11) = &v16[v8];
  v17 = *((_QWORD *)this + 5);
  *(_OWORD *)v15 = *(_OWORD *)v17;
  *((_OWORD *)v15 + 1) = *(_OWORD *)(v17 + 16);
  *((_OWORD *)v15 + 2) = *(_OWORD *)(v17 + 32);
  *((_OWORD *)v15 + 3) = *(_OWORD *)(v17 + 48);
  *((_QWORD *)v15 + 6) = 0LL;
  *((_QWORD *)v15 + 3) = **(_QWORD **)(v17 + 24);
  *((_QWORD *)a2 + 4) = v17;
  v13[2] = *((_QWORD *)this + 9);
  *v13 = *((_QWORD *)this + 3);
  *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
  *((_DWORD *)v13 + 3) = *((_DWORD *)this + 9);
  if ( !*((_QWORD *)this + 6) )
    *((_QWORD *)this + 10) = 0LL;
  v13[3] = *((_QWORD *)this + 10);
  v18 = (const void *)*((_QWORD *)this + 7);
  if ( v18 )
  {
    if ( *((_DWORD *)this + 8) == 3 )
      memmove(*((void **)this + 11), v18, *((unsigned int *)this + 16));
  }
  else
  {
    *((_QWORD *)this + 11) = 0LL;
  }
  v14[4] = *((_QWORD *)this + 11);
  *((_DWORD *)v14 + 10) = *((_DWORD *)this + 16);
  *a3 = v14;
  return 0LL;
}
