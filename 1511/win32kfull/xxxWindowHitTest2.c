/*
 * XREFs of xxxWindowHitTest2 @ 0x1C00962A0
 * Callers:
 *     xxxWindowHitTest @ 0x1C0096200 (xxxWindowHitTest.c)
 *     xxxWindowFromPoint @ 0x1C00E5B9C (xxxWindowFromPoint.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C022CF48 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     xxxWindowHitTest @ 0x1C0096200 (xxxWindowHitTest.c)
 *     IsCompositionInputWindowUIDisabled @ 0x1C009686C (IsCompositionInputWindowUIDisabled.c)
 *     LayerHitTest @ 0x1C00FE990 (LayerHitTest.c)
 *     SizeBoxHwnd @ 0x1C0249344 (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(struct tagWND *a1, unsigned __int64 a2, int *a3, char a4)
{
  unsigned __int64 v6; // rbx
  struct tagWND *v7; // rdi
  int v8; // ebp
  __int64 v9; // rcx
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v17; // rax
  _QWORD v18[4]; // [rsp+50h] [rbp-38h] BYREF

  v6 = a2;
  v7 = a1;
  v8 = 17;
  if ( !a1
    || !(unsigned int)IsCompositionInputWindow(a1) && (*((_BYTE *)v7 + 55) & 0x10) == 0
    || !(unsigned int)IsCompositionInputWindow(v7) && !PtInRect((_DWORD *)v7 + 28, v6) )
  {
    return 0LL;
  }
  v9 = *((_QWORD *)v7 + 25);
  if ( v9 )
  {
    if ( !(unsigned int)GrePtInRegion(v9, (unsigned int)v6, HIDWORD(a2)) )
      return 0LL;
    v6 = a2;
  }
  if ( (*((_BYTE *)v7 + 50) & 8) != 0 )
  {
    if ( !(unsigned int)LayerHitTest(v7) )
      return 0LL;
    v6 = a2;
  }
  v10 = *((_BYTE *)v7 + 55);
  if ( ((v10 & 8) != 0 || (unsigned int)IsCompositionInputWindowUIDisabled(v7)) && (a4 & 1) != 0 )
  {
    if ( (v10 & 0xC0) != 0x40 )
    {
      v15 = -2;
      goto LABEL_19;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow(v7) && (v10 & 0x20) == 0 && PtInRect((_DWORD *)v7 + 32, v6) )
  {
    v11 = *((_QWORD *)v7 + 12);
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    v18[1] = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v12 = xxxWindowHitTest(*((struct tagWND **)v7 + 12));
    ThreadUnlock1(v14, v13);
    if ( v12 )
      return v12;
  }
  if ( (unsigned int)IsCompositionInputWindow(v7) || *((_QWORD *)v7 + 2) != gptiCurrent )
  {
    v15 = 1;
    goto LABEL_19;
  }
  _InterlockedIncrement(&glSendMessage);
  v15 = xxxSendTransformableMessageTimeout(v7, 132LL, 0LL, (unsigned __int16)a2 | (WORD2(a2) << 16), 0, 0, 0LL, 1, 0);
  if ( v15 == -1 )
    return 0LL;
LABEL_19:
  if ( a3 )
    *a3 = v15;
  if ( (*((_BYTE *)v7 + 50) & 0x40) != 0 )
    v8 = 16;
  if ( v15 == v8 && (*((_BYTE *)v7 + 54) & 4) == 0 )
  {
    v17 = SizeBoxHwnd(v7);
    if ( v17 )
      v7 = (struct tagWND *)v17;
  }
  return *(_QWORD *)v7;
}
