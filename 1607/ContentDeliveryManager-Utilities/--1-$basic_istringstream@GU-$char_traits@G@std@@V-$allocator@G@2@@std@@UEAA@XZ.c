/*
 * XREFs of ??1?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180024D88
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18001EED0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18001F0AC (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??_E?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x180025CE0 (--_E-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180025544 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_istringstream<unsigned short>::~basic_istringstream<unsigned short>(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::basic_istringstream<unsigned short>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v2 + a1 - 148) = v2 - 144;
  std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(a1 - 128);
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::basic_istream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 144);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 148) = *(_DWORD *)(result + 4) - 24;
  return result;
}
