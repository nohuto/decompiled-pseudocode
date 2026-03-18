/*
 * XREFs of GreSetLWContentOwner @ 0x140333598
 * Callers:
 *     ChangeWindowBitmapOwner @ 0x1402A4358 (ChangeWindowBitmapOwner.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140041070 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z @ 0x140074718 (--0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     GreSetBitmapContentOwner @ 0x14014BC6C (GreSetBitmapContentOwner.c)
 */

__int64 __fastcall GreSetLWContentOwner(Gre::Base *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  struct Gre::Base::SESSION_GLOBALS *v6; // rbx
  HDEV HDEV; // rax
  Gre::Base *v8; // rcx
  HSURF *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v5 = 0;
  v6 = Gre::Base::Globals(a1);
  HDEV = (HDEV)UserGetHDEV();
  ENTER_DWM_CRIT_SPECIAL::ENTER_DWM_CRIT_SPECIAL((ENTER_DWM_CRIT_SPECIAL *)v14, v6, HDEV, 1);
  if ( IsDwmActive(v8) )
  {
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v15, (HWND)a1);
    v10 = v15;
    if ( v15 )
    {
      v11 = *(_QWORD *)(v15 + 144);
      if ( v11 )
      {
        v5 = 1;
        v9 = (HSURF *)((*(_QWORD *)(v11 + 184) - 24LL) & -(__int64)(*(_QWORD *)(v11 + 184) != 0LL));
        if ( v9 )
          v5 = GreSetBitmapContentOwner(*v9, -1LL, a3);
      }
      v12 = Gre::Base::Globals((Gre::Base *)v9);
      DEC_SHARE_REF_CNT(v12, v10);
    }
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v14);
  return v5;
}
