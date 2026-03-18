/*
 * XREFs of Acquire @ 0x1C0005690
 * Callers:
 *     <none>
 * Callees:
 *     ReferenceObjectEx @ 0x1C0005760 (ReferenceObjectEx.c)
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C0013EA4 (PushFrame.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall Acquire(int a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v10; // r11d
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a2[10], 0LL, "OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    a2[8] = v5;
    ReferenceObjectEx(v5);
    if ( *(_WORD *)(a2[8] + 58LL) == 9 )
    {
      v4 = PushFrame(a1, 1179730753, 64, (unsigned int)ParseAcquire, (__int64)&v11);
      if ( !v4 )
      {
        v6 = v11;
        *(_QWORD *)(v11 + 32) = *(_QWORD *)(a2[8] + 88LL);
        *(_DWORD *)(v6 + 16) = (*(_BYTE *)(a2[8] + 56LL) & 2 | 8) << 15;
        *(_WORD *)(v6 + 40) = *(_WORD *)(a2[10] + 56LL);
        *(_QWORD *)(v6 + 48) = a2[11];
        *(_QWORD *)(v6 + 56) = *(_QWORD *)(a2[8] + 16LL);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 58LL));
      PrintDebugMessage(3, v10, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
