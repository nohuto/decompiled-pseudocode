/*
 * XREFs of IopCallDriverReference @ 0x140077AB0
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x140042B20 (ObpIncrPointerCount.c)
 *     IoCallDriverWithTracing @ 0x140077C20 (IoCallDriverWithTracing.c)
 *     IoGetIoPriorityHint @ 0x140077CE0 (IoGetIoPriorityHint.c)
 *     PsGetBaseIoPriorityThread @ 0x140077F80 (PsGetBaseIoPriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

__int64 __fastcall IopCallDriverReference(__int64 a1, IRP *a2, __int64 a3, _QWORD *a4, int a5)
{
  char v6; // si
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  int BaseIoPriorityThread; // eax
  __int64 v12; // rdx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  int v14; // edx
  __int64 result; // rax
  unsigned int v16; // ebx
  PETHREAD Thread; // rax
  ULONG Flags; // eax

  v6 = a3;
  if ( !(_BYTE)a3 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)a4 - 48);
    ObpIncrPointerCount(a4 - 6);
  }
  v9 = a4[26];
  if ( v9 && *(_DWORD *)(v9 + 72) )
  {
    a2->Flags &= 0xFFF1FFFF;
    a2->Flags |= *(_DWORD *)(v9 + 72) << 17;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    BaseIoPriorityThread = PsGetBaseIoPriorityThread(CurrentThread, CurrentThread, a3);
    if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v12 == KeGetCurrentThread() && *(_DWORD *)(v12 + 1788) )
      BaseIoPriorityThread = 2;
    a2->Flags = a2->Flags & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  }
  IoPriorityHint = IoGetIoPriorityHint(a2);
  v14 = IoPriorityHint;
  if ( a2->RequestorMode )
    goto LABEL_6;
  if ( IoPriorityHint >= IoPriorityNormal )
    goto LABEL_7;
  Thread = a2->Tail.Overlay.Thread;
  if ( Thread && ((Thread->MiscFlags & 0x400) != 0 || ((__int64)Thread[1].Queue & 0x40) != 0) )
  {
LABEL_6:
    if ( v14 < 2 )
    {
      if ( a5 )
      {
        if ( a5 == 1 )
          ++IoLowPriorityWriteOperationCount;
      }
      else
      {
        ++IoLowPriorityReadOperationCount;
      }
    }
  }
  else
  {
    Flags = a2->Flags;
    ++IoKernelIssuedIoBoostedCount;
    a2->Flags = Flags & 0xFFF1FFFF | 0x60000;
  }
LABEL_7:
  result = IoCallDriverWithTracing(a1, a2);
  v16 = result;
  if ( !v6 )
  {
    ObDereferenceObjectDeferDeleteWithTag(a4, 0x746C6644u);
    return v16;
  }
  return result;
}
