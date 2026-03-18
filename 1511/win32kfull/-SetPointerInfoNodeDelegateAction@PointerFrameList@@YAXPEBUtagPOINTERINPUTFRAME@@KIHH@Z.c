/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z @ 0x1C02302FC
 * Callers:
 *     DelegateCoalescePointerMessage @ 0x1C01FBC90 (DelegateCoalescePointerMessage.c)
 * Callees:
 *     ?IsAnyNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C022FC2C (-IsAnyNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

void __fastcall PointerFrameList::SetPointerInfoNodeDelegateAction(
        PointerFrameList *this,
        const struct tagPOINTERINPUTFRAME *a2,
        int a3,
        int a4,
        int a5)
{
  __int64 v5; // rdi
  int v8; // r10d
  int v9; // ebx
  int v10; // r11d
  int v11; // r8d
  int v12; // edx
  _DWORD *v13; // rcx
  __int64 v14; // rsi
  int v15; // r9d
  __int64 v16; // rdi
  unsigned int v17; // r11d
  unsigned int v18; // ebp
  __int64 v19; // rcx

  v5 = (unsigned int)a2;
  v8 = 1;
  if ( a3 == 585 )
  {
    v9 = 1;
    v10 = 0;
LABEL_3:
    v11 = 0;
    goto LABEL_4;
  }
  v9 = 0;
  if ( a3 == 586 )
  {
    v10 = 1;
    goto LABEL_3;
  }
  v10 = 0;
  if ( a3 == 593 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( a3 == 594 )
    {
      v12 = 1;
      goto LABEL_5;
    }
  }
LABEL_4:
  v12 = 0;
LABEL_5:
  v13 = (_DWORD *)(*((_QWORD *)this + 9) + 216 * v5);
  if ( a4 )
  {
    if ( v9 )
    {
      *v13 |= 0x1000000u;
    }
    else if ( v10 )
    {
      *v13 |= 0x10000000u;
    }
    else if ( v11 )
    {
      v13[1] |= 1u;
    }
    else if ( v12 )
    {
      v13[1] |= 0x10u;
    }
    else
    {
      *v13 |= 0x100000u;
    }
  }
  else if ( a5 )
  {
    if ( v9 )
    {
      *v13 |= 0x800000u;
    }
    else if ( v10 )
    {
      *v13 |= 0x8000000u;
    }
    else if ( v11 )
    {
      *v13 |= 0x80000000;
    }
    else if ( v12 )
    {
      v13[1] |= 8u;
    }
    else
    {
      *v13 |= 0x80000u;
    }
  }
  else if ( v9 )
  {
    *v13 |= 0x2000000u;
  }
  else if ( v10 )
  {
    *v13 |= 0x20000000u;
  }
  else if ( v11 )
  {
    v13[1] |= 2u;
  }
  else if ( v12 )
  {
    v13[1] |= 0x20u;
  }
  else
  {
    *v13 |= 0x200000u;
  }
  v14 = (unsigned int)v13[2];
  v15 = 0;
  v16 = *((_QWORD *)this + 10);
  v17 = 0;
  v18 = *((_DWORD *)this + 6);
  do
  {
    if ( v17 >= v18 )
      break;
    v19 = *((_QWORD *)this + 9) + 216LL * v17;
    if ( *(_DWORD *)(v19 + 8) == (_DWORD)v14
      && (unsigned int)IsAnyNodeMessageDelegated((const struct tagPOINTERINFONODE *)v19) )
    {
      v15 = v8;
    }
    v17 += v8;
  }
  while ( !v15 );
  *(_DWORD *)(v16 + 40 * v14 + 20) ^= (*(_DWORD *)(v16 + 40 * v14 + 20) ^ (8 * v15)) & 8;
}
