/*
 * XREFs of ExCheckSingleFilter @ 0x14015988C
 * Callers:
 *     EtwTracePool @ 0x1401596BC (EtwTracePool.c)
 *     EtwTraceObjectOperation @ 0x140225D84 (EtwTraceObjectOperation.c)
 *     ExpUseSpecialPool @ 0x14022D10C (ExpUseSpecialPool.c)
 *     EtwTraceDuplicateHandle @ 0x1406A1560 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1406A1D5C (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1406A2B88 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A717C (EtwpObjectHandleEnumCallback.c)
 *     ViFaultsIsTagPresentInList @ 0x140711618 (ViFaultsIsTagPresentInList.c)
 *     ViFaultsIsTagTarget @ 0x14071165C (ViFaultsIsTagTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExCheckSingleFilter(int a1, int a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  char v4; // dl
  int v6; // [rsp+8h] [rbp+8h]
  int v7; // [rsp+10h] [rbp+10h]

  v6 = a1;
  v2 = 0;
  v3 = 0LL;
  v7 = a2;
  while ( 1 )
  {
    v4 = *((_BYTE *)&v7 + v3);
    if ( v4 == 42 )
      return 1LL;
    if ( v4 != 63 && *((_BYTE *)&v6 + v3) != v4 )
      break;
    ++v2;
    ++v3;
    if ( v2 >= 4 )
      return 1LL;
  }
  return 0LL;
}
