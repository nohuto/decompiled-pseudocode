/*
 * XREFs of _GetSubMenu @ 0x14000F1E0
 * Callers:
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402F454C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x14000F2C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetSubMenu(__int64 a1)
{
  struct tagTHREADINFO *v2; // rax
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 *v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h]
  _QWORD v10[3]; // [rsp+38h] [rbp-18h] BYREF

  v2 = PtiCurrent();
  v7 = (__int64 *)gSmartObjNullRef;
  v8 = *((_QWORD *)v2 + 209);
  *((_QWORD *)v2 + 209) = &v8;
  v9 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v10, a1);
  v10[2] = 0LL;
  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 40LL) + 44LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
    if ( v4 )
    {
      v9 = 0LL;
      if ( v4 == *v7 )
      {
LABEL_6:
        v5 = *v7;
        goto LABEL_7;
      }
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v7);
      v7 = *(__int64 **)(v4 + 152);
      ++*((_DWORD *)v7 + 2);
    }
  }
  v5 = v9;
  if ( !v9 )
    goto LABEL_6;
LABEL_7:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v7);
  return v5;
}
