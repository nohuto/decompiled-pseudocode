/*
 * XREFs of MiPurgeLargeZeroNodePages @ 0x14011470C
 * Callers:
 *     MiResumeFromHibernate @ 0x1401180A0 (MiResumeFromHibernate.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiPurgeLargeZeroNodePages(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // r8
  _QWORD *v4; // rdi
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r10
  __int64 v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // r9
  _QWORD *v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // r15
  unsigned __int64 v16; // r8
  signed __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = 0LL;
  v4 = &v1[167 * (unsigned __int16)KeNumberNodes];
  if ( v1 < v4 )
  {
    v5 = MmNumberOfChannels;
    do
    {
      if ( *v1 )
      {
        v2 += *v1;
        v6 = 0LL;
        if ( v5 )
        {
          do
          {
            v7 = 0LL;
            v8 = 2LL * (unsigned int)v6;
            v9 = 8 * v6 + 272;
            do
            {
              v10 = &v1[v8 + 2];
              v11 = (_QWORD *)*v10;
              if ( (_QWORD *)*v10 != v10 )
              {
                do
                {
                  *((_BYTE *)v11 + 34) = *((_BYTE *)v11 + 34) & 0xF8 | 1;
                  v11 = (_QWORD *)*v11;
                }
                while ( v11 != v10 );
                v12 = (_QWORD *)*v10;
                v13 = (_QWORD *)v10[1];
                v14 = &v1[v8 + 10];
                if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v13 != v10 )
                  __fastfail(3u);
                *v13 = v12;
                v12[1] = v13;
                v15 = (_QWORD *)v14[1];
                if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v15 != v14 )
                  __fastfail(3u);
                if ( *(_QWORD **)(*v12 + 8LL) != v12 || *(_QWORD **)v12[1] != v12 )
                  __fastfail(3u);
                *v15 = v12;
                v14[1] = v12[1];
                *(_QWORD *)v12[1] = v14;
                v12[1] = v15;
                v10[1] = v10;
                *v10 = v10;
                v1[1] += *v1;
                *(_QWORD *)((char *)v1 + v9 + 32) += *(_QWORD *)((char *)v1 + v9);
                *v1 = 0LL;
                *(_QWORD *)((char *)v1 + v9) = 0LL;
              }
              ++v7;
              v9 += 64LL;
              v8 += 16LL;
            }
            while ( v7 <= 1 );
            v5 = MmNumberOfChannels;
            v6 = (unsigned int)(v6 + 1);
          }
          while ( (unsigned int)v6 < MmNumberOfChannels );
        }
      }
      v1 += 167;
    }
    while ( v1 < v4 );
  }
  v16 = v2 << 9;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1664), -(__int64)v16);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1728), v16);
  return result;
}
