/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C005CFD0
 * Callers:
 *     GreCreatePatternBrush @ 0x1C005DDC0 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C013A9B0 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C0023794 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00458F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0045924 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005D180 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C005D420 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005D854 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  int v5; // r14d
  __int64 v6; // rdi
  struct SURFACE *v7; // rax
  struct SURFACE *v8; // rbx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  HBITMAP Clone; // rdx
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v13; // r8
  int IsMonochrome; // eax
  HBITMAP v15; // rdx
  ULONG v17; // ecx
  _QWORD v18[2]; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+50h] [rbp-28h]
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v20, a2, a3);
  v7 = (struct SURFACE *)HmgShareLockCheck((int)a1, 5);
  v8 = v7;
  if ( !v7 )
  {
    v17 = 6;
    goto LABEL_15;
  }
  if ( (*((_DWORD *)v7 + 28) & 0x4000000) == 0 )
  {
    v17 = 87;
LABEL_15:
    EngSetLastError(v17);
    goto LABEL_9;
  }
  if ( v4 )
  {
    v10 = 8;
    v9 = 8;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  Clone = hbmCreateClone(v7, v10, v9);
  if ( Clone )
  {
    v20 = *((_QWORD *)v8 + 15);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v20);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v18, v15, a1, IsMonochrome, 0, 0x40u, v5);
    if ( v18[0] )
    {
      v6 = *(_QWORD *)v18[0];
      v19 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v18);
  }
LABEL_9:
  if ( v8 )
    HmgDecrementShareReferenceCount(v8);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12, (__int64)Clone, v13);
  return v6;
}
