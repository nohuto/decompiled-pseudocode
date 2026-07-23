/*
 * XREFs of IoWMISetSingleItem @ 0x14069CEDC
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x14052B10C (WmipQuerySetExecuteSI.c)
 *     WmipAllocateSingleInstanceWnode @ 0x14069D2AC (WmipAllocateSingleInstanceWnode.c)
 */

NTSTATUS __stdcall IoWMISetSingleItem(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        ULONG DataItemId,
        ULONG Version,
        ULONG ValueBufferSize,
        PVOID ValueBuffer)
{
  NTSTATUS SingleInstanceWnode; // ebx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned int v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  SingleInstanceWnode = WmipAllocateSingleInstanceWnode(
                          68,
                          (_DWORD)InstanceName,
                          ValueBufferSize,
                          (unsigned int)&v17,
                          (__int64)&v18,
                          (__int64)&v16,
                          (__int64)P);
  if ( SingleInstanceWnode >= 0 )
  {
    v11 = P[0];
    v12 = v17;
    v13 = v16;
    *((_DWORD *)P[0] + 11) = 4;
    v11[2] = 0LL;
    *(_DWORD *)v11 = v13;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 2) = Version;
    *((_DWORD *)v11 + 14) = DataItemId;
    *((_DWORD *)v11 + 12) = v12;
    *(_WORD *)((char *)v11 + v12) = InstanceName->Length;
    memmove((char *)v11 + v12 + 2, InstanceName->Buffer, InstanceName->Length);
    v14 = v18;
    *((_DWORD *)v11 + 16) = ValueBufferSize;
    *((_DWORD *)v11 + 15) = v14;
    memmove((char *)v11 + v14, ValueBuffer, ValueBufferSize);
    v18 = *(_DWORD *)v11;
    SingleInstanceWnode = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 3u, (__int64)v11, v13, &v18);
    ExFreePoolWithTag(v11, 0);
  }
  return SingleInstanceWnode;
}
