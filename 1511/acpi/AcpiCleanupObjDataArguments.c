/*
 * XREFs of AcpiCleanupObjDataArguments @ 0x1C003ECCC
 * Callers:
 *     AcpiCleanupObjDataArguments @ 0x1C003ECCC (AcpiCleanupObjDataArguments.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C003ED4C (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C003F360 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     AcpiCleanupObjDataArguments @ 0x1C003ECCC (AcpiCleanupObjDataArguments.c)
 */

void __fastcall AcpiCleanupObjDataArguments(__int64 a1, unsigned int a2)
{
  _DWORD **v2; // rbx
  __int64 i; // rsi
  _DWORD *v4; // rdi
  void *v5; // rcx

  if ( a1 && a2 )
  {
    v2 = (_DWORD **)(a1 + 32);
    for ( i = a2; i; --i )
    {
      if ( *((unsigned __int16 *)v2 - 15) >= 2u )
      {
        if ( *((unsigned __int16 *)v2 - 15) > 3u )
        {
          if ( *((_WORD *)v2 - 15) != 4 )
            goto LABEL_12;
          v4 = *v2;
          if ( !*v2 || !*v4 )
            goto LABEL_12;
          AcpiCleanupObjDataArguments(v4 + 2);
          v5 = v4;
LABEL_11:
          ExFreePoolWithTag(v5, 0x4E706341u);
          *v2 = 0LL;
          goto LABEL_12;
        }
        v5 = *v2;
        if ( *v2 )
          goto LABEL_11;
      }
LABEL_12:
      v2 += 5;
    }
  }
}
