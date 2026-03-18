/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C0007280
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006F20 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObject(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r11
  unsigned __int64 v5; // r10
  int v7; // ecx
  int v8; // ecx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 **v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 **v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax

  LOBYTE(a4) = 0;
  v4 = 0;
  v5 = a1;
  if ( *(_DWORD *)(a2 + 32) == 0x7FFFFFFF )
    goto LABEL_37;
  a1 = *(unsigned int *)(a2 + 40);
  if ( !(_DWORD)a1 )
  {
    if ( !*(_QWORD *)(a2 + 56) )
    {
      if ( !*(_QWORD *)(a2 + 48) )
      {
        *(_QWORD *)(a2 + 48) = v5;
        LOBYTE(a4) = 1;
      }
      *(_QWORD *)(a2 + 56) = v5;
      goto LABEL_7;
    }
    goto LABEL_37;
  }
  v7 = a1 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      a1 = (unsigned int)(v8 - 1);
      if ( !(_DWORD)a1 )
        goto LABEL_37;
      if ( (_DWORD)a1 != 1 )
        goto LABEL_27;
      v10 = *(_QWORD *)(a3 + 288);
      if ( *(_BYTE *)(a2 + 28) )
        goto LABEL_8;
      v11 = *(unsigned __int64 **)(a2 + 56);
      if ( *(_BYTE *)(a2 + 29) )
      {
        if ( *v11 >= v10 )
          goto LABEL_8;
      }
      else if ( *(_DWORD *)v11 - (int)v10 >= 0 )
      {
        goto LABEL_8;
      }
      if ( *(_QWORD *)(a2 + 72) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 80) + 104LL) + 32LL);
        ++*(_DWORD *)(v12 + 944);
        *(_DWORD *)(a3 + 256) |= 8u;
LABEL_26:
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 776));
        goto LABEL_27;
      }
    }
    else
    {
      if ( *(_BYTE *)(a2 + 27) )
        a1 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 40LL);
      else
        a1 = *(_QWORD *)(a2 + 56);
      if ( a1 >= *(_QWORD *)(a3 + 288) )
      {
        if ( *(_BYTE *)(a2 + 27) )
          v9 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 32LL);
        else
          v9 = *(_QWORD *)(a2 + 64);
        if ( v9 >= *(_QWORD *)(a3 + 288) )
          goto LABEL_8;
        goto LABEL_26;
      }
      if ( !*(_BYTE *)(a2 + 25) )
        goto LABEL_37;
    }
    ++*(_DWORD *)(a2 + 36);
    v4 = 1;
    ++*(_DWORD *)(*(_QWORD *)(a3 + 80) + 772LL);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 80) + 104LL) + 1148LL);
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 80) + 104LL) + 32LL);
    ++*(_DWORD *)(v18 + 940);
    *(_DWORD *)(a3 + 256) |= 4u;
    goto LABEL_26;
  }
  a1 = *(unsigned int *)(a2 + 56);
  if ( (_DWORD)a1 )
  {
    v20 = *(_DWORD *)(a2 + 48);
    if ( v20 )
    {
      LOBYTE(a4) = 1;
      *(_DWORD *)(a2 + 48) = v20 - 1;
    }
    *(_DWORD *)(a2 + 56) = a1 - 1;
LABEL_7:
    if ( (_BYTE)a4 )
    {
LABEL_8:
      *(_DWORD *)(a3 + 256) |= 1u;
      return 0LL;
    }
LABEL_27:
    v13 = (__int64 *)(a3 + 272);
    if ( *(_DWORD *)(a2 + 40) == 4 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v5 + 104) + 32LL) + 952LL;
      v17 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(v5 + 104) + 32LL) + 960LL);
      *v13 = v16;
      v13[1] = (__int64)v17;
      if ( *v17 != (__int64 *)v16 )
        __fastfail(3u);
      *v17 = v13;
      *(_QWORD *)(v16 + 8) = v13;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    }
    else
    {
      if ( v4 )
      {
        v14 = *(__int64 ***)(a2 + 112);
        v15 = a2 + 104;
        *v13 = a2 + 104;
        v13[1] = (__int64)v14;
        if ( *v14 != (__int64 *)(a2 + 104) )
          __fastfail(3u);
      }
      else
      {
        v14 = *(__int64 ***)(a2 + 96);
        v15 = a2 + 88;
        *v13 = a2 + 88;
        v13[1] = (__int64)v14;
        if ( *v14 != (__int64 *)(a2 + 88) )
          __fastfail(3u);
      }
      *v14 = v13;
      *(_QWORD *)(v15 + 8) = v13;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    }
    return 0LL;
  }
LABEL_37:
  v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
  WdLogEvent5_WdAssertion(v19);
  return 3221225473LL;
}
