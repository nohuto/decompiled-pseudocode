/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402D8E4C
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxHandleMenuPainting(unsigned int **a1, struct tagMENU ***a2)
{
  __int64 v4; // rdx
  struct tagMENU *v5; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-78h] BYREF
  HDC v8[10]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(v8, 0, 0x48uLL);
  v4 = (__int64)a2[2];
  if ( !v4 )
    v4 = (__int64)**a2;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v4);
  xxxBeginPaint(a1, (__int64)v8);
  v5 = (struct tagMENU *)a2[2];
  if ( !v5 )
    v5 = **a2;
  xxxMenuDraw(v8[0], v5, (__int64)a1);
  xxxEndPaint(a1, v8);
  return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
}
