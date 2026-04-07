/*
 * XREFs of ?UpdateLayout@CTopLevelWindow@@UEAAJXZ @ 0x180021F80
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLayout(CTopLevelWindow *this)
{
  const struct tagSIZE *v1; // rsi
  struct tagSIZE *v3; // rcx
  __int64 (__fastcall *v4)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v5; // eax
  int v6; // ebx
  __int64 v7; // r8
  LONG v8; // r9d
  unsigned int v9; // r11d
  int v10; // r10d
  LONG v11; // ecx
  void (__fastcall *v12)(CVisual *, int); // rax
  unsigned int v14; // edx
  int cx; // edx
  LONG v16; // eax
  int v17; // eax
  int cy; // eax
  LONG v19; // eax
  int v20; // eax
  struct tagSIZE v21; // [rsp+60h] [rbp+30h] BYREF
  struct tagPOINT v22; // [rsp+68h] [rbp+38h] BYREF

  v1 = (const struct tagSIZE *)((char *)this + 112);
  v3 = (struct tagSIZE *)*((_QWORD *)this + 35);
  v4 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v3 + 80LL);
  if ( v4 == CVisual::SetSize )
    v5 = CVisual::SetSize(v3, v1);
  else
    v5 = v4(v3, v1);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x100Eu);
    return (unsigned int)v6;
  }
  v7 = *((_QWORD *)this + 3);
  v6 = 0;
  if ( !v7 )
    goto LABEL_8;
  v8 = *((_DWORD *)this + 30);
  v9 = *((_DWORD *)this + 31);
  v10 = *((_DWORD *)this + 33);
  v11 = *((_DWORD *)this + 32);
  if ( __PAIR64__(v9, v8) == 0x7FFFFFFF7FFFFFFFLL && v11 == 0x7FFFFFFF && v10 == 0x7FFFFFFF )
    goto LABEL_8;
  v21 = *v1;
  if ( v9 == 0x7FFFFFFF )
  {
    v16 = 0;
    if ( v8 != 0x7FFFFFFF )
      v16 = v8;
  }
  else
  {
    if ( v8 != 0x7FFFFFFF )
    {
      v14 = *(_DWORD *)(v7 + 112) - v9;
      v22.x = v8;
      cx = v14 - v8;
      goto LABEL_22;
    }
    v16 = *(_DWORD *)(v7 + 112) - v1->cx - v9;
  }
  cx = v21.cx;
  v22.x = v16;
LABEL_22:
  if ( v10 == 0x7FFFFFFF )
  {
    v19 = 0;
    if ( v11 != 0x7FFFFFFF )
      v19 = v11;
    goto LABEL_28;
  }
  v17 = *(_DWORD *)(v7 + 116);
  if ( v11 == 0x7FFFFFFF )
  {
    v19 = v17 - v1->cy - v10;
LABEL_28:
    v22.y = v19;
    cy = v21.cy;
    goto LABEL_29;
  }
  v22.y = v11;
  cy = v17 - v11 - v10;
LABEL_29:
  if ( cx <= 0 )
    cx = 0;
  v21.cx = cx;
  if ( cy <= 0 )
    cy = 0;
  v21.cy = cy;
  v20 = (*(__int64 (__fastcall **)(CTopLevelWindow *, struct tagSIZE *))(*(_QWORD *)this + 80LL))(this, &v21);
  v6 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x181u);
    goto LABEL_10;
  }
  CVisual::SetOffset((struct tagPOINT *)this, &v22);
LABEL_8:
  v12 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
  if ( v12 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 4);
  else
    v12(this, 4);
LABEL_10:
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1010u);
  return (unsigned int)v6;
}
