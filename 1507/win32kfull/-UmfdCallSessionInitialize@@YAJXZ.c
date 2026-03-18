/*
 * XREFs of ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C014E7CC
 * Callers:
 *     UmfdSessionInitialize @ 0x1C014E770 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C013108C (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C014E848 (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 */

__int64 UmfdCallSessionInitialize(void)
{
  int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // rsi
  struct CMultipleConsumerWorkQueue *v3; // rax
  __int64 v5; // rsi
  struct CMultipleConsumerWorkQueue *v6; // rcx

  v0 = 0;
  v1 = 0LL;
  v2 = 0LL;
  while ( v0 >= 0 )
  {
    v3 = CMultipleConsumerWorkQueue::Create();
    if ( v3 )
    {
      *(_QWORD *)((char *)&g_pUmfdServerPort + v2) = v3;
      v0 = 0;
      *(_QWORD *)((char *)&g_pUmfdClientPort + v2) = v3;
    }
    else
    {
      v0 = -1073741801;
    }
    v1 = (unsigned int)(v1 + 1);
    v2 += 8LL;
    if ( (unsigned int)v1 >= 4 )
    {
      if ( v0 >= 0 )
        return (unsigned int)v0;
      break;
    }
  }
  if ( (_DWORD)v1 )
  {
    v5 = 0LL;
    do
    {
      v6 = *(struct CMultipleConsumerWorkQueue **)((char *)&g_pUmfdServerPort + v5);
      *(_QWORD *)((char *)&g_pUmfdClientPort + v5) = 0LL;
      CMultipleConsumerWorkQueue::Destroy(v6);
      *(_QWORD *)((char *)&g_pUmfdServerPort + v5) = 0LL;
      v5 += 8LL;
      --v1;
    }
    while ( v1 );
  }
  return (unsigned int)v0;
}
