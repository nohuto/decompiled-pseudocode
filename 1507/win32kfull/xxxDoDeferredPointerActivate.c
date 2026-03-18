/*
 * XREFs of xxxDoDeferredPointerActivate @ 0x1C01FBB00
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FA850 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

int __fastcall xxxDoDeferredPointerActivate(__int64 a1)
{
  struct tagPOINTERINPUTFRAME *v2; // rax
  struct tagPOINTERINPUTFRAME *v3; // rdi
  __int64 v4; // r9
  __int64 v5; // r9
  struct tagPOINTERINPUTFRAME *v6; // rsi
  const struct tagPOINTERINFONODE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = (struct tagPOINTERINPUTFRAME *)ValidateHwnd(*(_QWORD *)(a1 + 16));
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      v2 = FindAndReferenceFrameById(*(_DWORD *)(v4 + 28));
      v6 = v2;
      if ( v2 )
      {
        v7 = (const struct tagPOINTERINFONODE *)(*((_QWORD *)v2 + 9) + 216LL * *(unsigned int *)(v5 + 32));
        PushW32ThreadLock((__int64)v2, v12, (__int64)DereferencePointerInputFrame);
        v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v11;
        v11[1] = v3;
        ++*((_DWORD *)v3 + 2);
        xxxPointerActivate(v3, v7);
        ThreadUnlock1(v9, v8);
        PopW32ThreadLock(v12);
        LODWORD(v2) = UnreferenceFrameInt(v6);
      }
    }
  }
  return (int)v2;
}
