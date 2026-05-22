/*
 * XREFs of ?UpdateHardwareCursor@DWMHardwareCursor@@UEAAJII@Z @ 0x1800213D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEnable@DWMHardwareCursor@@IEAAJ_N@Z @ 0x180020BCC (-SetEnable@DWMHardwareCursor@@IEAAJ_N@Z.c)
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMHardwareCursor::UpdateHardwareCursor(DWMHardwareCursor *this, int a2, int a3)
{
  int v3; // r14d
  int v4; // r15d
  DWMHardwareCursor *v5; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  int updated; // eax
  int v11; // [rsp+20h] [rbp-78h]
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+38h] [rbp-60h]
  int v14; // [rsp+3Ch] [rbp-5Ch]
  int v15; // [rsp+40h] [rbp-58h]
  int v16; // [rsp+48h] [rbp-50h] BYREF
  int v17; // [rsp+4Ch] [rbp-4Ch]
  int v18; // [rsp+50h] [rbp-48h]
  int v19; // [rsp+54h] [rbp-44h]
  int v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+5Ch] [rbp-3Ch]
  __int64 v22; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( !*((_BYTE *)this + 32) )
    return 0LL;
  if ( *((_BYTE *)this + 64) )
    DWMHardwareCursor::UpdateBitmapSource((DWMHardwareCursor *)((char *)this - 8));
  v7 = *((_QWORD *)v5 + 12);
  if ( !v7 )
    return 2147549183LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, (__int64)v5 + 104);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = *((_QWORD *)v5 + 13);
    v13 = v4 - *((_DWORD *)v5 + 14);
    v14 = v3 - *((_DWORD *)v5 + 15);
    v15 = 1;
    v16 = 1;
    v17 = *((_DWORD *)v5 + 12);
    v18 = *((_DWORD *)v5 + 13);
    v19 = v17 * *((_DWORD *)v5 + 23);
    v20 = 0;
    v21 = 0;
    v22 = *((_QWORD *)v5 + 18);
    try
    {
      updated = NtHWCursorUpdatePointer(&v12, &v16);
      v11 = updated;
    }
    catch ( ... )
    {
      v5 = this;
      v3 = a3;
      v4 = a2;
      updated = v11;
    }
    if ( updated >= 0 || updated == -1073741822 || updated == -1073741637 )
    {
      v9 = 0;
      *((_DWORD *)v5 + 6) = v4;
      *((_DWORD *)v5 + 7) = v3;
      if ( !*((_BYTE *)v5 + 33) )
      {
        DWMHardwareCursor::SetEnable((DWMHardwareCursor *)((char *)v5 - 8), 1);
        *((_BYTE *)v5 + 33) = 1;
      }
    }
    else
    {
      v9 = -2147467259;
      if ( *((_BYTE *)v5 + 33) )
      {
        DWMHardwareCursor::SetEnable((DWMHardwareCursor *)((char *)v5 - 8), 0);
        *((_BYTE *)v5 + 33) = 0;
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x157,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
      (const char *)(unsigned int)v8);
  }
  return v9;
}
