/*
 * XREFs of ExCheckSingleFilter @ 0x140159DFC
 * Callers:
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     EtwTraceObjectOperation @ 0x140225BB0 (EtwTraceObjectOperation.c)
 *     ExpUseSpecialPool @ 0x14022CF38 (ExpUseSpecialPool.c)
 *     EtwTraceDuplicateHandle @ 0x1406A1698 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1406A1E94 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1406A2CC0 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A72B4 (EtwpObjectHandleEnumCallback.c)
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
