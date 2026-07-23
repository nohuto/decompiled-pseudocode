/*
 * XREFs of BiGetDriveLayoutBlock @ 0x14053D398
 * Callers:
 *     BiGetNtPartitionPath @ 0x14053CFD0 (BiGetNtPartitionPath.c)
 * Callees:
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiGetDriveLayoutInformation @ 0x14053F210 (BiGetDriveLayoutInformation.c)
 *     BiGetPhysicalDriveName @ 0x1406D3130 (BiGetPhysicalDriveName.c)
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
    ExFreePoolWithTag(P, 0x4B444342u);
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
      ExFreePoolWithTag(*a2, 0x4B444342u);
      *a2 = 0LL;
    }
  }
  ExFreePoolWithTag(v7, 0x4B444342u);
  return (unsigned int)DriveLayoutInformation;
}
