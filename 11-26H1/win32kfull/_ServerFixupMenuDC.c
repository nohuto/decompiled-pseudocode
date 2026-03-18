/*
 * XREFs of _ServerFixupMenuDC @ 0x1401A78A8
 * Callers:
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1401A6950 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnINLPUAHDRAWMENU @ 0x1401A6BF0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401A6EB0 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1401A72D0 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1401A7590 (SfnINLPUAHDRAWMENUITEM.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     _WindowFromDC @ 0x1401A7A68 (_WindowFromDC.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1401F3E20 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     GetDpiMetricsForWindow @ 0x140302474 (GetDpiMetricsForWindow.c)
 */

Gre::Base *__fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  Gre::Base *DCEx; // rsi
  unsigned __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 *DpiMetricsForWindow; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  int TextAlign; // r8d
  __int64 v20; // rcx
  _DWORD **v21; // rax
  bool v22; // zf
  __int64 v23[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  v9 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (_DWORD)v9 && a1 )
  {
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v23);
    v11 = WindowFromDC(a1);
    v12 = v11;
    if ( v11 )
    {
      DCEx = (Gre::Base *)_GetDCEx(v11, 0LL, 65539LL);
      UserSessionState = W32GetUserSessionState(v14, v13);
      GreSelectBrush(DCEx, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4752LL));
      DpiMetricsForWindow = (__int64 *)GetDpiMetricsForWindow(v12);
      GreSelectFont(DCEx, *DpiMetricsForWindow);
      v17 = ValidateHmenu(a2, 1LL);
      v24 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v23, v17);
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v23, v18) )
      {
        TextAlign = GreGetTextAlign(a1);
        if ( a4 && *(_QWORD *)(*(_QWORD *)v23[0] + 88LL) )
        {
          v20 = v24;
          if ( !v24 )
            v20 = *(_QWORD *)v23[0];
          v21 = (_DWORD **)MNGetpItemFromIndex(v20, a3);
          if ( !v21 )
            goto LABEL_5;
          v22 = (**v21 & 0x2000) == 0;
          goto LABEL_15;
        }
        if ( *(_QWORD *)(*(_QWORD *)v23[0] + 88LL) )
        {
          v22 = (***(_DWORD ***)(*(_QWORD *)v23[0] + 88LL) & 0x2000) == 0;
LABEL_15:
          if ( !v22 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
LABEL_5:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v23);
  }
  return DCEx;
}
