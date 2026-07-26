/*
 * XREFs of ndisGetMiniportOffloadCapability @ 0x1C00D06A4
 * Callers:
 *     ndisGetMiniportInfo @ 0x1C00CB158 (ndisGetMiniportInfo.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     ndisMAllocateMiniportOffload @ 0x1C0017208 (ndisMAllocateMiniportOffload.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

void __fastcall ndisGetMiniportOffloadCapability(PVOID *a1)
{
  char v2; // r15
  char v3; // si
  char v4; // r12
  char v5; // r13
  char v6; // r14
  char v7; // bl
  __int64 v8; // rcx
  unsigned int v9; // r10d
  char *i; // rdx
  int v11; // r9d
  int v12; // r8d
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  _BYTE v17[248]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v18[36]; // [rsp+138h] [rbp+30h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  memset(v17, 0, sizeof(v17));
  memset(v18, 0, sizeof(v18));
  if ( !(unsigned int)ndisMAllocateMiniportOffload((__int64)a1) )
  {
    v18[3] = 0;
    v18[5] |= 1u;
    v18[0] = 1;
    v18[1] = 28;
    v18[4] = 2;
    v18[6] = 14;
    memset(v17, 0, sizeof(v17));
    *(_DWORD *)&v17[4] = 0;
    *(_DWORD *)&v17[88] |= 0x80u;
    *(_QWORD *)&v17[40] = v18;
    *(_DWORD *)v17 = 15466902;
    *(_QWORD *)&v17[104] = &ndisIntReqGeneric;
    *(_DWORD *)&v17[32] = -67042815;
    *(_DWORD *)&v17[48] = 144;
    if ( !(unsigned int)ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v17, 0LL, 0LL) && v18[3] )
    {
      v8 = (__int64)a1[519] + 368;
      *(_QWORD *)v8 = 7340455LL;
      *(_DWORD *)(v8 + 8) &= 0xFFFFFC00;
      *(_DWORD *)(v8 + 16) &= 0xFFFFFC00;
      *(_DWORD *)(v8 + 32) &= 0xFFFFFF00;
      *(_DWORD *)(v8 + 24) &= 0xFFFFFF00;
      *(_DWORD *)(v8 + 12) = 0;
      *(_DWORD *)(v8 + 28) = 0;
      *(_DWORD *)(v8 + 20) = 0;
      *(_DWORD *)(v8 + 48) &= 0xFFFFFFF0;
      *(_QWORD *)(v8 + 36) = 0LL;
      *(_DWORD *)(v8 + 44) = 0;
      *(_DWORD *)(v8 + 104) &= 0xFFFFFFF0;
      *(_DWORD *)(v8 + 80) = 0;
      *(_QWORD *)(v8 + 88) = 0LL;
      *(_QWORD *)(v8 + 96) = 0LL;
      v9 = v18[1];
      for ( i = (char *)v18 + v18[1]; *(_DWORD *)i == 1; i += v16 )
      {
        if ( *((_DWORD *)i + 1) != 24 )
          break;
        v11 = *((_DWORD *)i + 4);
        if ( v11 + v9 + 20 > 0x90 )
          break;
        v12 = *((_DWORD *)i + 2);
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              *((_BYTE *)a1[519] + 1169) = 1;
              if ( *((_DWORD *)i + 5) > 1u )
                break;
              if ( i[33] == 1 )
              {
                v6 = 1;
                *(_DWORD *)(v8 + 48) = *(_DWORD *)(v8 + 48) & 0xFFFFFFF3 | 4;
              }
              if ( i[32] == 1 )
              {
                v6 = 1;
                *(_DWORD *)(v8 + 48) = *(_DWORD *)(v8 + 48) & 0xFFFFFFFC | 1;
              }
              *(_DWORD *)(v8 + 44) = *((_DWORD *)i + 7);
              *(_DWORD *)(v8 + 40) = *((_DWORD *)i + 6);
              if ( *((_DWORD *)i + 7) && *((_DWORD *)i + 6) )
                v6 = 1;
              if ( v6 == 1 )
                *(_DWORD *)(v8 + 36) = 2;
            }
          }
          else
          {
            if ( v11 != 24 )
              break;
            *((_BYTE *)a1[519] + 1170) = 1;
            *(_DWORD *)(v8 + 60) = 0;
            *(_DWORD *)(v8 + 68) = *((_DWORD *)i + 8);
            if ( *((_DWORD *)i + 5) )
            {
              *(_DWORD *)(v8 + 56) = 1;
              v7 = 1;
            }
            if ( *((_DWORD *)i + 7) )
            {
              *(_DWORD *)(v8 + 64) = 1;
              v7 = 1;
            }
            if ( (*((_DWORD *)i + 9) & 1) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFFFFC | 1;
            }
            if ( (*((_DWORD *)i + 9) & 2) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFFFF3 | 4;
            }
            if ( (*((_DWORD *)i + 9) & 4) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFFFCF | 0x10;
            }
            if ( (*((_DWORD *)i + 9) & 0x10) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFFCFF | 0x100;
            }
            if ( (*((_DWORD *)i + 9) & 0x20) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 72) = *(_DWORD *)(v8 + 72) & 0xFFFFF3FF | 0x400;
            }
            if ( (*((_DWORD *)i + 10) & 0x40) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFCFFF | 0x1000;
            }
            if ( (*((_DWORD *)i + 10) & 0x80u) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFF3FFF | 0x4000;
            }
            if ( (*((_DWORD *)i + 10) & 1) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFFFC | 1;
            }
            if ( (*((_DWORD *)i + 10) & 4) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFFCF | 0x10;
            }
            if ( (*((_DWORD *)i + 10) & 8) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFF3F | 0x40;
            }
            if ( (*((_DWORD *)i + 10) & 0x10) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFCFF | 0x100;
            }
            if ( (*((_DWORD *)i + 10) & 2) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(v8 + 76) & 0xFFFFFFF3 | 4;
            }
            if ( v7 == 1 )
              *(_DWORD *)(v8 + 52) = 2;
            *((_DWORD *)i + 10) &= ~0x20u;
          }
        }
        else
        {
          if ( v11 != 16 )
            break;
          *((_BYTE *)a1[519] + 1168) = 1;
          if ( (*((_DWORD *)i + 5) & 1) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFFFC | 1;
          }
          if ( (*((_DWORD *)i + 5) & 2) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFFF3 | 4;
          }
          if ( (*((_DWORD *)i + 5) & 4) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFFCF | 0x10;
          }
          if ( (*((_DWORD *)i + 5) & 8) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFF3F | 0x40;
          }
          if ( (*((_DWORD *)i + 5) & 0x10) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFCFF | 0x100;
          }
          if ( v3 == 1 )
            *(_DWORD *)(v8 + 4) = 2;
          if ( (*((_DWORD *)i + 6) & 1) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFFFC | 1;
          }
          if ( (*((_DWORD *)i + 6) & 2) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFFF3 | 4;
          }
          if ( (*((_DWORD *)i + 6) & 4) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFFCF | 0x10;
          }
          if ( (*((_DWORD *)i + 6) & 8) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFF3F | 0x40;
          }
          if ( (*((_DWORD *)i + 6) & 0x10) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 16) & 0xFFFFFCFF | 0x100;
          }
          if ( v2 == 1 )
            *(_DWORD *)(v8 + 12) = 2;
          v14 = *((_DWORD *)i + 8);
          if ( (v14 & 1) != 0 )
          {
            *(_DWORD *)(v8 + 28) = 0;
            *(_DWORD *)(v8 + 32) &= 0xFFFFFF00;
          }
          else
          {
            if ( (v14 & 2) != 0 )
            {
              v5 = 1;
              *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFFFFFF3 | 4;
            }
            if ( (*((_DWORD *)i + 8) & 4) != 0 )
            {
              v5 = 1;
              *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFFFFFCF | 0x10;
            }
            if ( (*((_DWORD *)i + 8) & 8) != 0 )
            {
              v5 = 1;
              *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFFFFF3F | 0x40;
            }
            if ( v5 == 1 )
              *(_DWORD *)(v8 + 28) = 2;
          }
          v15 = *((_DWORD *)i + 7);
          if ( (v15 & 1) != 0 )
          {
            *(_DWORD *)(v8 + 20) = 0;
            *(_DWORD *)(v8 + 24) &= 0xFFFFFF00;
          }
          else
          {
            if ( (v15 & 2) != 0 )
            {
              v4 = 1;
              *(_DWORD *)(v8 + 24) = *(_DWORD *)(v8 + 24) & 0xFFFFFFF3 | 4;
            }
            if ( (*((_DWORD *)i + 7) & 4) != 0 )
            {
              v4 = 1;
              *(_DWORD *)(v8 + 24) = *(_DWORD *)(v8 + 24) & 0xFFFFFFCF | 0x10;
            }
            if ( (*((_DWORD *)i + 7) & 8) != 0 )
            {
              v4 = 1;
              *(_DWORD *)(v8 + 24) = *(_DWORD *)(v8 + 24) & 0xFFFFFF3F | 0x40;
            }
            if ( v4 == 1 )
              *(_DWORD *)(v8 + 20) = 2;
          }
        }
        v16 = *((unsigned int *)i + 3);
        if ( !(_DWORD)v16 )
          return;
        v9 += v16;
        if ( v9 > 0x90 )
          return;
      }
    }
    ExFreePoolWithTag(a1[519], 0);
    a1[519] = 0LL;
  }
}
