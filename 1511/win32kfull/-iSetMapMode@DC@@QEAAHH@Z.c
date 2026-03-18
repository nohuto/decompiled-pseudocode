/*
 * XREFs of ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0008A74
 * Callers:
 *     NtGdiGetAndSetDCDword @ 0x1C00FD150 (NtGdiGetAndSetDCDword.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vComputePageXform@DC@@QEAAXXZ @ 0x1C02B08E8 (-vComputePageXform@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::iSetMapMode(DC *this, int a2)
{
  unsigned int v2; // r14d
  _DWORD *v5; // rcx
  unsigned int v6; // r15d
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  INT *v11; // rbx
  int v12; // xmm3_4
  int v13; // xmm0_4
  __int64 v14; // rax
  int v15; // xmm1_4
  __int64 v16; // rcx
  __int128 v17; // xmm0
  unsigned int v18; // edx
  unsigned int v19; // ecx
  INT v20; // ebx
  _BYTE v21[80]; // [rsp+20h] [rbp-68h] BYREF
  INT *v22; // [rsp+90h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != 8 )
  {
    v2 = *(_DWORD *)(*((_QWORD *)this + 10) + 312LL);
    if ( (v2 & 7) != 0 )
      DC::dwSetLayout(this, -1, 0);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 10);
  v6 = v5[77];
  if ( a2 == v6 && a2 != 7 )
    return v6;
  if ( a2 == 1 )
  {
    v5[82] = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 344LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 348LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 308LL) = 1;
    *(_DWORD *)(*((_QWORD *)this + 10) + 292LL) = ef16;
    v8 = *((_QWORD *)this + 10);
    *((_DWORD *)this + 111) = ef16;
    *(_DWORD *)(v8 + 296) = ef16;
    *((_DWORD *)this + 112) = ef16;
    *((_DWORD *)this + 84) = ef16;
    v9 = *((_QWORD *)this + 10);
    *((_DWORD *)this + 87) = ef16;
    *((_DWORD *)this + 92) = 11;
    *(_OWORD *)(v9 + 184) = *((_OWORD *)this + 21);
    *(_OWORD *)(v9 + 200) = *((_OWORD *)this + 22);
    *(_DWORD *)(v9 + 216) = *((_DWORD *)this + 92);
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x3090u;
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF8BF;
    goto LABEL_6;
  }
  if ( a2 == 8 )
  {
    v5[77] = 8;
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF7BF;
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x400u;
    goto LABEL_6;
  }
  if ( (unsigned int)(a2 - 1) <= 7 )
  {
    v10 = v5[89];
    if ( !v10 )
    {
      v22 = (INT *)*((_QWORD *)this + 6);
      v11 = v22;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v22);
      *(_DWORD *)(*((_QWORD *)this + 10) + 344LL) = v11[544];
      *(_DWORD *)(*((_QWORD *)this + 10) + 348LL) = -v11[545];
      if ( a2 == 2 )
      {
        *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = (v11[542] + 50) / 0x64u;
        v18 = (v11[543] + 50) / 0x64u;
      }
      else
      {
        if ( a2 != 3 )
        {
          switch ( a2 )
          {
            case 4:
              *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = (v11[542] + 127) / 0xFEu;
              v19 = (v11[543] + 127) / 0xFEu;
              break;
            case 5:
              *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = EngMulDiv(v11[542], 10, 254);
              v19 = EngMulDiv(v11[543], 10, 254);
              break;
            case 6:
              *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = EngMulDiv(v11[542], 144, 2540);
              *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = EngMulDiv(v11[543], 144, 2540);
              if ( *((float *)this + 115) == 0.0 )
              {
                DC::vComputePageXform(this);
                v12 = *((_DWORD *)this + 112);
                *((_DWORD *)this + 115) = *((_DWORD *)this + 111);
                *((_DWORD *)this + 116) = v12;
              }
              *(_DWORD *)(*((_QWORD *)this + 10) + 308LL) = 6;
              v13 = *((_DWORD *)this + 115);
              *(_DWORD *)(*((_QWORD *)this + 10) + 292LL) = v13;
              v14 = *((_QWORD *)this + 10);
              v15 = *((_DWORD *)this + 116);
              *((_DWORD *)this + 111) = v13;
              *(_DWORD *)(v14 + 296) = v15;
              v16 = *((_QWORD *)this + 10);
              *((_DWORD *)this + 84) = *((_DWORD *)this + 115);
              *((_DWORD *)this + 87) = *((_DWORD *)this + 116);
              *((_DWORD *)this + 92) = 9;
              v17 = *((_OWORD *)this + 21);
              *((_DWORD *)this + 112) = v15;
              *(_OWORD *)(v16 + 184) = v17;
              *(_OWORD *)(v16 + 200) = *((_OWORD *)this + 22);
              *(_DWORD *)(v16 + 216) = *((_DWORD *)this + 92);
              *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x22D0u;
              *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE2FF;
              goto LABEL_32;
            case 7:
              *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = (v11[542] + 50) / 0x64u;
              *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = (v11[543] + 50) / 0x64u;
              *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF7BF;
              *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x400u;
LABEL_31:
              *(_DWORD *)(*((_QWORD *)this + 10) + 308LL) = a2;
              *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x4090u;
LABEL_32:
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
              goto LABEL_6;
            default:
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
              return 0LL;
          }
          *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = v19;
LABEL_30:
          *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x40u;
          *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF3FF;
          goto LABEL_31;
        }
        *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = (v11[542] + 5) / 0xAu;
        v18 = (v11[543] + 5) / 0xAu;
      }
      *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = v18;
      goto LABEL_30;
    }
    v5[86] = v10;
    *(_DWORD *)(*((_QWORD *)this + 10) + 348LL) = -*(_DWORD *)(*((_QWORD *)this + 10) + 360LL);
    if ( a2 == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 10) + 364LL);
      *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 10) + 368LL);
    }
    else if ( a2 == 3 )
    {
      *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 10) + 364LL);
      *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 100 * *(_DWORD *)(*((_QWORD *)this + 10) + 368LL);
    }
    else
    {
      switch ( a2 )
      {
        case 4:
          v20 = 1000;
          break;
        case 5:
          v20 = 10000;
          break;
        case 6:
          v20 = 14400;
          break;
        case 7:
          *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 10) + 364LL);
          *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = 10 * *(_DWORD *)(*((_QWORD *)this + 10) + 368LL);
          *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF7BF;
          *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x400u;
          goto LABEL_51;
        default:
          return 0LL;
      }
      *(_DWORD *)(*((_QWORD *)this + 10) + 328LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 10) + 364LL), v20, 254);
      *(_DWORD *)(*((_QWORD *)this + 10) + 332LL) = EngMulDiv(*(_DWORD *)(*((_QWORD *)this + 10) + 368LL), v20, 254);
    }
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x40u;
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFF3FF;
LABEL_51:
    *(_DWORD *)(*((_QWORD *)this + 10) + 308LL) = a2;
    *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x4090u;
LABEL_6:
    if ( (v2 & 7) != 0 )
      DC::dwSetLayout(this, -1, v2);
    return v6;
  }
  return 0LL;
}
