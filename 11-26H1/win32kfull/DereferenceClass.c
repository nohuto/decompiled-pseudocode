/*
 * XREFs of DereferenceClass @ 0x14014EE40
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

__int64 __fastcall DereferenceClass(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagTHREADINFO *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v8; // rax
  _QWORD **v9; // rdx
  _QWORD *i; // r8
  _QWORD *v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF

  v2 = *(_QWORD *)(a2 + 136);
  v5 = PtiCurrent(a1);
  v11 = (_QWORD *)gSmartObjNullRef;
  if ( v2 )
  {
    v11 = *(_QWORD **)(v2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(v2 + 128) + 8LL);
  }
  v12 = *((_QWORD *)v5 + 209);
  *((_QWORD *)v5 + 209) = &v12;
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 128LL) = 0LL;
  v6 = v11;
  *(_QWORD *)(a2 + 136) = 0LL;
  --*(_DWORD *)(*v6 + 72LL);
  if ( *v11 != *(_QWORD *)(*v11 + 56LL) )
  {
    --*(_DWORD *)(*(_QWORD *)(*v11 + 56LL) + 72LL);
    if ( !*(_DWORD *)(*v11 + 72LL) )
    {
      v8 = v11;
      v9 = (_QWORD **)(*(_QWORD *)(*v11 + 56LL) + 64LL);
      for ( i = *v9; i != (_QWORD *)*v8; i = (_QWORD *)*i )
      {
        v8 = v11;
        v9 = (_QWORD **)i;
      }
      DestroyClass(a1, v9);
    }
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v11);
}
