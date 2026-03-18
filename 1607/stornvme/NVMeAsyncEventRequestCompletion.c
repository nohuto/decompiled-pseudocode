/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C000C870
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     GetLocalCommand @ 0x1C000561C (GetLocalCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 *     NVMeControllerReset @ 0x1C00072C8 (NVMeControllerReset.c)
 *     BuildGetLogPageCommand @ 0x1C0008830 (BuildGetLogPageCommand.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000D574 (NVMeIssueAsyncEventCommand.c)
 */

char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 LocalCommand; // rax
  __int64 v11; // r15
  int v12; // r11d
  unsigned int v13; // edi
  _QWORD v15[10]; // [rsp+40h] [rbp-19h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v8 = SrbExtension;
  if ( !v9
    || (LOBYTE(SrbExtension) = *(_BYTE *)(v7 + 3), (_BYTE)SrbExtension == 14)
    || (*(_DWORD *)(a1 + 20) & 0xE) != 0
    || (_BYTE)SrbExtension != 1 )
  {
    *(_BYTE *)(v8 + 4245) |= 8u;
    return SrbExtension;
  }
  memset((char *)v15 + 4, 0, 0x44uLL);
  LocalCommand = GetLocalCommand(a1, a2);
  HIDWORD(v15[1]) = 0;
  LODWORD(v15[0]) = 256;
  BYTE4(v15[3]) = 1;
  v15[4] = 0x100000006LL;
  v11 = LocalCommand;
  LODWORD(v15[5]) = 4;
  v15[6] = a3;
  HIDWORD(v15[0]) = v12;
  StorPortExtendedFunction((unsigned int)(v12 - 56), a1, v15);
  LODWORD(SrbExtension) = *(_DWORD *)a3 & 7;
  if ( (_DWORD)SrbExtension )
  {
    if ( (_DWORD)SrbExtension != 1 )
    {
      if ( (_DWORD)SrbExtension == 6 )
      {
        if ( *(_BYTE *)(a3 + 1) )
          goto LABEL_12;
        goto LABEL_8;
      }
      if ( (_DWORD)SrbExtension != 7 )
        goto LABEL_12;
    }
    v13 = 512;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a3 + 1) == 1 )
    NVMeControllerReset(a1, 0);
LABEL_8:
  v13 = 64;
LABEL_16:
  LOBYTE(SrbExtension) = NVMeAllocateDmaBuffer(a1, v13);
LABEL_12:
  if ( v11 )
    LOBYTE(SrbExtension) = NVMeIssueAsyncEventCommand(a1, v11);
  return SrbExtension;
}
