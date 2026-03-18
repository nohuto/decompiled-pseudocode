/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1C0233F08
 * Callers:
 *     xxxEnableMenuItem @ 0x1C0067B88 (xxxEnableMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C006B174 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C00B5AC0 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0121D44 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     _GetClientRect @ 0x1C010B47C (_GetClientRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C020E55C (xxxInvalidateRect.c)
 */

__int64 __fastcall xxxMNUpdateShownMenu(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r12d
  int v10; // r13d
  int v11; // r15d
  unsigned __int16 v12; // r9
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v23[3]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v25[2]; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v26; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = a3;
  v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v23;
  v23[1] = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v24;
  v24[1] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  GetClientRect(v3, (__int64)v25);
  if ( !*(_DWORD *)(v5 + 56) )
  {
    v26 = *(struct tagRECT *)v25;
    v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v25, 12));
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v25, 8));
    v25[1] = __PAIR64__(v9, v10);
    v11 = *(_DWORD *)(v5 + 128) & 3;
    xxxSendMessage((struct tagWND *)v3, 0x1E2u, v6, 0LL);
    if ( (unsigned int)MNGetpItemIndex(v5, a2) == -1 )
      goto LABEL_35;
    LOBYTE(v6) = v6 & 0xFB;
    v8 = v11 ^ *(_DWORD *)(v5 + 128) & 3u;
    if ( v11 != (*(_DWORD *)(v5 + 128) & 3) )
      goto LABEL_35;
    LODWORD(v25[1]) = v12;
    if ( a2 )
    {
      if ( v12 != v10 )
        goto LABEL_35;
      v13 = *(_DWORD *)(v5 + 60);
      HIDWORD(v25[1]) = v13;
      if ( (*(_DWORD *)(v5 + 128) & 3) != 0 )
      {
        if ( v13 <= v9 )
        {
          v14 = *(unsigned int *)(v5 + 120);
          if ( (_DWORD)v14 == -1 || (unsigned int)v14 >= *(_DWORD *)(v5 + 52) )
            v8 = 0LL;
          else
            v8 = *(_QWORD *)(v5 + 80) + 152 * v14;
          v7 = (unsigned int)(*(_DWORD *)(a2 + 76) - *(_DWORD *)(v8 + 76));
          goto LABEL_32;
        }
        GetClientRect(v3, (__int64)&v26);
        v13 = HIDWORD(v25[1]);
      }
      v15 = *(unsigned int *)(v5 + 120);
      if ( (_DWORD)v15 == -1 || (unsigned int)v15 >= *(_DWORD *)(v5 + 52) )
        v16 = 0LL;
      else
        v16 = *(_QWORD *)(v5 + 80) + 152 * v15;
      v8 = (unsigned int)(*(_DWORD *)(a2 + 76) - *(_DWORD *)(v16 + 76));
      v26.top = v8;
      HIDWORD(v25[0]) = v8;
      if ( (int)v8 >= 0 && (int)v8 < *(_DWORD *)(v5 + 60) )
      {
        xxxScrollWindowEx((struct tagWND *)v3, 0, v13 - v9, &v26, v25, 0LL, 0LL, 6);
        if ( (unsigned int)MNGetpItemIndex(v5, a2) == -1 )
          goto LABEL_35;
      }
    }
  }
  if ( (v6 & 2) != 0 )
    goto LABEL_39;
  if ( !a2 )
  {
LABEL_35:
    v19 = 0LL;
    goto LABEL_36;
  }
  v17 = *(unsigned int *)(v5 + 120);
  if ( (_DWORD)v17 == -1 || (unsigned int)v17 >= *(_DWORD *)(v5 + 52) )
    v18 = 0LL;
  else
    v18 = *(_QWORD *)(v5 + 80) + 152 * v17;
  v7 = (unsigned int)(*(_DWORD *)(a2 + 76) - *(_DWORD *)(v18 + 76));
  v8 = (unsigned int)(v7 + *(_DWORD *)(a2 + 84));
  HIDWORD(v25[1]) = v7 + *(_DWORD *)(a2 + 84);
LABEL_32:
  HIDWORD(v25[0]) = v7;
  if ( (int)v7 >= 0 && (int)v7 < *(_DWORD *)(v5 + 60) )
  {
    v19 = v25;
LABEL_36:
    xxxInvalidateRect((struct tagWND *)v3, v19, 1);
  }
  if ( (v6 & 4) != 0 )
    xxxSetWindowPos((struct tagWND *)v3, 0LL, 0LL, 0LL, 0, 0, 55);
LABEL_39:
  ThreadUnlock1(v8, v7);
  return ThreadUnlock1(v21, v20);
}
