/*
 * XREFs of BiGetDriveLayoutBlock @ 0x14056EFF4
 * Callers:
 *     BiGetNtPartitionPath @ 0x14056EC30 (BiGetNtPartitionPath.c)
 * Callees:
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BiGetDriveLayoutInformation @ 0x140570F6C (BiGetDriveLayoutInformation.c)
 *     BiGetPhysicalDriveName @ 0x14070E32C (BiGetPhysicalDriveName.c)
 */

__int64 __fastcall BiGetDriveLayoutBlock(unsigned int a1, PVOID *a2, _DWORD *a3)
{
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rbp
  int DriveLayoutInformation; // ebx
  char *v9; // rax
  int v10; // ecx
  WCHAR *P; // [rsp+48h] [rbp+10h]

  *a2 = 0LL;
  memset(a3, 0, 0x28uLL);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x4B444342u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  swprintf_s(PoolWithTag, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", a1, 0LL);
  DriveLayoutInformation = BiGetDriveLayoutInformation(v7);
  if ( DriveLayoutInformation < 0 )
  {
    DriveLayoutInformation = BiGetPhysicalDriveName(v7);
    if ( DriveLayoutInformation < 0 )
      goto LABEL_17;
    DriveLayoutInformation = BiGetDriveLayoutInformation(P);
    ExFreePoolWithTag(P, 0);
    if ( DriveLayoutInformation < 0 )
      goto LABEL_17;
  }
  *a3 = 0;
  v9 = (char *)*a2;
  v10 = *(_DWORD *)*a2;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      a3[1] = 0;
      *(_OWORD *)(a3 + 2) = *(_OWORD *)(v9 + 8);
    }
    else
    {
      DriveLayoutInformation = -1073741811;
    }
  }
  else
  {
    a3[1] = 1;
    a3[2] = *((_DWORD *)v9 + 2);
  }
  if ( DriveLayoutInformation < 0 )
  {
LABEL_17:
    if ( *a2 )
    {
      ExFreePoolWithTag(*a2, 0);
      *a2 = 0LL;
    }
  }
  ExFreePoolWithTag(v7, 0);
  return (unsigned int)DriveLayoutInformation;
}
