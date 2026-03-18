/*
 * XREFs of ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x18015D094
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800199A0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CExpressionValue::GetValueSizeInBytes(CExpressionValue *this)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = 0LL;
  if ( *((_BYTE *)this + 68) )
  {
    v2 = *((_DWORD *)this + 16) - 17;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 17;
        if ( v4 )
        {
          v5 = v4 - 17;
          if ( v5 )
          {
            v6 = v5 - 17;
            if ( v6 && (v7 = v6 - 1) != 0 && (v8 = v7 - 1) != 0 )
            {
              v9 = v8 - 33;
              if ( v9 )
              {
                if ( v9 == 161 )
                  return 64LL;
              }
              else
              {
                return 24LL;
              }
            }
            else
            {
              return 16LL;
            }
          }
          else
          {
            return 12LL;
          }
        }
        else
        {
          return 8LL;
        }
      }
      else
      {
        return 4LL;
      }
    }
    else
    {
      return 1LL;
    }
  }
  return v1;
}
