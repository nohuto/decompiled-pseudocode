/*
 * XREFs of FirmwareDownload @ 0x1C0008F38
 * Callers:
 *     IoctlToNVMe @ 0x1C000A180 (IoctlToNVMe.c)
 * Callees:
 *     FillClippedSGL @ 0x1C0006128 (FillClippedSGL.c)
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall FirmwareDownload(_DWORD *a1, __int64 a2)
{
  _DWORD *v4; // rsi
  char *v5; // rbp
  char *v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned int v15; // r8d

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_DWORD **)(a2 + 64);
  else
    v4 = *(_DWORD **)(a2 + 24);
  v5 = (char *)v4 + (unsigned int)v4[11];
  if ( *(_DWORD *)v5 == 2 && *((_DWORD *)v5 + 1) >= 0x20u )
    v6 = (char *)v4 + (unsigned int)v4[11];
  else
    v6 = 0LL;
  v7 = (unsigned int)v4[12];
  if ( v6 )
  {
    if ( (unsigned int)v7 >= 0x20 )
    {
      v8 = *((_QWORD *)v6 + 2);
      v9 = v8 + 32;
      goto LABEL_11;
    }
LABEL_13:
    result = 3238002694LL;
    v4[5] = 3;
LABEL_14:
    *(_BYTE *)(a2 + 3) = 21;
    return result;
  }
  if ( (unsigned int)v7 < 0x18 )
    goto LABEL_13;
  v8 = *((_QWORD *)v5 + 2);
  v9 = v8 + 24;
LABEL_11:
  if ( v7 < v9 )
    goto LABEL_13;
  if ( !v8 )
    goto LABEL_13;
  if ( (v5[8] & 3) != 0 )
    goto LABEL_13;
  v11 = *((_QWORD *)v5 + 2);
  if ( (v11 & 3) != 0 )
    goto LABEL_13;
  v12 = a1[7];
  v13 = a1[34];
  v14 = v13;
  if ( v12 )
  {
    if ( v12 < v13 )
      v14 = v12;
  }
  else if ( v13 > 0x80000 )
  {
    v14 = 0x80000LL;
  }
  v15 = a1[12];
  if ( v15 && v15 < (unsigned int)v14 )
    v14 = v15;
  if ( v11 > v14 )
  {
    result = 3238002694LL;
    v4[5] = 4;
    goto LABEL_14;
  }
  if ( v12 )
  {
    if ( v12 < v13 )
      v13 = a1[7];
  }
  else if ( v13 > 0x80000 )
  {
    v13 = 0x80000;
  }
  if ( v15 )
  {
    if ( v15 < v13 )
      v13 = a1[12];
  }
  StorPortExtendedFunction(0LL, a1, 24 * (((v13 - 1) >> 12) + 2) + 16, 1701672526LL);
  v4[5] = 1;
  result = 3238002689LL;
  *(_BYTE *)(a2 + 3) = 4;
  return result;
}
