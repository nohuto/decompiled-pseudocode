/*
 * XREFs of HMChangeOwnerPheProcess @ 0x1C0071AF0
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0041CF0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     GreIncQuotaCount @ 0x1C0071BD0 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x1C0071C00 (GreDecQuotaCount.c)
 */

__int64 __fastcall HMChangeOwnerPheProcess(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = a1[1];
  v4 = *a1;
  --*(_DWORD *)(v2 + 68);
  if ( *((_BYTE *)a1 + 16) == 3 && (*(_DWORD *)(v4 + 80) & 8) == 0 && v2 != *(_QWORD *)(a2 + 376) )
  {
    if ( *(_QWORD *)(v4 + 88) )
    {
      GreDecQuotaCount(v2);
      GreIncQuotaCount(*(_QWORD *)(a2 + 376));
    }
    if ( *(_QWORD *)(v4 + 96) )
    {
      GreDecQuotaCount(v2);
      GreIncQuotaCount(*(_QWORD *)(a2 + 376));
    }
    if ( *(_QWORD *)(v4 + 128) )
    {
      GreDecQuotaCount(v2);
      GreIncQuotaCount(*(_QWORD *)(a2 + 376));
    }
  }
  *(_DWORD *)(v4 + 16) = 0;
  if ( (*((_BYTE *)&unk_1C00ED3AC + 16 * *((unsigned __int8 *)a1 + 16)) & 4) != 0 )
    *(_QWORD *)(v4 + 24) = *(_QWORD *)(a2 + 376);
  result = *(_QWORD *)(a2 + 376);
  a1[1] = result;
  ++*(_DWORD *)(result + 68);
  return result;
}
