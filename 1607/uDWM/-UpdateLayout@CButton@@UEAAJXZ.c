/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001C010
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001F850 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002B678 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18002BBD0 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this)
{
  int updated; // eax
  int v3; // edi
  __int64 v4; // rsi
  char v5; // bp
  void (__fastcall *v6)(CVisual *__hidden, unsigned int); // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  CVisual *v10; // rcx
  void (__fastcall *v11)(CVisual *__hidden, unsigned int); // rax
  __int64 v13; // rcx
  struct tagPOINT v14; // [rsp+48h] [rbp+10h] BYREF

  updated = CVisual::UpdateLayout(this);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x36u);
  }
  else
  {
    LODWORD(v4) = -1;
    v5 = 0;
    while ( 1 )
    {
      if ( v5 )
      {
        v4 = (unsigned int)(v4 + 1);
      }
      else
      {
        v5 = 1;
        v4 = 0LL;
      }
      if ( (unsigned int)v4 >= *((_DWORD *)this + 18) )
        break;
      v13 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 2LL);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xCAu);
  }
  else
  {
    v6 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x1000u);
    else
      v6(this, 4096u);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC1u);
  }
  else
  {
    v7 = *((_QWORD *)this + 39);
    if ( *(_DWORD *)(v7 + 24) != *((_DWORD *)this + 28) || *(_DWORD *)(v7 + 28) != *((_DWORD *)this + 29) )
    {
      *(_QWORD *)(v7 + 24) = *((_QWORD *)this + 14);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v7, 1u, 0x2000u);
    }
    v8 = *((_QWORD *)this + 39);
    if ( *(CButton **)(v8 + 80) == this )
    {
      v14 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v8, &v14);
    }
    else if ( *((_DWORD *)this + 26) != *(_DWORD *)(v8 + 16) || *((_DWORD *)this + 27) != *(_DWORD *)(v8 + 20) )
    {
      v9 = *((_QWORD *)this + 13);
      *(_DWORD *)(v8 + 96) |= 1u;
      *(_QWORD *)(v8 + 16) = v9;
      v10 = *(CVisual **)(v8 + 80);
      if ( v10 )
      {
        v11 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v10 + 24LL);
        if ( v11 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v10, 0x2000u);
        else
          v11(v10, 0x2000u);
      }
    }
  }
  return (unsigned int)v3;
}
