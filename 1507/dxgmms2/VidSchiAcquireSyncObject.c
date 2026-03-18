/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C00153DC
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C001D890 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObject(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r10
  char v4; // r11
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  int v8; // ecx
  int v9; // ecx
  unsigned __int64 v10; // r10
  unsigned __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 **v21; // rcx

  v3 = 0;
  v4 = 0;
  v5 = a1;
  if ( *(_DWORD *)(a2 + 32) == 0x7FFFFFFF )
    goto LABEL_2;
  a1 = *(unsigned int *)(a2 + 40);
  if ( !(_DWORD)a1 )
  {
    if ( *(_QWORD *)(a2 + 56) )
      goto LABEL_2;
    if ( !*(_QWORD *)(a2 + 48) )
    {
      *(_QWORD *)(a2 + 48) = v5;
      v3 = 1;
    }
    *(_QWORD *)(a2 + 56) = v5;
    goto LABEL_39;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    a1 = *(unsigned int *)(a2 + 56);
    if ( !(_DWORD)a1 )
      goto LABEL_2;
    v19 = *(_DWORD *)(a2 + 48);
    if ( v19 )
    {
      v3 = 1;
      *(_DWORD *)(a2 + 48) = v19 - 1;
    }
    *(_DWORD *)(a2 + 56) = a1 - 1;
LABEL_39:
    if ( !v3 )
      goto LABEL_17;
    goto LABEL_40;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( *(_BYTE *)(a2 + 27) )
      a1 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 40LL);
    else
      a1 = *(_QWORD *)(a2 + 56);
    if ( a1 >= *(_QWORD *)(a3 + 288) )
    {
      if ( *(_BYTE *)(a2 + 27) )
        v18 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 32LL);
      else
        v18 = *(_QWORD *)(a2 + 64);
      if ( v18 < *(_QWORD *)(a3 + 288) )
        goto LABEL_16;
      goto LABEL_40;
    }
    if ( *(_BYTE *)(a2 + 25) )
    {
      ++*(_DWORD *)(a2 + 36);
      ++*(_DWORD *)(*(_QWORD *)(a3 + 80) + 772LL);
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 80) + 104LL) + 1016LL);
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 80) + 104LL) + 32LL);
      ++*(_DWORD *)(v17 + 932);
      *(_DWORD *)(a3 + 256) |= 4u;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 776));
      v4 = 1;
      goto LABEL_17;
    }
LABEL_2:
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, v5);
    WdLogEvent5_WdAssertion(v6);
    return 3221225473LL;
  }
  a1 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)a1 )
    goto LABEL_2;
  if ( (_DWORD)a1 != 1 )
  {
LABEL_17:
    v14 = (__int64 *)(a3 + 272);
    if ( *(_DWORD *)(a2 + 40) == 4 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v5 + 104) + 32LL) + 944LL;
      v16 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(v5 + 104) + 32LL) + 952LL);
      *v14 = v15;
      v14[1] = (__int64)v16;
      if ( *v16 != (__int64 *)v15 )
        __fastfail(3u);
      *v16 = v14;
      *(_QWORD *)(v15 + 8) = v14;
    }
    else
    {
      if ( v4 )
      {
        v20 = a2 + 104;
        v21 = *(__int64 ***)(a2 + 112);
        *v14 = a2 + 104;
        v14[1] = (__int64)v21;
        if ( *v21 != (__int64 *)(a2 + 104) )
          __fastfail(3u);
      }
      else
      {
        v20 = a2 + 88;
        v21 = *(__int64 ***)(a2 + 96);
        *v14 = a2 + 88;
        v14[1] = (__int64)v21;
        if ( *v21 != (__int64 *)(a2 + 88) )
          __fastfail(3u);
      }
      *v21 = v14;
      *(_QWORD *)(v20 + 8) = v14;
    }
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
    return 0LL;
  }
  v10 = *(_QWORD *)(a3 + 288);
  if ( !*(_BYTE *)(a2 + 28) )
  {
    v11 = *(unsigned __int64 **)(a2 + 56);
    if ( *(_BYTE *)(a2 + 29) )
    {
      if ( *v11 < v10 )
      {
LABEL_13:
        if ( *(_QWORD *)(a2 + 72) )
        {
          v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 80) + 104LL) + 32LL);
          ++*(_DWORD *)(v13 + 936);
          *(_DWORD *)(a3 + 256) |= 8u;
        }
        else
        {
          ++*(_DWORD *)(a2 + 36);
          v4 = 1;
          ++*(_DWORD *)(*(_QWORD *)(a3 + 80) + 772LL);
          ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 80) + 104LL) + 1016LL);
          v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 80) + 104LL) + 32LL);
          ++*(_DWORD *)(v12 + 932);
          *(_DWORD *)(a3 + 256) |= 4u;
        }
LABEL_16:
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 776));
        goto LABEL_17;
      }
    }
    else if ( *(_DWORD *)v11 - (int)v10 < 0 )
    {
      goto LABEL_13;
    }
  }
LABEL_40:
  *(_DWORD *)(a3 + 256) |= 1u;
  return 0LL;
}
