/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x140409934
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x14040965C (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x140548B34 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     RtlUIntAdd @ 0x140089230 (RtlUIntAdd.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 *     memcmp @ 0x14014DE90 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        unsigned __int64 a2,
        struct _FAST_MUTEX *a3,
        unsigned __int64 *a4)
{
  UINT *v4; // r14
  void *v5; // rsi
  unsigned __int64 v8; // rdi
  bool v9; // bp
  unsigned __int64 v10; // rbx
  char v11; // r12
  const void *v12; // rcx
  unsigned __int16 v13; // r15
  unsigned __int16 v14; // ax
  int v15; // eax
  unsigned __int64 v16; // rax
  NTSTATUS v17; // ebx
  unsigned __int64 *v18; // rbx
  unsigned __int64 v19; // rdx
  UINT puResult; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 *v23; // [rsp+78h] [rbp+20h]

  v23 = a4;
  v4 = (UINT *)(a2 + 24);
  *(_QWORD *)a2 = 0LL;
  v5 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v8 = a2;
  v9 = 1;
  *(_DWORD *)(a2 + 24) = 1;
  ExAcquireFastMutex(a3);
  v10 = *a4;
  if ( v10 )
  {
    v12 = (const void *)(v8 + 28);
    v11 = 0;
    v13 = *(_WORD *)(v8 + 28);
    while ( 1 )
    {
      v14 = *(_WORD *)(v10 + 28);
      if ( v13 >= v14 )
      {
        if ( v13 > v14 )
          goto LABEL_12;
        v15 = memcmp(v12, (const void *)(v10 + 28), v13);
        if ( v15 > 0 )
        {
          v12 = (const void *)(v8 + 28);
LABEL_12:
          v16 = *(_QWORD *)(v10 + 8);
          if ( !v16 )
            goto LABEL_17;
          goto LABEL_10;
        }
        if ( v15 >= 0 )
        {
          v4 = (UINT *)(v10 + 24);
          v5 = (void *)v8;
          v11 = 1;
          v8 = v10;
          v17 = RtlUIntAdd(*(_DWORD *)(v10 + 24), 1u, &puResult);
          if ( v17 < 0 )
            goto LABEL_24;
          v18 = v23;
          *v4 = puResult;
          goto LABEL_18;
        }
        v12 = (const void *)(v8 + 28);
      }
      v16 = *(_QWORD *)v10;
      if ( !*(_QWORD *)v10 )
      {
        v9 = 0;
        goto LABEL_17;
      }
LABEL_10:
      v10 = v16;
    }
  }
  v9 = 0;
  v11 = 0;
LABEL_17:
  v19 = v10;
  v18 = v23;
  RtlRbInsertNodeEx(v23, v19, v9, v8);
LABEL_18:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v8, 0LL) )
  {
    if ( v11 )
    {
      --*v4;
    }
    else
    {
      RtlRbRemoveNode(v18, (unsigned __int64 *)v8);
      v5 = (void *)v8;
    }
    v17 = -1073741823;
  }
  else
  {
    v17 = 0;
  }
LABEL_24:
  KeReleaseGuardedMutex(a3);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v17;
}
