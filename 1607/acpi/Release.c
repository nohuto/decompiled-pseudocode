/*
 * XREFs of Release @ 0x1C0028520
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C00204F4 (PushFrame.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ReleaseASLMutex @ 0x1C0029100 (ReleaseASLMutex.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 */

__int64 __fastcall Release(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r14
  bool v8; // si
  __int64 v9; // r8
  __int64 v10; // rdx
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v14; // r11
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, (__int64)"O");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16);
    a2[8] = v5;
    ReferenceObjectEx(v5);
    v6 = a2[8];
    v7 = *(_QWORD *)(v6 + 96);
    v8 = (*(_BYTE *)(v6 + 64) & 2) != 0;
    if ( *(_WORD *)(v6 + 66) == 9 )
    {
      v4 = PushFrame(a1, 1179403602, 0x38u, (__int64)ParseRelease, &v15);
      if ( v4 )
      {
        LOBYTE(v9) = v8;
        return (unsigned int)ReleaseASLMutex(a1, v7, v9);
      }
      else
      {
        v10 = v15;
        *(_QWORD *)(v15 + 32) = v7;
        *(_QWORD *)(v10 + 40) = a2[11];
        *(_QWORD *)(v10 + 48) = *(_QWORD *)(a2[8] + 16);
        if ( v8 )
          *(_DWORD *)(v10 + 16) = 0x10000;
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(173, v14, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
