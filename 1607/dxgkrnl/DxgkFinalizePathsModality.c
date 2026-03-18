/*
 * XREFs of DxgkFinalizePathsModality @ 0x1C00DB370
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008CFD0 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFinalizePathsModality(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // [rsp+20h] [rbp-60h] BYREF
  __int64 v4; // [rsp+28h] [rbp-58h]
  __int64 v5; // [rsp+30h] [rbp-50h]
  __int64 v6; // [rsp+38h] [rbp-48h]
  __int16 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  char v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  if ( !a1 )
    return 3221225485LL;
  v11 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v10 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 1;
  v15 = 0;
  v1 = CCD_TOPOLOGY::FinalizeTopology((CCD_TOPOLOGY *)&v3);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v3);
  return v1;
}
