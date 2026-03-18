/*
 * XREFs of NtQueryLicenseValue @ 0x1404A3E00
 * Callers:
 *     MiMemoryLicense @ 0x14078EC84 (MiMemoryLicense.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 *     ExQueryLicenseValueInternal @ 0x1404A40C0 (ExQueryLicenseValueInternal.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQueryLicenseValue(unsigned __int64 a1, _DWORD *a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  SIZE_T v5; // r14
  char PreviousMode; // dl
  _DWORD *v9; // r13
  int v10; // r9d
  void *v11; // r8
  unsigned __int64 v12; // rcx
  PVOID PoolWithTag; // rax
  void *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int LicenseValueInternal; // ebx
  unsigned int v18; // eax
  _DWORD Size[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+48h] [rbp-50h] BYREF
  void *Src; // [rsp+50h] [rbp-48h]
  int v24; // [rsp+A0h] [rbp+8h] BYREF
  _DWORD *v25; // [rsp+A8h] [rbp+10h]
  volatile void *v26; // [rsp+B0h] [rbp+18h]
  unsigned int v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v5 = a4;
  P = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a1 && (v9 = a5) != 0LL && (a3 || !a4) )
  {
    if ( a4 > 0x800000 )
    {
      LicenseValueInternal = -1073741801;
    }
    else if ( PreviousMode )
    {
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      v10 = *(_DWORD *)a1;
      v22 = *(_DWORD *)a1;
      v11 = *(void **)(a1 + 8);
      Src = v11;
      if ( v11 && (_WORD)v10 && !((unsigned __int16)v10 % 2) )
      {
        if ( ((unsigned __int8)v11 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = (unsigned __int64)v11 + (unsigned __int16)v10;
        if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)v11 )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v22, 0x20534C53u);
        P = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_27;
        v14 = PoolWithTag;
        memmove(PoolWithTag, Src, (unsigned __int16)v22);
        Src = v14;
        if ( a2 )
        {
          v15 = (__int64)a2;
          if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
            v15 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v15 = *(_DWORD *)v15;
          v24 = *a2;
        }
        if ( a3
          && (_DWORD)v5
          && (ProbeForWrite(a3, v5, 1u), (*(_QWORD *)&Size[1] = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u)) == 0LL) )
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
        if ( a2 )
          *a2 = v24;
        v18 = Size[0];
        *v9 = Size[0];
        if ( LicenseValueInternal >= 0 && a3 )
        {
          if ( (unsigned int)v5 < v18 )
            LicenseValueInternal = -1073741789;
          else
            memmove((void *)a3, *(const void **)&Size[1], v18);
        }
      }
    }
    else
    {
      LicenseValueInternal = ExQueryLicenseValueInternal(a1, (int)a2, (int)a3, a4, (__int64)a5);
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
  return (unsigned int)LicenseValueInternal;
}
