/*
 * XREFs of RaidInitializePerfOpts @ 0x1C00266E4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 * Callees:
 *     Template_qqqqqqq @ 0x1C00275CC (Template_qqqqqqq.c)
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, unsigned int *a3, __int64 a4)
{
  char v5; // dl
  __int64 v7; // rsi
  int v8; // ebp
  char v9; // r12
  unsigned int v10; // ebx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rax
  PDEVICE_OBJECT v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r15d
  int v21; // ecx
  unsigned int v22; // r13d
  unsigned int v23; // eax
  unsigned int v24; // r13d
  char v25; // r11
  unsigned __int16 epi16; // r10
  unsigned __int64 v27; // rdx
  int i; // r8d
  __int64 v29; // rax
  __int64 v30; // r9
  char v32; // [rsp+90h] [rbp+8h]
  char v33; // [rsp+A0h] [rbp+18h]

  v33 = 0;
  v5 = 0;
  v32 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !a1 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v12 = 22LL;
LABEL_6:
    WPP_SF_(v11->AttachedDevice, v12, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, a4);
LABEL_7:
    v10 = -1056964602;
    goto LABEL_84;
  }
  if ( !a3 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v12 = 23LL;
    goto LABEL_6;
  }
  v13 = *(__int64 **)(a1 - 16);
  v7 = *v13;
  if ( (*(_BYTE *)(*v13 + 104) & 0x10) == 0 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_19;
    }
    v15 = 24LL;
    goto LABEL_18;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
  {
    Template_qqqqqqq(
      a1,
      (unsigned int)&EventAdapterInitPerfConfigData,
      1,
      *a3,
      a3[1],
      a3[2],
      a3[3],
      a3[4],
      a3[5],
      a3[6]);
    v5 = 0;
  }
  v16 = *a3;
  v17 = 3;
  if ( *a3 >= 2 && a3[1] >= 0x18 )
  {
    v9 = 1;
    v17 = 7;
  }
  if ( v16 >= 3 && a3[1] >= 0x28 )
  {
    v33 = 1;
    v17 |= 0x18u;
  }
  if ( v16 >= 4 && a3[1] >= 0x28 )
  {
    v5 = 1;
    v17 |= 0x20u;
    v32 = 1;
  }
  if ( a2 )
  {
    a3[2] = v17;
    v8 = v17;
    goto LABEL_84;
  }
  LODWORD(v18) = a3[2];
  if ( (~v17 & (unsigned int)v18) != 0 )
  {
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_19;
    }
    v15 = 25LL;
LABEL_18:
    WPP_SF_(v14->AttachedDevice, v15, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, a4);
LABEL_19:
    v10 = -1056964607;
    goto LABEL_84;
  }
  if ( (v18 & 2) != 0 )
  {
    v8 = 2;
    *(_DWORD *)(v7 + 4744) = -a3[3];
  }
  v19 = a3[2];
  if ( (v19 & 1) != 0 )
  {
    *(_WORD *)(v7 + 4740) |= 1u;
    v8 |= 1u;
    if ( *(_BYTE *)(v7 + 4449) == 1 && *(_QWORD *)(v7 + 4760) && *(_QWORD *)(v7 + 4440) )
    {
      v20 = 0;
      v21 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 4432) + 4LL);
      v22 = v21 - 1;
      if ( v9 && (a3[2] & 4) != 0 )
      {
        v20 = a3[4];
        v23 = a3[5];
        if ( v20 > v23 || v23 > v22 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 26LL, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, a4);
          }
          v10 = -1056964607;
          goto LABEL_84;
        }
        v22 = a3[5];
        LOWORD(v21) = v23 - v20 + 1;
        v8 |= 4u;
      }
      *(_WORD *)(v7 + 4740) = *(_WORD *)(v7 + 4740) ^ (*(_WORD *)(v7 + 4740) ^ (4 * v21)) & 0x3FC | 2;
      v24 = v22 + 1;
      *(_WORD *)(v7 + 4742) = KeQueryActiveGroupCount();
      if ( v20 < v24 )
      {
        v25 = v33;
        v18 = 16LL * v20;
        do
        {
          epi16 = _mm_extract_epi16(*(__m128i *)(v18 + *(_QWORD *)(v7 + 4440)), 4);
          v27 = *(_QWORD *)(v18 + *(_QWORD *)(v7 + 4440));
          if ( epi16 != 0xFFFF )
          {
            if ( v33 && (a3[2] & 0xC) == 0xC )
            {
              v8 |= 8u;
              *(_WORD *)(v18 + *((_QWORD *)a3 + 4) + 8) = epi16;
              *(_QWORD *)(v18 + *((_QWORD *)a3 + 4)) = v27;
            }
            if ( v20 < 0xFF )
            {
              for ( i = 0; v27; v27 >>= 1 )
              {
                if ( (v27 & 1) != 0 )
                {
                  v29 = *(_QWORD *)(v7 + 4760);
                  v30 = i + (epi16 << 6);
                  if ( *(_BYTE *)(v30 + v29) == 0xFF )
                    *(_BYTE *)(v30 + v29) = v20;
                }
                ++i;
              }
            }
          }
          ++v20;
          v18 += 16LL;
        }
        while ( v20 < v24 );
        v5 = v32;
        goto LABEL_73;
      }
    }
    v5 = v32;
  }
  else if ( v9 && (v19 & 4) != 0 || (v19 & 0x20) != 0 )
  {
    goto LABEL_19;
  }
  v25 = v33;
LABEL_73:
  if ( v25 )
  {
    LODWORD(v18) = a3[2];
    if ( (v18 & 8) != 0 )
    {
      v8 |= 8u;
      a3[6] = *(_DWORD *)(v7 + 4736);
    }
    if ( (v18 & 0x10) != 0 )
    {
      if ( (v8 & 1) == 0 )
        goto LABEL_19;
      v8 |= 0x10u;
      *(_BYTE *)(v7 + 4451) |= 1u;
    }
  }
  if ( v5 && (a3[2] & 0x20) != 0 )
  {
    v8 |= 0x20u;
    *(_BYTE *)(v7 + 4451) |= 2u;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    Template_qqqqqqq(
      v18,
      (unsigned int)&EventAdapterFinalPerfConfigData,
      1,
      *a3,
      a3[1],
      a3[2],
      a3[3],
      a3[4],
      a3[5],
      a3[6]);
LABEL_84:
  if ( v8 != a3[2] )
  {
    if ( (v8 & 2) != 0 )
      *(_DWORD *)(v7 + 4744) = 0;
    if ( (v8 & 1) != 0 )
    {
      *(_WORD *)(v7 + 4740) = 0;
      *(_BYTE *)(v7 + 4451) &= ~1u;
    }
    if ( (v8 & 0x20) != 0 )
      *(_BYTE *)(v7 + 4451) &= ~2u;
  }
  return v10;
}
