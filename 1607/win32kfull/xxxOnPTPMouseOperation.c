/*
 * XREFs of xxxOnPTPMouseOperation @ 0x1C01EDC74
 * Callers:
 *     xxxDesktopThread @ 0x1C00DF620 (xxxDesktopThread.c)
 * Callees:
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C011E61C (xxxMoveEvent.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?UnqueuePTPMouseEvent@@YAHPEAUtagPTPMOUSEEVENT@@@Z @ 0x1C01E8E5C (-UnqueuePTPMouseEvent@@YAHPEAUtagPTPMOUSEEVENT@@@Z.c)
 */

__int64 xxxOnPTPMouseOperation()
{
  __int64 result; // rax
  __int64 v1; // rdi
  LONGLONG v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r9
  struct tagPOINT v5; // [rsp+28h] [rbp-79h]
  __int64 v6; // [rsp+58h] [rbp-49h]
  struct _MOUSE_INPUT_DATA v7; // [rsp+98h] [rbp-9h] BYREF
  __int64 i; // [rsp+B0h] [rbp+Fh] BYREF
  struct tagPOINT v9; // [rsp+B8h] [rbp+17h] BYREF
  int v10; // [rsp+C0h] [rbp+1Fh]
  unsigned __int64 v11; // [rsp+C8h] [rbp+27h]

  for ( i = 0LL;
        ;
        QueueMouseEvent(
          v7.ButtonFlags,
          0,
          v7.ExtraInformation,
          v4,
          v1,
          v3,
          0LL,
          (__int64)&v7,
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
    result = UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)&v9);
    if ( !(_DWORD)result )
      break;
    v7.RawButtons = 0;
    v7.ExtraInformation = 0;
    *(_QWORD *)&v7.UnitId = 0x800000LL;
    *(_QWORD *)&v7.LastX = 0LL;
    if ( (v10 & 2) != 0 )
    {
      v7.ButtonFlags |= 1u;
    }
    else
    {
      switch ( v10 )
      {
        case 4:
          v7.ButtonFlags |= 2u;
          break;
        case 8:
          v7.ButtonFlags |= 4u;
          break;
        case 16:
          v7.ButtonFlags |= 8u;
          break;
      }
    }
    v1 = v11;
    v2 = gliQpcFreq.QuadPart * (unsigned int)v11;
    v3 = v2 / 1000;
    if ( (v10 & 1) != 0 )
    {
      *(struct tagPOINT *)&v7.LastX = v9;
      xxxMoveEvent(v9.x, v9.y, 0x80u, v7.ExtraInformation, v5, &v7, (struct _SUBPIXELS *)&i, v11, v2 / 1000, 0, v6, 1);
      v4 = (__int64)gptCursorAsync;
      v9 = gptCursorAsync;
    }
    else
    {
      v4 = (__int64)v9;
    }
  }
  return result;
}
