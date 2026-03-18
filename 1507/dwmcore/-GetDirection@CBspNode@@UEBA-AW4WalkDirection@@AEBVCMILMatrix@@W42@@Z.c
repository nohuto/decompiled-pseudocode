/*
 * XREFs of ?GetDirection@CBspNode@@UEBA?AW4WalkDirection@@AEBVCMILMatrix@@W42@@Z @ 0x180158F10
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1800F3BC0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CBspNode::GetDirection(__int64 a1, _OWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  const struct D2DMatrix *v9; // rdx
  _OWORD v11[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  if ( !*(_DWORD *)(a1 + 64) )
    return a3;
  v5 = *(_QWORD **)(a1 + 40);
  v6 = a2[1];
  v11[0] = *a2;
  v7 = a2[2];
  v11[1] = v6;
  v8 = a2[3];
  v9 = (const struct D2DMatrix *)(*v5 + 144LL);
  v11[2] = v7;
  v11[3] = v8;
  D2DMatrixMultiply((struct D2DMatrix *)v11, v9, (const struct D2DMatrix *)v11);
  if ( CMILMatrix::IsFacingUser((CMILMatrix *)v11) )
    return a3;
  LOBYTE(v3) = a3 == 0;
  return v3;
}
