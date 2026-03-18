/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C007FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002D344 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C002D9C0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C002DF10 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C002E150 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C002E420 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0031740 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0034664 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0039300 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0039974 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0049D3C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C0049D70 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdi
  unsigned int v7; // eax
  struct DC **v8; // rdi
  CLIPOBJ *v10; // r13
  struct RGNOBJ *p_top; // r15
  struct DC *v12; // r14
  __int64 v13; // rcx
  struct REGION *v14; // rax
  HDEV hdev; // rax
  struct REGION *v16; // rdx
  __int64 v17; // rdi
  struct _POINTL v18; // [rsp+20h] [rbp-50h] BYREF
  struct _ERESOURCE *v19; // [rsp+28h] [rbp-48h] BYREF
  struct _ERESOURCE *v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-30h] BYREF
  __int16 *v23[2]; // [rsp+48h] [rbp-28h] BYREF
  __int16 *v24; // [rsp+58h] [rbp-18h] BYREF
  int v25; // [rsp+60h] [rbp-10h]
  struct REGION *v26; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 328) || pso->iType != 1 )
    return 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v20, (HSEMAPHORE)ghsemVisRgnUniqueness);
  v7 = *(_DWORD *)(v6 + 336);
  if ( v7 != giVisRgnUniquenessStable )
  {
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v7 <= giVisRgnUniqueness || v7 >= giVisRgnUniquenessStable )
        goto LABEL_12;
LABEL_11:
      v3 = 0;
      goto LABEL_12;
    }
    if ( v7 < giVisRgnUniquenessStable || v7 > giVisRgnUniqueness )
      goto LABEL_11;
  }
LABEL_12:
  SEMOBJSHARED::~SEMOBJSHARED(&v20);
  if ( v3 || !ppco || !*ppco )
    return v3;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v19, (HSEMAPHORE)ghsemVisRgnPublish);
  v8 = *(struct DC ***)(v6 + 312);
  if ( !v8 )
  {
    SEMOBJSHARED::~SEMOBJSHARED(&v19);
    return 1;
  }
  v10 = *ppco;
  if ( *ppco )
    p_top = (struct RGNOBJ *)&v10[2].rclBounds.top;
  else
    p_top = 0LL;
  AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v22, *v8);
  v12 = *v8;
  v13 = *((_QWORD *)*v8 + 193);
  v27 = *((_QWORD *)*v8 + 192);
  v21 = v13;
  if ( v27 && v13 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v21, (struct RGNOBJ *)&v27) )
      goto LABEL_31;
    if ( !*((_QWORD *)v12 + 195) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
      if ( v24 )
        *((_QWORD *)*v8 + 195) = v24;
      if ( v25 == 1 )
        RGNOBJ::vDeleteRGNOBJ(&v24);
    }
    v14 = (struct REGION *)*((_QWORD *)*v8 + 195);
    v26 = v14;
    if ( !v14 )
      goto LABEL_41;
    if ( v14 == *(struct REGION **)p_top )
    {
LABEL_31:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v26, (struct RGNOBJ *)&v27) )
    {
      *((_QWORD *)*v8 + 195) = v26;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v23);
      if ( v23[0] )
      {
        if ( (*(_DWORD *)(*((_QWORD *)*v8 + 6) + 56LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v18.x = -*((_DWORD *)hdev + 652);
          v18.y = -*((_DWORD *)hdev + 653);
          RGNOBJ::bOffset((int **)&v26, &v18);
        }
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)v23, p_top, (struct RGNOBJ *)&v26, byte_1C0119955)
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v23) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)v23, (struct RGNOBJ *)&v26);
          v16 = v26;
          *((_QWORD *)*v8 + 195) = v26;
          v17 = (__int64)*v8 + 2336;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v17, v16, (struct ERECTL *)&v10->rclBounds, 1);
          if ( !ERECTL::bEmpty((ERECTL *)(v17 + 4)) )
          {
            *ppco = (CLIPOBJ *)v17;
            v3 = 1;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v23);
    }
  }
LABEL_41:
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v22);
  SEMOBJSHARED::~SEMOBJSHARED(&v19);
  return v3;
}
