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

__int64 __fastcall NtQueryLicenseValue(ULONG64 a1, ULONG64 a2, volatile void *a3, unsigned int a4, ULONG64 a5)
{
  SIZE_T v5; // r15
  char PreviousMode; // dl
  int v9; // ebx
  int v10; // r8d
  ULONG64 v11; // rcx
  ULONG64 v12; // rdx
  PVOID PoolWithTag; // rax
  PVOID v14; // rsi
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  PVOID P; // [rsp+38h] [rbp-60h]
  __int128 *v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+48h] [rbp-50h] BYREF

  v5 = a4;
  P = 0LL;
  v20 = 0uLL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0;
  if ( a1 && a5 )
  {
    LODWORD(v19) = a1;
    if ( PreviousMode )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      v10 = *(_DWORD *)a1;
      LODWORD(v20) = *(_DWORD *)a1;
      v11 = *(_QWORD *)(a1 + 8);
      *((_QWORD *)&v20 + 1) = v11;
      if ( v11 && (_WORD)v10 && !((unsigned __int16)v10 % 2) )
      {
        if ( (v11 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = v11 + (unsigned __int16)v10;
        if ( v12 > MmUserProbeAddress || v12 < v11 )
          *(_BYTE *)MmUserProbeAddress = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v20, 0x20534C53u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v14 = PoolWithTag;
          memmove(PoolWithTag, *((const void **)&v20 + 1), (unsigned __int16)v20);
          *((_QWORD *)&v20 + 1) = v14;
          v19 = &v20;
          if ( a2 )
          {
            v15 = (_DWORD *)a2;
            if ( a2 >= MmUserProbeAddress )
              v15 = (_DWORD *)MmUserProbeAddress;
            *v15 = *v15;
          }
          if ( a3 && (_DWORD)v5 )
            ProbeForWrite(a3, v5, 1u);
          v16 = (_DWORD *)a5;
          if ( a5 >= MmUserProbeAddress )
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
      v9 = sub_14051D560((_DWORD)v19, a2, (_DWORD)a3, v5, a5);
  }
  else
  {
    v9 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
