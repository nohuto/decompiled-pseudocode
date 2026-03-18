/*
 * XREFs of ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01FAB0C
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FACF0 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01FCD38 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

void __fastcall xxxHandleMTNodeTargetWindow(struct tagPOINTERINFONODE *a1)
{
  int v2; // ecx
  struct tagWND *v3; // rax
  struct tagWND *v4; // rdi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  int v6; // r8d
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 1072LL) & 0x2000) == 0 )
  {
    v2 = *((_DWORD *)a1 + 1);
    if ( (v2 & 0x100) != 0 && (*(_DWORD *)a1 & 0x400) != 0 && (v2 & 0x40) != 0 )
    {
      v3 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 10), 1);
      v4 = v3;
      if ( v3 )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v3);
        if ( CompositionInputWindowUIOwner )
        {
          if ( (*(_BYTE *)(GetTopLevelWindow((__int64)CompositionInputWindowUIOwner) + 55) & 8) != 0 )
          {
            v7 = (*((_DWORD *)a1 + 17) & 0x10000) == 0;
            *((_DWORD *)a1 + 8) = -2;
            if ( !v7 )
              PointerList::SetPointerCapture(*((_QWORD *)a1 + 2), v4, 1LL, 4294967294LL, 0);
          }
          else
          {
            v8 = *((_DWORD *)a1 + 17);
            if ( (v8 & 0x2000) != 0 && (v8 & 0x10000) != 0 )
            {
              v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v11;
              ++*((_DWORD *)v4 + 2);
              v11[1] = v4;
              xxxPointerActivate(v4, a1, v6);
              ThreadUnlock1(v10, v9);
            }
          }
        }
      }
    }
  }
}
