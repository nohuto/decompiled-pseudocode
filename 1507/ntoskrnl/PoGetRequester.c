/*
 * XREFs of PoGetRequester @ 0x1400D1464
 * Callers:
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140019F50 (IoIs32bitProcess.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PopUnicodeStringDeepCopy @ 0x1406B0914 (PopUnicodeStringDeepCopy.c)
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
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
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
             (PCUNICODE_STRING)Process[1].ActiveProcessors.Bitmap[14]);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a3 + 40) = v8;
    return 0LL;
  }
  return result;
}
