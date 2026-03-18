/*
 * XREFs of PspAttachThreadToUmsCompletionList @ 0x1401F5630
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     RtlGetUmsContextExtendedSize @ 0x1401FF170 (RtlGetUmsContextExtendedSize.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     KeInitializeUmsThread @ 0x14061B1E0 (KeInitializeUmsThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspAttachThreadToUmsCompletionList(struct _KTHREAD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rax
  ULONG64 v8; // rcx
  __int64 UmsContextExtendedSize; // rdx
  unsigned __int8 v10; // r8
  KPROCESSOR_MODE v11; // r9
  ULONG64 v12; // rcx
  ULONG64 v13; // rdx
  __int64 v14; // rax
  NTSTATUS result; // eax
  int v16; // ebx
  HANDLE Handle[2]; // [rsp+30h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(a4) = a3;
  v5 = (int)a1;
  CurrentThread = a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    return -1073741637;
  v7 = a1;
  if ( !a1 )
    v7 = KeGetCurrentThread();
  if ( (v7->Header.Reserved1 & 0x40) != 0 )
    return -1073741637;
  v8 = *(_QWORD *)(a2 + 8);
  LOBYTE(a3) = 3;
  if ( (v8 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v8 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  UmsContextExtendedSize = (unsigned int)RtlGetUmsContextExtendedSize(v8, a2, a3, a4);
  v12 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int64)(UmsContextExtendedSize - 1) > 0xFFFE )
  {
    if ( UmsContextExtendedSize )
    {
      if ( ((unsigned __int8)v12 & v10) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v12 + UmsContextExtendedSize;
      if ( v13 > MmUserProbeAddress || v13 < v12 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else if ( ((unsigned __int8)v12 & v10) != 0 )
  {
    ExRaiseDatatypeMisalignment();
  }
  v14 = *(_QWORD *)(a2 + 8);
  *(_OWORD *)Handle = *(_OWORD *)v14;
  result = ObReferenceObjectByHandle(*(HANDLE *)(v14 + 8), 2u, (POBJECT_TYPE)ExEventObjectType, v11, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = KeInitializeUmsThread(v5, 0, Handle[0], (_DWORD)Object, *(_QWORD *)(a2 + 16));
    if ( v16 < 0 )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return v16;
  }
  return result;
}
