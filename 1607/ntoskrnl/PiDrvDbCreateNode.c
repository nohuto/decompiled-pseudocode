/*
 * XREFs of PiDrvDbCreateNode @ 0x14055211C
 * Callers:
 *     PiDrvDbRegisterNode @ 0x140552028 (PiDrvDbRegisterNode.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     ZwCreateEvent @ 0x14015AAF0 (ZwCreateEvent.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     PiDrvDbDestroyNode @ 0x14064CE68 (PiDrvDbDestroyNode.c)
 */

__int64 __fastcall PiDrvDbCreateNode(PCWSTR Source, int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  _WORD *v9; // r14
  unsigned __int16 v10; // ax
  PVOID StringRoutine; // rax
  NTSTATUS appended; // ebx
  unsigned __int16 v13; // ax
  PVOID v14; // rax
  __int64 *v15; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-48h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1F0uLL, 0x62647050u);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x1F0uLL);
  v9 = (_WORD *)(v8 + 16);
  *(_DWORD *)(v8 + 64) = a2;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v8 + 16), Source) )
    goto LABEL_19;
  v10 = *v9 + 38;
  *(_WORD *)(v8 + 32) = 0;
  *(_WORD *)(v8 + 34) = v10;
  StringRoutine = ExpAllocateStringRoutine(v10);
  *(_QWORD *)(v8 + 40) = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_19;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v8 + 32), L"\\REGISTRY\\MACHINE\\");
  if ( appended < 0 )
    goto LABEL_15;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v8 + 32), Source);
  if ( appended < 0 )
    goto LABEL_15;
  v13 = *v9 + 58;
  *(_WORD *)(v8 + 48) = 0;
  *(_WORD *)(v8 + 50) = v13;
  v14 = ExpAllocateStringRoutine(v13);
  *(_QWORD *)(v8 + 56) = v14;
  if ( !v14 )
  {
LABEL_19:
    appended = -1073741670;
    goto LABEL_15;
  }
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v8 + 48), L"\\SystemRoot\\System32\\config\\");
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v8 + 48), Source);
    if ( appended >= 0 )
    {
      if ( (*(_DWORD *)(v8 + 64) & 4) == 0 )
      {
LABEL_13:
        v15 = (__int64 *)qword_14031E168;
        if ( *(__int64 **)qword_14031E168 != &PiDrvDbNodeList )
          __fastfail(3u);
        *(_QWORD *)(v8 + 8) = qword_14031E168;
        *(_QWORD *)v8 = &PiDrvDbNodeList;
        *v15 = v8;
        qword_14031E168 = v8;
        *a5 = v8;
        v8 = 0LL;
        goto LABEL_15;
      }
      appended = ExInitializeResourceLite((PERESOURCE)(v8 + 88));
      if ( appended >= 0 )
      {
        *(_BYTE *)(v8 + 192) = 1;
        KeInitializeTimerEx((PKTIMER)(v8 + 264), NotificationTimer);
        KeInitializeDpc((PRKDPC)(v8 + 328), (PKDEFERRED_ROUTINE)PiDrvDbUnloadNodeDpcRoutine, (PVOID)v8);
        *(_QWORD *)(v8 + 424) = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        appended = ZwCreateEvent((PHANDLE)(v8 + 472), 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
        if ( appended >= 0 )
        {
          *(_BYTE *)(v8 + 489) = 1;
          *(_QWORD *)(v8 + 480) = 0xFFFFFFFFLL;
          goto LABEL_13;
        }
      }
    }
  }
LABEL_15:
  if ( v8 )
    PiDrvDbDestroyNode(v8);
  return (unsigned int)appended;
}
