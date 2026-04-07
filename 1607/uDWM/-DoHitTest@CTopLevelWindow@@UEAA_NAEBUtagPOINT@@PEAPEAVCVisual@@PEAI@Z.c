/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800255B0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180006D2C (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180006E5C (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001B4CC (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180020810 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18009B460 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(
        CTopLevelWindow *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  CTopLevelWindow *v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // rdi
  bool (__fastcall *v11)(CVisual *, const struct tagPOINT *, struct CVisual **, unsigned int *); // rax
  bool v12; // al
  _DWORD *v13; // rax
  int v14; // eax
  int SystemMetrics; // ebx
  int v16; // edi
  int v17; // eax
  LONG *v18; // r8
  POINT v19; // rdx
  unsigned int *v20; // rax
  LONG y; // eax
  LONG v23; // ecx
  float *v24; // rdx
  int x; // eax
  LONG **v26; // rdi
  LONG v27; // eax
  __int64 v28; // r12
  LONG *v29; // rbx
  unsigned int v30; // [rsp+38h] [rbp-79h] BYREF
  unsigned int *v31; // [rsp+40h] [rbp-71h]
  RECT v32; // [rsp+48h] [rbp-69h] BYREF
  RECT rc; // [rsp+58h] [rbp-59h] BYREF
  RECT v34; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v35[8]; // [rsp+78h] [rbp-39h] BYREF

  v7 = 0LL;
  v8 = 0;
  v31 = a4;
  *(_QWORD *)&v34.left = 0LL;
  v30 = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 84) & 4) == 0 || *((_DWORD *)this + 46) == -1) )
    goto LABEL_14;
  LODWORD(v9) = -1;
  while ( 1 )
  {
    if ( !(_BYTE)v7 )
    {
      LODWORD(v9) = *((_DWORD *)this + 18);
      LOBYTE(v7) = 1;
    }
    v9 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v9 == -1 )
      break;
    v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v9);
    *(struct tagPOINT *)&v32.left = *a2;
    v32.left -= *(_DWORD *)(v10 + 104);
    v32.top -= *(_DWORD *)(v10 + 108);
    if ( (*(_BYTE *)(v10 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v10, (struct D2DMatrix *)v35);
      if ( D2DMatrixInverse((struct D2DMatrix *)v35, v24, (const struct D2DMatrix *)v35) )
      {
        *(float *)&rc.left = (float)v32.left;
        *(float *)&rc.top = (float)v32.top;
        D3DXVec2TransformCoord((struct D2DVector2 *)&rc, (const struct D2DVector2 *)&rc, (const struct D2DMatrix *)v35);
        v32.top = (int)*(float *)&rc.top;
        v32.left = (int)*(float *)&rc.left;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v11 = *(bool (__fastcall **)(CVisual *, const struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v10 + 112LL);
      if ( v11 == CVisual::DoHitTest )
        v12 = CVisual::DoHitTest((CVisual *)v10, (const struct tagPOINT *)&v32, (struct CVisual **)&v34, &v30);
      else
        v12 = v11((CVisual *)v10, (const struct tagPOINT *)&v32, (struct CVisual **)&v34, &v30);
      if ( v12 )
        break;
    }
  }
  v7 = *(CTopLevelWindow **)&v34.left;
  if ( *(_QWORD *)&v34.left
    || a2->x < 0
    || a2->x >= *((_DWORD *)this + 28)
    || (y = a2->y, y < 0)
    || y >= *((_DWORD *)this + 29) )
  {
    v8 = v30;
  }
  else
  {
    v8 = *((_DWORD *)this + 46);
    v7 = this;
  }
LABEL_14:
  if ( v7 && v8 == -2 )
  {
    if ( a2->x >= *((_DWORD *)this + 153) && a2->x < *((_DWORD *)this + 28) - *((_DWORD *)this + 154) )
    {
      v23 = a2->y;
      if ( v23 >= *(_DWORD *)(*((_QWORD *)this + 93) + 96LL) && v23 < *((_DWORD *)this + 155) )
        v8 = 2;
    }
    v13 = (_DWORD *)*((_QWORD *)this + 93);
    *(_QWORD *)&rc.left = 0LL;
    if ( v13[14] - v13[12] < 0 )
      rc.right = 0;
    else
      rc.right = v13[14] - v13[12];
    if ( v13[15] - v13[13] < 0 )
      rc.bottom = 0;
    else
      rc.bottom = v13[15] - v13[13];
    if ( !PtInRect(&rc, *a2) )
    {
      v8 = 18;
      if ( a2->y < 0 )
        v8 = 2;
    }
    v14 = *((_DWORD *)this + 152);
    if ( (v14 & 0x20) != 0 )
    {
      if ( (v14 & 0x20000) != 0 )
        x = *((_DWORD *)this + 28) - a2->x - 1;
      else
        x = a2->x;
      v34.left = x;
      v26 = (LONG **)v35;
      v27 = a2->y;
      v28 = 5LL;
      v34.top = v27;
      v35[0] = *((_QWORD *)this + 68);
      v35[1] = *((_QWORD *)this + 63);
      v35[2] = *((_QWORD *)this + 64);
      v35[3] = *((_QWORD *)this + 65);
      v35[4] = *((_QWORD *)this + 66);
      do
      {
        v29 = *v26;
        if ( *v26 )
        {
          v32.left = v29[26];
          v32.top = *((_DWORD *)this + 167);
          v32.right = v29[26] + v29[28];
          v32.bottom = v29[27] + v29[29];
          if ( v29 == *((LONG **)this + 68) )
          {
            v32.left = *((_DWORD *)this + 165);
          }
          else if ( v29 == *((LONG **)this + 66) )
          {
            v32.right = *((_DWORD *)this + 28) - *((_DWORD *)this + 166);
          }
          if ( PtInRect(&v32, *(POINT *)&v34.left) )
          {
            v8 = v29[46];
            v7 = (CTopLevelWindow *)v29;
          }
        }
        ++v26;
        --v28;
      }
      while ( v28 );
    }
    else if ( *((_QWORD *)this + 68) )
    {
      SystemMetrics = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 46);
      v16 = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 31) - SystemMetrics;
      v17 = (v16 - CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 50)) / 2;
      if ( v17 >= 1 )
      {
        v18 = (LONG *)*((_QWORD *)this + 68);
        v34.left = v18[26];
        v34.top = v18[27] - v17;
        v34.right = v18[26] + v18[28];
        v19 = *a2;
        v34.bottom = v17 + v18[27] + v18[29];
        if ( PtInRect(&v34, v19) )
        {
          v7 = (CTopLevelWindow *)*((_QWORD *)this + 68);
          v8 = *((_DWORD *)v7 + 46);
        }
      }
    }
  }
  v20 = v31;
  *a3 = v7;
  *v20 = v8;
  return v7 != 0LL;
}
