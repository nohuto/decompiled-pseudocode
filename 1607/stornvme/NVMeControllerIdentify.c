/*
 * XREFs of NVMeControllerIdentify @ 0x1C000CB24
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0006D5C (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     IsIntelChatham @ 0x1C00047C8 (IsIntelChatham.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeControllerIdentify(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 result; // rax
  _DWORD *v7; // rbx

  *(_BYTE *)(a1 + 571) = 0;
  memset(*(void **)(a1 + 656), 0, 0x1098uLL);
  v2 = 0;
  *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 656);
  *(_DWORD *)(a1 + 560) = 1;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) |= ++v2;
  while ( v2 < 2 );
  *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
  v3 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(v3 + 4120) = *(_QWORD *)(a1 + 1088);
  v4 = *(_DWORD *)(v3 + 4136) & 0xFFFFFFFD;
  *(_BYTE *)(v3 + 4096) = 6;
  *(_DWORD *)(v3 + 4100) = 0;
  *(_DWORD *)(v3 + 4136) = v4 | 1;
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v5) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v5, 10000LL);
  result = IsIntelChatham(a1);
  if ( (_BYTE)result )
  {
    v7 = *(_DWORD **)(a1 + 1080);
    if ( *(_WORD *)v7 != 0x8086 )
    {
      memset(v7, 0, 0x1000uLL);
      *((_BYTE *)v7 + 261) |= 1u;
      *((_QWORD *)v7 + 3) = 0x326D616874616843LL;
      result = 1059LL;
      *(_WORD *)((char *)v7 + 73) = 1059;
      *v7 = 538017926;
      v7[1] = 842084402;
      *((_BYTE *)v7 + 64) = 48;
      *((_BYTE *)v7 + 72) = 1;
      *((_BYTE *)v7 + 259) = 3;
      *((_WORD *)v7 + 256) = 17510;
      v7[129] = 1;
    }
  }
  return result;
}
