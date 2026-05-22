/*
 * XREFs of ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x1800361BC
 * Callers:
 *     ?Initialize@EdgeGestureTarget@@IEAAJIPEAX@Z @ 0x180023694 (-Initialize@EdgeGestureTarget@@IEAAJIPEAX@Z.c)
 *     ?InitializeConverged@EdgeGestureTarget@@IEAAJI@Z @ 0x18002388C (-InitializeConverged@EdgeGestureTarget@@IEAAJI@Z.c)
 *     ?Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18005B160 (-Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@MagnifierTarget@@IEAAJXZ @ 0x180081A7C (-Initialize@MagnifierTarget@@IEAAJXZ.c)
 * Callees:
 *     ??0GestureSession@@AEAA@XZ @ 0x180036244 (--0GestureSession@@AEAA@XZ.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureRecognizerCreate(struct IGestureRecognizer **a1)
{
  GestureSession *v2; // rax
  GestureSession *v3; // rbx
  struct IGestureRecognizer *v4; // rcx
  __int64 result; // rax

  *a1 = 0LL;
  v2 = (GestureSession *)malloc(0x538uLL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x538uLL);
  if ( v3 )
    v4 = (struct IGestureRecognizer *)GestureSession::GestureSession(v3);
  else
    v4 = 0LL;
  result = v4 == 0LL ? 0x8007000E : 0;
  if ( v4 )
  {
    *a1 = v4;
    return 0LL;
  }
  return result;
}
