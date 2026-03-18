/*
 * XREFs of xxxEndMenu @ 0x140290424
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x14025FDB4 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxEndMenuLoop @ 0x14028CF70 (xxxEndMenuLoop.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNReleaseCapture @ 0x140178014 (xxxMNReleaseCapture.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 */

_QWORD *__fastcall xxxEndMenu(__int64 a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 *v3; // rax
  _DWORD *v4; // rcx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO *v6; // rsi
  int v7; // eax
  int v8; // ebx
  __int64 *v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v2 = PtiCurrent(a1);
  v10 = (__int64 *)gSmartObjNullRef;
  v11 = *((_QWORD *)v2 + 209);
  *((_QWORD *)v2 + 209) = &v11;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v10, *(_QWORD *)a1);
  if ( *v10 )
  {
    v3 = v10;
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    v4 = (_DWORD *)*v3;
    *(_DWORD *)*v3 |= 0x8000u;
    v5 = PtiCurrent((__int64)v4);
    v6 = *(struct tagTHREADINFO **)(a1 + 32);
    if ( *(_QWORD *)(*((_QWORD *)v5 + 58) + 112LL) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
      xxxMNReleaseCapture(a1);
    if ( v5 == v6 )
    {
      v7 = *(_DWORD *)(a1 + 8);
      if ( (v7 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v7 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0, 0LL);
        }
        else
        {
          v8 = *(_DWORD *)*v10;
          xxxMNCloseHierarchy(*v10, a1);
          if ( (v8 & 8) != 0 && *(_QWORD *)(*v10 + 16) )
            xxxDestroyWindow(*(struct tagWND **)(*v10 + 16));
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v10);
}
