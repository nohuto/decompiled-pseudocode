/*
 * XREFs of DxgkFunctionalizePathsModality @ 0x1C00C31E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkFunctionalizePathsModality(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-48h]
  __int16 v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int64 v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  char v19; // [rsp+68h] [rbp-18h]
  BOOL v20; // [rsp+6Ch] [rbp-14h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]

  v5 = a1;
  if ( !a2 )
    return 3221225485LL;
  if ( (a1 & 0xFFFD7FFF) != 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v9 + 24) = 227LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v18 = a2;
  v11 = 0LL;
  v12 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v10 = 0;
  v13 = 0LL;
  v14 = 0;
  v17 = 0LL;
  v19 = 0;
  v21 = 1;
  v22 = 0;
  v20 = (v5 & 0x8000) != 0;
  v6 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v10, v5, a3, a4);
  v20 = 0;
  v7 = v6;
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v10);
  return v7;
}
