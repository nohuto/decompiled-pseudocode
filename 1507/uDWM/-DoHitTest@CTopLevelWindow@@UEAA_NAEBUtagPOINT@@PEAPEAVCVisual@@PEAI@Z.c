/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180022B80
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800035B4 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180003670 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001906C (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18009D184 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(
        CTopLevelWindow *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  CTopLevelWindow *v6; // r14
  int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // r14
  float *v10; // rdx
  LONG y; // eax
  LONG v12; // ecx
  _DWORD *v13; // rcx
  POINT v14; // rdx
  LONG v15; // eax
  LONG v16; // eax
  int v17; // eax
  int x; // eax
  __int64 v19; // r13
  LONG v20; // eax
  LONG **v21; // r12
  POINT v22; // rbx
  LONG *v23; // rdi
  int SystemMetrics; // ebx
  int v25; // edi
  int v26; // eax
  LONG *v27; // r8
  POINT v28; // rdx
  POINT pt; // [rsp+20h] [rbp-79h] BYREF
  int v31; // [rsp+28h] [rbp-71h] BYREF
  unsigned int *v32; // [rsp+30h] [rbp-69h]
  struct CVisual **v33; // [rsp+38h] [rbp-61h]
  RECT v34; // [rsp+40h] [rbp-59h] BYREF
  RECT rc; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v36[8]; // [rsp+60h] [rbp-39h] BYREF

  v32 = a4;
  v33 = a3;
  v6 = 0LL;
  v7 = 0;
  *(_QWORD *)&v34.left = 0LL;
  v31 = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 84) & 4) == 0 || *((_DWORD *)this + 46) == -1) )
    goto LABEL_19;
  LODWORD(v8) = -1;
  while ( 1 )
  {
    if ( !(_BYTE)v7 )
    {
      LODWORD(v8) = *((_DWORD *)this + 18);
      LOBYTE(v7) = 1;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v8 == -1 )
      break;
    v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8);
    *(struct tagPOINT *)&rc.left = *a2;
    rc.left -= *(_DWORD *)(v9 + 104);
    rc.top -= *(_DWORD *)(v9 + 108);
    if ( (*(_BYTE *)(v9 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v9, (struct D2DMatrix *)v36);
      if ( D2DMatrixInverse((struct D2DMatrix *)v36, v10, (const struct D2DMatrix *)v36) )
      {
        *(float *)&pt.x = (float)rc.left;
        *(float *)&pt.y = (float)rc.top;
        D3DXVec2TransformCoord((struct D2DVector2 *)&pt, (const struct D2DVector2 *)&pt, (const struct D2DMatrix *)v36);
        rc.top = (int)*(float *)&pt.y;
        rc.left = (int)*(float *)&pt.x;
        goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( (*(unsigned __int8 (__fastcall **)(__int64, RECT *, RECT *, int *))(*(_QWORD *)v9 + 112LL))(
             v9,
             &rc,
             &v34,
             &v31) )
      {
        break;
      }
    }
  }
  v6 = *(CTopLevelWindow **)&v34.left;
  if ( *(_QWORD *)&v34.left
    || a2->x < 0
    || a2->x >= *((_DWORD *)this + 28)
    || (y = a2->y, y < 0)
    || y >= *((_DWORD *)this + 29) )
  {
    v7 = v31;
  }
  else
  {
    v7 = *((_DWORD *)this + 46);
    v6 = this;
  }
LABEL_19:
  if ( v6 && v7 == -2 )
  {
    if ( a2->x >= *((_DWORD *)this + 153) && a2->x < *((_DWORD *)this + 28) - *((_DWORD *)this + 154) )
    {
      v12 = a2->y;
      if ( v12 >= *(_DWORD *)(*((_QWORD *)this + 93) + 96LL) && v12 < *((_DWORD *)this + 155) )
        v7 = 2;
    }
    v13 = (_DWORD *)*((_QWORD *)this + 93);
    v14 = *a2;
    *(_QWORD *)&rc.left = 0LL;
    v15 = v13[14] - v13[12];
    if ( v15 < 0 )
      v15 = 0;
    rc.right = v15;
    v16 = v13[15] - v13[13];
    if ( v16 < 0 )
      v16 = 0;
    rc.bottom = v16;
    if ( !PtInRect(&rc, v14) )
    {
      v7 = 18;
      if ( a2->y < 0 )
        v7 = 2;
    }
    v17 = *((_DWORD *)this + 152);
    if ( (v17 & 0x20) != 0 )
    {
      if ( (v17 & 0x20000) != 0 )
        x = *((_DWORD *)this + 28) - a2->x - 1;
      else
        x = a2->x;
      pt.x = x;
      v19 = 5LL;
      v20 = a2->y;
      v21 = (LONG **)v36;
      pt.y = v20;
      v22 = pt;
      v36[0] = *((_QWORD *)this + 68);
      v36[1] = *((_QWORD *)this + 63);
      v36[2] = *((_QWORD *)this + 64);
      v36[3] = *((_QWORD *)this + 65);
      v36[4] = *((_QWORD *)this + 66);
      do
      {
        v23 = *v21;
        if ( *v21 )
        {
          v34.left = v23[26];
          v34.top = *((_DWORD *)this + 167);
          v34.right = v23[26] + v23[28];
          v34.bottom = v23[27] + v23[29];
          if ( v23 == *((LONG **)this + 68) )
          {
            v34.left = *((_DWORD *)this + 165);
          }
          else if ( v23 == *((LONG **)this + 66) )
          {
            v34.right = *((_DWORD *)this + 28) - *((_DWORD *)this + 166);
          }
          if ( PtInRect(&v34, v22) )
          {
            v7 = v23[46];
            v6 = (CTopLevelWindow *)v23;
          }
        }
        ++v21;
        --v19;
      }
      while ( v19 );
    }
    else if ( *((_QWORD *)this + 68) )
    {
      SystemMetrics = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 46);
      v25 = CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 31) - SystemMetrics;
      v26 = (v25 - CWindowData::GetSystemMetrics(*((CWindowData **)this + 93), 50)) / 2;
      if ( v26 >= 1 )
      {
        v27 = (LONG *)*((_QWORD *)this + 68);
        v34.left = v27[26];
        v34.top = v27[27] - v26;
        v34.right = v27[26] + v27[28];
        v28 = *a2;
        v34.bottom = v26 + v27[27] + v27[29];
        if ( PtInRect(&v34, v28) )
        {
          v6 = (CTopLevelWindow *)*((_QWORD *)this + 68);
          v7 = *((_DWORD *)v6 + 46);
        }
      }
    }
  }
  *v33 = v6;
  *v32 = v7;
  return v6 != 0LL;
}
