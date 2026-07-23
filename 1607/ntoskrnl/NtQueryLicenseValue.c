/*
 * XREFs of NtQueryLicenseValue @ 0x14051C200
 * Callers:
 *     MiMemoryLicense @ 0x14078EC84 (MiMemoryLicense.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExQueryLicenseValueInternal @ 0x14051C4C0 (ExQueryLicenseValueInternal.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  SIZE_T v5; // r14
  char PreviousMode; // dl
  PULONG v9; // r13
  int v10; // r9d
  wchar_t *Buffer; // r8
  unsigned __int64 v12; // rcx
  PVOID PoolWithTag; // rax
  void *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  NTSTATUS LicenseValueInternal; // ebx
  unsigned int v18; // eax
  _DWORD Size[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+48h] [rbp-50h] BYREF
  void *Src; // [rsp+50h] [rbp-48h]
  ULONG v24; // [rsp+A0h] [rbp+8h] BYREF
  PULONG v25; // [rsp+A8h] [rbp+10h]
  PVOID v26; // [rsp+B0h] [rbp+18h]
  ULONG v27; // [rsp+B8h] [rbp+20h]

  v27 = DataSize;
  v26 = Data;
  v25 = Type;
  v5 = DataSize;
  P = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ValueName && (v9 = ResultDataSize) != 0LL && (Data || !DataSize) )
  {
    if ( DataSize > 0x800000 )
    {
      LicenseValueInternal = -1073741801;
    }
    else if ( PreviousMode )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v10 = *(_DWORD *)&ValueName->Length;
      v22 = *(_DWORD *)&ValueName->Length;
      Buffer = ValueName->Buffer;
      Src = Buffer;
      if ( Buffer && (_WORD)v10 && !((unsigned __int16)v10 % 2) )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = (unsigned __int64)Buffer + (unsigned __int16)v10;
        if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v22, 0x20534C53u);
        P = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_27;
        v14 = PoolWithTag;
        memmove(PoolWithTag, Src, (unsigned __int16)v22);
        Src = v14;
        if ( Type )
        {
          v15 = (__int64)Type;
          if ( (unsigned __int64)Type >= 0x7FFFFFFF0000LL )
            v15 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v15 = *(_DWORD *)v15;
          v24 = *Type;
        }
        if ( Data
          && (_DWORD)v5
          && (ProbeForWrite(Data, v5, 1u),
              (*(_QWORD *)&Size[1] = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u)) == 0LL) )
        {
LABEL_27:
          LicenseValueInternal = -1073741801;
        }
        else
        {
          v16 = (__int64)v9;
          if ( (unsigned __int64)v9 >= 0x7FFFFFFF0000LL )
            v16 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v16 = *(_DWORD *)v16;
          Size[0] = *v9;
          LicenseValueInternal = 0;
        }
      }
      else
      {
        LicenseValueInternal = -1073741811;
      }
      if ( LicenseValueInternal >= 0 )
      {
        LicenseValueInternal = ExQueryLicenseValueInternal((int)&v22, (int)&v24, Size[1], v5, (__int64)Size);
        if ( Type )
          *Type = v24;
        v18 = Size[0];
        *v9 = Size[0];
        if ( LicenseValueInternal >= 0 && Data )
        {
          if ( (unsigned int)v5 < v18 )
            LicenseValueInternal = -1073741789;
          else
            memmove(Data, *(const void **)&Size[1], v18);
        }
      }
    }
    else
    {
      LicenseValueInternal = ExQueryLicenseValueInternal(
                               (int)ValueName,
                               (int)Type,
                               (int)Data,
                               DataSize,
                               (__int64)ResultDataSize);
    }
  }
  else
  {
    LicenseValueInternal = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(_QWORD *)&Size[1] )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  return LicenseValueInternal;
}
