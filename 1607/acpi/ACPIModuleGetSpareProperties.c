/*
 * XREFs of ACPIModuleGetSpareProperties @ 0x1C009CC80
 * Callers:
 *     <none>
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C00080D4 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIEvaluateSpareDsm @ 0x1C009CAC8 (ACPIEvaluateSpareDsm.c)
 *     ACPIQuerySpareDsm @ 0x1C009CE2C (ACPIQuerySpareDsm.c)
 */

__int64 __fastcall ACPIModuleGetSpareProperties(__int64 a1, _DWORD *a2)
{
  __int64 *v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  _WORD v8[28]; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  memset(v8, 0, 0x28uLL);
  v4 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1297302623);
  if ( v4 )
  {
    if ( (int)ACPIQuerySpareDsm(a1, &v9) >= 0 && (v9 & 4) != 0 )
    {
      v5 = ACPIEvaluateSpareDsm(v4, 2u, 0LL, v8);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v4, v6);
      if ( v5 >= 0 )
      {
        if ( v8[1] == 1 )
        {
          if ( (v8[8] & 1) != 0 )
            *a2 |= 1u;
          if ( (v8[8] & 2) != 0 )
            *a2 |= 4u;
          v5 = 0;
        }
        else
        {
          v5 = -1073741811;
        }
      }
    }
    else
    {
      v5 = -1073741637;
    }
  }
  else
  {
    v5 = -1073741275;
  }
  AMLIFreeDataBuffs((__int64)v8);
  return (unsigned int)v5;
}
