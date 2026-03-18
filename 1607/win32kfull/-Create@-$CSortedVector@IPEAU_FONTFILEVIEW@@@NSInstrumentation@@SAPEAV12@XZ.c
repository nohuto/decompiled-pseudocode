/*
 * XREFs of ?Create@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C02BBE28
 * Callers:
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z @ 0x1C02BC00C (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Create()
{
  _QWORD *PoolWithTag; // rbx
  _QWORD *result; // rax
  PVOID v2; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x63497355u);
  if ( !PoolWithTag )
    return 0LL;
  v2 = ExAllocatePoolWithTag(PagedPoolSession, 0x2000uLL, 0x63497355u);
  if ( !v2 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = v2;
  result = PoolWithTag;
  PoolWithTag[4] = 512LL;
  *((_DWORD *)PoolWithTag + 6) = 0;
  *((_DWORD *)PoolWithTag + 7) = 0;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  return result;
}
