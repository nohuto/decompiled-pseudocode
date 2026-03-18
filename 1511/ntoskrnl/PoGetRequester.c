/*
 * XREFs of PoGetRequester @ 0x140097AA8
 * Callers:
 *     PoCaptureReasonContext @ 0x1400979A8 (PoCaptureReasonContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     IoIs32bitProcess @ 0x140090B20 (IoIs32bitProcess.c)
 */

LONG_PTR __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  LONG_PTR result; // rax
  _QWORD *Teb; // rdi
  LONG_PTR v6; // rax
  LONG_PTR v7; // [rsp+48h] [rbp+20h]

  result = (LONG_PTR)a2;
  if ( a1 )
  {
    v7 = 0LL;
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
    if ( Teb )
    {
      if ( IoIs32bitProcess(0LL) == 1 )
        v6 = *((unsigned int *)Teb + 3032);
      else
        v6 = Teb[740];
      v7 = v6;
    }
    *(_DWORD *)a3 = (v7 != 0) + 1;
    *(_QWORD *)(a3 + 8) = KeGetCurrentThread()->ApcState.Process;
    result = v7;
    *(_DWORD *)(a3 + 16) = v7;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      return ObfReferenceObjectWithTag(a2, 0x746C6644u);
  }
  return result;
}
