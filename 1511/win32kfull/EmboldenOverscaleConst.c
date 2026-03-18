/*
 * XREFs of EmboldenOverscaleConst @ 0x1C02DC0A8
 * Callers:
 *     fsc_OverscaleToBold @ 0x1C02DC368 (fsc_OverscaleToBold.c)
 * Callees:
 *     <none>
 */

char __fastcall EmboldenOverscaleConst(unsigned __int16 *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r8
  __int64 v3; // rbx
  unsigned __int16 v4; // dx
  unsigned __int8 *v5; // r9
  __int64 v6; // rdi
  unsigned __int8 *v7; // rdx
  unsigned __int8 v8; // r10
  unsigned __int8 *v9; // r11
  char v10; // al

  v1 = *a1;
  v2 = *((_QWORD *)a1 + 5);
  v3 = v1;
  v4 = a1[1] - a1[2];
  v5 = (unsigned __int8 *)(v1 + v2 - 1);
  if ( v4 )
  {
    v6 = v4;
    do
    {
      v7 = v5;
      if ( (unsigned __int64)v5 > v2 )
      {
        do
        {
          v9 = v7 - 1;
          v10 = *(v7 - 1);
          if ( *v7 || v10 )
          {
            v8 = *v7;
            *v7 = v8 | ((unsigned __int8)(v8 | ((unsigned __int8)(v8 | ((unsigned __int8)(v8 | ((unsigned __int8)(v8 | ((unsigned __int8)(v8 | (v8 >> 1)) >> 1)) >> 1)) >> 1)) >> 1)) >> 1) | (4 * (v10 | (2 * (v10 | (2 * (v10 | (2 * (v10 | (2 * (v10 | (2 * v10)))))))))));
          }
          --v7;
        }
        while ( (unsigned __int64)v9 > v2 );
      }
      v2 += v3;
      v5 += v3;
      LOBYTE(v1) = *v7 | ((unsigned __int8)(*v7 | ((unsigned __int8)(*v7 | ((unsigned __int8)(*v7 | ((unsigned __int8)(*v7 | ((unsigned __int8)(*v7 | (*v7 >> 1)) >> 1)) >> 1)) >> 1)) >> 1)) >> 1);
      *v7 = v1;
      --v6;
    }
    while ( v6 );
  }
  return v1;
}
