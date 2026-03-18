/*
 * XREFs of DDCCIInitializeWrap @ 0x1C010C890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DDCCIInitializeWrap()
{
  unsigned int v0; // ebx
  CMutex *PoolWithTag; // rax
  CMutex *v2; // rdi
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v4 = 0;
  PoolWithTag = (CMutex *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x63326947u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    CMutex::CMutex(PoolWithTag, (int *)&v4);
    *((_QWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_DWORD *)v2 + 6) = -1071774324;
    qword_1C0329230 = v2;
  }
  else
  {
    v2 = 0LL;
    qword_1C0329230 = 0LL;
  }
  if ( v2 )
  {
    if ( (v4 & 0x80000000) != 0 )
      return v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v0;
}
