/*
 * XREFs of xxxTranslateMessage @ 0x1C0099414
 * Callers:
 *     NtUserTranslateMessage @ 0x1C0099390 (NtUserTranslateMessage.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C023260C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C0099624 (--1CEtwTraceTranslateMessage@@QEAA@XZ.c)
 *     xxxInternalToUnicode @ 0x1C0099650 (xxxInternalToUnicode.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTranslateMessage(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  unsigned __int64 v10; // rbp
  int v11; // eax
  int v12; // esi
  unsigned __int64 v13; // rbp
  unsigned int v15; // edi
  __int64 v16; // r15
  _WORD *v17; // r14
  int v18; // eax
  unsigned __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-54h] BYREF
  _BYTE v24[32]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  v6 = 0;
  if ( v4 < 0x100 )
    return 0LL;
  if ( v4 > 0x101 && v4 != 261 )
  {
    if ( v4 != 260 )
      return 0LL;
    v6 = 1;
  }
  v23 = v4;
  LOBYTE(v7) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1084);
  EtwTraceBeginTranslateMessage(v7, v23);
  v8 = *(_QWORD *)(gptiCurrent + 528LL);
  if ( v8 && ((v20 = *(__int64 **)(*(_QWORD *)v8 + 16LL)) != 0LL ? (v21 = *v20) : (v21 = 0LL), v21 == *(_QWORD *)a1) )
    v9 = a2 | 1;
  else
    v9 = a2 & 0xFFFFFFFE;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v10),
          *(_QWORD *)(gptiCurrent + 384LL) + 184LL,
          v24,
          16,
          v9,
          &v22,
          0LL);
  v12 = v11;
  v13 = v22 & 0x4000000 | v10;
  if ( v11 )
  {
    if ( v11 <= 0 )
    {
      v15 = v6 != 0 ? 263 : 259;
      v12 = -v11;
    }
    else
    {
      v15 = v6 != 0 ? 262 : 258;
    }
    if ( (v22 & 0x8000) != 0 )
      v13 |= 0x80000000uLL;
    else
      LODWORD(v13) = v13 & 0x7FFFFFFF;
    v16 = ValidateHwnd(*(_QWORD *)a1);
    if ( v16 )
    {
      v17 = v24;
      while ( v12 > 0 )
      {
        v18 = 0;
        if ( v12 > 1 )
          v18 = 0x2000000;
        v19 = _PostTransformableMessageExtended(v16, v15, (unsigned __int16)*v17, v13 | v18, 0LL, 1);
        *v17++ = 0;
        if ( v19 >= (unsigned __int64)MmSystemRangeStart
          && *(_DWORD *)(v19 + 24) == 258
          && (*(_DWORD *)(gptiCurrent + 1176LL) & 1) != 0 )
        {
          *(_DWORD *)(v19 + 92) |= 0x2000u;
          if ( (v22 & 0x8000000) != 0 )
            *(_DWORD *)(v19 + 92) |= 0x4000u;
        }
        --v12;
      }
      v2 = 1;
    }
  }
  else
  {
    v2 = ((unsigned __int8)~(_BYTE)v9 >> 1) & 1;
  }
  CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)&v23);
  return v2;
}
