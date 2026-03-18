/*
 * XREFs of DxgkPersistPathsModality @ 0x1C00DABF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008D0CC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkPersistPathsModality(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct _D3DKMT_GETPATHSMODALITY *v6[4]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  bool v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  v11 = a2;
  LODWORD(v6[0]) = 0;
  memset(&v6[1], 0, 24);
  v12 = a2 == 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v13 = 0;
  v14 = 1;
  v15 = 0;
  v4 = CCD_TOPOLOGY::Persist(v6, a1, 0LL, a4);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v6);
  return v4;
}
