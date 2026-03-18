/*
 * XREFs of ObpGetObjectSecurity @ 0x1404CFBCC
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObpCheckObjectReference @ 0x1404CF854 (ObpCheckObjectReference.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     ObCheckCreateObjectAccess @ 0x1404D0EC4 (ObCheckCreateObjectAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckObjectAccess @ 0x1404D3DC0 (ObCheckObjectAccess.c)
 *     ObGetObjectSecurity @ 0x14055827C (ObGetObjectSecurity.c)
 *     ObpCheckTraverseAccess @ 0x1406ABF00 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1406C4538 (PspCheckJobAccessState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404CFD70 (ObpReferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObpGetObjectSecurity(__int64 a1, PVOID *a2, _BYTE *a3, char a4)
{
  __int64 v8; // rbp
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  int v11; // esi
  int v12; // eax
  SIZE_T v13; // rdx
  PVOID v14; // rax
  int v15; // [rsp+40h] [rbp-48h]
  _DWORD v16[4]; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T NumberOfBytes; // [rsp+90h] [rbp+8h] BYREF

  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( *(__int64 (__fastcall **)(void *, int, DWORD *, void *, __int64, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v8 + 152) == SeDefaultObjectMethod )
  {
    *a2 = (PVOID)ObpReferenceSecurityDescriptor(a1 - 48);
    result = 0LL;
    *a3 = 0;
    return result;
  }
  v16[0] = 31;
  LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *a3 = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, SIZE_T *, __int64, _DWORD, __int64, char))(v8 + 152))(
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
    if ( v14 )
    {
      *a3 = 1;
      LOBYTE(v15) = a4;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, SIZE_T *, __int64, _DWORD, __int64, int))(v8 + 152))(
              a1,
              1LL,
              v16,
              *a2,
              &NumberOfBytes,
              a1 - 8,
              *(_DWORD *)(v8 + 100),
              v8 + 76,
              v15);
      goto LABEL_5;
    }
    return 3221225626LL;
  }
LABEL_5:
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a3 = 0;
  }
  return (unsigned int)v11;
}
