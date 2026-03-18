/*
 * XREFs of CurveTransitions @ 0x1C00B93B8
 * Callers:
 *     Misoriented @ 0x1C00B8B10 (Misoriented.c)
 * Callees:
 *     FQuadraticEqn @ 0x1C00B9580 (FQuadraticEqn.c)
 */

__int64 __fastcall CurveTransitions(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  int v6; // esi
  int v7; // r14d
  int v8; // r15d
  int v9; // edi
  int v10; // r12d
  int v11; // ebx
  int v12; // r13d
  unsigned int v13; // r8d
  __int64 *v14; // r9
  __int64 v15; // r10
  __int64 v16; // rcx
  int v18; // edx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  int v25; // [rsp+84h] [rbp+Ch]
  int v26; // [rsp+94h] [rbp+1Ch]

  v26 = HIDWORD(a3);
  v25 = HIDWORD(a1);
  v5 = a1;
  v6 = a3;
  v7 = a2 - a1;
  v8 = a5 + a3 - 2 * a4;
  v9 = HIDWORD(a3) - 2 * HIDWORD(a4) + HIDWORD(a5);
  v10 = 2 * (a4 - a3);
  v11 = HIDWORD(a2) - HIDWORD(a1);
  v12 = 2 * (HIDWORD(a4) - HIDWORD(a3));
  FQuadraticEqn(
    v9 * v7 - v8 * (HIDWORD(a2) - HIDWORD(a1)),
    v12 * (a2 - a1) - v10 * (HIDWORD(a2) - HIDWORD(a1)),
    HIDWORD(a3) * v7 + (HIDWORD(a2) - HIDWORD(a1)) * a1 - v7 * HIDWORD(a1) - a3 * (HIDWORD(a2) - HIDWORD(a1)),
    (unsigned int)&a5,
    (__int64)v23,
    (__int64)&v24);
  v13 = 0;
  if ( (int)a5 > 0 )
  {
    v14 = (__int64 *)v23;
    v15 = (unsigned int)a5;
    while ( 1 )
    {
      v16 = *v14;
      if ( (unsigned __int64)(*v14 - 1) > 0xFFFF )
        goto LABEL_4;
      v18 = v7;
      if ( v7 < 0 )
        v18 = -v7;
      v19 = v11;
      if ( v11 < 0 )
        v19 = -v11;
      if ( v18 > v19 )
        break;
      v20 = ((__int64)(v26 - v25) << 32) + v16 * (((__int64)v12 << 16) + v16 * v9);
      if ( v11 < 0 )
      {
        v22 = v11;
        goto LABEL_18;
      }
      if ( v20 > 0 )
      {
        v21 = v11;
LABEL_14:
        if ( v20 <= v21 << 32 )
          goto LABEL_20;
      }
LABEL_4:
      ++v14;
      if ( !--v15 )
        return v13;
    }
    v20 = ((__int64)(v6 - v5) << 32) + v16 * (((__int64)v10 << 16) + v16 * v8);
    if ( v7 < 0 )
    {
      v22 = v7;
LABEL_18:
      if ( v22 << 32 > v20 || v20 >= 0 )
        goto LABEL_4;
LABEL_20:
      ++v13;
      goto LABEL_4;
    }
    if ( v20 <= 0 )
      goto LABEL_4;
    v21 = v7;
    goto LABEL_14;
  }
  return v13;
}
