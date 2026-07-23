/*
 * XREFs of RtlQueryModuleInformation @ 0x1405386E4
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlQueryModuleInformation(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int *PoolWithQuotaTag; // rbx
  unsigned int v7; // edi
  ULONG i; // r8d
  NTSTATUS v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  _OWORD *v15; // rdx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE SystemInformation[304]; // [rsp+30h] [rbp-168h] BYREF

  if ( a2 != 272 && a2 != 8 )
    return 3221225712LL;
  if ( (a3 & 7) != 0 )
    return 3221225713LL;
  PoolWithQuotaTag = (unsigned int *)SystemInformation;
  v7 = 0;
  for ( i = 304; ; i = ReturnLength[0] )
  {
    ReturnLength[0] = 0;
    v9 = ZwQuerySystemInformation(SystemModuleInformation, PoolWithQuotaTag, i, ReturnLength);
    v10 = v9;
    if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -1073741820 )
      break;
    if ( !a3 )
    {
      v10 = 0;
      v11 = a2 * ((ReturnLength[0] - 8) / 0x128);
LABEL_14:
      *a1 = v11;
      break;
    }
    if ( v9 >= 0 )
    {
      v11 = a2 * *PoolWithQuotaTag;
      if ( *a1 < v11 )
      {
        v10 = -1073741789;
      }
      else if ( *PoolWithQuotaTag )
      {
        do
        {
          if ( a2 == 8 )
          {
            *(_QWORD *)(a3 + 8LL * v7) = *(_QWORD *)&PoolWithQuotaTag[74 * v7 + 6];
          }
          else if ( a2 == 272 )
          {
            v12 = 74LL * v7;
            v13 = a3 + 272LL * v7;
            *(_QWORD *)v13 = *(_QWORD *)&PoolWithQuotaTag[v12 + 6];
            *(_DWORD *)(v13 + 8) = PoolWithQuotaTag[v12 + 8];
            *(_WORD *)(v13 + 12) = HIWORD(PoolWithQuotaTag[v12 + 11]);
            v14 = v12 * 4 + 48;
            v15 = (_OWORD *)(v13 + 14);
            v16 = 2LL;
            v17 = (_OWORD *)((char *)PoolWithQuotaTag + v14);
            do
            {
              *v15 = *v17;
              v15[1] = v17[1];
              v15[2] = v17[2];
              v15[3] = v17[3];
              v15[4] = v17[4];
              v15[5] = v17[5];
              v15[6] = v17[6];
              v15 += 8;
              v18 = v17[7];
              v17 += 8;
              *(v15 - 1) = v18;
              --v16;
            }
            while ( v16 );
          }
          ++v7;
        }
        while ( v7 < *PoolWithQuotaTag );
      }
      goto LABEL_14;
    }
    if ( PoolWithQuotaTag != (unsigned int *)SystemInformation )
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
    PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, ReturnLength[0], 0x546C7452u);
    if ( !PoolWithQuotaTag )
      return 3221225626LL;
  }
  if ( PoolWithQuotaTag != (unsigned int *)SystemInformation )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return v10;
}
