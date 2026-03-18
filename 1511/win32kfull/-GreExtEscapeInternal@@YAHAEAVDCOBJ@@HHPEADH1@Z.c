/*
 * XREFs of ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0140480
 * Callers:
 *     GreExtEscape @ 0x1C01403F0 (GreExtEscape.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C810 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C85C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C01406D8 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C01412C4 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C026749C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0268040 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02682E4 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0268870 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299740 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscapeInternal(
        struct DCOBJ *this,
        unsigned int a2,
        signed int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // r14
  __int64 v10; // rcx
  HDEV v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // r8
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rsi
  struct _SURFOBJ *v18; // rsi
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ecx
  HDEV DeviceHdev; // r8
  __int64 v29; // rsi
  int v30; // eax
  HDEV v31; // [rsp+40h] [rbp-148h] BYREF
  void *v32; // [rsp+48h] [rbp-140h]
  int v33; // [rsp+50h] [rbp-138h]
  unsigned __int16 v34; // [rsp+54h] [rbp-134h]
  __int64 v35; // [rsp+58h] [rbp-130h] BYREF
  int v36; // [rsp+64h] [rbp-124h]
  int v37; // [rsp+68h] [rbp-120h]
  int v38; // [rsp+6Ch] [rbp-11Ch]
  _BYTE v39[80]; // [rsp+70h] [rbp-118h] BYREF
  struct _RECTL v40; // [rsp+C0h] [rbp-C8h] BYREF
  struct _SURFOBJ v41; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+120h] [rbp-68h] BYREF
  int v43; // [rsp+130h] [rbp-58h]
  __int64 *v44; // [rsp+138h] [rbp-50h]

  v6 = a4;
  v32 = a6;
  v10 = *(_QWORD *)this;
  v11 = *(HDEV *)(v10 + 48);
  v31 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 9) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 658);
  v14 = 0;
  v33 = 0;
  if ( a2 == 8 )
  {
    if ( (unsigned int)a3 < 4 )
      return 0LL;
    v14 = *(_DWORD *)a4;
    v33 = v14;
    v37 = v14;
    if ( (unsigned int)(v14 - 4352) <= 1 && (v13 & 8) != 0 )
      return 0LL;
    goto LABEL_5;
  }
  if ( a2 - 4352 > 1 )
  {
    if ( a2 == 4354 )
    {
      if ( !*(_DWORD *)(v10 + 32) )
        return iWndObjSetupExtEscape(this, 0x1102u, a3, a4, a5, a6);
      return 0LL;
    }
    if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v13) )
      return 0LL;
LABEL_5:
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v39);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v39, this);
    if ( !(unsigned int)fBlockExtEscape(this) )
    {
      v15 = *(_QWORD *)this;
      if ( !*(_DWORD *)(*(_QWORD *)this + 32LL) )
      {
LABEL_7:
        v35 = 0LL;
        v36 = 0;
        if ( a2 != 25 )
          goto LABEL_8;
        if ( *((int *)v31 + 462) >= 0 )
        {
LABEL_50:
          v25 = *(_QWORD *)this;
          v26 = *(_QWORD *)(*(_QWORD *)this + 512LL);
          if ( v26 && (*(_DWORD *)(v26 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v31 + 462) < 0) )
          {
            v27 = *(_DWORD *)(v25 + 2500);
            *(_DWORD *)v6 -= *(_DWORD *)(v25 + 2496);
            *((_DWORD *)v6 + 1) -= v27;
          }
LABEL_8:
          if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v14 - 256) <= 0x2FE )
          {
            v20 = DoFontManagement(this, a2, a3, v6, a5, v32);
          }
          else if ( a2 - 4119 <= 1 || a2 == 8 && (unsigned int)(v14 - 4119) <= 1 )
          {
            v20 = iCheckPassthroughImage(this, (struct PDEVOBJ *)&v31, a2, a3, v6, a5, v32);
          }
          else
          {
            if ( (unsigned int)XDCOBJ::bValidSurf(this) && !v32 )
              ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 512LL) + 92LL);
            v16 = *(_QWORD *)this;
            v17 = *(_QWORD *)(*(_QWORD *)this + 512LL);
            if ( v17 )
              v18 = (struct _SURFOBJ *)(v17 + 24);
            else
              v18 = 0LL;
            if ( ((_DWORD)v31[14] & 0x20000) != 0 && a2 == 8 && (unsigned int)(v33 - 4352) <= 1 )
            {
              v40 = *(struct _RECTL *)(v16 + 1424);
              DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v16 + 48), &v40, 0LL);
              if ( DeviceHdev )
              {
                if ( *(_QWORD *)(*(_QWORD *)this + 512LL) == *((_QWORD *)v31 + 322) )
                {
                  v29 = *((_QWORD *)DeviceHdev + 322);
                  if ( v29 )
                    v18 = (struct _SURFOBJ *)(v29 + 24);
                  else
                    v18 = 0LL;
                }
                v31 = DeviceHdev;
              }
            }
            if ( !*((_QWORD *)v31 + 364) )
              goto LABEL_24;
            if ( !v18 )
            {
              memset(&v41, 0, sizeof(v41));
              v19 = *(_QWORD *)this;
              v41.dhpdev = *(DHPDEV *)(*(_QWORD *)this + 24LL);
              v41.hdev = *(HDEV *)(v19 + 48);
              v41.iType = 1;
              v18 = &v41;
              if ( a2 == 17 && (unsigned __int64)a3 >= 2 )
              {
                v34 = *(_WORD *)v6;
                *(_DWORD *)(v19 + 2484) = v34;
                PDEVOBJ::Escape((PDEVOBJ *)&v31, &v41, 0x11u, a3, v6, a5, v32);
LABEL_68:
                DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
                return 1LL;
              }
              if ( a2 == 33 && (unsigned __int64)a3 >= 2 )
              {
                v30 = *(unsigned __int16 *)v6;
                v38 = v30;
                if ( v30 )
                  *(_DWORD *)(v19 + 36) |= 0x400u;
                else
                  *(_DWORD *)(v19 + 36) &= ~0x400u;
                goto LABEL_68;
              }
            }
            v20 = PDEVOBJ::Escape((PDEVOBJ *)&v31, v18, a2, a3, v6, a5, v32);
          }
          v12 = v20;
LABEL_24:
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
          return v12;
        }
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v35, this, 0x204u);
        if ( a3 == 20 )
        {
          v42 = *(_OWORD *)v6;
          v43 = *((_DWORD *)v6 + 4);
          v44 = &v35;
          v6 = (char *)&v42;
          a3 = 32;
          goto LABEL_50;
        }
        goto LABEL_39;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v15 + 48) + 56LL) & 0x80u) != 0 )
      {
        v24 = *(_QWORD *)(v15 + 512);
        if ( !v24 )
          goto LABEL_7;
        v23 = *(_QWORD *)(v24 + 40) == *((_QWORD *)v31 + 228);
      }
      else
      {
        v22 = *(_QWORD *)(v15 + 512);
        if ( !v22 )
          goto LABEL_39;
        v23 = *(_WORD *)(v22 + 100) == 3;
      }
      if ( v23 )
        goto LABEL_7;
    }
LABEL_39:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v39);
    return 0LL;
  }
  if ( (v13 & 8) != 0 || *(_DWORD *)(v10 + 32) )
    return 0LL;
  return iOpenGLExtEscape(this, a2, a3, a4, a5, a6);
}
