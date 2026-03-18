/*
 * XREFs of ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C010EC68
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0030880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003BB38 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall bSpUpdateDeviceSurface(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ **a2,
        struct RGNOBJ *a3,
        struct ECLIPOBJ *a4)
{
  unsigned int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rdi
  __int64 v14; // r15
  struct RGNOBJ *v15; // rsi
  __int64 v16; // rcx
  HDEV hdev; // rax
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  struct _POINTL v19; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v20[8]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v21[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF

  v5 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 328) || a1->iType != 1 )
    return 1LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v21, ghsemVisRgnUniqueness);
  v11 = *(_DWORD *)(v10 + 336);
  if ( v11 != giVisRgnUniquenessStable )
  {
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v11 <= giVisRgnUniqueness || v11 >= giVisRgnUniquenessStable )
        goto LABEL_12;
LABEL_11:
      v5 = 0;
      goto LABEL_12;
    }
    if ( v11 < giVisRgnUniquenessStable || v11 > giVisRgnUniqueness )
      goto LABEL_11;
  }
LABEL_12:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v21);
  if ( v5 || !a2 || !*a2 )
    return v5;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v20, ghsemVisRgnPublish);
  v12 = *(_QWORD *)(v10 + 312);
  if ( !v12 )
  {
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v20);
    return 1LL;
  }
  v14 = (__int64)*a2;
  if ( *a2 )
    v15 = (struct RGNOBJ *)(v14 + 56);
  else
    v15 = 0LL;
  v18 = *(_QWORD *)(*(_QWORD *)v12 + 1512LL);
  v16 = *(_QWORD *)(*(_QWORD *)v12 + 1520LL);
  v22 = v16;
  if ( v18 && v16 )
  {
    if ( RGNOBJ::bEqual((RGNOBJ *)&v22, (struct RGNOBJ *)&v18) )
    {
LABEL_26:
      v5 = 1;
      goto LABEL_36;
    }
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a3 != *(_QWORD *)v15 )
      {
        if ( RGNOBJ::bCopy(a3, (struct RGNOBJ *)&v18) )
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v23);
          if ( v23[0] )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 48LL) + 56LL) & 0x20000) != 0 )
            {
              hdev = a1->hdev;
              v19.x = -*((_DWORD *)hdev + 652);
              v19.y = -*((_DWORD *)hdev + 653);
              RGNOBJ::bOffset(a3, &v19);
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)v23, v15, a3, BYTE1(gafjRgnOp))
              && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v23) != 1 )
            {
              RGNOBJ::bSwap((RGNOBJ *)v23, a3);
              XCLIPOBJ::vSetup(a4, *(struct REGION **)a3, (struct ERECTL *)(v14 + 4), 1);
              if ( !(unsigned int)ERECTL::bEmpty((struct ECLIPOBJ *)((char *)a4 + 4)) )
              {
                *a2 = (struct _CLIPOBJ *)a4;
                v5 = 1;
              }
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v23);
        }
        goto LABEL_36;
      }
      goto LABEL_26;
    }
  }
LABEL_36:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v20);
  return v5;
}
