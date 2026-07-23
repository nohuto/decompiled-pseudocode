/*
 * XREFs of ObpGetObjectSecurity @ 0x140405BA0
 * Callers:
 *     ObCheckCreateObjectAccess @ 0x140402FEC (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404046D0 (ObCheckObjectAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1404057B0 (ObpCheckObjectReference.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     MiAllowImageMap @ 0x140429414 (MiAllowImageMap.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     ObGetObjectSecurity @ 0x1404CF2E8 (ObGetObjectSecurity.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     ObpCheckTraverseAccess @ 0x14066631C (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1406804FC (PspCheckJobAccessState.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObpReferenceSecurityDescriptor @ 0x140405D70 (ObpReferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObpGetObjectSecurity(__int64 a1, PVOID *a2, _BYTE *a3, char a4)
{
  ULONG_PTR v8; // r14
  PVOID PoolWithTag; // rax
  int v11; // r12d
  int v12; // eax
  SIZE_T v13; // rdx
  PVOID v14; // rax
  int v15; // [rsp+40h] [rbp-48h]
  _DWORD v16[14]; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T NumberOfBytes; // [rsp+90h] [rbp+8h] BYREF

  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( *(_UNKNOWN **)(v8 + 152) == &SeDefaultObjectMethod )
  {
    *a2 = (PVOID)ObpReferenceSecurityDescriptor(a1 - 48);
    *a3 = 0;
    if ( !*a2 && ((*(_BYTE *)(v8 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
      KeBugCheckEx(0x189u, a1 - 48, v8, 1uLL, 0LL);
    return 0LL;
  }
  else
  {
    v16[0] = 159;
    LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
    *a2 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *a3 = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, SIZE_T *, __int64, _DWORD, ULONG_PTR, char))(v8 + 152))(
            a1,
            1LL,
            v16,
            *a2,
            &NumberOfBytes,
            a1 - 8,
            *(_DWORD *)(v8 + 100),
            v8 + 76,
            a4);
    if ( v11 == -1073741789 )
    {
      ExFreePoolWithTag(*a2, 0);
      v12 = NumberOfBytes;
      v13 = (unsigned int)NumberOfBytes;
      *a3 = 0;
      LODWORD(ObpDefaultSecurityDescriptorLength) = v12;
      v14 = ExAllocatePoolWithTag(PagedPool, v13, 0x7153624Fu);
      *a2 = v14;
      if ( !v14 )
        return 3221225626LL;
      *a3 = 1;
      LOBYTE(v15) = a4;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, SIZE_T *, __int64, _DWORD, ULONG_PTR, int))(v8 + 152))(
              a1,
              1LL,
              v16,
              *a2,
              &NumberOfBytes,
              a1 - 8,
              *(_DWORD *)(v8 + 100),
              v8 + 76,
              v15);
    }
    if ( v11 < 0 )
    {
      ExFreePoolWithTag(*a2, 0);
      *a3 = 0;
    }
    else if ( !*a2 && ((*(_BYTE *)(v8 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
    {
      KeBugCheckEx(0x189u, a1 - 48, v8, 1uLL, 0LL);
    }
    return (unsigned int)v11;
  }
}
