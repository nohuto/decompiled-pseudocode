/*
 * XREFs of ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01F1D50
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01F3FB8 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

void __fastcall xxxHandleMTNodeTargetWindow(struct tagPOINTERINFONODE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  int v6; // ecx
  struct tagWND *v7; // rax
  struct tagWND *v8; // rdi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  int v10; // r8d
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x2000) == 0 )
  {
    v6 = *((_DWORD *)a1 + 1);
    if ( (v6 & 0x200) != 0 && (*(_DWORD *)a1 & 0x400) != 0 && (v6 & 0x80u) != 0 )
    {
      LOBYTE(v5) = 1;
      v7 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 10), v5, a3, a4);
      v8 = v7;
      if ( v7 )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v7);
        if ( CompositionInputWindowUIOwner )
        {
          if ( (*(_BYTE *)(GetTopLevelWindow((__int64)CompositionInputWindowUIOwner) + 55) & 8) != 0 )
          {
            v11 = (*((_DWORD *)a1 + 17) & 0x10000) == 0;
            *((_DWORD *)a1 + 8) = -2;
            if ( !v11 )
              PointerList::SetPointerCapture(*((_QWORD *)a1 + 2), v8, 1LL, 4294967294LL, 0);
          }
          else
          {
            v12 = *((_DWORD *)a1 + 17);
            if ( (v12 & 0x2000) != 0 && (v12 & 0x10000) != 0 )
            {
              v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v15;
              ++*((_DWORD *)v8 + 2);
              v15[1] = v8;
              xxxPointerActivate(v8, a1, v10);
              ThreadUnlock1(v14, v13);
            }
          }
        }
      }
    }
  }
}
