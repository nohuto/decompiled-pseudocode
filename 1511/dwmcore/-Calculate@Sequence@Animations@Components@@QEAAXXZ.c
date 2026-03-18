/*
 * XREFs of ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x1801640F8
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x180161C54 (-Calculate@Animation@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall Components::Animations::Sequence::Calculate(Components::Animations::Sequence *this)
{
  __int64 v1; // rax
  int v3; // r10d
  int v4; // ecx
  int v5; // eax
  int *v6; // r8
  int v7; // ecx
  int v8; // edx
  int v9; // ebx
  _DWORD *v10; // r9
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // ecx
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rdi
  int v22; // ecx
  __int64 v23; // rax
  _OWORD *v24; // rax
  __int128 v25; // [rsp+38h] [rbp-49h] BYREF
  __int128 v26; // [rsp+48h] [rbp-39h]
  __int128 v27; // [rsp+58h] [rbp-29h] BYREF
  __int64 v28; // [rsp+68h] [rbp-19h]
  __int64 v29; // [rsp+70h] [rbp-11h]
  __int128 v30; // [rsp+78h] [rbp-9h] BYREF
  __int128 v31; // [rsp+88h] [rbp+7h]

  v1 = *((_QWORD *)this + 28);
  v3 = *(_DWORD *)(v1 + 16);
  v4 = v3 - *((_DWORD *)this + 63);
  if ( !*(_BYTE *)(v1 + 20) )
  {
LABEL_5:
    if ( !*(_BYTE *)(v1 + 21) )
    {
      *((_DWORD *)this + 60) = 0;
      *(_QWORD *)((char *)this + 252) = 0LL;
      goto LABEL_15;
    }
    goto LABEL_8;
  }
  if ( v4 < 0 || v4 > *((_DWORD *)this + 64) )
  {
    if ( !*(_BYTE *)(v1 + 20) )
      goto LABEL_5;
    if ( *(_BYTE *)(v1 + 21) )
    {
LABEL_8:
      v5 = *((_DWORD *)this + 6) - 1;
      *((_DWORD *)this + 64) = 0;
      *((_DWORD *)this + 60) = v5;
      *((_DWORD *)this + 63) = *((_DWORD *)this + 62);
      goto LABEL_15;
    }
    v6 = (int *)*((_QWORD *)this + 2);
    v7 = 0;
    v8 = *((_DWORD *)this + 6) - 1;
    *((_DWORD *)this + 60) = 0;
    *(_QWORD *)((char *)this + 252) = 0LL;
    v9 = *v6;
    if ( v8 > 0 )
    {
      v10 = v6 + 6;
      while ( *v10 <= v9 + v3 )
      {
        ++v7;
        v10 += 6;
        if ( v7 >= v8 )
          goto LABEL_15;
      }
      *((_DWORD *)this + 60) = v7;
      *((_DWORD *)this + 63) = v6[6 * v7] - v9;
      *((_DWORD *)this + 64) = *v10 - v6[6 * v7];
    }
  }
LABEL_15:
  v11 = *((_DWORD *)this + 64);
  v30 = 0uLL;
  v31 = 0uLL;
  if ( v11 <= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*((_QWORD *)this + 2) + 24LL * *((int *)this + 60) + 8)
                                               + 16LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 24LL * *((int *)this + 60) + 8),
      &v30);
  }
  else
  {
    v12 = *((_QWORD *)this + 2);
    v13 = *((int *)this + 60);
    v25 = 0uLL;
    v14 = 3 * v13;
    v26 = 0uLL;
    v27 = 0uLL;
    v28 = 0LL;
    v29 = 0LL;
    v15 = 3LL * ((int)v13 + 1);
    if ( (*(int (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v12 + 24 * v13 + 8) + 16LL))(
           *(_QWORD *)(v12 + 24 * v13 + 8),
           &v25) < 0
      || (*(int (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v12 + 8 * v15 + 8) + 16LL))(
           *(_QWORD *)(v12 + 8 * v15 + 8),
           &v27) < 0 )
    {
      return;
    }
    (***(void (__fastcall ****)(_QWORD, __int64, _QWORD, __int128 *, __int128 *, __int128 *))(v12 + 8 * v15 + 16))(
      *(_QWORD *)(v12 + 8 * v15 + 16),
      v16,
      *(unsigned int *)(*(_QWORD *)(v12 + 8 * v14 + 8) + 12LL),
      &v25,
      &v27,
      &v30);
  }
  v17 = *((_QWORD *)this + 1);
  if ( v17 )
  {
    v27 = 0uLL;
    v28 = 0LL;
    v29 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 16LL))(v17, &v27) < 0 )
      return;
    v25 = 0uLL;
    v18 = 0;
    v19 = 0LL;
    v26 = 0uLL;
    do
    {
      v18 += 2;
      *(__int128 *)((char *)&v25 + 8 * v19) = (__int128)_mm_mul_pd(
                                                          *(__m128d *)((char *)&v27 + 8 * v19),
                                                          *(__m128d *)((char *)&v30 + 8 * v19));
      v19 = v18;
    }
    while ( (unsigned __int64)v18 < 4 );
    v20 = v25;
    v30 = v25;
    v31 = v26;
  }
  else
  {
    v20 = v30;
  }
  v21 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v27 = 0uLL;
    v28 = 0LL;
    v29 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 16LL))(v21, &v27) < 0 )
      return;
    v25 = 0uLL;
    v22 = 0;
    v23 = 0LL;
    v26 = 0uLL;
    do
    {
      v22 += 2;
      *(__int128 *)((char *)&v25 + 8 * v23) = (__int128)_mm_add_pd(
                                                          *(__m128d *)((char *)&v27 + 8 * v23),
                                                          *(__m128d *)((char *)&v30 + 8 * v23));
      v23 = v22;
    }
    while ( (unsigned __int64)v22 < 4 );
    v20 = v25;
    v30 = v25;
    v31 = v26;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 28) + 21LL) )
    *((_BYTE *)this + 244) &= ~2u;
  v24 = (_OWORD *)*((_QWORD *)this + 29);
  *v24 = v20;
  v24[1] = v31;
}
