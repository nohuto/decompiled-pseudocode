/*
 * XREFs of _RegisterClassEx @ 0x14014ECE0
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1402B9700 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, unsigned __int16 a3, unsigned int a4)
{
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rbx
  unsigned __int16 v10; // bx
  __int64 v12; // rax
  _DWORD *v13; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF
  int v15; // [rsp+50h] [rbp+20h] BYREF

  v8 = PtiCurrent(a1);
  v13 = (_DWORD *)gSmartObjNullRef;
  v14 = *((_QWORD *)v8 + 209);
  *((_QWORD *)v8 + 209) = &v14;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    v12 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), 7);
    if ( v12 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 16LL);
  }
  v15 = 0;
  v9 = InternalRegisterClassEx(a1, a3, a4, &v15);
  if ( v9 != *(_QWORD *)v13 )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)&v13);
    if ( v9 )
    {
      v13 = *(_DWORD **)(v9 + 128);
      ++v13[2];
    }
    else
    {
      v13 = (_DWORD *)gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v13 )
  {
    if ( !v15 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) + 24LL) = a2[1];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) + 16LL) = *a2;
    }
    v10 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) + 2LL);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v13);
    return v10;
  }
  else
  {
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v13);
    return 0LL;
  }
}
