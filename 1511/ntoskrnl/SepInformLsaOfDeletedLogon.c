/*
 * XREFs of SepInformLsaOfDeletedLogon @ 0x14049B860
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SepQueueWorkItem @ 0x1400D52DC (SepQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SepInformLsaOfDeletedLogon(__int64 *a1, void *a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rbx
  __int64 v6; // rax

  PoolWithTag = a3;
  if ( !a3 )
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x774C6553u);
  if ( PoolWithTag )
  {
    v6 = *a1;
    PoolWithTag[5] = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    *((_DWORD *)PoolWithTag + 5) = 0;
    PoolWithTag[3] = v6;
    *((_DWORD *)PoolWithTag + 8) = 3;
    *((_DWORD *)PoolWithTag + 9) = 8;
    *((_DWORD *)PoolWithTag + 4) = 1;
    PoolWithTag[7] = a2;
    if ( !SepQueueWorkItem((__int64)&SepLsaDeletedLogonQueueInfo, (__int64)PoolWithTag, 0LL) )
    {
      if ( a2 )
        ObfDereferenceObject(a2);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  else if ( a2 )
  {
    ObfDereferenceObject(a2);
  }
}
