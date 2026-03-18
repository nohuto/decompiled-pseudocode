/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002C240
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002863C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  DC *v2; // r10
  int v3; // eax
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __m128i v7; // xmm0
  int v8; // ecx
  int v9; // eax
  __m128i v10; // xmm0
  __m128i v11; // [rsp+20h] [rbp-10h]
  struct REGION *v12; // [rsp+40h] [rbp+10h] BYREF

  v2 = this;
  if ( (*((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)this + 15) & 4) != 0 )
  {
    if ( a2 )
    {
      v12 = a2;
      v3 = RGNOBJ::iComplexity((RGNOBJ *)&v12);
      *(_DWORD *)(*(_QWORD *)(v4 + 80) + 392LL) = v3;
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v12) != 1 )
      {
        v8 = *((_DWORD *)v2 + 356);
        v11 = *(__m128i *)(v5 + 88);
        v7 = v11;
        v11.m128i_i32[2] -= v8;
        v11.m128i_i32[0] = _mm_cvtsi128_si32(v7) - v8;
        v9 = *((_DWORD *)v2 + 357);
        v11.m128i_i32[1] -= v9;
        v11.m128i_i32[3] -= v9;
        v6 = *((_QWORD *)v2 + 10);
        v10 = v11;
LABEL_8:
        *(__m128i *)(v6 + 396) = v10;
        *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v2 + 15) &= ~4u;
        return;
      }
      v6 = *((_QWORD *)v2 + 10);
    }
    else
    {
      v6 = *((_QWORD *)this + 10);
    }
    v10 = (__m128i)rclEmpty;
    goto LABEL_8;
  }
}
