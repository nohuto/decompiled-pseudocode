/*
 * XREFs of MiMakeShadowPageTableRange @ 0x14065BCA0
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14065BCA0 (MiMakeShadowPageTableRange.c)
 *     MmCreateShadowMapping @ 0x14065BD7C (MmCreateShadowMapping.c)
 * Callees:
 *     MiReadWriteAnyLevelShadowPte @ 0x1401EF280 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeShadowPageTable @ 0x14065BA6C (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x14065BCA0 (MiMakeShadowPageTableRange.c)
 */

void __fastcall MiMakeShadowPageTableRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        signed int a4,
        __int64 **a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 *v8; // rdx
  __int64 *v9; // rax
  int v10; // [rsp+50h] [rbp+18h]

  v10 = a3;
  v6 = a1;
  v7 = a2;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v6 = *(_QWORD *)(a3 + 16LL * a4);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a4 + 8) )
    v7 = *(_QWORD *)(a3 + 16LL * a4 + 8);
  for ( ; v6 <= v7; v6 += 8LL )
  {
    if ( (MiReadWriteAnyLevelShadowPte(v6, (unsigned int)a4, 0, ZeroPte) & 1) == 0 )
    {
      if ( a4 )
      {
        v8 = *a5;
        v9 = (__int64 *)**a5;
        a5[3] = (__int64 *)((char *)a5[3] + 1);
        *a5 = v9;
      }
      else
      {
        v8 = 0LL;
      }
      MiInitializeShadowPageTable(v6, (__int64)v8, a4);
    }
    if ( (unsigned int)a4 > *((_DWORD *)a5 + 10) )
      MiMakeShadowPageTableRange(
        (__int64)(v6 << 25) >> 16,
        ((__int64)(v6 << 25) >> 16) + 4088,
        v10,
        a4 - 1,
        (__int64)a5);
  }
}
