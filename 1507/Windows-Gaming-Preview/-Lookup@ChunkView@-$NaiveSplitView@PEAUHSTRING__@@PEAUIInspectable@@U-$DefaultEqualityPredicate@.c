/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z @ 0x180017CA0
 * Callers:
 *     ?Lookup@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z @ 0x180017300 (-Lookup@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUHSTRIN.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     memcmp_0 @ 0x180027384 (memcmp_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        HSTRING a2,
        _QWORD *a3)
{
  int v3; // ebx
  bool v4; // si
  __int64 v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // r14
  HSTRING v11; // rbx
  PCWSTR StringRawBuffer; // rsi
  PCWSTR v13; // rax
  int v14; // eax
  HSTRING string[9]; // [rsp+20h] [rbp-48h] BYREF
  UINT32 v17; // [rsp+70h] [rbp+8h] BYREF
  UINT32 length; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
  while ( (unsigned int)v8 < v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v8 + 16);
    string[0] = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL))(v10, string);
    if ( v3 >= 0 )
    {
      v11 = string[0];
      StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
      v13 = WindowsGetStringRawBuffer(v11, &v17);
      if ( length == v17 )
      {
        v14 = memcmp_0(StringRawBuffer, v13, 2LL * v17);
        v4 = v14 == 0;
        v3 = 0;
        if ( !v14 )
        {
          v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 56LL))(v10, a3);
          WindowsDeleteString(string[0]);
          break;
        }
      }
      else
      {
        v4 = 0;
        v3 = 0;
      }
    }
    WindowsDeleteString(string[0]);
    string[0] = 0LL;
    v8 = (unsigned int)(v8 + 1);
    if ( v3 < 0 )
      goto LABEL_14;
  }
  if ( v3 < 0 )
    goto LABEL_14;
  if ( !v4 )
    v3 = -2147483637;
  if ( v3 < 0 )
LABEL_14:
    *a3 = 0LL;
  return (unsigned int)v3;
}
