/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00B1320
 * Callers:
 *     EngCreatePalette @ 0x1C000BFB0 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B78B0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C00BD090 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00BFCCC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C01381D0 (bInitPALOBJ.c)
 * Callees:
 *     ?ParseBits@@YAXKPEAK00K@Z @ 0x1C000B440 (-ParseBits@@YAXKPEAK00K@Z.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C003AC40 (-vComputeCallTables@XEPALOBJ@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF1C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF74 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00AF044 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        PALMEMOBJ *this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  unsigned int v9; // r15d
  size_t v12; // rcx
  unsigned int v13; // esi
  __int64 Object; // rax
  struct OBJECT *v15; // rdi
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  _DWORD *v19; // r9
  unsigned int *v20; // rdx
  unsigned int i; // ecx
  int v22; // eax
  _QWORD v24[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v25[11]; // [rsp+50h] [rbp-58h] BYREF

  v9 = a3;
  v12 = 152LL;
  switch ( a2 )
  {
    case 1:
      v12 = 4 * a3 + 152;
      v13 = a8 & 0x3102F00;
      if ( !a3 )
        return 0LL;
      goto LABEL_16;
    case 2:
      v13 = a8 & 0x3100300;
      v9 = 0;
      if ( !a5 || !a7 || !a6 )
        return 0LL;
      break;
    case 4:
    case 8:
    case 16:
      v13 = a8 & 0x3100100 | 0x200;
      v9 = 0;
      if ( a2 == 16 )
        goto LABEL_16;
      if ( a2 == 4 )
      {
        a5 = 255;
        a7 = 16711680;
      }
      else
      {
        a5 = 16711680;
        a7 = 255;
      }
      a6 = 65280;
      break;
    default:
      return 0LL;
  }
  v12 = 200LL;
LABEL_16:
  Object = AllocateObject(v12, 8u, 0);
  v15 = (struct OBJECT *)Object;
  *(_QWORD *)this = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 24) = v13 | a2;
    *(_DWORD *)(Object + 28) = v9;
    *(_DWORD *)(Object + 32) = _InterlockedIncrement((volatile signed __int32 *)&ulXlatePalUnique);
    *(_QWORD *)(Object + 40) = 0LL;
    *(_QWORD *)(Object + 48) = 0LL;
    *(_DWORD *)(Object + 60) = 0;
    *(_DWORD *)(Object + 56) = 0;
    *(_QWORD *)(Object + 72) = 0LL;
    *(_QWORD *)(Object + 80) = 0LL;
    *(_QWORD *)(Object + 88) = 0LL;
    *(_DWORD *)(Object + 112) = 0;
    *(_QWORD *)(Object + 120) = 0LL;
    *(_QWORD *)(Object + 136) = Object;
    *(_QWORD *)(Object + 128) = Object + 144;
    v16 = a2 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 || (v18 = v17 - 2) == 0 || v18 == 4 )
      {
        **(_DWORD **)(*(_QWORD *)this + 128LL) = a5;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 4LL) = a6;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 8LL) = a7;
        if ( a5 == 255 && a6 == 65280 && a7 == 16711680 )
        {
          *(_DWORD *)(Object + 24) |= 4u;
        }
        else if ( a5 == 63488 && a6 == 2016 && a7 == 31 )
        {
          *(_DWORD *)(Object + 24) |= 0x400000u;
        }
        else if ( a5 == 31744 && a6 == 992 && a7 == 31 )
        {
          *(_DWORD *)(Object + 24) |= 0x200000u;
        }
        ParseBits(
          a5,
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 24LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 12LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 36LL),
          0);
        ParseBits(
          a6,
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 28LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 16LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 40LL),
          8u);
        ParseBits(
          a7,
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 32LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 20LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 44LL),
          0x10u);
      }
    }
    else
    {
      v19 = *(_DWORD **)(*(_QWORD *)this + 128LL);
      v20 = a4;
      if ( a4 )
      {
        for ( i = 0; i < v9; ++i )
        {
          v22 = *v20++;
          *v19++ = v22;
          v24[1] = v19;
        }
      }
      else if ( v9 )
      {
        memset(*(void **)(*(_QWORD *)this + 128LL), 0, 4LL * v9);
      }
    }
    v24[0] = v15;
    XEPALOBJ::vComputeCallTables((XEPALOBJ *)v24);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v25);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v25, v15, 1, a9 != 0, 8u) )
    {
      HmgInsertObjectHelper::~HmgInsertObjectHelper(v25);
      return 1LL;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper(v25);
    FreeObject((__int64)v15);
    *(_QWORD *)this = 0LL;
  }
  return 0LL;
}
