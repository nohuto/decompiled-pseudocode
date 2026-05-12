/*
 * XREFs of FillBufferWithDriverTelemetryDump @ 0x1C003965C
 * Callers:
 *     RaidStandardSecondaryDumpCallback @ 0x1C0039920 (RaidStandardSecondaryDumpCallback.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall FillBufferWithDriverTelemetryDump(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 v3; // r13
  unsigned int v5; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  char *v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  _DWORD *v12; // r10
  __int64 v13; // rax
  unsigned int v14; // r9d
  unsigned int v15; // r14d
  unsigned int v16; // r11d
  unsigned int v17; // r12d
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  _DWORD *v23; // rcx
  __int64 v24; // rax
  __int64 result; // rax

  v3 = BootDriveExtension;
  v5 = *a3;
  if ( !a2 || !v5 )
  {
    *a3 = 7776;
    return 3221225507LL;
  }
  if ( v5 >= 0xD8 )
  {
    v7 = 7776;
    if ( v5 < 0x1E60 )
      v7 = *a3;
    memset(a2, 0, v7);
    v8 = 96;
    *a2 = 1347703620;
    v9 = (char *)(a2 + 4);
    a2[1] = 96;
    a2[2] = v7;
    v10 = 16LL;
    do
    {
      if ( v10 == -2147483630 )
        break;
      v11 = v9["storport.sys" - (char *)(a2 + 4)];
      if ( !v11 )
        break;
      *v9++ = v11;
      --v10;
    }
    while ( v10 );
    if ( !v10 )
      --v9;
    *v9 = 0;
    v12 = a2 + 9;
    a2[8] = 0;
    v13 = *(_QWORD *)(v3 + 24);
    v14 = 0;
    v15 = *(_DWORD *)(v13 + 5060);
    v16 = *(_DWORD *)(v13 + 5056) % v15;
    v17 = (v16 + 1) % v15;
    if ( v16 == v17 )
    {
LABEL_34:
      a2[8] = v14;
      result = 0LL;
      *a3 = v7;
      return result;
    }
    while ( 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 5064LL) + 48LL * v16;
      v19 = *(_QWORD *)(v18 + 32) >> 24;
      *((_BYTE *)v12 + 16) = v19;
      if ( (unsigned __int8)v19 <= 0x22u )
      {
        v20 = 0x5001D0181LL;
        if ( _bittest64(&v20, v19) )
          break;
      }
LABEL_30:
      if ( v16 )
        v16 = (v16 - 1) % v15;
      else
        v16 = v15 - 1;
      if ( v16 == v17 )
        goto LABEL_34;
    }
    if ( *(_DWORD *)v18 == 1 )
    {
      if ( (unsigned __int64)v8 + 60 >= v7 )
        goto LABEL_29;
      *(_BYTE *)v12 = BYTE2(*(_DWORD *)(v18 + 32));
      v12[14] = *(_DWORD *)(v18 + 24);
      v12[13] = (unsigned __int8)*(_DWORD *)(v18 + 32);
      v21 = (unsigned __int64)*(unsigned int *)(v18 + 32) >> 8;
      *((_QWORD *)v12 + 4) = 0LL;
      v12[12] = (unsigned __int8)v21;
      *((_QWORD *)v12 + 5) = *(_QWORD *)(v18 + 40);
    }
    else
    {
      if ( *(_DWORD *)v18 )
        goto LABEL_29;
      v22 = 0;
      v23 = v12 - 15;
      if ( v14 )
      {
        while ( *(_DWORD *)(v18 + 24) != v23[14] )
        {
          ++v22;
          v23 -= 15;
          if ( v22 >= v14 )
            goto LABEL_25;
        }
        *((_QWORD *)v23 + 4) = *(_QWORD *)(v18 + 40);
LABEL_25:
        if ( v22 < v14 )
          goto LABEL_29;
      }
      if ( (unsigned __int64)v8 + 60 >= v7 )
      {
LABEL_29:
        if ( v14 >= 0x80 )
          goto LABEL_34;
        goto LABEL_30;
      }
      *(_BYTE *)v12 = BYTE2(*(_DWORD *)(v18 + 32));
      *((_BYTE *)v12 + 16) = HIBYTE(*(_DWORD *)(v18 + 32));
      v12[14] = *(_DWORD *)(v18 + 24);
      v12[13] = (unsigned __int8)*(_DWORD *)(v18 + 32);
      v12[12] = (unsigned __int8)BYTE1(*(_DWORD *)(v18 + 32));
      v24 = *(_QWORD *)(v18 + 40);
      *((_QWORD *)v12 + 5) = 0LL;
      *((_QWORD *)v12 + 4) = v24;
    }
    v12 += 15;
    ++v14;
    v8 += 60;
    goto LABEL_29;
  }
  *a3 = 216;
  return 3221225507LL;
}
