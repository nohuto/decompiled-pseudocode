/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x18008C150
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpSysVolTakeOwnership @ 0x18008B698 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008C3E4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008C544 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwCreateFile @ 0x1800A6EC0 (ZwCreateFile.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlCreateSystemVolumeInformationFolder(unsigned __int16 *a1)
{
  unsigned __int16 v2; // dx
  char v3; // di
  wchar_t *Heap; // rax
  unsigned __int16 v5; // ax
  int v6; // ebx
  void *ProcessHeap; // rcx
  struct _PEB *v8; // rcx
  wchar_t *Buffer; // r8
  UNICODE_STRING v11; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v13[16]; // [rsp+80h] [rbp-9h] BYREF
  int v14; // [rsp+90h] [rbp+7h] BYREF
  __int64 v15; // [rsp+98h] [rbp+Fh]
  UNICODE_STRING *v16; // [rsp+A0h] [rbp+17h]
  int v17; // [rsp+A8h] [rbp+1Fh]
  unsigned __int64 v18; // [rsp+B0h] [rbp+27h]
  __int64 v19; // [rsp+B8h] [rbp+2Fh]
  HANDLE Handle; // [rsp+F0h] [rbp+67h] BYREF
  wchar_t *v21; // [rsp+F8h] [rbp+6Fh] BYREF
  wchar_t *v22; // [rsp+100h] [rbp+77h] BYREF

  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  v2 = DestinationString.Length + *a1;
  v11.Length = v2;
  if ( v2 < *a1 || v2 < DestinationString.Length )
    return 3221225485LL;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2) == 92 )
  {
    v3 = 0;
  }
  else
  {
    v2 += 2;
    v3 = 1;
    v11.Length = v2;
  }
  v11.MaximumLength = v2 + 2;
  Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int16)(v2 + 2));
  v11.Buffer = Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, *((const void **)a1 + 1), *a1);
  v5 = *a1;
  v11.Length = *a1;
  if ( v3 )
  {
    v11.Buffer[(unsigned __int64)v5 >> 1] = 92;
    v5 = v11.Length + 2;
    v11.Length += 2;
  }
  memmove((char *)v11.Buffer + v5, DestinationString.Buffer, DestinationString.Length);
  v11.Length += DestinationString.Length;
  v11.Buffer[(unsigned __int64)v11.Length >> 1] = 0;
  v6 = RtlpSysVolCreateSecurityDescriptor(&v21, &v22);
  if ( v6 < 0 )
  {
    v8 = NtCurrentPeb();
    Buffer = v11.Buffer;
  }
  else
  {
    v16 = &v11;
    v14 = 48;
    v15 = 0LL;
    v17 = 576;
    v18 = (unsigned __int64)v21;
    v19 = 0LL;
    if ( (int)ZwCreateFile(&Handle, 0x10000LL, &v14, v13, 0LL, 0, 7, 1, 2101344, 0LL, 0) >= 0 )
      NtClose(Handle);
    v6 = ZwCreateFile(&Handle, 1966080LL, &v14, v13, 0LL, 6, 7, 3, 33, 0LL, 0);
    if ( v6 < 0 )
    {
      RtlpSysVolTakeOwnership(&v11);
      v6 = ZwCreateFile(&Handle, 1966080LL, &v14, v13, 0LL, 6, 7, 3, 33, 0LL, 0);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v11.Buffer);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v6 < 0 )
    {
      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v22);
      v8 = NtCurrentPeb();
      Buffer = v21;
    }
    else
    {
      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v21);
      v6 = RtlpSysVolCheckOwnerAndSecurity(Handle, v22);
      NtClose(Handle);
      v8 = NtCurrentPeb();
      Buffer = v22;
    }
  }
  RtlFreeHeap((__int64)v8->ProcessHeap, 0, (unsigned __int64)Buffer);
  return (unsigned int)v6;
}
