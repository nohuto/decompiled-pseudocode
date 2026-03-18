/*
 * XREFs of TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C002071C
 * Callers:
 *     Control_Transfer_Complete @ 0x1C0021F9C (Control_Transfer_Complete.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0026914 (Isoch_Stage_CompleteTD.c)
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C002CE00 (Bulk_Transfer_PrepareForCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetUsbdStatusFromTrbCompletionCode(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx

  if ( a1 > 0x14 )
  {
    v8 = a1 - 23;
    if ( !v8 )
      return (unsigned int)-1073545216;
    v9 = v8 - 3;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
        return (unsigned int)-1073610752;
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 3;
        if ( v12 )
        {
          if ( v12 == 3 )
            return (unsigned int)-1073741802;
          return (unsigned int)-1073741807;
        }
        return (unsigned int)-1073741806;
      }
    }
    return 0;
  }
  if ( a1 == 20 )
    return (unsigned int)-1073741804;
  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( !v3 )
        return (unsigned int)-1073741805;
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( !v6 )
            return (unsigned int)-1073741820;
          v7 = v6 - 4;
          if ( !v7 )
            return (unsigned int)-1073741803;
          if ( v7 == 3 )
            return 0;
        }
        return (unsigned int)-1073741807;
      }
      return (unsigned int)-1073741806;
    }
    return 0;
  }
  return a2;
}
