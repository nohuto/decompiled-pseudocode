/*
 * XREFs of ?IsPointerMsgRedirected@@YAH_KPEAH@Z @ 0x1C01F8B84
 * Callers:
 *     xxxPointerCallHook @ 0x1C0008204 (xxxPointerCallHook.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F1B4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

__int64 __fastcall IsPointerMsgRedirected(__int64 a1, int *a2)
{
  struct tagPOINTERINPUTFRAME *FrameById; // rax
  __int64 v4; // r9
  int *v5; // r10
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax

  *a2 = 0;
  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v6 = *v5;
  v7 = *((_QWORD *)FrameById + 9) + 216LL * *(unsigned int *)(v4 + 32);
  v8 = *(_DWORD *)v7;
  if ( (*(_BYTE *)(v7 + 4) & 0x40) != 0 )
    v6 = 1;
  *v5 = v6;
  return (unsigned int)-__CFSHR__(v8, 11);
}
