/*
 * XREFs of HvpCleanMap @ 0x140610824
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 *     HvpBuildMapForLoaderHive @ 0x140564290 (HvpBuildMapForLoaderHive.c)
 *     HvpBuildMap @ 0x140610608 (HvpBuildMap.c)
 * Callees:
 *     HvpFreeMap @ 0x1404CC7DC (HvpFreeMap.c)
 */

__int64 __fastcall HvpCleanMap(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // r9d
  __int64 v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v2, *(unsigned int *)(a1 + 92));
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*(_QWORD *)(a1 + 104), *(unsigned int *)(a1 + 92));
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_DWORD *)(a1 + 92) = 0;
  }
  result = *(_DWORD *)(a1 + 1400) >> 12;
  if ( (_DWORD)result )
    v4 = (unsigned int)(result - 1) >> 9;
  else
    v4 = 0;
  v5 = *(_QWORD *)(a1 + 1408);
  v6 = (__int64 *)(a1 + 1416);
  if ( v5 == a1 + 1416 )
  {
    v8 = *v6;
    v7 = 20480LL;
    goto LABEL_10;
  }
  if ( v5 )
  {
    HvpFreeMap(a1, *(_QWORD *)(a1 + 1408), 0, v4);
    v7 = 0x2000LL;
    v8 = v5;
LABEL_10:
    result = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 32))(v8, v7);
  }
  *v6 = 0LL;
  *(_QWORD *)(a1 + 1408) = 0LL;
  return result;
}
