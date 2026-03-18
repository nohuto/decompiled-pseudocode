/*
 * XREFs of Acquire @ 0x1C0020960
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
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 */

__int64 __fastcall Acquire(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v11; // r11d
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v5 = ValidateArgTypes(a1, a2[10], 0, (__int64)"OI");
  if ( !v5 )
  {
    v6 = *(_QWORD *)(a2[10] + 16);
    a2[8] = v6;
    ReferenceObjectEx(v6, v4);
    if ( *(_WORD *)(a2[8] + 66) == 9 )
    {
      v5 = PushFrame(a1, 1179730753, 0x40u, (__int64)ParseAcquire, &v12);
      if ( !v5 )
      {
        v7 = v12;
        *(_QWORD *)(v12 + 32) = *(_QWORD *)(a2[8] + 96);
        *(_DWORD *)(v7 + 16) = (*(_BYTE *)(a2[8] + 64) & 2 | 8) << 15;
        *(_WORD *)(v7 + 40) = *(_WORD *)(a2[10] + 56);
        *(_QWORD *)(v7 + 48) = a2[11];
        *(_QWORD *)(v7 + 56) = *(_QWORD *)(a2[8] + 16);
      }
    }
    else
    {
      v5 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(3, v11, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v5;
}
