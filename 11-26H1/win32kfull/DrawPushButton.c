/*
 * XREFs of DrawPushButton @ 0x140126508
 * Callers:
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x1401F09B0 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     DrawEdge @ 0x1401266B0 (DrawEdge.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 */

int __fastcall DrawPushButton(HDC a1, RECT *a2, __int16 a3, __int16 a4)
{
  int v7; // r14d
  int v8; // r15d
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  HBRUSH v15; // rbx
  int result; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 UserSessionState; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  RECT v23; // [rsp+20h] [rbp-28h] BYREF

  v23 = *a2;
  v7 = 0;
  v8 = 0;
  DrawEdge(a1);
  v10 = 0;
  v14 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19904);
  if ( (a3 & 0x400) != 0 )
  {
    if ( *(_WORD *)(v14 + 6996) < 8u
      || (v14 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19904), *(_DWORD *)(v14 + 4648) == 0xFFFFFF) )
    {
      v17 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19904);
      v15 = *(HBRUSH *)(v17 + 4944);
      UserSessionState = W32GetUserSessionState(v17, v18);
      v7 = GreSetBkColor(a1, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4648LL));
      v22 = W32GetUserSessionState(v21, v20);
      v8 = GreSetTextColor(a1, *(_DWORD *)(*(_QWORD *)(v22 + 19904) + 4628LL));
      v10 = 1;
    }
    else
    {
      v15 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19904) + 4856LL);
    }
  }
  else
  {
    v15 = *(HBRUSH *)(v14 + 4816);
  }
  result = FillRect(a1, &v23, v15);
  if ( v10 )
  {
    GreSetBkColor(a1, v7);
    result = GreSetTextColor(a1, v8);
  }
  if ( (a4 & 0x2000) != 0 )
    *a2 = v23;
  return result;
}
