/*
 * XREFs of xxxWindowHitTest2 @ 0x1C011807C
 * Callers:
 *     xxxWindowFromPoint @ 0x1C006D6BC (xxxWindowFromPoint.c)
 *     xxxWindowHitTest @ 0x1C0117FD0 (xxxWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0222C80 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowHitTest @ 0x1C0117FD0 (xxxWindowHitTest.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C0118264 (IsCompositionInputWindowUIDisabled.c)
 *     LayerHitTest @ 0x1C0121450 (LayerHitTest.c)
 *     SizeBoxHwnd @ 0x1C024571C (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(struct tagWND *a1, unsigned __int64 a2, int *a3, char a4)
{
  unsigned __int64 v6; // rbx
  struct tagWND *v7; // rdi
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  char v13; // si
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v20; // rax
  _QWORD v21[4]; // [rsp+50h] [rbp-38h] BYREF

  v6 = a2;
  v7 = a1;
  v8 = 17;
  if ( !a1
    || !(unsigned int)IsCompositionInputWindow(a1) && (*((_BYTE *)v7 + 55) & 0x10) == 0
    || !(unsigned int)IsCompositionInputWindow(v7) && !PtInRect((_DWORD *)v7 + 28, v6) )
  {
    return 0LL;
  }
  v12 = *((_QWORD *)v7 + 25);
  if ( v12 )
  {
    if ( !(unsigned int)GrePtInRegion(v12, (unsigned int)v6, HIDWORD(a2)) )
      return 0LL;
    v6 = a2;
  }
  if ( (*((_BYTE *)v7 + 50) & 8) != 0 )
  {
    if ( !(unsigned int)LayerHitTest(v7, v6) )
      return 0LL;
    v6 = a2;
  }
  v13 = *((_BYTE *)v7 + 55);
  if ( ((v13 & 8) != 0 || (unsigned int)IsCompositionInputWindowUIDisabled(v7)) && (a4 & 1) != 0 )
  {
    if ( (v13 & 0xC0) != 0x40 )
    {
      v18 = -2;
      goto LABEL_19;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow(v7) && (v13 & 0x20) == 0 && PtInRect((_DWORD *)v7 + 32, v6) )
  {
    v14 = *((_QWORD *)v7 + 12);
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v15 = xxxWindowHitTest(*((struct tagWND **)v7 + 12));
    ThreadUnlock1(v17, v16);
    if ( v15 )
      return v15;
  }
  if ( (unsigned int)IsCompositionInputWindow(v7) || *((_QWORD *)v7 + 2) != gptiCurrent )
  {
    v18 = 1;
    goto LABEL_19;
  }
  _InterlockedIncrement(&glSendMessage);
  v18 = xxxSendTransformableMessageTimeout(v7, 132LL, 0LL, (unsigned __int16)a2 | (WORD2(a2) << 16), 0, 0, 0LL, 1, 0);
  if ( v18 == -1 )
    return 0LL;
LABEL_19:
  if ( a3 )
    *a3 = v18;
  if ( (*((_BYTE *)v7 + 50) & 0x40) != 0 )
    v8 = 16;
  if ( v18 == v8 && (*((_BYTE *)v7 + 54) & 4) == 0 )
  {
    v20 = SizeBoxHwnd(v7, v9, v10, v11);
    if ( v20 )
      v7 = (struct tagWND *)v20;
  }
  return *(_QWORD *)v7;
}
