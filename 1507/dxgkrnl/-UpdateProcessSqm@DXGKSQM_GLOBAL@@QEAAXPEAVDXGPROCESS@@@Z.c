/*
 * XREFs of ?UpdateProcessSqm@DXGKSQM_GLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00A822C
 * Callers:
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00A8050 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?SqmUpdate@DXGGLOBAL@@QEAAXXZ @ 0x1C014B788 (-SqmUpdate@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateIndependentFlipSqm@DXGPROCESS@@QEAAXXZ @ 0x1C0002CE0 (-UpdateIndependentFlipSqm@DXGPROCESS@@QEAAXXZ.c)
 *     RtlStringCchCopyA @ 0x1C0009514 (RtlStringCchCopyA.c)
 */

void __fastcall DXGKSQM_GLOBAL::UpdateProcessSqm(DXGKSQM_GLOBAL *this, struct DXGPROCESS *a2)
{
  const char *ProcessImageFileName; // r15
  unsigned int v5; // esi
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  char *v11; // rdi
  __int64 v12; // rcx
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm1
  unsigned int v16; // edi
  char *v17; // rcx
  __m128i v18; // xmm4
  __m128i v19; // xmm5
  unsigned int v20; // edi
  __m128i *v21; // rcx
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  STRING String2; // [rsp+20h] [rbp-38h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  ProcessImageFileName = (const char *)PsGetProcessImageFileName(*((_QWORD *)a2 + 7));
  RtlInitString(&DestinationString, ProcessImageFileName);
  v5 = 0;
  v6 = (_QWORD *)((char *)this + 24);
  v7 = 0LL;
  do
  {
    if ( !*v6 )
      break;
    RtlInitString(&String2, (PCSZ)this + 32 * v5);
    if ( RtlEqualString(&DestinationString, &String2, 1u) )
    {
      v9 = *((_QWORD *)a2 + 37);
      v10 = 32LL * v5;
      if ( *(_QWORD *)((char *)this + v10 + 24) < v9 )
      {
        *(_QWORD *)((char *)this + v10 + 24) = v9;
        if ( v5 )
        {
          v11 = (char *)this + 32 * v7;
          do
          {
            v12 = 32LL * --v5;
            if ( *(_QWORD *)((char *)this + v12 + 24) >= *((_QWORD *)v11 + 3) )
              break;
            v13 = *(_OWORD *)v11;
            v14 = *((_OWORD *)v11 + 1);
            v15 = *(_OWORD *)((char *)this + v12 + 16);
            *(_OWORD *)v11 = *(_OWORD *)((char *)this + v12);
            *((_OWORD *)v11 + 1) = v15;
            v11 -= 32;
            *(_OWORD *)((char *)this + v12) = v13;
            *(_OWORD *)((char *)this + v12 + 16) = v14;
          }
          while ( v5 );
        }
      }
      goto LABEL_4;
    }
    ++v5;
    ++v7;
    v6 += 4;
  }
  while ( v5 < 8 );
  v8 = *((_QWORD *)a2 + 37);
  if ( *((_QWORD *)this + 31) < v8 )
  {
    v16 = 0;
    while ( *((_QWORD *)this + 4 * v16 + 3) >= v8 )
    {
      if ( ++v16 >= 8 )
        goto LABEL_4;
    }
    v17 = (char *)this + 32 * v16;
    *((_QWORD *)v17 + 3) = v8;
    RtlStringCchCopyA(v17, 0x10uLL, ProcessImageFileName);
    v20 = v16 + 1;
    if ( v20 < 8 )
    {
      v21 = (__m128i *)((char *)this + 32 * v20);
      do
      {
        if ( !_mm_srli_si128(v18, 8).m128i_u64[0] )
          break;
        v22 = *v21;
        ++v20;
        v23 = v21[1];
        *v21 = v19;
        v21[1] = v18;
        v21 += 2;
        v19 = v22;
        v18 = v23;
      }
      while ( v20 < 8 );
    }
  }
LABEL_4:
  DXGPROCESS::UpdateIndependentFlipSqm(a2);
}
