/*
 * XREFs of ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C0220DB4
 * Callers:
 *     PointerSpeedHitTest @ 0x1C02233A0 (PointerSpeedHitTest.c)
 * Callees:
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C021DF08 (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0220C84 (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     _TTPixelsToHm @ 0x1C0248FA8 (_TTPixelsToHm.c)
 */

struct tagWND *__fastcall SpeedHitTestWithTargeting(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        int a5,
        int *a6,
        unsigned int *a7)
{
  __int64 v7; // rdi
  struct tagWND *v11; // rax
  __int64 v12; // rsi
  int v13; // ecx
  LONG x; // ebx
  int v15; // r10d
  LONG y; // r15d
  int v17; // r11d
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  int v22; // eax
  int v23; // r10d
  int v24; // r11d
  char v25; // al
  char v26; // r10
  int v27; // r8d
  int v28; // r11d
  int v29; // r9d
  int v30; // edx
  int v31; // ecx
  __int64 v32; // rcx
  unsigned int v33; // r10d
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  int v38; // r10d
  int v39; // r11d
  int v40; // r11d
  __int64 v41; // rbx
  struct tagWND *v42; // rax
  struct tagWND *v43; // rdi
  int v44; // [rsp+50h] [rbp-91h] BYREF
  int v45; // [rsp+54h] [rbp-8Dh] BYREF
  unsigned int v46; // [rsp+58h] [rbp-89h]
  char v47[4]; // [rsp+5Ch] [rbp-85h]
  int v48; // [rsp+60h] [rbp-81h] BYREF
  struct tagPOINT v49; // [rsp+68h] [rbp-79h] BYREF
  struct tagPOINT v50; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v51; // [rsp+78h] [rbp-69h]
  unsigned __int64 v52; // [rsp+80h] [rbp-61h]
  _BYTE v53[64]; // [rsp+90h] [rbp-51h] BYREF

  v7 = *((_QWORD *)a4 + 4);
  v52 = a3;
  v51 = a2;
  v49 = (struct tagPOINT)v7;
  v50 = 0LL;
  if ( !a1 )
    return 0LL;
  v11 = TargetTopLevelWindow(a1, a2, a3, a4, &v49, &v50, a5, &v48, a6, a7);
  v12 = (__int64)v11;
  if ( !v11 )
  {
    if ( !v48 )
      return a1;
    return (struct tagWND *)v12;
  }
  v13 = *((_DWORD *)v11 + 34);
  x = v49.x;
  v15 = v49.x - *((_DWORD *)v11 + 32);
  y = v49.y;
  v17 = v49.y - *((_DWORD *)v11 + 33);
  v18 = *((_DWORD *)v11 + 35) - v49.y;
  v19 = (unsigned int)(v13 - v49.x);
  *(_DWORD *)v47 = v18;
  if ( (int)v19 < 0 || v15 < 0 || v17 < 0 || v18 < 0 )
  {
    v32 = (unsigned int)(*(_DWORD *)(v12 + 120) - v49.x);
    v48 = *((_DWORD *)a4 + 46);
    v44 = TTPixelsToHm(v32, (unsigned int)v48);
    TTPixelsToHm((unsigned int)(x - *(_DWORD *)(v12 + 112)), v33);
    v34 = (unsigned int)(y - *(_DWORD *)(v12 + 116));
    v46 = *((_DWORD *)a4 + 47);
    v35 = TTPixelsToHm(v34, v46);
    v36 = (unsigned int)(*(_DWORD *)(v12 + 124) - y);
    v45 = v35;
    v37 = TTPixelsToHm(v36, v46);
    *(_DWORD *)v47 = v37;
    if ( v44 >= 500 && v39 >= 500 && v38 >= 500 && v37 >= 500 )
      goto LABEL_19;
    TTPixelsToHm((unsigned int)(*((_DWORD *)a4 + 7) - *((_DWORD *)a4 + 5)), v46);
    v25 = TTPixelsToHm((unsigned int)(*((_DWORD *)a4 + 6) - *((_DWORD *)a4 + 4)), (unsigned int)v48);
    v29 = v45;
    v27 = v40;
    v30 = v44;
    v31 = 0;
  }
  else
  {
    v45 = *((_DWORD *)a4 + 46);
    v46 = TTPixelsToHm(v19, (unsigned int)v45);
    v48 = TTPixelsToHm(v20, (unsigned int)v45);
    v44 = *((_DWORD *)a4 + 47);
    TTPixelsToHm(v21, (unsigned int)v44);
    v22 = TTPixelsToHm(*(unsigned int *)v47, (unsigned int)v44);
    *(_DWORD *)v47 = v22;
    if ( (int)v46 >= 500 && v23 >= 500 && v24 >= 500 && v22 >= 500 )
      goto LABEL_19;
    TTPixelsToHm((unsigned int)(*((_DWORD *)a4 + 7) - *((_DWORD *)a4 + 5)), (unsigned int)v44);
    v25 = TTPixelsToHm((unsigned int)(*((_DWORD *)a4 + 6) - *((_DWORD *)a4 + 4)), (unsigned int)v45);
    v27 = v48;
    v29 = v28;
    v30 = v46;
    v31 = 1;
  }
  TraceLoggingHitTestWindowTargeting(v31, v30, v27, v29, v47[0], v25, v26);
LABEL_19:
  v49.y = v50.y + y;
  v49.x = v50.x + x;
  if ( *(_QWORD *)(v12 + 96) )
  {
    v41 = (__int64)v49;
    if ( PtInRect((_DWORD *)(v12 + 128), *(_QWORD *)&v49) )
    {
      v45 = a6 ? *a6 : 0;
      v44 = a7 ? *a7 : 0;
      v42 = (struct tagWND *)SpeedHitTest(v12, v51, 0, v52, v41, v7, (__int64)v53, (__int64)&v45, (__int64)&v44);
      v43 = v42;
      if ( v42 )
      {
        if ( !(unsigned int)DoesPointSnapToTopLevelWindow((struct tagWND *)v12, v42, a4, (struct tagPOINT)v41) )
        {
          v12 = (__int64)v43;
          if ( a6 )
            *a6 = v45;
          if ( a7 )
            *a7 = v44;
        }
      }
    }
  }
  return (struct tagWND *)v12;
}
