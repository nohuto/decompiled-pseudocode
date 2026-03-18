/*
 * XREFs of MiPurgeLargeZeroNodePages @ 0x14014A09C
 * Callers:
 *     MiResumeFromHibernate @ 0x14014CD44 (MiResumeFromHibernate.c)
 * Callees:
 *     <none>
 */

signed __int64 MiPurgeLargeZeroNodePages()
{
  _QWORD *v0; // rcx
  __int64 v1; // rdx
  unsigned __int64 v2; // r11
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v7; // rsi
  _QWORD *v8; // r8
  _QWORD *v9; // r9
  _QWORD *v10; // r9
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // r15
  unsigned __int64 v14; // rdx
  signed __int64 result; // rax

  v0 = (_QWORD *)qword_140353D28;
  v1 = 0LL;
  v2 = qword_140353D28 + 1336LL * (unsigned __int16)KeNumberNodes;
  if ( qword_140353D28 < v2 )
  {
    v3 = MmNumberOfChannels;
    do
    {
      if ( *v0 )
      {
        v1 += *v0;
        v4 = 0LL;
        if ( v3 )
        {
          do
          {
            v5 = 0LL;
            v6 = 2LL * (unsigned int)v4;
            v7 = 8 * v4 + 272;
            do
            {
              v8 = &v0[v6 + 2];
              v9 = (_QWORD *)*v8;
              if ( (_QWORD *)*v8 != v8 )
              {
                do
                {
                  *((_BYTE *)v9 + 34) = *((_BYTE *)v9 + 34) & 0xF8 | 1;
                  v9 = (_QWORD *)*v9;
                }
                while ( v9 != v8 );
                v10 = (_QWORD *)*v8;
                v11 = (_QWORD *)v8[1];
                v12 = &v0[v6 + 10];
                if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v11 != v8 )
                  __fastfail(3u);
                *v11 = v10;
                v10[1] = v11;
                v13 = (_QWORD *)v12[1];
                if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v13 != v12 )
                  __fastfail(3u);
                if ( *(_QWORD **)(*v10 + 8LL) != v10 || *(_QWORD **)v10[1] != v10 )
                  __fastfail(3u);
                *v13 = v10;
                v12[1] = v10[1];
                *(_QWORD *)v10[1] = v12;
                v10[1] = v13;
                v8[1] = v8;
                *v8 = v8;
                v0[1] += *v0;
                *(_QWORD *)((char *)v0 + v7 + 32) += *(_QWORD *)((char *)v0 + v7);
                *v0 = 0LL;
                *(_QWORD *)((char *)v0 + v7) = 0LL;
              }
              ++v5;
              v7 += 64LL;
              v6 += 16LL;
            }
            while ( v5 <= 1 );
            v3 = MmNumberOfChannels;
            v4 = (unsigned int)(v4 + 1);
          }
          while ( (unsigned int)v4 < MmNumberOfChannels );
        }
      }
      v0 += 167;
    }
    while ( (unsigned __int64)v0 < v2 );
  }
  v14 = v1 << 9;
  result = _InterlockedExchangeAdd64(&qword_140354300, -(__int64)v14);
  _InterlockedExchangeAdd64(qword_140354340, v14);
  return result;
}
