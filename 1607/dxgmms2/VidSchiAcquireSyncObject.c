/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C00066C0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006320 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  char v4; // r11
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // ecx
  unsigned __int64 v13; // r9
  unsigned __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r8
  __int64 **v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 **v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  int v24; // eax

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 32) == 0x7FFFFFFF )
    goto LABEL_37;
  v6 = *(_DWORD *)(a2 + 40);
  if ( !v6 )
  {
    if ( !*(_QWORD *)(a2 + 56) )
    {
      if ( !*(_QWORD *)(a2 + 48) )
      {
        *(_QWORD *)(a2 + 48) = a1;
        v3 = 1;
      }
      *(_QWORD *)(a2 + 56) = a1;
      goto LABEL_7;
    }
    goto LABEL_37;
  }
  v8 = v6 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v12 = v9 - 1;
      if ( !v12 )
        goto LABEL_37;
      if ( v12 != 1 )
        goto LABEL_29;
      v13 = *(_QWORD *)(a3 + 296);
      if ( *(_BYTE *)(a2 + 28) )
        goto LABEL_8;
      v14 = *(unsigned __int64 **)(a2 + 56);
      if ( *(_BYTE *)(a2 + 29) )
      {
        if ( *v14 >= v13 )
          goto LABEL_8;
      }
      else if ( *(_DWORD *)v14 - (int)v13 >= 0 )
      {
        goto LABEL_8;
      }
      if ( *(_QWORD *)(a2 + 72) )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
        ++*(_DWORD *)(v15 + 976);
        *(_DWORD *)(a3 + 264) |= 8u;
LABEL_28:
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 800));
        goto LABEL_29;
      }
    }
    else
    {
      if ( *(_BYTE *)(a2 + 27) )
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 40LL);
      else
        v10 = *(_QWORD *)(a2 + 56);
      if ( v10 >= *(_QWORD *)(a3 + 296) )
      {
        if ( *(_BYTE *)(a2 + 27) )
          v11 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 32LL);
        else
          v11 = *(_QWORD *)(a2 + 64);
        if ( v11 >= *(_QWORD *)(a3 + 296) )
          goto LABEL_8;
        goto LABEL_28;
      }
      if ( !*(_BYTE *)(a2 + 25) )
        goto LABEL_37;
    }
    ++*(_DWORD *)(a2 + 36);
    v4 = 1;
    ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 796LL);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1140LL);
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
    ++*(_DWORD *)(v16 + 972);
    *(_DWORD *)(a3 + 264) |= 4u;
    goto LABEL_28;
  }
  v23 = *(_DWORD *)(a2 + 56);
  if ( v23 )
  {
    v24 = *(_DWORD *)(a2 + 48);
    if ( v24 )
    {
      v3 = 1;
      *(_DWORD *)(a2 + 48) = v24 - 1;
    }
    *(_DWORD *)(a2 + 56) = v23 - 1;
LABEL_7:
    if ( v3 )
    {
LABEL_8:
      *(_DWORD *)(a3 + 264) |= 1u;
      return 0LL;
    }
LABEL_29:
    v17 = (__int64 *)(a3 + 280);
    if ( *(_DWORD *)(a2 + 40) == 4 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 984LL;
      v21 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 992LL);
      if ( *v21 != (__int64 *)v20 )
        __fastfail(3u);
      *v17 = v20;
      v17[1] = (__int64)v21;
      *v21 = v17;
      *(_QWORD *)(v20 + 8) = v17;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    }
    else
    {
      if ( v4 )
      {
        v18 = *(__int64 ***)(a2 + 112);
        v19 = a2 + 104;
        if ( *v18 != (__int64 *)(a2 + 104) )
          __fastfail(3u);
      }
      else
      {
        v18 = *(__int64 ***)(a2 + 96);
        v19 = a2 + 88;
        if ( *v18 != (__int64 *)(a2 + 88) )
          __fastfail(3u);
      }
      *v17 = v19;
      v17[1] = (__int64)v18;
      *v18 = v17;
      *(_QWORD *)(v19 + 8) = v17;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    }
    return 0LL;
  }
LABEL_37:
  v22 = WdLogNewEntry5_WdAssertion();
  WdLogEvent5_WdAssertion(v22);
  return 3221225473LL;
}
