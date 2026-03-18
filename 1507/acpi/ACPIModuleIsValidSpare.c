/*
 * XREFs of ACPIModuleIsValidSpare @ 0x1C007B910
 * Callers:
 *     <none>
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C0004D14 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIEvaluateSpareDsm @ 0x1C007B684 (ACPIEvaluateSpareDsm.c)
 */

char __fastcall ACPIModuleIsValidSpare(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 *v5; // rsi
  int v6; // ebx
  _QWORD v8[5]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v9[40]; // [rsp+48h] [rbp-30h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = 0;
  v5 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 704), 1297302623);
  if ( v5 )
  {
    memset(v9, 0, sizeof(v9));
    *(_QWORD *)&v9[16] = a2;
    *(_WORD *)&v9[2] = 1;
    v6 = ACPIEvaluateSpareDsm(v5, 1u, (__int128 *)v9, v8);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
    if ( v6 >= 0 && (WORD1(v8[0]) == 1 && !v8[2] || WORD1(v8[0]) == 2 && *(_BYTE *)v8[4] == 48) )
      v4 = 1;
  }
  AMLIFreeDataBuffs((__int64)v8);
  return v4;
}
