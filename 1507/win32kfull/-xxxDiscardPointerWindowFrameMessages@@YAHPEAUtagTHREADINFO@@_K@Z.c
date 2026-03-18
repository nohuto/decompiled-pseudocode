/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F9CDC
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01E12B4 (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     IsPointerInputMessageWithState @ 0x1C008C6AC (IsPointerInputMessageWithState.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01F74EC (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     ?GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z @ 0x1C01F8198 (-GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F9810 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall xxxDiscardPointerWindowFrameMessages(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v2; // r14
  struct tagPOINTERINPUTFRAME *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // r9
  int v16; // r9d
  __int64 v17; // rcx
  PointerList **v18; // rcx
  __int64 v19; // r9
  void *v20; // rax
  int v21; // eax
  __int64 i; // rbx
  HWND v23; // [rsp+30h] [rbp-78h] BYREF
  HWND v24; // [rsp+38h] [rbp-70h]
  __int64 v25; // [rsp+40h] [rbp-68h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  _QWORD v27[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+18h]
  unsigned int v30; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  if ( !a2 )
    return 0LL;
  v5 = FindAndReferenceFrameById(*(_DWORD *)(a2 + 28));
  if ( !v5 )
    return 0LL;
  v24 = *(HWND *)(216LL * *(unsigned int *)(v2 + 32) + *((_QWORD *)v5 + 9) + 80);
  v25 = ValidateHwnd(v24);
  if ( !v25 )
  {
    UnreferenceFrameInt(v5);
    return 0LL;
  }
  v8 = 0LL;
  v9 = *((unsigned int *)v5 + 6);
  v10 = ((*((unsigned __int8 *)a1 + 608) | (unsigned int)*(unsigned __int8 *)(*((_QWORD *)a1 + 53) + 24LL)) >> 4) & 1;
  v30 = *((_DWORD *)v5 + 6);
  v29 = v10;
  if ( !v10
    || (v11 = 48 * v9, (unsigned __int64)(48 * v9) > 0xFFFFFFFF)
    || v11 - 1 > 0x270FFFE
    || (v8 = Win32AllocPool(v11, 1735422805LL)) == 0 )
  {
    v10 = 0;
    v29 = 0;
  }
  v12 = 0;
  v13 = 0LL;
  v14 = **((_QWORD **)a1 + 49);
  if ( v14 )
  {
    do
    {
      v15 = *(unsigned int *)(v14 + 24);
      v26 = *(_QWORD *)v14;
      if ( (unsigned int)IsPointerInputMessageWithState(v15, v6, v7, v15) )
      {
        if ( (unsigned int)(v16 - 585) > 1 )
        {
          v17 = *(_QWORD *)(v14 + 40);
          if ( *(_DWORD *)(v17 + 28) == *((_DWORD *)v5 + 4) )
          {
            v18 = (PointerList **)(*((_QWORD *)v5 + 9) + 216LL * *(unsigned int *)(v17 + 32));
            if ( (*(_DWORD *)v18 & 0x100) != 0 && (unsigned int)GetPointerEventTarget(v18, &v23) && v23 == v24 )
            {
              v20 = 0LL;
              if ( v10 && (unsigned int)v13 < v30 )
                v20 = (void *)(v8 + 48 * v13);
              v21 = DiscardPointerMessage((__int64)a1, v14, v25, v19, v20);
              if ( v10 && v21 == 1 )
                v13 = (unsigned int)(v13 + 1);
              ++v12;
            }
          }
        }
      }
      v14 = v26;
    }
    while ( v26 );
    v10 = v29;
    v2 = a2;
  }
  UnreferenceFrameInt(v5);
  if ( v12 )
    UpdateThreadPointerList((struct tagTHREADINFO *)((char *)a1 + 968), *(_WORD *)(v2 + 16));
  if ( v10 )
  {
    PushW32ThreadLock(v8, v27, (__int64)Win32FreePool);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v13; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v30 )
        break;
      xxxCallHook(0, 1, v8 + 48 * i, 3u);
    }
    PopW32ThreadLock(v27);
  }
  if ( v8 )
    Win32FreePool(v8);
  return 1LL;
}
