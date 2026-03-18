/*
 * XREFs of ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C022AEF0
 * Callers:
 *     PointerSpeedHitTest @ 0x1C022D338 (PointerSpeedHitTest.c)
 * Callees:
 *     SpeedHitTest @ 0x1C008D450 (SpeedHitTest.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C02241F8 (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C022ADC8 (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B488 (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     _TTPixelsToHm @ 0x1C024CCE8 (_TTPixelsToHm.c)
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
  struct tagPOINT v7; // rax
  struct tagWND *v11; // rax
  __int64 v12; // rdi
  LONG x; // ebx
  LONG y; // r14d
  int v15; // r12d
  __int64 v16; // rcx
  unsigned int v17; // r10d
  unsigned int v18; // r11d
  int v19; // eax
  int v20; // r10d
  int v21; // r11d
  char v22; // r12
  char v23; // al
  char v24; // r10
  int v25; // r11d
  __int64 v26; // rcx
  unsigned int v27; // r10d
  unsigned int v28; // r10d
  int v29; // r12d
  int v30; // eax
  unsigned int v31; // r10d
  int v32; // r11d
  char v33; // al
  char v34; // r10
  int v35; // r11d
  __int64 v36; // rbx
  struct tagWND *v37; // rax
  struct tagWND *v38; // r14
  char v39[4]; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-7Dh] BYREF
  int v41; // [rsp+58h] [rbp-79h]
  int v42; // [rsp+5Ch] [rbp-75h] BYREF
  struct tagPOINT v43; // [rsp+60h] [rbp-71h] BYREF
  struct tagPOINT v44; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v45; // [rsp+70h] [rbp-61h]
  unsigned __int64 v46; // [rsp+78h] [rbp-59h]
  _BYTE v47[64]; // [rsp+80h] [rbp-51h] BYREF

  v7 = (struct tagPOINT)*((_QWORD *)a4 + 4);
  v46 = a3;
  v45 = a2;
  v43 = v7;
  v44 = 0LL;
  if ( !a1 )
    return 0LL;
  v11 = TargetTopLevelWindow(a1, a2, a3, a4, &v43, &v44, a5, &v42, a6, a7);
  v12 = (__int64)v11;
  if ( v11 )
  {
    x = v43.x;
    y = v43.y;
    v15 = *((_DWORD *)v11 + 35) - v43.y;
    v16 = (unsigned int)(*((_DWORD *)v11 + 34) - v43.x);
    if ( (int)v16 < 0 || v43.x - *((_DWORD *)v11 + 32) < 0 || v43.y - *((_DWORD *)v11 + 33) < 0 || v15 < 0 )
    {
      v26 = (unsigned int)(*((_DWORD *)v11 + 30) - v43.x);
      v42 = *((_DWORD *)a4 + 46);
      v41 = TTPixelsToHm(v26, (unsigned int)v42);
      TTPixelsToHm((unsigned int)(x - *(_DWORD *)(v12 + 112)), v27);
      v29 = TTPixelsToHm((unsigned int)(y - *(_DWORD *)(v12 + 116)), *((unsigned int *)a4 + 47));
      v30 = TTPixelsToHm((unsigned int)(*(_DWORD *)(v12 + 124) - y), v28);
      *(_DWORD *)v39 = v30;
      if ( v41 < 500 || v32 < 500 || v29 < 500 || v30 < 500 )
      {
        TTPixelsToHm((unsigned int)(*((_DWORD *)a4 + 7) - *((_DWORD *)a4 + 5)), v31);
        v33 = TTPixelsToHm((unsigned int)(*((_DWORD *)a4 + 6) - *((_DWORD *)a4 + 4)), (unsigned int)v42);
        TraceLoggingHitTestWindowTargeting(0LL, v41, v35, v29, v39[0], v33, v34);
      }
    }
    else
    {
      v40 = *((_DWORD *)a4 + 46);
      v41 = TTPixelsToHm(v16, v40);
      v42 = TTPixelsToHm(v17, v40);
      *(_DWORD *)v39 = *((_DWORD *)a4 + 47);
      TTPixelsToHm(v18, *(unsigned int *)v39);
      v19 = TTPixelsToHm((unsigned int)v15, *(unsigned int *)v39);
      v22 = v19;
      if ( v41 < 500 || v20 < 500 || v21 < 500 || v19 < 500 )
      {
        TTPixelsToHm((unsigned int)(*((_DWORD *)a4 + 7) - *((_DWORD *)a4 + 5)), *(unsigned int *)v39);
        v23 = TTPixelsToHm((unsigned int)(*((_DWORD *)a4 + 6) - *((_DWORD *)a4 + 4)), v40);
        TraceLoggingHitTestWindowTargeting((const struct _TlgProvider_t *)1, v41, v42, v25, v22, v23, v24);
      }
    }
    v43.x = v44.x + x;
    v43.y = v44.y + y;
    if ( *(_QWORD *)(v12 + 96) )
    {
      v36 = (__int64)v43;
      if ( PtInRect((_DWORD *)(v12 + 128), *(_QWORD *)&v43) )
      {
        v40 = a6 ? *a6 : 0;
        *(_DWORD *)v39 = a7 ? *a7 : 0;
        v37 = (struct tagWND *)SpeedHitTest(v12, v45, 0, v46, v36, (__int64)v47, (__int64)&v40, (__int64)v39);
        v38 = v37;
        if ( v37 )
        {
          if ( !(unsigned int)DoesPointSnapToTopLevelWindow((struct tagWND *)v12, v37, a4, (struct tagPOINT)v36) )
          {
            v12 = (__int64)v38;
            if ( a6 )
              *a6 = v40;
            if ( a7 )
              *a7 = *(_DWORD *)v39;
          }
        }
      }
    }
  }
  else if ( !v42 )
  {
    return a1;
  }
  return (struct tagWND *)v12;
}
