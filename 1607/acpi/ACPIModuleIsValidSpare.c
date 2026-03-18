/*
 * XREFs of ACPIModuleIsValidSpare @ 0x1C009CD50
 * Callers:
 *     <none>
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C00080D4 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIEvaluateSpareDsm @ 0x1C009CAC8 (ACPIEvaluateSpareDsm.c)
 */

char __fastcall ACPIModuleIsValidSpare(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 *v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[40]; // [rsp+48h] [rbp-30h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = 0;
  v5 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1297302623);
  if ( v5 )
  {
    memset(v10, 0, sizeof(v10));
    *(_QWORD *)&v10[16] = a2;
    *(_WORD *)&v10[2] = 1;
    v6 = ACPIEvaluateSpareDsm(v5, 1u, (__int128 *)v10, v9);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v5, v7);
    if ( v6 >= 0 && (WORD1(v9[0]) == 1 && !v9[2] || WORD1(v9[0]) == 2 && *(_BYTE *)v9[4] == 48) )
      v4 = 1;
  }
  AMLIFreeDataBuffs((__int64)v9);
  return v4;
}
