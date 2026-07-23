/*
 * XREFs of WheapInitializeErrorSource @ 0x140574EB4
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x14022FD5C (WheapInitializeDeferredErrorSources.c)
 *     WheaAddErrorSource @ 0x1406BA4DC (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x1407B4128 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x14014784C (WheapInitializeErrorRecordWrapper.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapInitializeErrorSource(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // r14d
  PVOID PoolWithTag; // rax
  __int64 v10; // rbp
  __int64 v11; // r11
  unsigned int i; // r14d
  __int64 v13; // r11

  v1 = *(int *)(a1 + 97);
  if ( (int)v1 >= 14 )
    return (unsigned int)-1073741811;
  v3 = 0;
  if ( (*((int (__fastcall **)(__int64, __int64))&unk_140341630 + 6 * v1))(a1 + 89, a1 + 68) >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 121);
    v5 = *(_DWORD *)(a1 + 109);
    *(_DWORD *)(a1 + 28) = v5;
    v6 = *(_DWORD *)(a1 + 113) * (v4 + 72);
    *(_DWORD *)(a1 + 36) = 1634035799;
    v7 = (v6 + 175) & 0xFFFFFFF8;
    *(_DWORD *)(a1 + 32) = v7;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 97);
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 113);
    if ( v5 )
    {
      v8 = v7 * v5;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7 * v5, 0x61656857u);
      v10 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v8);
        v11 = v10;
        for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
        {
          WheapInitializeErrorRecordWrapper(v11, v7, a1);
          v11 = v7 + v13;
        }
        *(_QWORD *)(a1 + 48) = v10;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    return v3;
  }
  return 0LL;
}
