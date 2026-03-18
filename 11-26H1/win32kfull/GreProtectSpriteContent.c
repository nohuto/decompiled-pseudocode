/*
 * XREFs of GreProtectSpriteContent @ 0x140266204
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1402F0210 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x14009C7A0 (DwmAsyncUpdateSprite.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1401D1464 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1401D4F90 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1401E783C (--1DWMSPRITEREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, Gre::Base *a2, int a3, char a4)
{
  int v5; // esi
  int v6; // r14d
  unsigned int v10; // r13d
  Gre::Base *v11; // rcx
  Gre::Base *v12; // rcx
  __int64 v13; // r12
  SFMLOGICALSURFACE *v14; // rbx
  unsigned int v15; // ecx
  int v16; // edx
  __int64 v17; // r14
  int v18; // esi
  __int64 v19; // rdi
  int v20; // ecx
  __int64 v21; // rbx
  int v22; // r15d
  __int64 v23; // rcx
  int v24; // r15d
  void *v25; // rax
  int v27; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v28; // [rsp+68h] [rbp-31h]
  _BYTE v29[32]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v30[32]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+17h]
  unsigned int v32; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v33; // [rsp+118h] [rbp+7Fh] BYREF

  v5 = a4 & 1;
  v27 = 0;
  v33 = 0;
  v6 = (a4 & 0x11) == 17;
  v32 = 0;
  v10 = 0;
  v28 = (__int64 *)Gre::Base::Globals(0LL);
  if ( a3 && IsDwmActive(v11) )
  {
    ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v29, v28, a1, 0);
    if ( IsDwmActive(v12) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v30, a2);
      v13 = v31;
      if ( v31 )
      {
        v14 = *(SFMLOGICALSURFACE **)(v31 + 144);
        if ( v14 )
        {
          v15 = *(_DWORD *)(v31 + 136);
          v10 = 1;
          if ( ((v15 >> 3) & 1) != v5 || ((v15 >> 6) & 1) != v6 )
          {
            *(_DWORD *)(v31 + 136) = (v6 << 6) | (v15 & 0xFFFFFFF7 ^ (8 * (a4 & 1))) & 0xFFFFFFBF;
            SFMLOGICALSURFACE::GetRedirectionInfo(v14, (enum _HLSURF_REDIRECTIONSTYLE *)&v27, &v33, &v32, 0LL, 0LL);
            v16 = *(_DWORD *)(v13 + 136);
            v17 = *(_QWORD *)(v13 + 104);
            v18 = *(_DWORD *)(v13 + 116);
            v19 = *(_QWORD *)v13;
            *(_QWORD *)(v13 + 104) = 0LL;
            v20 = *((_DWORD *)v14 + 63);
            v21 = *(_QWORD *)v14;
            v22 = v20 & 1 | (4 * (v16 & 0xE));
            v23 = v20 & 0xC;
            v24 = v16 & 1 | v23 | (2 * (v16 & 0x40 | v22));
            v25 = (void *)UserReferenceDwmApiPort(v23);
            DwmAsyncUpdateSprite(v25, v19, v21, v24, v13 + 72, 0LL, v27, v33, v32, v18 >= 1, v17);
          }
        }
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v30);
    }
    ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v29);
  }
  return v10;
}
