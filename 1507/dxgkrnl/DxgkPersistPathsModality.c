/*
 * XREFs of DxgkPersistPathsModality @ 0x1C00B1060
 * Callers:
 *     <none>
 * Callees:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006419C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkPersistPathsModality(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+28h] [rbp-58h]
  __int64 v8; // [rsp+30h] [rbp-50h]
  __int64 v9; // [rsp+38h] [rbp-48h]
  __int16 v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  bool v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]
  int v17; // [rsp+70h] [rbp-10h]

  v14 = a2;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v15 = a2 == 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v16 = 0;
  v17 = 1;
  v4 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)&v6, a1, 0LL, a4);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v6);
  return v4;
}
