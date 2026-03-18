/*
 * XREFs of ResetSignal @ 0x1C0047580
 * Callers:
 *     <none>
 * Callees:
 *     ReferenceObjectEx @ 0x1C0005760 (ReferenceObjectEx.c)
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 *     SignalASLEvent @ 0x1C0047264 (SignalASLEvent.c)
 */

__int64 __fastcall ResetSignal(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v9; // r11
  int v10; // ecx
  __int64 v11; // rbx
  KIRQL v12; // al
  __int64 v13; // rcx

  v3 = ValidateArgTypes(a2[10], 0, (__int64)"O");
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a2[10] + 16LL);
    a2[8] = v4;
    ReferenceObjectEx(v4);
    v5 = *(_DWORD *)(a2[7] + 8LL);
    if ( v5 == 9307 )
    {
      v13 = a2[8];
      if ( *(_WORD *)(v13 + 58) == 7 )
      {
        SignalASLEvent(*(_QWORD *)(v13 + 88));
        return v3;
      }
      v3 = -1072431095;
      LogError(-1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 58LL));
      v10 = 175;
    }
    else
    {
      if ( v5 != 9819 )
        return v3;
      v6 = a2[8];
      if ( *(_WORD *)(v6 + 58) == 7 )
      {
        v11 = *(_QWORD *)(v6 + 88);
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 16));
        *(_DWORD *)v11 = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 16), v12);
        return 0;
      }
      v3 = -1072431095;
      LogError(-1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 58LL));
      v10 = 174;
    }
    PrintDebugMessage(v10, v9, ObjectTypeName, 0LL, 0LL);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
  }
  return v3;
}
