/*
 * XREFs of PspSetContextState @ 0x140682EC8
 * Callers:
 *     PspGetSetContextInternal @ 0x1404FB520 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1400F26A8 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F275C (RtlInitializeExtendedContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlCopyContext @ 0x14068C258 (RtlCopyContext.c)
 */

__int64 __fastcall PspSetContextState(__int64 a1, CONTEXT *a2)
{
  CONTEXT *v3; // rsi
  ULONG v5; // ebx
  __int64 result; // rax
  ULONG ContextLength; // [rsp+40h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(CONTEXT **)(a1 + 2000);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = 0x100000;
    if ( MEMORY[0xFFFFF780000003D8] )
      v5 = 1048640;
    RtlGetExtendedContextLength(v5, &ContextLength);
    memset(v3, 0, ContextLength);
    RtlInitializeExtendedContext(v3, v5, &ContextEx);
    v3->ContextFlags = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  if ( (a2->ContextFlags & 0x100040) == 0x100040 )
    v3->ContextFlags |= 0x100040u;
  RtlCopyContext(v3, a2->ContextFlags, a2);
  result = a2->ContextFlags & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    ContextLength = _mm_getcsr();
    a2->FltSave.MxCsr = ContextLength;
    result = 7999LL;
    a2->FltSave.ControlWord &= 0x1F3Fu;
  }
  return result;
}
