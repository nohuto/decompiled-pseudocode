/*
 * XREFs of xxxSendEraseBkgnd @ 0x14012BCEC
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall xxxSendEraseBkgnd(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 DCEx; // rsi
  struct tagTHREADINFO *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  int v9; // ebx
  int v10; // ecx
  _DWORD *v11; // rax
  int v12; // r13d
  int v13; // r15d
  int v14; // eax
  int v15; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rax
  int v20; // [rsp+80h] [rbp+18h]
  int v21; // [rsp+88h] [rbp+20h]

  if ( !a3 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
    return 0LL;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, 327808LL);
  v6 = PtiCurrent((__int64)a1);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) != *((_QWORD *)v6 + 57) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 1LL);
  v7 = xxxSendMessage(a1, 0x14u);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) != *((_QWORD *)v6 + 57) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 1LL);
  if ( !v7 )
  {
    v8 = *((_QWORD *)a1 + 5);
    v9 = *(_DWORD *)(v8 + 28);
    v20 = *(_DWORD *)(v8 + 24);
    v10 = *(_DWORD *)(v8 + 232);
    *(_BYTE *)(v8 + 17) |= 4u;
    v21 = v10;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v11 = (_DWORD *)*((_QWORD *)a1 + 5);
      v12 = v11[7];
      v13 = v20 ^ v11[6];
      v14 = v21 ^ v11[58];
      v15 = v9 ^ v12;
      if ( !v15 )
      {
        if ( v13 )
        {
LABEL_22:
          if ( (v13 & 0x4E27A9) == 0 && (v14 & 0x372C0) == 0 )
          {
LABEL_20:
            if ( (v15 & 0x1C40000) != 0 || (v13 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_14;
          }
LABEL_19:
          DirtyVisRgnTrackers(a1);
          v19 = (void *)ReferenceDwmApiPort(v18, v17);
          DwmAsyncChildStyleChange(v19);
          goto LABEL_20;
        }
        if ( !v14 )
          goto LABEL_14;
      }
      if ( (v15 & 0xB9CF0000) != 0 )
        goto LABEL_19;
      goto LABEL_22;
    }
  }
LABEL_14:
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v7;
}
