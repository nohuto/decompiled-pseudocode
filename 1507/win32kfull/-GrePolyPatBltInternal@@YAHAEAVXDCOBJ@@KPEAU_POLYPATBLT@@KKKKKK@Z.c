/*
 * XREFs of ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086C10
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C001BF90 (NtGdiFlushUserBatch.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     NtGdiPolyPatBlt @ 0x1C0086690 (NtGdiPolyPatBlt.c)
 * Callees:
 *     ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0019084 (-bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0086F64 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall GrePolyPatBltInternal(
        struct XDCOBJ *this,
        unsigned int a2,
        struct _POLYPATBLT *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // esi
  struct _POLYPATBLT *v10; // r12
  unsigned int v12; // edi
  bool v13; // zf
  unsigned int v14; // edx
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r15
  int v19; // esi
  int v20; // r13d
  int v21; // edx
  int v22; // r9d
  int v23; // r8d
  int v24; // edx
  int v25; // eax
  struct EXFORMOBJ *v26; // rdx
  unsigned int locked; // eax
  __int64 v28; // rcx
  int v30; // [rsp+70h] [rbp-138h]
  int v31; // [rsp+74h] [rbp-134h]
  int v32; // [rsp+78h] [rbp-130h]
  __int64 v33; // [rsp+80h] [rbp-128h]
  __int64 v34; // [rsp+88h] [rbp-120h]
  struct SURFACE *v35; // [rsp+B0h] [rbp-F8h]
  __int64 v36; // [rsp+C0h] [rbp-E8h] BYREF
  int v37; // [rsp+CCh] [rbp-DCh]
  __int64 v38; // [rsp+D0h] [rbp-D8h]
  _BYTE v39[112]; // [rsp+E0h] [rbp-C8h] BYREF
  int v40; // [rsp+150h] [rbp-58h] BYREF
  int v41; // [rsp+154h] [rbp-54h]
  int v42; // [rsp+158h] [rbp-50h]
  int v43; // [rsp+15Ch] [rbp-4Ch]

  v9 = a4;
  v10 = a3;
  v12 = 1;
  v13 = a4 == 0;
  if ( !a4 )
  {
LABEL_39:
    if ( !v13 )
      return 0;
    return v12;
  }
  if ( !a3 || a5 )
  {
    v13 = a4 == 0;
    goto LABEL_39;
  }
  v14 = HIWORD(a2);
  v15 = ((unsigned __int8)v14 << 8) | (unsigned __int8)v14;
  if ( (((unsigned __int8)v14 ^ (unsigned __int8)(4 * v14)) & 0xCC) != 0 )
    return 0;
  v16 = *(_QWORD *)this;
  if ( !v16 )
  {
    return 0;
  }
  else
  {
    v17 = *(_QWORD *)(v16 + 80);
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_DWORD *)(v17 + 8) & 0x1000) != 0 )
      GreDCSelectBrush(v16, v18);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v39);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v39, this, 0) )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v36, this, 0x204u);
      v35 = *(struct SURFACE **)(*(_QWORD *)this + 512LL);
      while ( 1 )
      {
        v32 = v9 - 1;
        if ( !v9 )
          goto LABEL_31;
        v33 = 0LL;
        v19 = *(_DWORD *)v10;
        v20 = *((_DWORD *)v10 + 1);
        v21 = *((_DWORD *)v10 + 2);
        v31 = v21;
        v22 = *((_DWORD *)v10 + 3);
        v30 = v22;
        v34 = *((_QWORD *)v10 + 2);
        v38 = v34;
        if ( v34 )
        {
          v33 = GreDCSelectBrush(*(_QWORD *)this, v38);
          v21 = v31;
          v22 = v30;
        }
        v23 = *(_DWORD *)(v36 + 32);
        if ( (v23 & 1) == 0 )
          break;
        v40 = v19;
        v41 = v20;
        v24 = v19 + v21;
        v42 = v24;
        v25 = v22 + v20;
        v43 = v22 + v20;
        if ( (v23 & 0x43) != 0x43 )
        {
          bCvtPts1(v36, &v40, 2LL);
          v25 = v43;
          v24 = v42;
          v20 = v41;
          v19 = v40;
        }
        if ( v37 )
        {
          v40 = ++v19;
          v42 = ++v24;
        }
        if ( v19 > v24 )
        {
          v40 = v24;
          v42 = v19;
        }
        if ( v20 > v25 )
        {
          v41 = v25;
          v43 = v20;
        }
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v40) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 )
            XDCOBJ::vAccumulate(this, (struct ERECTL *)&v40);
          if ( v35 )
          {
            locked = GrePatBltLockedDC(this, v26, (struct ERECTL *)&v40, v15, v35, a6, a7, a8, a9);
LABEL_27:
            v12 = locked;
          }
        }
        if ( v34 )
          GreDCSelectBrush(*(_QWORD *)this, v33);
        DEVLOCKOBJ::bTightBoundsToRegion((DEVLOCKOBJ *)v39);
        v10 = (struct _POLYPATBLT *)((char *)v10 + 24);
        v9 = v32;
      }
      locked = GreMaskBlt(**(HDC **)this, v22, 0LL, 0, 0, 0LL, 0, 0, v15 << 16, 0);
      goto LABEL_27;
    }
    v12 = XDCOBJ::bFullScreen(this);
LABEL_31:
    v28 = *(_QWORD *)(*(_QWORD *)this + 80LL);
    if ( *(_QWORD *)(v28 + 16) != v18 )
    {
      *(_QWORD *)(v28 + 16) = v18;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) |= 0x1000u;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
  }
  return v12;
}
