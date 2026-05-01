/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@234@PEAI@Z @ 0x18001C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     memset @ 0x18002687C (memset.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4)
{
  _QWORD *v4; // r14
  __int64 v8; // rbp
  int v9; // esi
  __int64 v10; // rbp
  char v12; // [rsp+58h] [rbp+10h] BYREF

  v4 = a3;
  v12 = 0;
  v8 = 0LL;
  memset(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v12);
  if ( v9 < 0 )
    goto LABEL_8;
  do
  {
    if ( !v12 || (unsigned int)v8 >= a2 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &v4[v8]);
    if ( v9 < 0 )
      goto LABEL_8;
    v8 = (unsigned int)(v8 + 1);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v12);
  }
  while ( v9 >= 0 );
  if ( v9 < 0 )
  {
LABEL_8:
    if ( *a4 )
    {
      v10 = (unsigned int)*a4;
      do
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
        *v4++ = 0LL;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    *a4 = v8;
  }
  return (unsigned int)v9;
}
