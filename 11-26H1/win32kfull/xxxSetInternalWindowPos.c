/*
 * XREFs of xxxSetInternalWindowPos @ 0x1402C8BFC
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1402BCF60 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetMonitorRect @ 0x140030144 (GetMonitorRect.c)
 *     UpdateCheckpoint @ 0x140030480 (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1400307D4 (GetMonitorWorkRect.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int8 a2, struct tagRECT *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned int *v10; // rdi
  __int64 v11; // rbx
  __m128i v12; // xmm6
  __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  __int64 v16; // rbx
  __m128i v17; // xmm6
  __m128i *MonitorRect; // rax
  __m128i v19; // xmm0
  __int64 v20; // rcx
  struct tagRECT v21; // [rsp+40h] [rbp-30h] BYREF
  __m128i v22; // [rsp+50h] [rbp-20h] BYREF

  result = (__int64)UpdateCheckpoint(a1);
  v10 = (unsigned int *)result;
  if ( result )
  {
    if ( a3 )
    {
      v21 = *a3;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v11 = MonitorFromRect(&a3->left, 1LL, 0);
        v12 = *(__m128i *)GetMonitorWorkRect((__int64)&v22, v11);
        v13 = GetMonitorRect(&v22, v11)->m128i_i64[0];
        v14 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4)) - HIDWORD(v13);
        v21.bottom += v14;
        v15 = _mm_cvtsi128_si32(v12) - v13;
        v21.left += v15;
        v21.right += v15;
        v21.top += v14;
      }
      CHECKPOINT::SetNormalRect((CHECKPOINT *)v10, a1, &v21, 0);
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v10[4] &= ~0x10u;
      v20 = v10[4] & 0xFFFFFFFE;
    }
    else
    {
      *(_QWORD *)v10 = *a4;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v21 = *(struct tagRECT *)(v10 + 5);
        v16 = MonitorFromRect(&v21.left, 1LL, 0);
        v17 = *(__m128i *)GetMonitorWorkRect((__int64)&v22, v16);
        MonitorRect = GetMonitorRect(&v22, v16);
        v19 = *MonitorRect;
        *v10 += _mm_cvtsi128_si32(v17) - *(_OWORD *)MonitorRect;
        v10[1] += _mm_cvtsi128_si32(_mm_srli_si128(v17, 4)) - v19.m128i_i32[1];
      }
      v10[4] |= 1u;
      v20 = v10[4] | 0x10;
    }
    v10[4] = v20;
    LOBYTE(v9) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
    if ( (v9 & 0x20) != 0 )
    {
      if ( (v20 & 0x10) != 0 )
        xxxSetWindowPos(a1, 0LL, *v10, v10[1], 0, 0, 21);
    }
    else if ( (v9 & 1) == 0 && a3 )
    {
      xxxSetWindowPos(
        a1,
        0LL,
        (unsigned int)a3->left,
        (unsigned int)a3->top,
        a3->right - a3->left,
        a3->bottom - a3->top,
        4);
    }
    W32GetUserSessionState(v20, v9);
    xxxShowWindowEx(a1, a2, 0);
    return 1LL;
  }
  return result;
}
