/*
 * XREFs of PoGetRequester @ 0x1400F9F54
 * Callers:
 *     PoCaptureReasonContext @ 0x1400F9E3C (PoCaptureReasonContext.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     IoIs32bitProcess @ 0x1400C1690 (IoIs32bitProcess.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     PopUnicodeStringDeepCopy @ 0x14066A870 (PopUnicodeStringDeepCopy.c)
 */

__int64 __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  _QWORD *Teb; // rbx
  __int64 v5; // rax
  _KPROCESS *Process; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+48h] [rbp+20h]

  if ( !a1 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
    return 0LL;
  }
  v8 = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( Teb )
  {
    if ( IoIs32bitProcess(0LL) == 1 )
      v5 = *((unsigned int *)Teb + 3032);
    else
      v5 = Teb[740];
    v8 = v5;
  }
  *(_DWORD *)a3 = (v8 != 0) + 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_DWORD *)(a3 + 32) = Process[1].Header.WaitListHead.Blink;
  *(_DWORD *)(a3 + 36) = MmGetSessionIdEx(Process);
  result = PopUnicodeStringDeepCopy(
             (PUNICODE_STRING)(a3 + 16),
             (PCUNICODE_STRING)Process[1].ActiveProcessors.Bitmap[15]);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a3 + 40) = v8;
    return 0LL;
  }
  return result;
}
