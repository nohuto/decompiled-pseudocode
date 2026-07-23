/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180087F00 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlEqualSid @ 0x18005DDF0 (RtlEqualSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18005E620 (RtlSetDaclSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180061DD0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180071620 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlMakeSelfRelativeSD @ 0x180071A10 (RtlMakeSelfRelativeSD.c)
 *     RtlGetAce @ 0x180075C00 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x180076600 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x18007AF00 (RtlGetOwnerSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQuerySecurityObject @ 0x1800A7950 (NtQuerySecurityObject.c)
 *     NtSetSecurityObject @ 0x1800A8270 (NtSetSecurityObject.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned __int32 v2; // ebx
  PVOID Heap; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  ULONG i; // r14d
  NTSTATUS v8; // eax
  _BYTE *v9; // rsi
  void *v10; // r8
  NTSTATUS SelfRelativeSD; // eax
  PVOID v13; // rax
  void *v14; // rsi
  NTSTATUS v15; // r14d
  void *v16; // r8
  PVOID v17; // rax
  void *v18; // rsi
  ULONG Length; // [rsp+30h] [rbp-29h] BYREF
  ULONG BufferSize; // [rsp+34h] [rbp-25h] BYREF
  BOOLEAN DaclPresent; // [rsp+38h] [rbp-21h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+39h] [rbp-20h] BYREF
  BOOLEAN DaclDefaulted[6]; // [rsp+3Ah] [rbp-1Fh] BYREF
  PACL Dacla; // [rsp+40h] [rbp-19h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-11h] BYREF
  PSID Owner; // [rsp+50h] [rbp-9h] BYREF
  __int16 Sid2; // [rsp+58h] [rbp-1h] BYREF
  int v28; // [rsp+5Ah] [rbp+1h]
  __int16 v29; // [rsp+5Eh] [rbp+5h]
  int v30; // [rsp+60h] [rbp+7h]
  int v31; // [rsp+64h] [rbp+Bh]
  __int16 v32; // [rsp+70h] [rbp+17h] BYREF
  int v33; // [rsp+72h] [rbp+19h]
  __int16 v34; // [rsp+76h] [rbp+1Dh]
  int v35; // [rsp+78h] [rbp+1Fh]

  v2 = 0;
  Dacla = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
  if ( !Heap )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, Heap, Length, &Length);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Heap, &DaclPresent, &Dacla, DaclDefaulted),
        DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &Owner, &OwnerDefaulted), DaclSecurityDescriptor < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v33 = 0;
  v28 = 0;
  v32 = 257;
  v34 = 1280;
  v35 = 18;
  Sid2 = 513;
  v29 = 1280;
  v30 = 32;
  v31 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent && Dacla )
  {
    for ( i = 0; ; ++i )
    {
      v8 = RtlGetAce(Dacla, i, &Ace);
      v9 = Ace;
      if ( v8 < 0 )
        v9 = 0LL;
      Ace = v9;
      if ( !v9 )
        break;
      if ( !*v9 && RtlEqualSid(v9 + 8, &v32) )
      {
        if ( (v9[1] & 3) == 3 )
          goto LABEL_17;
        v9[1] |= 3u;
        SelfRelativeSD = NtSetSecurityObject(Handle, 4u, Heap);
        goto LABEL_24;
      }
    }
  }
  BufferSize = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(Heap, &BufferSize) != -1073741789 )
    goto LABEL_30;
  v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BufferSize);
  v14 = v13;
  if ( !v13 )
    goto LABEL_36;
  memmove(v13, Heap, Length);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  Length = BufferSize;
  Heap = v14;
  v15 = RtlSelfRelativeToAbsoluteSD2(v14, &Length);
  if ( v15 >= 0 )
  {
LABEL_30:
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor(Heap, &Sid2, 0);
    if ( SelfRelativeSD < 0
      || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(Heap, 1u, Dacl, 0), SelfRelativeSD < 0)
      || (BufferSize = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, 0LL, &BufferSize), SelfRelativeSD != -1073741789) )
    {
LABEL_24:
      v2 = SelfRelativeSD;
LABEL_17:
      v10 = Heap;
      goto LABEL_18;
    }
    v17 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BufferSize);
    v18 = v17;
    if ( v17 )
    {
      v15 = RtlMakeSelfRelativeSD(Heap, v17, &BufferSize);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      v16 = v18;
      if ( v15 < 0 )
        goto LABEL_29;
      Length = BufferSize;
      v2 = NtSetSecurityObject(Handle, 5u, v18);
      v10 = v18;
LABEL_18:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      return v2;
    }
LABEL_36:
    v2 = -1073741670;
    goto LABEL_17;
  }
  v16 = v14;
LABEL_29:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
  return (unsigned int)v15;
}
