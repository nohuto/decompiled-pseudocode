/*
 * XREFs of _lambda_9bc42c391025735687ce71b9e59c95f3_::operator() @ 0x1C02A35F4
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B9A60 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

void __fastcall lambda_9bc42c391025735687ce71b9e59c95f3_::operator()(__int64 a1, __int64 a2)
{
  __int64 i; // rdi
  struct PFF *j; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  struct PFF *v7; // rax

  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 28) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
      {
        for ( j = *(struct PFF **)(a2 + 8 * i + 32); ; j = (struct PFF *)*((_QWORD *)v7 + 1) )
        {
          v7 = SkipInvalidPff(j);
          if ( !v7 )
            break;
          if ( *((_QWORD *)v7 + 11) == qword_1C032F1C8 )
          {
            v5 = 0LL;
            for ( *(_BYTE *)(*((_QWORD *)v7 + 10) + 12LL) = 1;
                  (unsigned int)v5 < *((_DWORD *)v7 + 9);
                  *(_QWORD *)(v6 + 16) = 0LL )
            {
              v6 = *(_QWORD *)(*((_QWORD *)v7 + 19) + 8 * v5);
              v5 = (unsigned int)(v5 + 1);
            }
          }
        }
      }
    }
  }
}
