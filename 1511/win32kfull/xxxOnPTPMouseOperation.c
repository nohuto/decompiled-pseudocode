/*
 * XREFs of xxxOnPTPMouseOperation @ 0x1C01F6A90
 * Callers:
 *     xxxDesktopThread @ 0x1C00CFAE0 (xxxDesktopThread.c)
 * Callees:
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C0088630 (xxxMoveEvent.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void xxxOnPTPMouseOperation()
{
  char v0; // cl
  __m128i v1; // xmm6
  int v2; // r8d
  int v3; // edi
  LONGLONG v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r9
  struct tagPOINT v7; // [rsp+28h] [rbp-89h]
  __int64 v8; // [rsp+58h] [rbp-59h]
  struct _MOUSE_INPUT_DATA v9; // [rsp+98h] [rbp-19h] BYREF
  __int64 i; // [rsp+B0h] [rbp-1h] BYREF
  __int128 v11; // [rsp+B8h] [rbp+7h]

  for ( i = 0LL;
        ;
        QueueMouseEvent(
          v9.ButtonFlags,
          0,
          v9.ExtraInformation,
          v6,
          v3,
          v5,
          0LL,
          (__int64)&v9,
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
    ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
    v0 = gdwPTPMouseEvents;
    if ( !gdwPTPMouseEvents )
      break;
    --gdwPTPMouseEvents;
    v11 = gPTPMouseEventQueue[((_BYTE)gdwPTPQueueHead - v0 + 1) & 0x3F];
    v1 = (__m128i)v11;
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    v2 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 8));
    v9.RawButtons = 0;
    v9.ExtraInformation = 0;
    *(_QWORD *)&v9.UnitId = 0x800000LL;
    *(_QWORD *)&v9.LastX = 0LL;
    if ( (v2 & 2) != 0 )
    {
      v9.ButtonFlags |= 1u;
    }
    else
    {
      switch ( v2 )
      {
        case 4:
          v9.ButtonFlags |= 2u;
          break;
        case 8:
          v9.ButtonFlags |= 4u;
          break;
        case 16:
          v9.ButtonFlags |= 8u;
          break;
      }
    }
    v3 = HIDWORD(v11);
    v4 = gliQpcFreq.QuadPart * HIDWORD(v11);
    v5 = v4 / 1000;
    if ( (v2 & 1) != 0 )
    {
      *(_QWORD *)&v9.LastX = v11;
      xxxMoveEvent(
        v11,
        SDWORD1(v11),
        0x80u,
        v9.ExtraInformation,
        v7,
        &v9,
        (struct _SUBPIXELS *)&i,
        HIDWORD(v11),
        v4 / 1000,
        0,
        v8,
        1);
      v6 = (__int64)gptCursorAsync;
    }
    else
    {
      v6 = v11;
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
}
