/*
 * XREFs of Release @ 0x1C0005520
 * Callers:
 *     <none>
 * Callees:
 *     ReferenceObjectEx @ 0x1C00056C0 (ReferenceObjectEx.c)
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C0014DD4 (PushFrame.c)
 *     ReleaseASLMutex @ 0x1C0022260 (ReleaseASLMutex.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall Release(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbp
  bool v8; // si
  __int64 v9; // r8
  __int64 v10; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v14; // r11d
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a2[10], 0LL, "O");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    a2[8] = v5;
    ReferenceObjectEx(v5);
    v6 = a2[8];
    v7 = *(_QWORD *)(v6 + 88);
    v8 = (*(_BYTE *)(v6 + 56) & 2) != 0;
    if ( *(_WORD *)(v6 + 58) == 9 )
    {
      v4 = PushFrame(a1, 1179403602, 56, (unsigned int)ParseRelease, (__int64)&v15);
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
        *(_QWORD *)(v10 + 48) = *(_QWORD *)(a2[8] + 16LL);
        if ( v8 )
          *(_DWORD *)(v10 + 16) = 0x10000;
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 58LL));
      PrintDebugMessage(173, v14, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
