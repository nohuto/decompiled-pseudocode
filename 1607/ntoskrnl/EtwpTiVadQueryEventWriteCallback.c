/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x1406A6654
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     EtwpTiFillVadEventWrite @ 0x140228CAC (EtwpTiFillVadEventWrite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpTiQueryVad @ 0x1406A6514 (EtwpTiQueryVad.c)
 */

void __fastcall EtwpTiVadQueryEventWriteCallback(__int64 a1)
{
  int Vad; // ebp
  _QWORD *PoolWithTag; // rsi
  BOOLEAN v4; // al
  __int64 i; // rdi
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h]

  Vad = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * *(unsigned int *)(a1 + 52), 0x6E734954u);
  if ( PoolWithTag )
  {
    v4 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10000000uLL);
    Vad = EtwpTiQueryVad(
            (__int64)PoolWithTag,
            *(struct _KPROCESS **)(a1 + 64),
            *(PVOID **)(a1 + 72),
            *(_DWORD *)(a1 + 52),
            v4);
  }
  LODWORD(v8) = Vad;
  EtwpTiFillVadEventWrite(
    *(struct _EVENT_DATA_DESCRIPTOR **)(a1 + 32),
    *(_DWORD *)(a1 + 48),
    1,
    (__int64)PoolWithTag,
    v8,
    *(_DWORD *)(a1 + 52),
    *(const EVENT_DESCRIPTOR **)(a1 + 56));
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 52); i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&Vad, i) )
    {
      v6 = (void *)PoolWithTag[6 * i + 5];
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v7 = *(void **)(a1 + 64);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x69547445u);
  ExFreePoolWithTag((PVOID)a1, 0);
}
