/*
 * XREFs of _handle_exc @ 0x18009F238
 * Callers:
 *     _except1 @ 0x18009F140 (_except1.c)
 * Callees:
 *     _decomp @ 0x18009F8C4 (_decomp.c)
 *     _set_statfp @ 0x18009FB24 (_set_statfp.c)
 */

__int64 __fastcall handle_exc(char a1, double *a2, __int16 a3)
{
  unsigned int v3; // r14d
  int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  BOOL v10; // ebp
  double v11; // xmm0_8
  int v12; // ecx
  double v13; // xmm0_8
  int v14; // r8d
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v19; // [rsp+70h] [rbp+8h] BYREF
  double v20; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v5 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a3 & 0x80u) != 0 )
  {
    set_statfp(1LL);
    v5 &= ~8u;
    goto LABEL_46;
  }
  if ( (a1 & 4) != 0 && (a3 & 0x200) != 0 )
  {
    set_statfp(4LL);
    v5 &= ~4u;
    goto LABEL_46;
  }
  if ( (a1 & 1) != 0 && (a3 & 0x400) != 0 )
  {
    set_statfp(8LL);
    v8 = a3 & 0x6000;
    if ( (a3 & 0x6000) != 0 )
    {
      if ( v8 != 0x2000 )
      {
        if ( v8 != 0x4000 )
        {
          if ( v8 != 24576 )
          {
LABEL_24:
            v5 &= ~1u;
            goto LABEL_46;
          }
          v9 = d_max;
          if ( *a2 <= 0.0 )
            goto LABEL_22;
LABEL_23:
          *(_QWORD *)a2 = v9;
          goto LABEL_24;
        }
        if ( *a2 <= 0.0 )
        {
          v9 = d_max;
LABEL_22:
          v9 ^= _xmm;
          goto LABEL_23;
        }
LABEL_20:
        v9 = d_inf;
        goto LABEL_23;
      }
      if ( *a2 > 0.0 )
      {
        v9 = d_max;
        goto LABEL_23;
      }
    }
    else if ( *a2 > 0.0 )
    {
      goto LABEL_20;
    }
    v9 = d_inf;
    goto LABEL_22;
  }
  if ( (a1 & 2) != 0 && (a3 & 0x800) != 0 )
  {
    v10 = (a1 & 0x10) != 0;
    if ( *a2 == 0.0 )
    {
      v10 = 1;
    }
    else
    {
      v11 = decomp(4LL, &v19);
      v12 = v19 - 1536;
      v20 = v11;
      if ( v19 - 1536 >= -1074 )
      {
        v14 = 0;
        LOBYTE(v14) = v11 < 0.0;
        HIWORD(v20) = BYTE6(v20) & 0xF | 0x10;
        if ( v12 < -1021 )
        {
          v15 = LODWORD(v20);
          v16 = (unsigned int)(-1021 - v12);
          v17 = HIDWORD(v20);
          do
          {
            if ( (v15 & 1) != 0 && !v10 )
              v10 = 1;
            v15 >>= 1;
            LODWORD(v20) = v15;
            if ( (v17 & 1) != 0 )
            {
              v15 |= 0x80000000;
              LODWORD(v20) = v15;
            }
            v17 >>= 1;
            --v16;
          }
          while ( v16 );
          HIDWORD(v20) = v17;
        }
        v13 = v20;
        if ( v14 )
          *(_QWORD *)&v13 = *(_QWORD *)&v20 ^ _xmm;
      }
      else
      {
        v13 = v11 * 0.0;
        v10 = 1;
      }
      *a2 = v13;
    }
    if ( v10 )
      set_statfp(16LL);
    v5 &= ~2u;
  }
LABEL_46:
  if ( (a1 & 0x10) != 0 && (a3 & 0x1000) != 0 )
  {
    set_statfp(32LL);
    v5 &= ~0x10u;
  }
  LOBYTE(v3) = v5 == 0;
  return v3;
}
