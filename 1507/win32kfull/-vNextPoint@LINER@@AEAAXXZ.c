/*
 * XREFs of ?vNextPoint@LINER@@AEAAXXZ @ 0x1C00CBAB8
 * Callers:
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C00CBC4C (-vNextEvent@LINER@@QEAAXXZ.c)
 * Callees:
 *     ?bNextFigure@READER@@IEAAHXZ @ 0x1C00CC12C (-bNextFigure@READER@@IEAAHXZ.c)
 *     ?bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z @ 0x1C00CC184 (-bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z @ 0x1C011A610 (-vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall LINER::vNextPoint(LINER *this)
{
  int v2; // eax
  struct _POINTFIX *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ecx
  int v7; // eax
  struct _POINTFIX *v8; // rbx
  BEZIER32 *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  struct _RECTFX *v12; // r8
  BEZIER32 *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // xmm1_8
  struct _POINTFIX v18; // [rsp+20h] [rbp-30h] BYREF
  struct _POINTFIX v19; // [rsp+28h] [rbp-28h]
  struct _POINTFIX v20; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTFIX v21; // [rsp+38h] [rbp-18h] BYREF

  *((_QWORD *)this + 89) = (char *)this + 88 * (*((_QWORD *)this + 88) == (_QWORD)this + 328) + 328;
  v2 = *((_DWORD *)this + 126);
  if ( v2 < 0 )
    goto LABEL_7;
  if ( v2 > 1 )
  {
    switch ( v2 )
    {
      case 2:
        v6 = -((*((_BYTE *)this + 8) & 8) != 0);
        *((_QWORD *)this + 89) = (char *)this + 240;
        *((_DWORD *)this + 172) = (v6 & 0xFFFFFFFA) + 8;
        if ( (unsigned int)READER::bNextFigure(this) )
        {
          READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
          *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
          *((_DWORD *)this + 126) = 1;
        }
        else
        {
          *((_DWORD *)this + 126) = 4;
        }
        break;
      case 3:
        *((_DWORD *)this + 172) = 4;
        v8 = (struct _POINTFIX *)((char *)this + 224);
        v9 = (LINER *)((char *)this + 48);
        if ( *((_DWORD *)v9 + 42) )
          v10 = BEZIER32::bNext(v9, v8);
        else
          v10 = BEZIER64::bNext(v9, v8);
        if ( !v10 )
        {
          *((_DWORD *)this + 126) = 0;
          v11 = *((_QWORD *)this + 89);
          *(_DWORD *)v11 = 0;
          *(_DWORD *)(v11 + 40) = v8->x;
          *(_DWORD *)(v11 + 44) = v8->y;
          *(_DWORD *)(v11 + 40) -= *((_DWORD *)this + 173);
          *(_DWORD *)(v11 + 44) -= *((_DWORD *)this + 174);
          *(_QWORD *)(v11 + 48) = *(_QWORD *)(v11 + 40);
          v4 = *((_QWORD *)this + 89);
          v5 = *((_QWORD *)this + 70);
          goto LABEL_8;
        }
LABEL_7:
        v4 = *((_QWORD *)this + 89);
        *(_DWORD *)v4 = 0;
        *(_DWORD *)(v4 + 40) = *((_DWORD *)this + 56);
        *(_DWORD *)(v4 + 44) = *((_DWORD *)this + 57);
        *(_DWORD *)(v4 + 40) -= *((_DWORD *)this + 173);
        *(_DWORD *)(v4 + 44) -= *((_DWORD *)this + 174);
        v5 = *(_QWORD *)(v4 + 40);
LABEL_8:
        *(_QWORD *)(v4 + 48) = v5;
        return;
      case 4:
        *((_DWORD *)this + 172) = 9;
        break;
      default:
        goto LABEL_7;
    }
  }
  else
  {
    if ( v2 )
    {
      *((_DWORD *)this + 172) = 0;
      *((_DWORD *)this + 126) = 0;
    }
    else
    {
      *((_DWORD *)this + 172) = 3;
    }
    v3 = (struct _POINTFIX *)((char *)this + 224);
    if ( (unsigned int)READER::bNextPoint(this, (struct _POINTFIX *)this + 28) )
    {
      if ( (*((_DWORD *)this + 2) & 0x10) == 0 )
        goto LABEL_7;
      v18 = *(struct _POINTFIX *)((char *)this + 692);
      v19 = *v3;
      READER::bNextPoint(this, &v20);
      READER::bNextPoint(this, &v21);
      BEZIER::vInit((LINER *)((char *)this + 48), &v18, v12, gpeqErrorLow);
      v13 = (LINER *)((char *)this + 48);
      if ( *((_DWORD *)this + 54) )
        v14 = BEZIER32::bNext(v13, v3);
      else
        v14 = BEZIER64::bNext(v13, v3);
      v15 = *((_QWORD *)this + 89);
      *(_DWORD *)v15 = 0;
      *(_DWORD *)(v15 + 40) = v3->x;
      *(_DWORD *)(v15 + 44) = v3->y;
      *(_DWORD *)(v15 + 40) -= *((_DWORD *)this + 173);
      *(_DWORD *)(v15 + 44) -= *((_DWORD *)this + 174);
      *(_QWORD *)(v15 + 48) = *(_QWORD *)(v15 + 40);
      if ( v14 )
      {
        v16 = *((_QWORD *)this + 89);
        *(_OWORD *)((char *)this + 600) = *(_OWORD *)v16;
        *(_OWORD *)((char *)this + 616) = *(_OWORD *)(v16 + 16);
        *(_OWORD *)((char *)this + 632) = *(_OWORD *)(v16 + 32);
        *(_OWORD *)((char *)this + 648) = *(_OWORD *)(v16 + 48);
        *(_OWORD *)((char *)this + 664) = *(_OWORD *)(v16 + 64);
        v17 = *(_QWORD *)(v16 + 80);
        LODWORD(v16) = v19.x;
        *((_QWORD *)this + 85) = v17;
        *((_QWORD *)this + 81) = __PAIR64__(v19.y, v16);
        *((_DWORD *)this + 162) -= v18.x;
        *((_DWORD *)this + 163) -= v18.y;
        *((_DWORD *)this + 128) = 0;
        *((struct _POINTFIX *)this + 69) = v21;
        *((_DWORD *)this + 138) -= v20.x;
        *((_DWORD *)this + 139) -= v20.y;
        *((_QWORD *)this + 70) = *((_QWORD *)this + 69);
        *((_QWORD *)this + 89) = (char *)this + 600;
        *((_DWORD *)this + 126) = 3;
      }
      else
      {
        *((_DWORD *)this + 126) = 0;
      }
    }
    else
    {
      *v3 = *(struct _POINTFIX *)((char *)this + 232);
      v7 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 126) = 2;
      if ( (v7 & 8) != 0 )
      {
        *((_DWORD *)this + 172) = 3;
        goto LABEL_7;
      }
      *((_DWORD *)this + 172) = 1;
    }
  }
}
