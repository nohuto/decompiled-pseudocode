/*
 * XREFs of Wait @ 0x1C0060C40
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     PushPost @ 0x1C00204A0 (PushPost.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 *     WaitASLEvent @ 0x1C005E438 (WaitASLEvent.c)
 */

__int64 __fastcall Wait(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v8; // r11

  v4 = ValidateArgTypes(a1, a2[10], 0, (__int64)"OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16);
    a2[8] = v5;
    ReferenceObjectEx(v5);
    if ( *(_WORD *)(a2[8] + 66) == 7 )
    {
      if ( *(_QWORD *)(a2[10] + 56) <= 0xFFFFuLL )
      {
        v4 = PushPost(a1, (int)ProcessWait, 0LL, 0LL, a2[11]);
        if ( !v4 )
          return (unsigned int)WaitASLEvent(a1, *(_QWORD *)(a2[8] + 96), *(_WORD *)(a2[10] + 56));
      }
      else
      {
        v4 = -1072431089;
        LogError(-1072431089);
        AcpiDiagTraceAmlError(a1, -1072431089);
        PrintDebugMessage(210, *(const void **)(a2[10] + 56), 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(209, v8, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
