/*
 * XREFs of ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00831B0
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00310F0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002E0A0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ULongAdd @ 0x1C0053900 (ULongAdd.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddNullScan(RGNMEMOBJ *this, int a2, int a3)
{
  __int64 v3; // rax
  ULONG v7; // ecx
  __int64 result; // rax
  _DWORD *v9; // rdx
  ULONG pulResult; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v7 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v7 - *(_DWORD *)(v3 + 80) < 0x10
    && (ULongAdd(v7, 0x880u, &pulResult) < 0 || !(unsigned int)RGNOBJ::bExpand(this, pulResult)) )
  {
    return 0LL;
  }
  result = 1LL;
  v9 = *(_DWORD **)(*(_QWORD *)this + 40LL);
  ++*(_DWORD *)(*(_QWORD *)this + 84LL);
  v9[1] = a2;
  v9[2] = a3;
  *(_DWORD *)(*(_QWORD *)this + 80LL) += 16;
  v9[3] = 0;
  *v9 = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v9 + 4;
  return result;
}
