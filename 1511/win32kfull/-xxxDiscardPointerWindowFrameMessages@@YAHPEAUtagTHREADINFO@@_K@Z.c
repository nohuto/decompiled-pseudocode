/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01FA180
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01E18C4 (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     IsPointerInputMessageWithState @ 0x1C00652DC (IsPointerInputMessageWithState.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01F79B0 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     ?GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z @ 0x1C01F8648 (-GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F9CB4 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F5EC (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall xxxDiscardPointerWindowFrameMessages(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v2; // r14
  struct tagPOINTERINPUTFRAME *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  PointerList **v16; // rcx
  __int64 v17; // r9
  void *v18; // rax
  int v19; // eax
  __int64 i; // rbx
  HWND v21; // [rsp+30h] [rbp-78h] BYREF
  HWND v22; // [rsp+38h] [rbp-70h]
  __int64 v23; // [rsp+40h] [rbp-68h]
  __int64 v24; // [rsp+48h] [rbp-60h]
  _QWORD v25[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+C0h] [rbp+18h]
  unsigned int v28; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  if ( !a2 )
    return 0LL;
  v5 = FindAndReferenceFrameById(*(_DWORD *)(a2 + 28));
  if ( !v5 )
    return 0LL;
  v22 = *(HWND *)(216LL * *(unsigned int *)(v2 + 32) + *((_QWORD *)v5 + 9) + 80);
  v23 = ValidateHwnd(v22);
  if ( !v23 )
  {
    UnreferenceFrameInt(v5);
    return 0LL;
  }
  v6 = 0LL;
  v7 = *((unsigned int *)v5 + 6);
  v8 = ((*((unsigned __int8 *)a1 + 600) | (unsigned int)*(unsigned __int8 *)(*((_QWORD *)a1 + 52) + 24LL)) >> 4) & 1;
  v28 = *((_DWORD *)v5 + 6);
  v27 = v8;
  if ( !v8
    || (v9 = 48 * v7, (unsigned __int64)(48 * v7) > 0xFFFFFFFF)
    || v9 - 1 > 0x270FFFE
    || (v6 = Win32AllocPool(v9)) == 0 )
  {
    v8 = 0;
    v27 = 0;
  }
  v10 = 0;
  v11 = 0LL;
  v12 = **((_QWORD **)a1 + 48);
  if ( v12 )
  {
    do
    {
      v13 = *(unsigned int *)(v12 + 24);
      v24 = *(_QWORD *)v12;
      if ( (unsigned int)IsPointerInputMessageWithState(v13) )
      {
        if ( (unsigned int)(v14 - 585) > 1 )
        {
          v15 = *(_QWORD *)(v12 + 40);
          if ( *(_DWORD *)(v15 + 28) == *((_DWORD *)v5 + 4) )
          {
            v16 = (PointerList **)(*((_QWORD *)v5 + 9) + 216LL * *(unsigned int *)(v15 + 32));
            if ( (*(_DWORD *)v16 & 0x100) != 0 && (unsigned int)GetPointerEventTarget(v16, &v21) && v21 == v22 )
            {
              v18 = 0LL;
              if ( v8 && (unsigned int)v11 < v28 )
                v18 = (void *)(v6 + 48 * v11);
              v19 = DiscardPointerMessage((__int64)a1, v12, v23, v17, v18);
              if ( v8 && v19 == 1 )
                v11 = (unsigned int)(v11 + 1);
              ++v10;
            }
          }
        }
      }
      v12 = v24;
    }
    while ( v24 );
    v8 = v27;
    v2 = a2;
  }
  UnreferenceFrameInt(v5);
  if ( v10 )
    UpdateThreadPointerList((struct tagTHREADINFO *)((char *)a1 + 960), *(_WORD *)(v2 + 16));
  if ( v8 )
  {
    PushW32ThreadLock(v6, v25, (__int64)Win32FreePool);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v11; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v28 )
        break;
      xxxCallHook(0, 1LL, v6 + 48 * i, 3u);
    }
    PopW32ThreadLock(v25);
  }
  if ( v6 )
    Win32FreePool(v6);
  return 1LL;
}
