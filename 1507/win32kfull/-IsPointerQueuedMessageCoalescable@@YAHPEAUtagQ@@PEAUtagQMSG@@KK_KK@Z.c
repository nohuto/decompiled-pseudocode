/*
 * XREFs of ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C022F86C
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E090 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C008C6AC (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerQueuedMessageCoalescable(
        struct tagQ *a1,
        struct tagQMSG *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r11d
  __int64 v12; // rax
  int v13; // ecx

  if ( a2 )
    v7 = *((_QWORD *)a2 + 1);
  else
    v7 = *((_QWORD *)a1 + 1);
  if ( !v7 )
    return 0LL;
  v8 = a6;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v7 + 24);
    if ( (_DWORD)v9 == 512 )
    {
      v10 = *(_DWORD *)(v7 + 112);
      if ( v10 == 4 && (_DWORD)v8 == 2 )
        goto LABEL_18;
      if ( v10 == 8 && (_DWORD)v8 == 3 || v10 == 16 && (_DWORD)v8 == 5 || *(_DWORD *)(v7 + 116) == 4 )
        goto LABEL_18;
    }
    if ( !(unsigned int)IsPointerInputMessageWithState(v9, (__int64)a2, a3, v8) )
      return 0LL;
    v12 = *(_QWORD *)(v7 + 40);
    if ( v12 == a5 )
      return 1LL;
    v13 = *(_DWORD *)(v12 + 28);
    if ( v13 != a4 && v13 != v11 )
      return 0LL;
LABEL_18:
    v7 = *(_QWORD *)(v7 + 8);
    if ( !v7 )
      return 0LL;
  }
}
