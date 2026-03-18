/*
 * XREFs of AdtpNormalizeAuditInfo @ 0x1405A1AD4
 * Callers:
 *     AdtpWriteToEtw @ 0x1405A166C (AdtpWriteToEtw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AdtpNormalizeAuditInfo(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r11d
  __int64 i; // r8
  int v5; // ecx
  unsigned int v6; // r9d
  _QWORD *v7; // rcx
  unsigned int v8; // r9d
  _QWORD *v9; // rcx

  result = *(unsigned int *)(a1 + 20);
  if ( (result & 1) != 0 )
  {
    v3 = 0;
    for ( i = a1 + 24; v3 < *(_DWORD *)(a1 + 8); i += 32LL )
    {
      v5 = *(_DWORD *)i;
      if ( *(int *)i > 16 )
      {
        if ( v5 != 17 )
        {
          if ( v5 <= 22 || v5 > 25 && (v5 <= 27 || v5 > 32 && v5 != 34) )
            goto LABEL_15;
LABEL_13:
          *(_QWORD *)(i + 24) += a1;
          result = (unsigned int)(v5 - 1);
          if ( (result & 0xFFFFFFDE) == 0 )
            *(_QWORD *)(*(_QWORD *)(i + 24) + 8LL) += a1;
          goto LABEL_15;
        }
        *(_QWORD *)(i + 24) += a1;
        result = *(_QWORD *)(i + 24);
        if ( *(_DWORD *)result )
        {
          *(_QWORD *)(result + 8) += a1;
          v8 = 0;
          v9 = (_QWORD *)(*(_QWORD *)(result + 8) + 8LL);
          do
          {
            *v9 += a1;
            ++v8;
            v9 += 2;
          }
          while ( v8 < *(_DWORD *)result );
          goto LABEL_15;
        }
      }
      else
      {
        if ( v5 != 16 )
        {
          if ( v5 <= 0 || v5 > 2 && v5 != 4 && (v5 <= 7 || v5 > 9 && v5 != 13) )
            goto LABEL_15;
          goto LABEL_13;
        }
        *(_QWORD *)(i + 24) += a1;
        result = *(_QWORD *)(i + 24);
        if ( *(_DWORD *)result )
        {
          *(_QWORD *)(result + 8) += a1;
          v6 = 0;
          v7 = (_QWORD *)(*(_QWORD *)(result + 8) + 16LL);
          do
          {
            *v7 += a1;
            ++v6;
            v7 += 3;
          }
          while ( v6 < *(_DWORD *)result );
          goto LABEL_15;
        }
      }
      *(_QWORD *)(result + 8) = 0LL;
LABEL_15:
      ++v3;
    }
  }
  return result;
}
