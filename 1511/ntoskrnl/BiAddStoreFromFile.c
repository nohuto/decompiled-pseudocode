/*
 * XREFs of BiAddStoreFromFile @ 0x1404FB0A0
 * Callers:
 *     BiLoadSystemStore @ 0x1404FACDC (BiLoadSystemStore.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     BiUnloadHiveByName @ 0x1404F4D38 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x1404FB31C (BiLoadHive.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 *     BiSetRegistryValue @ 0x1404FD7D8 (BiSetRegistryValue.c)
 *     BiDoesHiveKeyExist @ 0x14068E2AC (BiDoesHiveKeyExist.c)
 */

__int64 __fastcall BiAddStoreFromFile(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  int Hive; // eax
  unsigned int v7; // ebx
  int v8; // eax
  HANDLE v9; // rdi
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  wchar_t Dst[12]; // [rsp+40h] [rbp-20h] BYREF

  Handle = 0LL;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    swprintf_s(Dst, 0xCuLL, L"BCD%08d", v5);
    Hive = BiLoadHive(Dst);
    v7 = Hive;
    if ( Hive >= 0 )
      break;
    if ( Hive != -1073741790 )
      return v7;
    if ( (unsigned __int8)BiDoesHiveKeyExist(Dst) )
      v4 = 0;
    else
      ++v4;
    if ( v4 >= 0xA )
      return v7;
    if ( ++v5 > 0x5F5E0FF )
      return (unsigned int)-1073741823;
  }
  v8 = BiOpenKey(0LL, L"Description", 131103LL, &Handle);
  v9 = Handle;
  v7 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741772 )
      v7 = -1073741476;
  }
  else
  {
    v7 = BiSetRegistryValue(Handle, L"KeyName", 0LL, 1LL, Dst, 24);
    if ( (v7 & 0x80000000) == 0 )
      *a3 = 0LL;
  }
  if ( v9 )
    BiCloseKey(v9);
  return v7;
}
