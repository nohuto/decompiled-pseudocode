/*
 * XREFs of ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180033F14
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800337C8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003088C (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18003425C (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180034614 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::ApplyNavigationDelta(ControllerProcessor *this)
{
  float v1; // xmm3_4
  unsigned int v2; // edi
  float v4; // xmm0_4
  float v5; // xmm2_4
  _DWORD *v6; // rdi
  _DWORD *v7; // rbx
  struct tagPOINT v8; // rbx
  int v9; // r11d
  _DWORD *v10; // r10
  bool v11; // bp
  BOOL v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r9d
  struct ControllerNavigationManager *Instance; // rax
  int v17; // eax
  __int64 v18; // rcx
  struct tagPOINT v20; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT *v21; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((float *)this + 83);
  v2 = 0;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v4 >= 1.0 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 84)) & _xmm) >= 1.0 )
  {
    v5 = *((float *)this + 84);
    v6 = (_DWORD *)((char *)this + 320);
    v7 = (_DWORD *)((char *)this + 316);
    *((float *)this + 84) = v5 - (float)(int)v5;
    *((float *)this + 83) = v1 - (float)(int)v1;
    (*(void (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 33) + 24LL))(
      *((_QWORD *)this + 33),
      (char *)this + 316,
      (char *)this + 320);
    v20 = (struct tagPOINT)__PAIR64__(*v6 + (int)v5, *v7 + (int)v1);
    v8 = ControllerProcessor::AdjustPointToBounds(v20, (struct tagRECT *)((char *)this + 296));
    v11 = v8.x == *v10
       || v8.x == *((_DWORD *)this + 76) - 1
       || v8.y == *((_DWORD *)this + 75)
       || v8.y == *((_DWORD *)this + 77) - 1;
    v12 = v9 != v8.x || *v6 != v8.y;
    v13 = ControllerProcessor::SetPointerPosition(this, v8, 0);
    v2 = v13;
    if ( v13 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_17;
      v15 = 1415;
      goto LABEL_16;
    }
    if ( (*((_BYTE *)this + 312) & 0x20) == 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 180) + 80LL))(
              *((_QWORD *)this + 180),
              *((_QWORD *)this + 182),
              *((_QWORD *)this + 183));
      v2 = v13;
      if ( v13 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        {
LABEL_17:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v15 = 1426;
LABEL_16:
        Template_qqq(v14, &MinInput_Warning_CheckResult, 12, v15, v13);
        goto LABEL_17;
      }
    }
    if ( v11 )
    {
      if ( v12 )
      {
        if ( (*((_BYTE *)this + 312) & 0x10) != 0 )
        {
          Instance = ControllerNavigationManager::GetInstance();
          if ( Instance )
          {
            v20 = v8;
            v21 = &v20;
            v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagPOINT **, __int64))(**((_QWORD **)Instance + 18)
                                                                                         + 104LL))(
                    *((_QWORD *)Instance + 18),
                    0LL,
                    &v21,
                    1LL);
            v2 = v17;
            if ( v17 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                Template_qqq(v18, &MinInput_Warning_CheckResult, 0, 114, v17);
              if ( IsDebuggerPresent() )
                __debugbreak();
              __fastfail(7u);
            }
          }
        }
      }
    }
  }
  return v2;
}
