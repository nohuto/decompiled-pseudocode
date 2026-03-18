/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C007C780
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0020CD0 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002863C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0028E90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00296A0 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0029890 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0029C90 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002B590 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C002DC58 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C004C14C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C004C180 (--1SEMOBJSHARED@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  __int64 v2; // r8
  BOOL v4; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 *v9; // rdi
  CLIPOBJ *v11; // r13
  struct RGNOBJ *p_top; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  struct REGION *v15; // rax
  HDEV hdev; // rax
  struct REGION *v17; // rdx
  __int64 v18; // rdi
  struct _POINTL v19; // [rsp+20h] [rbp-40h] BYREF
  struct _ERESOURCE *v20; // [rsp+28h] [rbp-38h] BYREF
  struct _ERESOURCE *v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  __int16 *v23[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 *v24; // [rsp+50h] [rbp-10h] BYREF
  int v25; // [rsp+58h] [rbp-8h]
  struct REGION *v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)ppco, v2);
  v7 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 328) || pso->iType != 1 )
    return 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v21, (HSEMAPHORE)ghsemVisRgnUniqueness);
  v8 = *(_DWORD *)(v7 + 336);
  if ( v8 != giVisRgnUniquenessStable )
  {
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v8 <= giVisRgnUniqueness || v8 >= giVisRgnUniquenessStable )
        goto LABEL_12;
LABEL_11:
      v4 = 0;
      goto LABEL_12;
    }
    if ( v8 < giVisRgnUniquenessStable || v8 > giVisRgnUniqueness )
      goto LABEL_11;
  }
LABEL_12:
  SEMOBJSHARED::~SEMOBJSHARED(&v21);
  if ( v4 || !ppco || !*ppco )
    return v4;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v20, (HSEMAPHORE)ghsemVisRgnPublish);
  v9 = *(__int64 **)(v7 + 312);
  if ( !v9 )
  {
    SEMOBJSHARED::~SEMOBJSHARED(&v20);
    return 1;
  }
  v11 = *ppco;
  if ( *ppco )
    p_top = (struct RGNOBJ *)&v11[2].rclBounds.top;
  else
    p_top = 0LL;
  v13 = *v9;
  v14 = *(_QWORD *)(*v9 + 1520);
  v27 = *(_QWORD *)(*v9 + 1512);
  v22 = v14;
  if ( v27 && v14 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v22, (struct RGNOBJ *)&v27) )
      goto LABEL_31;
    if ( !*(_QWORD *)(v13 + 1536) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
      if ( v24 )
        *(_QWORD *)(*v9 + 1536) = v24;
      if ( v25 == 1 )
        RGNOBJ::vDeleteRGNOBJ(&v24);
    }
    v15 = *(struct REGION **)(*v9 + 1536);
    v26 = v15;
    if ( !v15 )
      goto LABEL_41;
    if ( v15 == *(struct REGION **)p_top )
    {
LABEL_31:
      v4 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v26, (struct RGNOBJ *)&v27) )
    {
      *(_QWORD *)(*v9 + 1536) = v26;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v23);
      if ( v23[0] )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*v9 + 48) + 56LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v19.x = -*((_DWORD *)hdev + 652);
          v19.y = -*((_DWORD *)hdev + 653);
          RGNOBJ::bOffset((unsigned int **)&v26, &v19);
        }
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)v23, p_top, (struct RGNOBJ *)&v26, byte_1C0102335)
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v23) != 1 )
        {
          RGNOBJ::bSwap((__int64 **)v23, (__m128i **)&v26);
          v17 = v26;
          *(_QWORD *)(*v9 + 1536) = v26;
          v18 = *v9 + 2312;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v18, v17, (struct ERECTL *)&v11->rclBounds, 1);
          if ( !ERECTL::bEmpty((ERECTL *)(v18 + 4)) )
          {
            *ppco = (CLIPOBJ *)v18;
            v4 = 1;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v23);
    }
  }
LABEL_41:
  SEMOBJSHARED::~SEMOBJSHARED(&v20);
  return v4;
}
