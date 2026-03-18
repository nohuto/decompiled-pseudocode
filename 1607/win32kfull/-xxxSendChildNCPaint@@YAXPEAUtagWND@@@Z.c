/*
 * XREFs of ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C0055550
 * Callers:
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 * Callees:
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0112454 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxSendChildNCPaint(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v3;
  v1 = 0LL;
  v2 = *((_QWORD *)a1 + 12);
  v4 = 0LL;
  while ( v2 )
  {
    if ( !*(_QWORD *)(v2 + 160) && (*(_BYTE *)(v2 + 41) & 8) != 0 )
    {
      v4 = v2;
      ++*(_DWORD *)(v2 + 8);
      if ( v1 )
        HMUnlockObject(v1);
      xxxSendNCPaint((struct tagWND *)v2, (HRGN)1);
      v1 = v4;
    }
    v2 = *(_QWORD *)(v2 + 72);
  }
  ThreadUnlock1(a1, v1);
}
