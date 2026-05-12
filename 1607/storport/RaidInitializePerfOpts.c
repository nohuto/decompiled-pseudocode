/*
 * XREFs of RaidInitializePerfOpts @ 0x1C0018D9C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     Template_qqqqqqq @ 0x1C002AC4C (Template_qqqqqqq.c)
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, unsigned int *a3)
{
  char v4; // dl
  unsigned int *v5; // rdi
  __int64 v6; // rsi
  int v7; // ebp
  bool v8; // r15
  char v9; // r12
  unsigned int v10; // ebx
  __int64 *v11; // rax
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r15d
  int v17; // ecx
  unsigned int v18; // r13d
  unsigned int v19; // r13d
  char v20; // r11
  unsigned __int16 epi16; // r10
  unsigned __int64 v22; // rdx
  __int64 v24; // rax
  __int64 v25; // r9
  PDEVICE_OBJECT v26; // rcx
  __int64 v27; // rdx
  PDEVICE_OBJECT v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // eax
  char v31; // [rsp+90h] [rbp+8h]
  char v32; // [rsp+A0h] [rbp+18h]

  v31 = 0;
  v4 = 0;
  v32 = 0;
  v5 = a3;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  LOBYTE(a3) = 0;
  v10 = 0;
  if ( !a1 )
  {
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_59;
    }
    v27 = 22LL;
LABEL_58:
    WPP_SF_(v26->AttachedDevice, v27, &WPP_222db84838ff3f85fffe5432ece91366_Traceguids, 0LL);
    goto LABEL_59;
  }
  if ( !v5 )
  {
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_59;
    }
    v27 = 23LL;
    goto LABEL_58;
  }
  v11 = *(__int64 **)(a1 - 16);
  v6 = *v11;
  if ( (*(_BYTE *)(*v11 + 104) & 0x10) == 0 )
  {
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_69;
    }
    v29 = 24LL;
LABEL_68:
    WPP_SF_(v28->AttachedDevice, v29, &WPP_222db84838ff3f85fffe5432ece91366_Traceguids, 0LL);
    goto LABEL_69;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
  {
    Template_qqqqqqq(
      a1,
      (unsigned int)&EventAdapterInitPerfConfigData,
      (_DWORD)a3,
      *v5,
      v5[1],
      v5[2],
      v5[3],
      v5[4],
      v5[5],
      v5[6]);
    LOBYTE(a3) = 0;
    v4 = 0;
  }
  v12 = *v5;
  v13 = 3;
  if ( *v5 )
    v8 = v5[1] >= 0xC;
  if ( v12 >= 2 && v5[1] >= 0x18 )
  {
    v9 = 1;
    v13 = 7;
  }
  if ( v12 >= 3 && v5[1] >= 0x28 )
  {
    LOBYTE(a3) = 1;
    v31 = 1;
    v13 |= 0x18u;
  }
  if ( v12 >= 4 && v5[1] >= 0x28 )
  {
    v4 = 1;
    v13 |= 0x20u;
    v32 = 1;
  }
  if ( !v8 && !v9 && !(_BYTE)a3 && !v4 )
  {
    if ( a2 )
    {
      *v5 = 1;
      v5[1] = 12;
      goto LABEL_18;
    }
LABEL_59:
    v10 = -1056964602;
    goto LABEL_49;
  }
LABEL_18:
  if ( a2 )
  {
    v5[2] = v13;
    v7 = v13;
    v10 = 0;
    goto LABEL_49;
  }
  LODWORD(v14) = v5[2];
  if ( (~v13 & (unsigned int)v14) != 0 )
  {
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_69;
    }
    v29 = 25LL;
    goto LABEL_68;
  }
  if ( (v14 & 2) != 0 )
  {
    v7 = 2;
    *(_DWORD *)(v6 + 4744) = -v5[3];
  }
  v15 = v5[2];
  if ( (v15 & 1) == 0 )
  {
    if ( (!v9 || (v15 & 4) == 0) && (v15 & 0x20) == 0 )
      goto LABEL_90;
LABEL_69:
    v10 = -1056964607;
    goto LABEL_49;
  }
  *(_WORD *)(v6 + 4740) |= 1u;
  v7 |= 1u;
  if ( *(_BYTE *)(v6 + 4449) != 1 || !*(_QWORD *)(v6 + 4760) || !*(_QWORD *)(v6 + 4440) )
    goto LABEL_86;
  v16 = 0;
  v17 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 4432) + 4LL);
  v18 = v17 - 1;
  if ( !v9 || (v5[2] & 4) == 0 )
    goto LABEL_28;
  v16 = v5[4];
  v30 = v5[5];
  if ( v16 > v30 || v30 > v18 )
  {
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_69;
    }
    v29 = 26LL;
    goto LABEL_68;
  }
  v18 = v5[5];
  LOWORD(v17) = v30 - v16 + 1;
  v7 |= 4u;
LABEL_28:
  *(_WORD *)(v6 + 4740) = *(_WORD *)(v6 + 4740) ^ (*(_WORD *)(v6 + 4740) ^ (4 * v17)) & 0x3FC | 2;
  v19 = v18 + 1;
  *(_WORD *)(v6 + 4742) = KeQueryActiveGroupCount();
  if ( v16 >= v19 )
  {
LABEL_86:
    v4 = v32;
LABEL_90:
    v20 = v31;
    goto LABEL_40;
  }
  v20 = v31;
  v14 = 16LL * v16;
  do
  {
    epi16 = _mm_extract_epi16(*(__m128i *)(v14 + *(_QWORD *)(v6 + 4440)), 4);
    v22 = *(_QWORD *)(v14 + *(_QWORD *)(v6 + 4440));
    if ( epi16 != 0xFFFF )
    {
      if ( v31 && (v5[2] & 0xC) == 0xC )
      {
        v7 |= 8u;
        *(_WORD *)(v14 + *((_QWORD *)v5 + 4) + 8) = epi16;
        *(_QWORD *)(v14 + *((_QWORD *)v5 + 4)) = v22;
      }
      if ( v16 < 0xFF )
      {
        for ( LODWORD(a3) = 0; v22; v22 >>= 1 )
        {
          if ( (v22 & 1) != 0 )
          {
            v24 = *(_QWORD *)(v6 + 4760);
            v25 = (unsigned int)a3 + (epi16 << 6);
            if ( *(_BYTE *)(v25 + v24) == 0xFF )
              *(_BYTE *)(v25 + v24) = v16;
          }
          LODWORD(a3) = (_DWORD)a3 + 1;
        }
      }
    }
    ++v16;
    v14 += 16LL;
  }
  while ( v16 < v19 );
  v4 = v32;
LABEL_40:
  if ( v20 )
  {
    LODWORD(v14) = v5[2];
    if ( (v14 & 8) != 0 )
    {
      v7 |= 8u;
      v5[6] = *(_DWORD *)(v6 + 4736);
    }
    if ( (v14 & 0x10) != 0 )
    {
      if ( (v7 & 1) == 0 )
      {
        v10 = -1056964607;
        goto LABEL_49;
      }
      v7 |= 0x10u;
      *(_BYTE *)(v6 + 4451) |= 1u;
    }
  }
  if ( v4 && (v5[2] & 0x20) != 0 )
  {
    v7 |= 0x20u;
    *(_BYTE *)(v6 + 4451) |= 2u;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    Template_qqqqqqq(
      v14,
      (unsigned int)&EventAdapterFinalPerfConfigData,
      (_DWORD)a3,
      *v5,
      v5[1],
      v5[2],
      v5[3],
      v5[4],
      v5[5],
      v5[6]);
LABEL_49:
  if ( v7 != v5[2] )
  {
    if ( (v7 & 2) != 0 )
      *(_DWORD *)(v6 + 4744) = 0;
    if ( (v7 & 1) != 0 )
    {
      *(_WORD *)(v6 + 4740) = 0;
      *(_BYTE *)(v6 + 4451) &= ~1u;
    }
    if ( (v7 & 0x20) != 0 )
      *(_BYTE *)(v6 + 4451) &= ~2u;
  }
  return v10;
}
