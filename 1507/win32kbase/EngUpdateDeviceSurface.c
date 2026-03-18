/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C0081DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C000C1DC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C001E608 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C001E63C (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0032420 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003E0B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003F910 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C003FC40 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C003FF30 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C004C060 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00B3D94 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  struct DC **v14; // rdi
  CLIPOBJ *v16; // r13
  struct RGNOBJ *p_top; // r15
  struct DC *v18; // r14
  __int64 v19; // rcx
  struct REGION *v20; // rax
  HDEV hdev; // rax
  struct REGION *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _POINTL v26; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v27[8]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v28[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v30[8]; // [rsp+40h] [rbp-30h] BYREF
  __int16 *v31[2]; // [rsp+48h] [rbp-28h] BYREF
  __int16 *v32; // [rsp+58h] [rbp-18h] BYREF
  int v33; // [rsp+60h] [rbp-10h]
  struct REGION *v34; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 328) || pso->iType != 1 )
    return 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v28, (HSEMAPHORE)ghsemVisRgnUniqueness, v6);
  v10 = *(_DWORD *)(v7 + 336);
  if ( v10 != giVisRgnUniquenessStable )
  {
    v8 = giVisRgnUniqueness;
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v10 <= giVisRgnUniqueness || v10 >= giVisRgnUniquenessStable )
        goto LABEL_12;
LABEL_11:
      v3 = 0;
      goto LABEL_12;
    }
    if ( v10 < giVisRgnUniquenessStable || v10 > giVisRgnUniqueness )
      goto LABEL_11;
  }
LABEL_12:
  SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)v28, v8, v9);
  if ( v3 || !ppco || !*ppco )
    return v3;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v27, ghsemVisRgnPublish, v11);
  v14 = *(struct DC ***)(v7 + 312);
  if ( !v14 )
  {
    SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)v27, v12, v13);
    return 1;
  }
  v16 = *ppco;
  if ( *ppco )
    p_top = (struct RGNOBJ *)&v16[2].rclBounds.top;
  else
    p_top = 0LL;
  AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v30, *v14);
  v18 = *v14;
  v19 = *((_QWORD *)*v14 + 193);
  v35 = *((_QWORD *)*v14 + 192);
  v29 = v19;
  if ( v35 && v19 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v29, (struct RGNOBJ *)&v35) )
      goto LABEL_31;
    if ( !*((_QWORD *)v18 + 195) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v32);
      if ( v32 )
        *((_QWORD *)*v14 + 195) = v32;
      if ( v33 == 1 )
        RGNOBJ::vDeleteRGNOBJ(&v32);
    }
    v20 = (struct REGION *)*((_QWORD *)*v14 + 195);
    v34 = v20;
    if ( !v20 )
      goto LABEL_41;
    if ( v20 == *(struct REGION **)p_top )
    {
LABEL_31:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v34, (struct RGNOBJ *)&v35) )
    {
      *((_QWORD *)*v14 + 195) = v34;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
      if ( v31[0] )
      {
        if ( (*(_DWORD *)(*((_QWORD *)*v14 + 6) + 56LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v26.x = -*((_DWORD *)hdev + 652);
          v26.y = -*((_DWORD *)hdev + 653);
          RGNOBJ::bOffset((unsigned int **)&v34, &v26);
        }
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)v31, p_top, (struct RGNOBJ *)&v34, byte_1C00FF3F9)
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v31) != 1 )
        {
          RGNOBJ::bSwap((__int64 **)v31, (__m128i **)&v34);
          v22 = v34;
          *((_QWORD *)*v14 + 195) = v34;
          v23 = (__int64)*v14 + 2336;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v23, v22, (struct ERECTL *)&v16->rclBounds, 1);
          if ( !ERECTL::bEmpty((ERECTL *)(v23 + 4)) )
          {
            *ppco = (CLIPOBJ *)v23;
            v3 = 1;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v31);
    }
  }
LABEL_41:
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v30);
  SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)v27, v24, v25);
  return v3;
}
