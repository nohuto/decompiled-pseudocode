/*
 * XREFs of PoGetRequesterOld @ 0x140233688
 * Callers:
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140019F50 (IoIs32bitProcess.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 */

void __fastcall PoGetRequesterOld(char a1, void *a2, __int64 a3)
{
  _QWORD *Teb; // rdi
  __int64 v5; // rax
  __int64 v6; // [rsp+48h] [rbp+20h]

  if ( a1 )
  {
    v6 = 0LL;
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
      v6 = v5;
    }
    *(_DWORD *)a3 = (v6 != 0) + 1;
    *(_QWORD *)(a3 + 8) = KeGetCurrentThread()->ApcState.Process;
    *(_DWORD *)(a3 + 40) = v6;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      ObfReferenceObject(a2);
  }
}
