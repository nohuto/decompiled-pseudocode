/*
 * XREFs of xxxTranslateMessage @ 0x1C00E7A34
 * Callers:
 *     NtUserTranslateMessage @ 0x1C00E79B0 (NtUserTranslateMessage.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022B3CC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C00E7C4C (--1CEtwTraceTranslateMessage@@QEAA@XZ.c)
 *     xxxInternalToUnicode @ 0x1C00E7C78 (xxxInternalToUnicode.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTranslateMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // rbp
  int v13; // eax
  int v14; // esi
  unsigned __int64 v15; // rbp
  unsigned int v17; // edi
  __int64 v18; // r15
  _WORD *v19; // r14
  int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-54h] BYREF
  _BYTE v26[32]; // [rsp+48h] [rbp-50h] BYREF

  v4 = 0;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = a2;
  v8 = 0;
  if ( v6 < 0x100 )
    return 0LL;
  if ( v6 > 0x101 && v6 != 261 )
  {
    if ( v6 != 260 )
      return 0LL;
    v8 = 1;
  }
  v25 = v6;
  LOBYTE(v9) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 1108);
  EtwTraceBeginTranslateMessage(v9, v25);
  v10 = *(_QWORD *)(gptiCurrent + 528LL);
  if ( v10 && ((v22 = *(__int64 **)(*(_QWORD *)v10 + 16LL)) != 0LL ? (v23 = *v22) : (v23 = 0LL), v23 == *(_QWORD *)a1) )
    v11 = v7 | 1;
  else
    v11 = v7 & 0xFFFFFFFE;
  v12 = *(_QWORD *)(a1 + 24);
  v13 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v12),
          *(_QWORD *)(gptiCurrent + 384LL) + 192LL,
          v26,
          16,
          v11,
          &v24,
          0LL);
  v14 = v13;
  v15 = v24 & 0x4000000 | v12;
  if ( v13 )
  {
    if ( v13 <= 0 )
    {
      v17 = v8 != 0 ? 263 : 259;
      v14 = -v13;
    }
    else
    {
      v17 = v8 != 0 ? 262 : 258;
    }
    if ( (v24 & 0x8000) != 0 )
      v15 |= 0x80000000uLL;
    else
      LODWORD(v15) = v15 & 0x7FFFFFFF;
    v18 = ValidateHwnd(*(_QWORD *)a1);
    if ( v18 )
    {
      v19 = v26;
      while ( v14 > 0 )
      {
        v20 = 0;
        if ( v14 > 1 )
          v20 = 0x2000000;
        v21 = _PostTransformableMessageExtended(v18, v17, (unsigned __int16)*v19, v15 | v20, 0LL, 1);
        *v19++ = 0;
        if ( v21 >= (unsigned __int64)MmSystemRangeStart
          && *(_DWORD *)(v21 + 24) == 258
          && (*(_DWORD *)(gptiCurrent + 1200LL) & 1) != 0 )
        {
          *(_DWORD *)(v21 + 100) |= 0x2000u;
          if ( (v24 & 0x8000000) != 0 )
            *(_DWORD *)(v21 + 100) |= 0x4000u;
        }
        --v14;
      }
      v4 = 1;
    }
  }
  else
  {
    v4 = ((unsigned __int8)~(_BYTE)v11 >> 1) & 1;
  }
  CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)&v25);
  return v4;
}
