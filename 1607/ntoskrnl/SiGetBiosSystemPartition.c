/*
 * XREFs of SiGetBiosSystemPartition @ 0x1406D6D00
 * Callers:
 *     SiGetSystemPartition @ 0x140542570 (SiGetSystemPartition.c)
 * Callees:
 *     wcsstr @ 0x14014F70C (wcsstr.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SiGetDriveLayoutInformation @ 0x1406D62C0 (SiGetDriveLayoutInformation.c)
 *     SiGetBiosSystemDisk @ 0x1406D6BDC (SiGetBiosSystemDisk.c)
 */

__int64 __fastcall SiGetBiosSystemPartition(wchar_t **a1)
{
  wchar_t *PoolWithTag; // rbp
  int BiosSystemDisk; // eax
  wchar_t *v4; // rdi
  int v5; // ebx
  int DriveLayoutInformation; // eax
  _DWORD *v7; // rsi
  wchar_t *v8; // rax
  __int64 v9; // rax
  SIZE_T v10; // rbx
  unsigned int v11; // edx
  _DWORD *v12; // rax
  unsigned int v13; // ecx
  wchar_t *Str; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = 0LL;
  PoolWithTag = 0LL;
  Str = 0LL;
  BiosSystemDisk = SiGetBiosSystemDisk(&Str);
  v4 = Str;
  v5 = BiosSystemDisk;
  if ( BiosSystemDisk < 0 )
    goto LABEL_19;
  DriveLayoutInformation = SiGetDriveLayoutInformation(Str, &P);
  v7 = P;
  v5 = DriveLayoutInformation;
  if ( DriveLayoutInformation >= 0 )
  {
    if ( !*(_DWORD *)P )
    {
      v8 = wcsstr(v4, L"\\Partition0");
      if ( v8 )
        *v8 = 0;
      v9 = -1LL;
      do
        ++v9;
      while ( v4[v9] );
      v10 = (unsigned int)(2 * v9 + 42);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x4B505953u);
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        goto LABEL_14;
      }
      v11 = v7[1];
      v12 = v7 + 12;
      v13 = 0;
      if ( v11 )
      {
        while ( !*((_BYTE *)v12 + 33) )
        {
          ++v13;
          v12 += 36;
          if ( v13 >= v11 )
            goto LABEL_13;
        }
        swprintf_s(PoolWithTag, v10 >> 1, L"%s\\Partition%lu", v4, v12[6]);
        *a1 = PoolWithTag;
        v5 = 0;
        goto LABEL_14;
      }
    }
LABEL_13:
    v5 = -1073740718;
  }
LABEL_14:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 < 0 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_19:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v5;
}
