/*
 * XREFs of ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x1800052CC
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x180005DA0 (-SupportsPointerType@CInteraction@@UEBAHKHW4SupportedTypeOption@@@Z.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x180009044 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::GetInputQueueType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  unsigned int v6; // ebx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+24h] [rbp-24h]
  __int64 v12; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v13; // [rsp+34h] [rbp-14h]

  v2 = a2 - 1;
  if ( !v2 )
    return 0;
  v3 = v2 - 1;
  if ( !v3 )
    return *(unsigned int *)(a1 + 36);
  v4 = v3 - 1;
  if ( !v4 )
    return *(unsigned int *)(a1 + 40);
  v5 = v4 - 1;
  if ( !v5 )
    return *(unsigned int *)(a1 + 28);
  v8 = v5 - 1;
  if ( !v8 )
    return *(unsigned int *)(a1 + 36);
  v6 = 0;
  if ( v8 == 1 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
    {
      v10 = 24;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0;
      if ( (int)NtQueryCompositionInputSink(v9, &v10) >= 0 )
        return v13;
    }
  }
  return v6;
}
