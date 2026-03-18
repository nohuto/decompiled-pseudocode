/*
 * XREFs of ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C012EAF8
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C003E0B4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C025B198 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D5A64 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
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
  struct DC **v12; // rdi
  __int64 v14; // r15
  struct RGNOBJ *v15; // rsi
  __int64 v16; // rcx
  HDEV hdev; // rax
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  struct _POINTL v19; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v20[8]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v21[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-10h] BYREF

  v5 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, (__int64)a3, (__int64)a4);
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
  v12 = *(struct DC ***)(v10 + 312);
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
  AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v23, *v12);
  v18 = *((_QWORD *)*v12 + 192);
  v16 = *((_QWORD *)*v12 + 193);
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
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
          if ( v24[0] )
          {
            if ( (*(_DWORD *)(*((_QWORD *)*v12 + 6) + 56LL) & 0x20000) != 0 )
            {
              hdev = a1->hdev;
              v19.x = -*((_DWORD *)hdev + 652);
              v19.y = -*((_DWORD *)hdev + 653);
              RGNOBJ::bOffset(a3, &v19);
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)v24, v15, a3, BYTE1(gafjRgnOp))
              && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v24) != 1 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v24, a3);
              XCLIPOBJ::vSetup(a4, *(struct REGION **)a3, (struct ERECTL *)(v14 + 4), 1);
              if ( !ERECTL::bEmpty((struct ECLIPOBJ *)((char *)a4 + 4)) )
              {
                *a2 = (struct _CLIPOBJ *)a4;
                v5 = 1;
              }
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
        }
        goto LABEL_36;
      }
      goto LABEL_26;
    }
  }
LABEL_36:
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v23);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v20);
  return v5;
}
