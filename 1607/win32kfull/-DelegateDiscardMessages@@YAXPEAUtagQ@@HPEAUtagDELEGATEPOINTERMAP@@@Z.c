/*
 * XREFs of ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01D730C
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01D7AF4 (_DelegateCapturePointers.c)
 * Callees:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C0058128 (IsPointerInputMessage.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01EFCE8 (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     GetPointerMsgFrameId @ 0x1C01F3174 (GetPointerMsgFrameId.c)
 */

void __fastcall DelegateDiscardMessages(struct tagQ *a1, int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int PointerMsgFrameId; // eax
  int v8; // ebp
  __int64 v9; // rdi
  int v10; // edx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  HWND v13; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 4) )
  {
    v5 = *(_QWORD *)a1;
    if ( a2 )
      goto LABEL_11;
    if ( v5 )
    {
      do
      {
        if ( (*(_DWORD *)(v5 + 100) & 0x40) != 0 )
        {
          v6 = *(_DWORD *)(v5 + 24);
          if ( (v6 == 582 || v6 == 585) && *(_WORD *)(v5 + 32) == *(_WORD *)a3 )
          {
            PointerMsgFrameId = GetPointerMsgFrameId(*(_QWORD *)(v5 + 40));
            if ( PointerMsgFrameId == *((_DWORD *)a3 + 1) )
              break;
          }
        }
        v5 = *(_QWORD *)v5;
      }
      while ( v5 );
      if ( v5 )
      {
LABEL_11:
        v8 = 0;
        if ( v5 )
        {
          while ( !v8 )
          {
            v9 = *(_QWORD *)v5;
            if ( IsPointerInputMessage(*(_DWORD *)(v5 + 24)) && (*(_DWORD *)(v5 + 100) & 0x40) != 0 )
            {
              v11 = *(_QWORD *)(v5 + 40);
              if ( *(_WORD *)(v5 + 32) == *(_WORD *)a3 )
              {
                if ( v10 == 582 && (unsigned int)GetPointerMsgFrameId(v11) != *((_DWORD *)a3 + 1)
                  || v10 == 581 && (*(_BYTE *)(v5 + 34) & 4) == 0 )
                {
                  return;
                }
                if ( (unsigned int)GetPointerMessageInfo(v11, 0, &v13, 0LL, 0LL, 0LL, 0LL) )
                  v12 = ValidateHwnd(v13);
                else
                  v12 = 0LL;
                if ( v12 == *((_QWORD *)a3 + 1) )
                {
                  if ( *(_DWORD *)(v5 + 24) == 583 )
                    v8 = 1;
                  DelQEntry(a1, v5);
                  if ( *((_QWORD *)a1 + 6) == v5 )
                    *((_QWORD *)a1 + 6) = 0LL;
                }
              }
            }
            v5 = v9;
            if ( !v9 )
              return;
          }
        }
      }
    }
  }
}
