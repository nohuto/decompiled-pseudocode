/*
 * XREFs of EtwpApplyEventIdPayloadFilter @ 0x140229694
 * Callers:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1406A8B8C (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 * Callees:
 *     EtwpPerfectHashFunctionSearch @ 0x140229E24 (EtwpPerfectHashFunctionSearch.c)
 *     EtwpApplyPayloadFilterInternal @ 0x14022B440 (EtwpApplyPayloadFilterInternal.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpApplyEventIdPayloadFilter(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        unsigned __int8 a9)
{
  __int64 v9; // rsi
  __int64 v11; // r10
  volatile signed __int32 *v12; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v14; // r11
  char v15; // al
  _BYTE *v16; // rdx
  __int64 v17; // rbx
  char v18; // al
  _BYTE *v19; // rdx
  int v20; // eax
  char v21; // dl
  bool v23; // [rsp+20h] [rbp-48h]
  char v24[16]; // [rsp+40h] [rbp-28h] BYREF

  v24[0] = 1;
  v9 = a4;
  v11 = a1;
  v12 = 0LL;
  if ( a9 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v14 = 10LL * a2;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 368) + 80LL * a2 + 48) )
    {
      v15 = EtwpPerfectHashFunctionSearch(a5);
      if ( *v16 != v15 )
      {
        v24[0] = 0;
LABEL_7:
        __writecr8(CurrentIrql);
        goto LABEL_13;
      }
      v24[0] = 1;
    }
    v12 = *(volatile signed __int32 **)(*(_QWORD *)(v11 + 368) + 8 * v14 + 56);
    if ( v12 )
      _InterlockedAdd(v12, 1u);
    goto LABEL_7;
  }
  v17 = 10LL * a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 368) + 80LL * a2 + 48) )
  {
    v18 = EtwpPerfectHashFunctionSearch(a5);
    if ( *v19 != v18 )
    {
      v24[0] = 0;
      return v24[0];
    }
    v24[0] = 1;
  }
  v12 = *(volatile signed __int32 **)(*(_QWORD *)(v11 + 368) + 8 * v17 + 56);
LABEL_13:
  if ( v12 )
  {
    LOBYTE(a4) = a8;
    v23 = a3 == 0;
    v20 = EtwpApplyPayloadFilterInternal(v9, a6, a7, a4, v23, v12 + 2, v24);
    v21 = v24[0];
    if ( v20 < 0 )
      v21 = 1;
    v24[0] = v21;
    if ( a9 < 2u && _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v12, 0);
  }
  return v24[0];
}
