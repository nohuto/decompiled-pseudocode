/*
 * XREFs of ViFaultsAddTagNoDuplicates @ 0x140711364
 * Callers:
 *     ViFaultsAddAllTags @ 0x1407111BC (ViFaultsAddAllTags.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ViFaultsIsTagPresentInList @ 0x140711618 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsAddTagNoDuplicates(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  KIRQL v8; // bp
  _QWORD *v9; // rax
  unsigned int v11; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      if ( i < a2 )
        *((_BYTE *)&v11 + i) = *(_BYTE *)(a1 + 2 * i);
      else
        *((_BYTE *)&v11 + i) = 32;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x54466656u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = v11;
      *((_DWORD *)PoolWithTag + 4) = v11;
      v8 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsTagPresentInList(v7) )
      {
        ExFreePoolWithTag(v6, 0);
      }
      else
      {
        v9 = (_QWORD *)qword_1403005C8;
        ViHaveFaultTags = 1;
        if ( *(PVOID **)qword_1403005C8 != &ViFaultTagsList )
          __fastfail(3u);
        *v6 = &ViFaultTagsList;
        v6[1] = v9;
        *v9 = v6;
        qword_1403005C8 = (__int64)v6;
      }
      KeReleaseSpinLock(&ViFaultInjectionLock, v8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
