/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C005B700
 * Callers:
 *     GreCreatePatternBrush @ 0x1C005D290 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0026AFC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B40 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B68 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C002723C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005B8D8 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C005BB90 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005C034 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  int IsMonochrome; // eax
  HBITMAP v10; // rdx
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  ULONG v13; // ecx
  _BYTE v14[32]; // [rsp+40h] [rbp-68h] BYREF
  struct SURFACE *v15; // [rsp+60h] [rbp-48h]
  _QWORD v16[6]; // [rsp+68h] [rbp-40h] BYREF
  int v17; // [rsp+98h] [rbp-10h]
  __int64 v18; // [rsp+C8h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v18);
  SURFREF::SURFREF((SURFREF *)v14, (HSURF)a1);
  if ( !v15 )
  {
    v13 = 6;
LABEL_11:
    EngSetLastError(v13);
    goto LABEL_9;
  }
  if ( (*((_DWORD *)v15 + 28) & 0x4000000) == 0 )
  {
    v13 = 87;
    goto LABEL_11;
  }
  if ( a3 )
  {
    v8 = 8;
    v7 = 8;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  if ( hbmCreateClone(v15, v8, v7) )
  {
    v18 = *((_QWORD *)v15 + 15);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v18);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v16, v10, a1, IsMonochrome, 0, 0x40u, a2);
    if ( v16[0] )
    {
      v6 = *(_QWORD *)v16[0];
      v17 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v16);
  }
LABEL_9:
  SURFREF::~SURFREF((SURFREF *)v14);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  return v6;
}
