/*
 * XREFs of NVMeGetLogPageCompletion @ 0x1C000CF90
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     GetLocalCommand @ 0x1C000561C (GetLocalCommand.c)
 *     NVMeFreeDmaBuffer @ 0x1C0007514 (NVMeFreeDmaBuffer.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000D574 (NVMeIssueAsyncEventCommand.c)
 */

__int64 __fastcall NVMeGetLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 LocalCommand; // rdi
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rbx

  LocalCommand = GetLocalCommand(a1, a2);
  result = GetSrbExtension(v4);
  v7 = result;
  if ( LocalCommand )
  {
    if ( *(_BYTE *)(v6 + 3) == 14 || (result = *(unsigned int *)(a1 + 20), (result & 0xE) != 0) )
    {
      if ( *(_QWORD *)(v7 + 4200) )
      {
        result = NVMeFreeDmaBuffer(
                   a1,
                   *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4232LL),
                   *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4200LL));
        *(_QWORD *)(v7 + 4200) = 0LL;
        *(_DWORD *)(v7 + 4232) = 0;
      }
      *(_BYTE *)(v7 + 4245) |= 8u;
    }
    else
    {
      if ( *(_QWORD *)(v7 + 4200) )
      {
        NVMeFreeDmaBuffer(
          a1,
          *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4232LL),
          *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4200LL));
        *(_QWORD *)(v7 + 4200) = 0LL;
        *(_DWORD *)(v7 + 4232) = 0;
        *(_BYTE *)(v7 + 4245) |= 8u;
      }
      *(_DWORD *)LocalCommand = 0;
      return NVMeIssueAsyncEventCommand(a1, LocalCommand);
    }
  }
  else
  {
    *(_BYTE *)(result + 4245) |= 8u;
  }
  return result;
}
