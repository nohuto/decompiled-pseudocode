/*
 * XREFs of ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C022FCB8
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E4B8 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C00652DC (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerQueuedMessageCoalescable(
        struct tagQ *a1,
        struct tagQMSG *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r10
  unsigned int v7; // r8d
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r9d
  int v11; // r11d
  __int64 v12; // rax
  int v13; // ecx

  if ( a2 )
    v6 = *((_QWORD *)a2 + 1);
  else
    v6 = *((_QWORD *)a1 + 1);
  if ( !v6 )
    return 0LL;
  v7 = a6;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v6 + 24);
    if ( (_DWORD)v8 == 512 )
    {
      v9 = *(_DWORD *)(v6 + 112);
      if ( v9 == 4 && v7 == 2 )
        goto LABEL_18;
      if ( v9 == 8 && v7 == 3 || v9 == 16 && v7 == 5 || *(_DWORD *)(v6 + 116) == 4 )
        goto LABEL_18;
    }
    if ( !(unsigned int)IsPointerInputMessageWithState(v8) )
      return 0LL;
    v12 = *(_QWORD *)(v6 + 40);
    if ( v12 == a5 )
      return 1LL;
    v13 = *(_DWORD *)(v12 + 28);
    if ( v13 != v10 && v13 != v11 )
      return 0LL;
LABEL_18:
    v6 = *(_QWORD *)(v6 + 8);
    if ( !v6 )
      return 0LL;
  }
}
