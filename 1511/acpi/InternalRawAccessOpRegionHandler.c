/*
 * XREFs of InternalRawAccessOpRegionHandler @ 0x1C003FE90
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetParent @ 0x1C000B95C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     GetFieldUnitRegionObj @ 0x1C001643C (GetFieldUnitRegionObj.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C003CCBC (ACPIInternalGetDeviceFromNSOBJ.c)
 */

__int64 __fastcall InternalRawAccessOpRegionHandler(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  volatile signed __int32 *v7; // rbx
  int FieldUnitRegionObj; // ebp
  __int64 v11; // r8
  volatile signed __int32 *v12; // r12
  __int64 v13; // r15
  unsigned int v14; // ebp
  char *PoolWithTag; // rax
  char *v16; // rbx
  __int64 v18; // r8
  unsigned int v19; // eax
  PVOID v20; // rbp
  unsigned int v21; // edi
  int v22; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[8]; // [rsp+48h] [rbp-40h] BYREF

  dword_1C005A228 = 0;
  v7 = 0LL;
  byte_1C005A22C = 0;
  FieldUnitRegionObj = GetFieldUnitRegionObj((__int64 *)a3, (__int64 *)Object);
  if ( FieldUnitRegionObj >= 0 && Object[0] )
  {
    v7 = (volatile signed __int32 *)((char *)Object[0] + 112);
    AMLIReferenceHandleEx((__int64)Object[0] + 112);
    DereferenceObjectEx(v11);
  }
  if ( FieldUnitRegionObj )
    return 3221225473LL;
  if ( !v7 )
    return 3221225473LL;
  v12 = (volatile signed __int32 *)AMLIGetParent((__int64)v7);
  AMLIDereferenceHandleEx(v7);
  if ( !a5 || !*(_QWORD *)(a5 + 16) )
    return 3221225473LL;
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v13 = a4 + 16;
    v22 = 8;
  }
  else
  {
    v13 = *(_QWORD *)(a4 + 32);
    v22 = *(_DWORD *)(a4 + 24);
  }
  if ( !*(_DWORD *)(a3 + 28) || (v14 = *(_DWORD *)(a3 + 36) + 56, v14 <= 0x40) )
    v14 = 64;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x4F706341u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v14);
  v16[8] = a1;
  *(_DWORD *)v16 = 1;
  *((_DWORD *)v16 + 1) = v14;
  v16[9] = *(_BYTE *)(a3 + 20) & 0xF;
  v16[12] = (*(_DWORD *)(a3 + 20) >> 4) & 6;
  v16[10] = BYTE1(*(_DWORD *)(a3 + 20));
  *((_QWORD *)v16 + 2) = a2;
  *((_DWORD *)v16 + 6) = *(_DWORD *)(a3 + 8);
  *((_DWORD *)v16 + 7) = *(_DWORD *)(a3 + 12);
  *((_DWORD *)v16 + 8) = *(_DWORD *)(a3 + 16);
  v16[11] = *(_BYTE *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 28) )
  {
    *((_DWORD *)v16 + 12) = *(_DWORD *)(a3 + 32);
    v19 = *(_DWORD *)(a3 + 36);
    *((_DWORD *)v16 + 13) = v19;
    memmove(v16 + 56, (const void *)(a3 + 40), v19);
  }
  ACPIInternalGetDeviceFromNSOBJ((__int64)v12, Object, v18, 0LL);
  v20 = Object[0];
  *((PVOID *)v16 + 5) = Object[0];
  v21 = (*(__int64 (__fastcall **)(char *, __int64, int *, _QWORD, __int64, __int64))(a5 + 16))(
          v16,
          v13,
          &v22,
          *(_QWORD *)(a5 + 24),
          a6,
          a7);
  if ( v20 )
    ObfDereferenceObject(v20);
  if ( v21 == -1073741789 )
  {
    *(_DWORD *)(a4 + 16) = v22;
    *(_WORD *)(a4 + 2) = 1;
  }
  ExFreePoolWithTag(v16, 0x4F706341u);
  AMLIDereferenceHandleEx(v12);
  return v21;
}
