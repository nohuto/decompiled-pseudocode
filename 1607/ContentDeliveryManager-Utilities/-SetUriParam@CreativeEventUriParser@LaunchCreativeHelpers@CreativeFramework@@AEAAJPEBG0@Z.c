/*
 * XREFs of ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x18003A83C
 * Callers:
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x18003A1D4 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180024834 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::SetUriParam(
        CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  wchar_t **v4; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = &off_18008B140;
  while ( CompareStringOrdinal(a2, -1, *v4, -1, 1) != 2 )
  {
    v4 += 2;
    if ( v4 == &off_18008B240 )
      goto LABEL_6;
  }
  v7 = *((int *)v4 + 2);
  if ( (_DWORD)v7 == -1 )
  {
LABEL_6:
    v8 = -2147024809;
    v9 = 93LL;
    v10 = 2147942487LL;
    goto LABEL_9;
  }
  v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
          (__int64)this + 24 * v7,
          (__int64)a3);
  v8 = v11;
  if ( v11 >= 0 )
    return v8;
  v10 = (unsigned int)v11;
  v9 = 94LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    (const char *)v10);
  return v8;
}
