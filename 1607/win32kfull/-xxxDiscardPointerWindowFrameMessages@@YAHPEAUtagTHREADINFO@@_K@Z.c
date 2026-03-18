/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1384
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01D7C1C (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C005810C (IsPointerInputMessageWithState.c)
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01EEB80 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     ?GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z @ 0x1C01EF834 (-GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F0EB8 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
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
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // r9
  __int64 v18; // rcx
  PointerList **v19; // rcx
  __int64 v20; // r9
  void *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 i; // rbx
  HWND v30; // [rsp+30h] [rbp-78h] BYREF
  HWND v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-60h]
  _QWORD v34[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+18h]
  unsigned int v37; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  if ( !a2 )
    return 0LL;
  v5 = FindAndReferenceFrameById(*(_DWORD *)(a2 + 28));
  if ( !v5 )
    return 0LL;
  v31 = *(HWND *)(216LL * *(unsigned int *)(v2 + 32) + *((_QWORD *)v5 + 11) + 80);
  v32 = ValidateHwnd(v31);
  if ( !v32 )
  {
    UnreferenceFrameInt(v5, v6, v7);
    return 0LL;
  }
  v8 = 0LL;
  v9 = *((unsigned int *)v5 + 10);
  v10 = ((*((unsigned __int8 *)a1 + 600) | (unsigned int)*(unsigned __int8 *)(*((_QWORD *)a1 + 52) + 24LL)) >> 4) & 1;
  v37 = *((_DWORD *)v5 + 10);
  v36 = v10;
  if ( !v10
    || (v11 = 48 * v9, (unsigned __int64)(48 * v9) > 0xFFFFFFFF)
    || v11 - 1 > 0x270FFFE
    || (v8 = Win32AllocPool(v11, 1735422805LL)) == 0 )
  {
    v10 = 0;
    v36 = 0;
  }
  v12 = 0;
  v13 = 0LL;
  v14 = **((_QWORD **)a1 + 48);
  if ( v14 )
  {
    do
    {
      v15 = *(unsigned int *)(v14 + 24);
      v33 = *(_QWORD *)v14;
      if ( (unsigned int)IsPointerInputMessageWithState(v15, v6) )
      {
        if ( (unsigned int)(v16 - 585) > 1 )
        {
          v18 = *(_QWORD *)(v14 + 40);
          if ( *(_DWORD *)(v18 + 28) == *((_DWORD *)v5 + 8) )
          {
            v19 = (PointerList **)(*((_QWORD *)v5 + 11) + 216LL * *(unsigned int *)(v18 + 32));
            if ( (*(_DWORD *)v19 & 0x100) != 0 && (unsigned int)GetPointerEventTarget(v19, &v30, v7, v17) && v30 == v31 )
            {
              v21 = 0LL;
              if ( v10 && (unsigned int)v13 < v37 )
                v21 = (void *)(v8 + 48 * v13);
              v22 = DiscardPointerMessage((__int64)a1, v14, v32, v20, v21);
              if ( v10 && v22 == 1 )
                v13 = (unsigned int)(v13 + 1);
              ++v12;
            }
          }
        }
      }
      v14 = v33;
    }
    while ( v33 );
    v10 = v36;
    v2 = a2;
  }
  UnreferenceFrameInt(v5, v6, v7);
  if ( v12 )
    UpdateThreadPointerList((struct tagTHREADINFO *)((char *)a1 + 968), *(_WORD *)(v2 + 16));
  if ( v10 )
  {
    PushW32ThreadLock(v8, v34, (__int64)Win32FreePool, v25);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v13; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v37 )
        break;
      xxxCallHook(0, 1LL, (int *)(v8 + 48 * i), 3u);
    }
    PopW32ThreadLock(v34, v26, v27, v28);
  }
  if ( v8 )
    Win32FreePool(v8, v23, v24);
  return 1LL;
}
