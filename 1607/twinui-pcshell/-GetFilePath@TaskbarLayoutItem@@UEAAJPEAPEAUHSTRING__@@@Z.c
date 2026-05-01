/*
 * XREFs of ?GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000C960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskbarLayoutItem::GetFilePath(TaskbarLayoutItem *this, HSTRING *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  const WCHAR *v9; // rcx
  HRESULT String; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    v3 = -2147319767;
    v4 = 39LL;
    v5 = 2147647529LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)v5);
    return v3;
  }
  v7 = -1LL;
  if ( *((_QWORD *)this + 6) == -1LL )
  {
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
    {
      do
        ++v7;
      while ( *(_WORD *)(v8 + 2 * v7) );
    }
    else
    {
      v7 = 0LL;
    }
    *((_QWORD *)this + 6) = v7;
  }
  v9 = (const WCHAR *)&unk_1800359D8;
  if ( *((_QWORD *)this + 5) )
    v9 = (const WCHAR *)*((_QWORD *)this + 5);
  String = WindowsCreateString(v9, *((_DWORD *)this + 12), a2);
  v3 = String;
  if ( String < 0 )
  {
    v5 = (unsigned int)String;
    v4 = 40LL;
    goto LABEL_3;
  }
  return 0LL;
}
