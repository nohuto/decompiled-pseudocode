/*
 * XREFs of NtQueryLicenseValue @ 0x14051D354
 * Callers:
 *     sub_1407DBFEC @ 0x1407DBFEC (sub_1407DBFEC.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     sub_14051D560 @ 0x14051D560 (sub_14051D560.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  SIZE_T v5; // r15
  char PreviousMode; // dl
  NTSTATUS v9; // ebx
  int v10; // r8d
  wchar_t *Buffer; // rcx
  ULONG64 v12; // rdx
  PVOID PoolWithTag; // rax
  PVOID v14; // rsi
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  PVOID P; // [rsp+38h] [rbp-60h]
  __int128 *v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+48h] [rbp-50h] BYREF

  v5 = DataSize;
  P = 0LL;
  v20 = 0uLL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0;
  if ( ValueName && ResultDataSize )
  {
    LODWORD(v19) = (_DWORD)ValueName;
    if ( PreviousMode )
    {
      if ( (unsigned __int64)ValueName >= MmUserProbeAddress )
        ValueName = (PUNICODE_STRING)MmUserProbeAddress;
      v10 = *(_DWORD *)&ValueName->Length;
      LODWORD(v20) = *(_DWORD *)&ValueName->Length;
      Buffer = ValueName->Buffer;
      *((_QWORD *)&v20 + 1) = Buffer;
      if ( Buffer && (_WORD)v10 && !((unsigned __int16)v10 % 2) )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = (ULONG64)Buffer + (unsigned __int16)v10;
        if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)Buffer )
          *(_BYTE *)MmUserProbeAddress = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v20, 0x20534C53u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v14 = PoolWithTag;
          memmove(PoolWithTag, *((const void **)&v20 + 1), (unsigned __int16)v20);
          *((_QWORD *)&v20 + 1) = v14;
          v19 = &v20;
          if ( Type )
          {
            v15 = Type;
            if ( (unsigned __int64)Type >= MmUserProbeAddress )
              v15 = (_DWORD *)MmUserProbeAddress;
            *v15 = *v15;
          }
          if ( Data && (_DWORD)v5 )
            ProbeForWrite(Data, v5, 1u);
          v16 = ResultDataSize;
          if ( (unsigned __int64)ResultDataSize >= MmUserProbeAddress )
            v16 = (_DWORD *)MmUserProbeAddress;
          *v16 = *v16;
          v9 = 0;
        }
        else
        {
          v9 = -1073741801;
        }
      }
      else
      {
        v9 = -1073741811;
      }
    }
    if ( v9 >= 0 )
      v9 = sub_14051D560((_DWORD)v19, (_DWORD)Type, (_DWORD)Data, v5, (__int64)ResultDataSize);
  }
  else
  {
    v9 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v9;
}
