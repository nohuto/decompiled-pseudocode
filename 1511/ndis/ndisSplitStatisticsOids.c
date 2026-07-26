/*
 * XREFs of ndisSplitStatisticsOids @ 0x1C00A8E94
 * Callers:
 *     ndisQueryOidList @ 0x1C00A8D7C (ndisQueryOidList.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSplitStatisticsOids(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  int v5; // edi
  __int64 v6; // r12
  unsigned int v7; // r14d
  unsigned int v10; // r8d
  int *v11; // rdx
  __int64 v12; // r9
  int v13; // ecx
  int *v14; // rdx
  __int64 v15; // r9
  int v16; // ecx
  __int64 v17; // r15
  _DWORD *PoolWithTag; // rax
  unsigned int v19; // r9d
  __int64 v20; // r10
  unsigned int v21; // r8d
  __int64 v23; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = 0;
  v6 = a3;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(0x15u, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v3);
  v10 = *(_DWORD *)(v3 + 3456) >> 2;
  if ( (_DWORD)v6 )
  {
    v11 = a2;
    v12 = v6;
    do
    {
      v13 = *v11;
      if ( (*v11 & 0xFF0000) == 0x20000 && (v13 & 0xFF000000) != 0xFF000000 && v13 != 131613 )
        ++v5;
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  if ( v10 )
  {
    v14 = *(int **)(v3 + 3448);
    v15 = v10;
    do
    {
      v16 = *v14;
      if ( (*v14 & 0xFF0000) == 0x20000 && (v16 & 0xFF000000) != 0xFF000000 && v16 != 131613 )
        ++v5;
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  v17 = v10 + (unsigned int)v6;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)(v17 + v5) + 24, 0x616F444Eu);
  *(_QWORD *)(a1 + 16) = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = v17;
    v19 = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = *(_QWORD *)(a1 + 16) + 24LL;
    **(_DWORD **)(a1 + 16) = v5;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 4 * v17;
    if ( (_DWORD)v17 )
    {
      v20 = 0LL;
      do
      {
        if ( v19 >= (unsigned int)v6 )
          v21 = *(_DWORD *)(*(_QWORD *)(v3 + 3448) + 4LL * (v19 - (unsigned int)v6));
        else
          v21 = *a2;
        if ( (v21 & 0xFF0000) == 0x20000 && (v21 & 0xFF000000) != 0xFF000000 && v21 != 131613 )
        {
          v23 = v4++;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 4 * v23) = v21;
          if ( v21 <= 0x20207 )
          {
            if ( v21 == 131591 )
            {
              *(_DWORD *)(v3 + 2692) |= 0x800u;
            }
            else if ( v21 <= 0x20201 )
            {
              switch ( v21 )
              {
                case 0x20201u:
                  *(_DWORD *)(v3 + 2692) |= 0x20u;
                  break;
                case 0x20101u:
                  *(_DWORD *)(v3 + 2692) |= 1u;
                  break;
                case 0x20102u:
                  *(_DWORD *)(v3 + 2692) |= 2u;
                  break;
                case 0x20103u:
                  *(_DWORD *)(v3 + 2692) |= 4u;
                  break;
                case 0x20104u:
                  *(_DWORD *)(v3 + 2692) |= 8u;
                  break;
                case 0x20105u:
                  *(_DWORD *)(v3 + 2692) |= 0x10u;
                  break;
                case 0x20106u:
                  *(_DWORD *)(v3 + 2692) |= 0x400000u;
                  break;
              }
            }
            else
            {
              switch ( v21 )
              {
                case 0x20202u:
                  *(_DWORD *)(v3 + 2692) |= 0x40u;
                  break;
                case 0x20203u:
                  *(_DWORD *)(v3 + 2692) |= 0x80u;
                  break;
                case 0x20204u:
                  *(_DWORD *)(v3 + 2692) |= 0x100u;
                  break;
                case 0x20205u:
                  *(_DWORD *)(v3 + 2692) |= 0x200u;
                  break;
                default:
                  *(_DWORD *)(v3 + 2692) |= 0x400u;
                  break;
              }
            }
          }
          else if ( v21 <= 0x2020D )
          {
            switch ( v21 )
            {
              case 0x2020Du:
                *(_DWORD *)(v3 + 2692) |= 0x20000u;
                break;
              case 0x20208u:
                *(_DWORD *)(v3 + 2692) |= 0x1000u;
                break;
              case 0x20209u:
                *(_DWORD *)(v3 + 2692) |= 0x2000u;
                break;
              case 0x2020Au:
                *(_DWORD *)(v3 + 2692) |= 0x4000u;
                break;
              case 0x2020Bu:
                *(_DWORD *)(v3 + 2692) |= 0x8000u;
                break;
              default:
                *(_DWORD *)(v3 + 2692) |= 0x10000u;
                break;
            }
          }
          else
          {
            switch ( v21 )
            {
              case 0x2020Eu:
                *(_DWORD *)(v3 + 2692) |= 0x40000u;
                break;
              case 0x20219u:
                *(_DWORD *)(v3 + 2692) |= 0x80000u;
                break;
              case 0x2021Au:
                *(_DWORD *)(v3 + 2692) |= 0x100000u;
                break;
              case 0x2021Bu:
                *(_DWORD *)(v3 + 2692) |= 0x200000u;
                break;
              case 0x2021Cu:
                *(_DWORD *)(v3 + 2692) |= 0x8000000u;
                break;
            }
          }
        }
        ++v19;
        ++a2;
        *(_DWORD *)(v20 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL)) = v21;
        v20 += 4LL;
      }
      while ( v19 < (unsigned int)v17 );
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1776LL) = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qD(0x16u, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v3, v7);
  return v7;
}
