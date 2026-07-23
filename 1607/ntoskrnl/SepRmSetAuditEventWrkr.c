/*
 * XREFs of SepRmSetAuditEventWrkr @ 0x14056BDF8
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 */

char __fastcall SepRmSetAuditEventWrkr(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  int v4; // eax
  int *v5; // rdx
  unsigned __int16 *v6; // r11
  __int64 v7; // rdi
  unsigned __int16 v8; // r10
  __int16 v9; // r8
  __int16 v10; // r9
  __int64 v11; // rbx
  int v12; // eax

  v3 = 0;
  *(_DWORD *)(a2 + 40) = 0;
  LOBYTE(v4) = PsIsCurrentThreadInServerSilo();
  if ( !(_BYTE)v4 )
  {
    v5 = SeAuditingStateByCategory;
    v6 = AdtpPerCategoryCount;
    v7 = 9LL;
    while ( 1 )
    {
      v8 = *v6;
      v9 = 0;
      *v5 = 0;
      v10 = 0;
      if ( !v8 )
        goto LABEL_11;
      v11 = v8;
      do
      {
        *(_WORD *)&SeAuditingState[2 * v3] = 0;
        if ( (*(_BYTE *)(a1 + 2LL * v3 + 44) & 1) != 0 )
        {
          SeAuditingState[2 * v3] = 1;
          ++v9;
        }
        if ( (*(_BYTE *)(a1 + 2LL * v3 + 44) & 2) != 0 )
        {
          SeAuditingState[2 * v3 + 1] = 1;
          ++v10;
        }
        ++v3;
        --v11;
      }
      while ( v11 );
      if ( v9 )
      {
        if ( v9 == v8 )
        {
          v12 = 1;
          *v5 = 1;
          goto LABEL_13;
        }
        v12 = 2;
      }
      else
      {
LABEL_11:
        v12 = 4;
      }
      *v5 = v12;
LABEL_13:
      if ( v10 )
      {
        if ( v10 == v8 )
          v4 = v12 | 0x10;
        else
          v4 = v12 | 0x20;
      }
      else
      {
        v4 = v12 | 0x40;
      }
      *v5 = v4;
      ++v6;
      ++v5;
      if ( !--v7 )
      {
        SepRmAuditingEnabled = 1;
        return v4;
      }
    }
  }
  return v4;
}
