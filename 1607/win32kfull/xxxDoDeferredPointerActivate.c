/*
 * XREFs of xxxDoDeferredPointerActivate @ 0x1C01F3314
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall xxxDoDeferredPointerActivate(__int64 a1)
{
  struct tagPOINTERINPUTFRAME *result; // rax
  struct tagPOINTERINPUTFRAME *v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r9
  struct tagPOINTERINPUTFRAME *v6; // rsi
  const struct tagPOINTERINFONODE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-20h] BYREF

  result = (struct tagPOINTERINPUTFRAME *)ValidateHwnd(*(_QWORD *)(a1 + 16));
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      result = FindAndReferenceFrameById(*(_DWORD *)(v4 + 28));
      v6 = result;
      if ( result )
      {
        v7 = (const struct tagPOINTERINFONODE *)(*((_QWORD *)result + 11) + 216LL * *(unsigned int *)(v5 + 32));
        PushW32ThreadLock((__int64)result, v16, (__int64)DereferencePointerInputFrame, v5);
        v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v15;
        v15[1] = v3;
        ++*((_DWORD *)v3 + 2);
        xxxPointerActivate(v3, v7);
        ThreadUnlock1(v9, v8);
        PopW32ThreadLock(v16, v10, v11, v12);
        return (struct tagPOINTERINPUTFRAME *)UnreferenceFrameInt(v6, v13, v14);
      }
    }
  }
  return result;
}
