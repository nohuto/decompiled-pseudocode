/*
 * XREFs of AMLIEvalPackageElement @ 0x1C001AFE8
 * Callers:
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A64 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0016AE0 (GetBaseObject.c)
 *     EvalPackageElement @ 0x1C001B0D4 (EvalPackageElement.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, void *a3)
{
  __int64 v6; // rbx
  __int64 BaseObject; // rdi
  __int16 v8; // ax
  _WORD *v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  __int64 *v18; // r8
  void *v19; // rbx
  int ObjectTypeName; // eax
  int v21; // ecx
  _WORD v22[24]; // [rsp+30h] [rbp-38h] BYREF

  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v13, v12, v14, v15);
  }
  v6 = *a1;
  if ( (*(_BYTE *)(v6 + 56) & 4) != 0 )
    return (unsigned int)-1073741738;
  memset(a3, 0, 0x28uLL);
  memset(v22, 0, 0x28uLL);
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v18 = qword_1C00254F0;
    v19 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v18) = ObjectPath;
    PrintDebugMessage(46, CurrentThread, (_DWORD)v18, a2, 0LL);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  v8 = *(_WORD *)(BaseObject + 58);
  if ( v8 == 8 )
  {
    v10 = SyncEvalObject(BaseObject, (int)v22, 0, 0);
    if ( v10 )
      goto LABEL_9;
    if ( v22[1] == 4 )
    {
      v9 = v22;
      goto LABEL_8;
    }
    v10 = -1072431095;
    LogError(3222536201LL);
    ObjectTypeName = GetObjectTypeName(v22[1]);
    v21 = 48;
LABEL_23:
    PrintDebugMessage(v21, ObjectTypeName, 0, 0, 0LL);
    goto LABEL_9;
  }
  if ( v8 != 4 )
  {
    v10 = -1072431095;
    LogError(3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 58));
    v21 = 47;
    goto LABEL_23;
  }
  v9 = (_WORD *)(BaseObject + 56);
LABEL_8:
  v10 = EvalPackageElement(*((_QWORD *)v9 + 4), a2, a3);
LABEL_9:
  FreeDataBuffs((__int64)v22, 1u);
  if ( v10 == 32772 )
    v10 = 259;
  DereferenceObjectEx(BaseObject);
  return v10;
}
