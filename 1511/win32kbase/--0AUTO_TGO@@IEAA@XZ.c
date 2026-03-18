/*
 * XREFs of ??0AUTO_TGO@@IEAA@XZ @ 0x1C00526EC
 * Callers:
 *     sub_1C0050B44 @ 0x1C0050B44 (sub_1C0050B44.c)
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0052730 (PushThreadGuardedObject.c)
 */

AUTO_TGO *__fastcall AUTO_TGO::AUTO_TGO(AUTO_TGO *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax

  *(_QWORD *)this = &AUTO_TGO::`vftable';
  v2 = PushThreadGuardedObject((char *)this + 16, this, AUTO_TGO::_DisposeThis);
  *((_DWORD *)this + 2) = v2;
  if ( !v2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  return this;
}
