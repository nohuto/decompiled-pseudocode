/*
 * XREFs of xxxOnPTPMouseOperation @ 0x1C01F65C0
 * Callers:
 *     xxxDesktopThread @ 0x1C0142CC0 (xxxDesktopThread.c)
 * Callees:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C00F6C78 (xxxMoveEvent.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?UnqueuePTPMouseEvent@@YAHPEAUtagPTPMOUSEEVENT@@@Z @ 0x1C01F2874 (-UnqueuePTPMouseEvent@@YAHPEAUtagPTPMOUSEEVENT@@@Z.c)
 */

__int64 xxxOnPTPMouseOperation()
{
  __int64 result; // rax
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // r9
  struct tagPOINT v4; // [rsp+28h] [rbp-79h]
  __int64 v5; // [rsp+58h] [rbp-49h]
  struct _MOUSE_INPUT_DATA v6; // [rsp+98h] [rbp-9h] BYREF
  __int64 i; // [rsp+B0h] [rbp+Fh] BYREF
  struct tagPOINT v8; // [rsp+B8h] [rbp+17h] BYREF
  int v9; // [rsp+C0h] [rbp+1Fh]
  unsigned __int64 v10; // [rsp+C8h] [rbp+27h]

  for ( i = 0LL;
        ;
        QueueMouseEvent(
          v6.ButtonFlags,
          0,
          v6.ExtraInformation,
          v3,
          v1,
          v2,
          0LL,
          (__int64)&v6,
          &i,
          0,
          1,
          1,
          0,
          1u,
          0,
          0,
          0LL,
          0LL) )
  {
    result = UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)&v8);
    if ( !(_DWORD)result )
      break;
    v6.RawButtons = 0;
    v6.ExtraInformation = 0;
    *(_QWORD *)&v6.UnitId = 0x800000LL;
    *(_QWORD *)&v6.LastX = 0LL;
    if ( (v9 & 2) != 0 )
    {
      v6.ButtonFlags |= 1u;
    }
    else
    {
      switch ( v9 )
      {
        case 4:
          v6.ButtonFlags |= 2u;
          break;
        case 8:
          v6.ButtonFlags |= 4u;
          break;
        case 16:
          v6.ButtonFlags |= 8u;
          break;
      }
    }
    v1 = v10;
    v2 = v10 * gliQpcFreq.QuadPart / 0x3E8;
    if ( (v9 & 1) != 0 )
    {
      *(struct tagPOINT *)&v6.LastX = v8;
      xxxMoveEvent(
        v8.x,
        v8.y,
        0x80u,
        v6.ExtraInformation,
        v4,
        &v6,
        (struct _SUBPIXELS *)&i,
        v10,
        v10 * gliQpcFreq.QuadPart / 0x3E8,
        0,
        v5,
        1);
      v3 = (__int64)gptCursorAsync;
      v8 = gptCursorAsync;
    }
    else
    {
      v3 = (__int64)v8;
    }
  }
  return result;
}
