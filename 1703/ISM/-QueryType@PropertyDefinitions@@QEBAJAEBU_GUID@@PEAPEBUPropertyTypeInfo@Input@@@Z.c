/*
 * XREFs of ?QueryType@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyTypeInfo@Input@@@Z @ 0x180029A7C
 * Callers:
 *     ?DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x180029898 (-DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z.c)
 *     ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180029B28 (-DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18009EAF2 (memcmp_0.c)
 */

__int64 __fastcall PropertyDefinitions::QueryType(
        PropertyDefinitions *this,
        const struct _GUID *a2,
        const struct Input::PropertyTypeInfo **a3)
{
  __int64 *v5; // rdi
  unsigned int v6; // ebp
  __int64 *v7; // rbx
  __int64 *v8; // rsi

  if ( a3 )
    *a3 = 0LL;
  v5 = *(__int64 **)this;
  v6 = -2089336825;
  v7 = *(__int64 **)this;
  v8 = *(__int64 **)(*(_QWORD *)this + 8LL);
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( memcmp_0(v8 + 4, a2, 0x10uLL) >= 0 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( v7 == v5 || memcmp_0(a2, v7 + 4, 0x10uLL) < 0 )
    v7 = v5;
  if ( v7 != v5 )
  {
    if ( a3 )
      *a3 = (const struct Input::PropertyTypeInfo *)(v7 + 6);
    return 0;
  }
  return v6;
}
