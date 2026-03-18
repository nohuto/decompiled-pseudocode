/*
 * XREFs of CurveTransitions @ 0x1C00C6E48
 * Callers:
 *     Misoriented @ 0x1C00C65A0 (Misoriented.c)
 * Callees:
 *     FQuadraticEqn @ 0x1C00C7010 (FQuadraticEqn.c)
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
  __int64 *v14; // r10
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v21[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  int v23; // [rsp+84h] [rbp+Ch]
  int v24; // [rsp+94h] [rbp+1Ch]

  v24 = HIDWORD(a3);
  v23 = HIDWORD(a1);
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
    (__int64)v21,
    (__int64)&v22);
  v13 = 0;
  if ( (int)a5 > 0 )
  {
    v14 = (__int64 *)v21;
    v15 = (unsigned int)a5;
    while ( 1 )
    {
      v16 = *v14;
      if ( (unsigned __int64)(*v14 - 1) > 0xFFFF )
        goto LABEL_4;
      if ( (int)abs32(v7) > (int)abs32(v11) )
        break;
      v18 = ((__int64)(v24 - v23) << 32) + v16 * (((__int64)v12 << 16) + v16 * v9);
      if ( v11 < 0 )
      {
        v20 = v11;
        goto LABEL_14;
      }
      if ( v18 > 0 )
      {
        v19 = v11;
LABEL_10:
        if ( v18 <= v19 << 32 )
          goto LABEL_16;
      }
LABEL_4:
      ++v14;
      if ( !--v15 )
        return v13;
    }
    v18 = ((__int64)(v6 - v5) << 32) + v16 * (((__int64)v10 << 16) + v16 * v8);
    if ( v7 < 0 )
    {
      v20 = v7;
LABEL_14:
      if ( v20 << 32 > v18 || v18 >= 0 )
        goto LABEL_4;
LABEL_16:
      ++v13;
      goto LABEL_4;
    }
    if ( v18 <= 0 )
      goto LABEL_4;
    v19 = v7;
    goto LABEL_10;
  }
  return v13;
}
