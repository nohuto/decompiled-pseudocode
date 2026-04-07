/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001A620
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001D1B0 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028D08 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180029338 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this)
{
  int updated; // eax
  int v3; // ebp
  __int64 v4; // r14
  char v5; // r15
  void (__fastcall *v6)(CVisual *__hidden, unsigned int); // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  CVisual *v10; // rbx
  void (__fastcall *v11)(CVisual *__hidden, unsigned int); // rdi
  struct tagPOINT v13; // [rsp+58h] [rbp+10h] BYREF

  updated = CVisual::UpdateLayout(this);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x36u);
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
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 6) + 8 * v4) + 24LL))(
        *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4),
        2LL);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0xCAu);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x103u);
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
      v13 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v8, &v13);
    }
    else if ( *((_DWORD *)this + 26) != *(_DWORD *)(v8 + 16) || *((_DWORD *)this + 27) != *(_DWORD *)(v8 + 20) )
    {
      v9 = *((_QWORD *)this + 13);
      *(_DWORD *)(v8 + 96) |= 1u;
      v10 = *(CVisual **)(v8 + 80);
      *(_QWORD *)(v8 + 16) = v9;
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
