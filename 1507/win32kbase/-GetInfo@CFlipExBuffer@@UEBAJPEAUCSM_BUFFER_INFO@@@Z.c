/*
 * XREFs of ?GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0049AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::GetInfo(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  unsigned int v3; // r10d
  char *v4; // r8
  char *i; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __m256i v9; // [rsp+0h] [rbp-28h]

  *(_DWORD *)a2 = 2;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 1);
  v3 = 0;
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 40);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 56);
  *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 72);
  *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)this + 88);
  *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)this + 104);
  *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)this + 120);
  *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)this + 136);
  *((_OWORD *)a2 + 8) = *(_OWORD *)((char *)this + 152);
  *((_OWORD *)a2 + 9) = *(_OWORD *)((char *)this + 168);
  *((_OWORD *)a2 + 10) = *(_OWORD *)((char *)this + 184);
  *((_QWORD *)a2 + 22) = *((_QWORD *)this + 25);
  *((_QWORD *)a2 + 23) = *((_QWORD *)this + 42);
  *((_QWORD *)a2 + 24) = 0LL;
  *((_QWORD *)a2 + 25) = 0LL;
  *((_DWORD *)a2 + 52) = *((unsigned __int8 *)this + 392);
  *((_DWORD *)a2 + 53) = *((_DWORD *)this + 70);
  if ( *((_DWORD *)this + 70) )
  {
    v4 = (char *)this + 264;
    for ( i = (char *)*((_QWORD *)this + 33); i != v4; i = *(char **)i )
    {
      if ( *((_DWORD *)i + 4) != 3 )
      {
        v6 = v3 + 9LL;
        v9 = *(__m256i *)(i + 16);
        ++v3;
        v7 = 3 * v6;
        *(_OWORD *)((char *)a2 + 8 * v7) = *(_OWORD *)&v9.m256i_u64[1];
        *((_QWORD *)a2 + v7 + 2) = *(_OWORD *)&_mm_unpackhi_pd(
                                                 *(__m128d *)&v9.m256i_u64[2],
                                                 *(__m128d *)&v9.m256i_u64[2]);
      }
    }
    *((_DWORD *)a2 + 53) = v3;
  }
  return 0LL;
}
