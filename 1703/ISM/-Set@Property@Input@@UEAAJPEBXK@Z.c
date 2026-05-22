/*
 * XREFs of ?Set@Property@Input@@UEAAJPEBXK@Z @ 0x1800278A0
 * Callers:
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180016F50 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x18001C6A4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     ?Set@?$PropertyModifiedAdapter@V?$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAJPEBXK@Z @ 0x18001CA30 (-Set@-$PropertyModifiedAdapter@V-$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAJPEBXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Input::Property::Set(Input::Property *this, const void *a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *((_QWORD *)this + 3);
  if ( v3 && (v4 = *(_QWORD *)(v3 + 48)) != 0 && *(_DWORD *)(v4 + 48) && *(_DWORD *)(v4 + 48) != a3 )
    return 2205630475LL;
  else
    return Input::Value::Set((void **)this + 4, a2, a3);
}
