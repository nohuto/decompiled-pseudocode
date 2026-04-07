/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800283E0
 * Callers:
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x18002D520 (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 * Callees:
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001E920 (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180023950 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(
        CTopLevelWindow *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  LONG *v6; // r13
  LONG x; // r14d
  LONG y; // ecx
  _DWORD *v9; // rcx
  POINT v10; // rdx
  LONG v11; // eax
  LONG v12; // eax
  int v13; // eax
  int v14; // eax
  LONG **v15; // rdi
  LONG v16; // eax
  __int64 v17; // r12
  LONG *v18; // rbx
  int SystemMetrics; // ebx
  int v20; // edi
  int v21; // eax
  LONG *v22; // r8
  POINT v23; // rdx
  POINT pt; // [rsp+20h] [rbp-59h] BYREF
  struct CVisual **v26; // [rsp+28h] [rbp-51h]
  unsigned int *v27; // [rsp+30h] [rbp-49h]
  RECT v28; // [rsp+38h] [rbp-41h] BYREF
  RECT rc; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v30[5]; // [rsp+58h] [rbp-21h] BYREF

  v27 = a4;
  v26 = a3;
  CVisual::DoHitTest(this, a2, (struct CVisual **)&v28, (unsigned int *)&pt);
  v6 = *(LONG **)&v28.left;
  x = pt.x;
  if ( *(_QWORD *)&v28.left && pt.x == -2 )
  {
    if ( a2->x >= *((_DWORD *)this + 153) && a2->x < *((_DWORD *)this + 28) - *((_DWORD *)this + 154) )
    {
      y = a2->y;
      if ( y >= *(_DWORD *)(*((_QWORD *)this + 93) + 96LL) && y < *((_DWORD *)this + 155) )
        x = 2;
    }
    v9 = (_DWORD *)*((_QWORD *)this + 93);
    v10 = *a2;
    *(_QWORD *)&rc.left = 0LL;
    v11 = v9[14] - v9[12];
    if ( v11 < 0 )
      v11 = 0;
    rc.right = v11;
    v12 = v9[15] - v9[13];
    if ( v12 < 0 )
      v12 = 0;
    rc.bottom = v12;
    if ( !PtInRect(&rc, v10) )
    {
      x = 18;
      if ( a2->y < 0 )
        x = 2;
    }
    v13 = *((_DWORD *)this + 152);
    if ( (v13 & 0x20) != 0 )
    {
      if ( (v13 & 0x20000) != 0 )
        v14 = *((_DWORD *)this + 28) - a2->x - 1;
      else
        v14 = a2->x;
      pt.x = v14;
      v15 = (LONG **)v30;
      v16 = a2->y;
      v17 = 5LL;
      pt.y = v16;
      v30[0] = *((_QWORD *)this + 68);
      v30[1] = *((_QWORD *)this + 63);
      v30[2] = *((_QWORD *)this + 64);
      v30[3] = *((_QWORD *)this + 65);
      v30[4] = *((_QWORD *)this + 66);
      do
      {
        v18 = *v15;
        if ( *v15 )
        {
          v28.left = v18[26];
          v28.top = *((_DWORD *)this + 167);
          v28.right = v18[26] + v18[28];
          v28.bottom = v18[27] + v18[29];
          if ( v18 == *((LONG **)this + 68) )
          {
            v28.left = *((_DWORD *)this + 165);
          }
          else if ( v18 == *((LONG **)this + 66) )
          {
            v28.right = *((_DWORD *)this + 28) - *((_DWORD *)this + 166);
          }
          if ( PtInRect(&v28, pt) )
          {
            x = v18[46];
            v6 = v18;
          }
        }
        ++v15;
        --v17;
      }
      while ( v17 );
    }
    else if ( *((_QWORD *)this + 68) )
    {
      SystemMetrics = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 46);
      v20 = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 31) - SystemMetrics;
      v21 = (v20 - CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 50)) / 2;
      if ( v21 >= 1 )
      {
        v22 = (LONG *)*((_QWORD *)this + 68);
        v28.left = v22[26];
        v28.top = v22[27] - v21;
        v28.right = v22[26] + v22[28];
        v23 = *a2;
        v28.bottom = v21 + v22[27] + v22[29];
        if ( PtInRect(&v28, v23) )
        {
          v6 = (LONG *)*((_QWORD *)this + 68);
          x = v6[46];
        }
      }
    }
  }
  *v26 = (struct CVisual *)v6;
  *v27 = x;
  return v6 != 0LL;
}
