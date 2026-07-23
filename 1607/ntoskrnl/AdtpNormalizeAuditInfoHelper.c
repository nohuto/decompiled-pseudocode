/*
 * XREFs of AdtpNormalizeAuditInfoHelper @ 0x140147FE0
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1402379CC (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14056B25C (AdtpWriteToEtw.c)
 * Callees:
 *     <none>
 */

void __fastcall AdtpNormalizeAuditInfoHelper(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // r8
  _QWORD *v5; // r8
  __int64 i; // rbx
  int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // rax
  unsigned int v10; // r10d
  _QWORD *v11; // rcx
  unsigned int v12; // r10d
  _QWORD *v13; // rcx

  if ( a1 )
  {
    if ( a2 || (*(_DWORD *)(a1 + 20) & 1) == 0 )
      return;
    v3 = *(_DWORD *)(a1 + 8);
    v4 = a1 + 24;
    a2 = a1;
  }
  else
  {
    if ( !a2 || (*(_DWORD *)(a2 + 24) & 1) == 0 )
      return;
    v3 = *(_DWORD *)(a2 + 12);
    v4 = a2 + 32;
  }
  if ( v3 )
  {
    v5 = (_QWORD *)(v4 + 24);
    for ( i = v3; i; --i )
    {
      v7 = *((_DWORD *)v5 - 6);
      if ( v7 > 16 )
      {
        if ( v7 != 17 )
        {
          if ( v7 <= 22 || v7 > 25 && (v7 <= 27 || v7 != 34 && v7 > 32) )
            goto LABEL_21;
LABEL_19:
          v8 = a2 + *v5;
          *v5 = v8;
          if ( ((v7 - 1) & 0xFFFFFFDE) == 0 )
            *(_QWORD *)(v8 + 8) += a2;
          goto LABEL_21;
        }
        *v5 += a1;
        v9 = *v5;
        if ( *(_DWORD *)*v5 )
        {
          *(_QWORD *)(v9 + 8) += a1;
          v12 = 0;
          v13 = (_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL);
          do
          {
            *v13 += a1;
            ++v12;
            v13 += 2;
          }
          while ( v12 < *(_DWORD *)v9 );
          goto LABEL_21;
        }
      }
      else
      {
        if ( v7 != 16 )
        {
          if ( v7 <= 0 || v7 > 2 && v7 != 4 && (v7 <= 7 || v7 > 9 && v7 != 13) )
            goto LABEL_21;
          goto LABEL_19;
        }
        *v5 += a2;
        v9 = *v5;
        if ( *(_DWORD *)*v5 )
        {
          *(_QWORD *)(v9 + 8) += a2;
          v10 = 0;
          v11 = (_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
          do
          {
            *v11 += a2;
            ++v10;
            v11 += 3;
          }
          while ( v10 < *(_DWORD *)v9 );
          goto LABEL_21;
        }
      }
      *(_QWORD *)(v9 + 8) = 0LL;
LABEL_21:
      v5 += 4;
    }
  }
}
