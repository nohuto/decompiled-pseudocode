/*
 * XREFs of ?SetAppModelUserId@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x18000CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800084B0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall TaskbarLayoutItem::SetAppModelUserId(TaskbarLayoutItem *this, const unsigned __int16 *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  void *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 16,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = (void *)*((_QWORD *)this + 5);
    if ( v6 )
    {
      CoTaskMemFree(v6);
      *((_QWORD *)this + 5) = 0LL;
    }
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
