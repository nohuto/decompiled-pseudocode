/*
 * XREFs of RtlStdReleaseStackTrace @ 0x1402115D8
 * Callers:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rcx
  unsigned int v5; // eax
  _DWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *v12; // rax

  v2 = 0;
  v4 = *(unsigned __int16 *)(a2 + 14);
  v5 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v5 += *v7;
      v7 += 2;
      --v4;
    }
    while ( v4 );
  }
  v8 = (_QWORD *)(a1 + 8 * (v5 % *(_DWORD *)(a1 + 720) + 2LL * (v5 % *(_DWORD *)(a1 + 720)) + 91));
  v9 = v8 + 1;
  *((_BYTE *)v8 + 16) = KeAcquireSpinLockRaiseToDpc(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      if ( *v8 )
      {
        while ( 1 )
        {
          v12 = (_QWORD *)*v8;
          if ( *v8 == a2 )
            break;
          v8 = (_QWORD *)*v8;
          if ( !*v12 )
            goto LABEL_9;
        }
        *v8 = *(_QWORD *)a2;
      }
      else
      {
LABEL_9:
        __debugbreak();
      }
      v2 = 1;
    }
  }
  KeReleaseSpinLock(v9, *((_BYTE *)v9 + 8));
  if ( v2 )
  {
    RtlpInterlockedPushEntrySList(
      (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
      (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
}
